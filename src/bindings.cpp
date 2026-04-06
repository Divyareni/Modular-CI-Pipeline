#include <pybind11/pybind11.h>
#include "hardware_controller.hpp"

namespace py = pybind11;

PYBIND11_MODULE(hw_lib, m) {
    m.doc() = "C++ Hardware Controller Library with Python Bindings";

    py::class_<HardwareController>(m, "HardwareController")
        .def(py::init<int>(), py::arg("id")) // Keyword arg: id
        .def("write_register", &HardwareController::write_register, 
             py::arg("address"), py::arg("value"),
             "Writes a value to a specific hardware register")
        .def("get_status", &HardwareController::get_status,
             "Returns the current operational status");
}
