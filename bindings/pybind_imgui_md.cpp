#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "imgui_md_wrapper.h"
namespace py = pybind11;


// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  AUTOGENERATED CODE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// <litgen_glue_code>  // Autogenerated code below! Do not edit!

// </litgen_glue_code> // Autogenerated code end
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  AUTOGENERATED CODE END !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!



void py_init_module_imgui_md(py::module& m)
{
    using namespace ImGuiMd;
    // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  AUTOGENERATED CODE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    // <litgen_pydef> // Autogenerated code below! Do not edit!
    ////////////////////    <generated_from:imgui_md_wrapper.h>    ////////////////////
    auto pyClassMarkdownFontOptions =
        py::class_<ImGuiMd::MarkdownFontOptions>
            (m, "MarkdownFontOptions", "")
        .def(py::init<>()) // implicit default constructor
        .def_readwrite("font_base_path", &MarkdownFontOptions::fontBasePath, "")
        .def_readwrite("max_header_level", &MarkdownFontOptions::maxHeaderLevel, "")
        .def_readwrite("size_diff_between_levels", &MarkdownFontOptions::sizeDiffBetweenLevels, "")
        .def_readwrite("regular_size", &MarkdownFontOptions::regularSize, "")
        ;


    auto pyClassMarkdownImage =
        py::class_<ImGuiMd::MarkdownImage>
            (m, "MarkdownImage", "")
        .def(py::init<>()) // implicit default constructor
        .def_readwrite("texture_id", &MarkdownImage::texture_id, "")
        .def_readwrite("size", &MarkdownImage::size, "")
        .def_readwrite("uv0", &MarkdownImage::uv0, "")
        .def_readwrite("uv1", &MarkdownImage::uv1, "")
        .def_readwrite("col_tint", &MarkdownImage::col_tint, "")
        .def_readwrite("col_border", &MarkdownImage::col_border, "")
        ;


    m.def("on_image_default",
        ImGuiMd::OnImage_Default, py::arg("image_path"));

    m.def("on_open_link_default",
        ImGuiMd::OnOpenLink_Default, py::arg("url"));


    auto pyClassMarkdownCallbacks =
        py::class_<ImGuiMd::MarkdownCallbacks>
            (m, "MarkdownCallbacks", "")
        .def(py::init<>()) // implicit default constructor
        .def_readwrite("on_open_link", &MarkdownCallbacks::OnOpenLink, "The default version will open the link in a browser iif it starts with \"http\"")
        .def_readwrite("on_image", &MarkdownCallbacks::OnImage, "The default version will load the image as a cached texture and display it")
        .def_readwrite("on_html_div", &MarkdownCallbacks::OnHtmlDiv, " OnHtmlDiv does nothing by default, by you could write:\n     In  C++:\n        markdownOptions.callbacks.onHtmlDiv = [](const std::string& divClass, bool openingDiv)\n        {\n            if (divClass == \"red\")\n            {\n                if (e)\n                    ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 0, 0, 255));\n                else\n                    ImGui::PopStyleColor();\n            }\n        };")
        ;


    auto pyClassMarkdownOptions =
        py::class_<ImGuiMd::MarkdownOptions>
            (m, "MarkdownOptions", "")
        .def(py::init<>()) // implicit default constructor
        .def_readwrite("font_options", &MarkdownOptions::fontOptions, "")
        .def_readwrite("callbacks", &MarkdownOptions::callbacks, "")
        ;


    m.def("initialize_markdown",
        ImGuiMd::InitializeMarkdown,
        py::arg("options") = ImGuiMd::MarkdownOptions(),
        " InitializeMarkdown: Call this once at application startup\n Don't forget to later call GetFontLoaderFunction(): it will return a function that you should call\n during ImGui initialization (and before rendering the first frame, since it will load the fonts)\n\n If using HelloImGui, the code would look like:\n     Python:\n        runner_params = hello_imgui.RunnerParams()\n\n        ... // Fill runner_params callbacks\n\n        # Initialize markdown and ask HelloImGui to load the required fonts\n        imgui_md.initialize_markdown()\n        runner_params.callbacks.load_additional_fonts = imgui_md.get_font_loader_function()\n\n        hello_imgui.run(runnerParams)");

    m.def("get_font_loader_function",
        ImGuiMd::GetFontLoaderFunction, "GetFontLoaderFunction() will return a function that you should call during ImGui initialization.");

    m.def("render",
        ImGuiMd::Render, py::arg("markdown_string"));

    m.def("get_code_font",
        ImGuiMd::GetCodeFont, pybind11::return_value_policy::reference);
    ////////////////////    </generated_from:imgui_md_wrapper.h>    ////////////////////

    // </litgen_pydef> // Autogenerated code end
    // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  AUTOGENERATED CODE END !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}
