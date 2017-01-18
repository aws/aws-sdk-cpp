#!/usr/bin/env python3

"""
A stupid hack of a script that I shouldn't have to write.
"""

import collections
import json
import re
import sys

JSON_REF_KEYWORD = "$ref"
INTERNAL_DEFINITION_URI_PATTERN = r"#/definitions/(.*)"

def get_referenced_definition_name(reference_uri):
    match_result = re.match(INTERNAL_DEFINITION_URI_PATTERN, reference_uri)
    return match_result.group(1)


def build_metadata(swagger_schema):
    version_date_time_string = swagger_schema["info"]["version"]
    match = re.match(r"(\d{4}-\d{2}-\d{2})T", version_date_time_string)
    aws_api_version = match.group(1)
    service_name = swagger_schema["info"]["title"]
    return collections.OrderedDict(
        [("apiVersion", aws_api_version),
         ("endpointPrefix", "execute-api"),
         ("protocol", "json"),
         ("serviceFullName", service_name)])


def build_operations(swagger_schema):
    base_path = swagger_schema["basePath"]
    operations = collections.OrderedDict()
    for path, path_info in swagger_schema["paths"].items():
        if path == "/vital-services":
            continue

        if not "post" in path_info:
            continue

        # The name starts as the path without the leading '/'.
        aws_name = path[1:]

        # Convert the name from a format where words are separated by hyphens
        # to a camelCase format.
        name_components = aws_name.split("-")
        aws_name = \
            name_components[0] + \
            "".join(component.title() for component in name_components[1:])

        full_path = "".join((base_path, path))
        aws_http_info = collections.OrderedDict(
                            [("method", "POST"),
                             ("requestUri", full_path),
                             ("responseCode", 200)])


        post_info = path_info["post"]
        if not "parameters" in post_info:
            continue

        post_parameters = post_info["parameters"]

        post_parameter_schema = post_parameters[0]["schema"]
        post_parameter_schema_reference_uri = \
            post_parameter_schema[JSON_REF_KEYWORD]

        post_parameter_schema_name = get_referenced_definition_name(
                                        post_parameter_schema_reference_uri)

        aws_input = collections.OrderedDict([("shape",
                                              post_parameter_schema_name)])
        response_schema_ref_string = \
            post_info["responses"]["200"]["schema"]["$ref"]

        match_result = re.match(r"#/definitions/(.*)",
                                response_schema_ref_string)

        aws_output = {"shape": match_result.group(1)}
        operation_info = collections.OrderedDict(
                            [("name", aws_name),
                             ("http", aws_http_info),
                             ("input", aws_input),
                             ("output", aws_output)])

        operations[aws_name] = operation_info

    return operations


def build_shapes(swagger_schema):
    shapes = collections.OrderedDict()
    top_level_definitions = swagger_schema["definitions"]
    resolved_definitions = collections.OrderedDict()
    for name, definition in top_level_definitions.items():
        resolved_definition = resolve_json_refs(definition, top_level_definitions)
        resolved_definitions[name] = resolved_definition

    definitions = resolved_definitions
    resolved_definitions = collections.OrderedDict()
    for name, definition in definitions.items():
        resolved_definitions[name] = resolve_json_refs(definition, definitions)

    for name, definition in resolved_definitions.items():
        add_shape_from_swagger_definition(name, definition, shapes)

    return shapes

def resolve_json_refs(definition, top_level_swagger_definitions):
    if "$ref" in definition:
        match_result = re.match(r"#/definitions/(.*)",
                                definition["$ref"])

        referenced_key = match_result.group(1)
        return top_level_swagger_definitions[referenced_key]

    new_definition = collections.OrderedDict(definition)
    definition_type = definition["type"]
    if definition_type == "object":
        old_properties = definition.get("properties", dict())
        new_properties = collections.OrderedDict()
        for property_name, property_definition in old_properties.items():
            new_properties[property_name] = resolve_json_refs(
                                                property_definition,
                                                top_level_swagger_definitions)

        new_definition["properties"] = new_properties

    elif definition_type == "array":
        new_definition["items"] = resolve_json_refs(
                                    definition["items"],
                                    top_level_swagger_definitions)

    else:
        pass

    return new_definition


def add_shape_from_swagger_definition(name, definition, shapes):
    definition_type = definition["type"]
    if definition_type == "object":
        shape_type = "structure"
        shape_required = definition.get("required", [])
        shape_members = collections.OrderedDict()
        for property_name, property_definition in \
            definition["properties"].items():

            member_shape_name = '_'.join((name, property_name))
            shape_members[property_name] = {"shape": member_shape_name}
            add_shape_from_swagger_definition(member_shape_name,
                                              property_definition,
                                              shapes)

        shapes[name] = collections.OrderedDict([("type", "structure"),
                                                ("required", shape_required),
                                                ("members", shape_members)])

    elif definition_type == "array":
        array_item_type = definition["items"]["type"]
        array_item_shape_name = name + "Item"
        shape_member = {"shape": array_item_shape_name}
        add_shape_from_swagger_definition(array_item_shape_name,
                                          definition["items"],
                                          shapes)

        shapes[name] = collections.OrderedDict([("type", "list"),
                                                ("member", shape_member)])

    elif definition_type == "number":
        shapes[name] = {"type": "double"}

    elif definition_type in ("string", "boolean"):
        shapes[name] = {"type": definition_type}


def build_aws_schema(swagger_schema):
    aws_metadata = build_metadata(swagger_schema)
    aws_operations = build_operations(swagger_schema)
    aws_shapes = build_shapes(swagger_schema)
    return collections.OrderedDict(
        [("version", "2.0"),
         ("metadata", aws_metadata),
         ("operations", aws_operations),
         ("shapes", aws_shapes)])


def main():
    with open("./VitalServices-prod-swagger.json", "r") as swagger_file:
        swagger_schema = json.load(swagger_file)
        aws_schema = build_aws_schema(swagger_schema)
        print(json.dumps(aws_schema, indent=4))

    return 0

if __name__ == '__main__':
    sys.exit(main())
