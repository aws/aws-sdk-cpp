#!/usr/bin/env python3
"""
A script that I shouldn't have had to write.
"""

import collections
import json
import logging
import re
import sys

JSON_REF_KEYWORD = "$ref"
INTERNAL_DEFINITION_URI_PATTERN = r"#/definitions/(.*)"
SWAGGER_PRIMITIVE_TO_SHAPE_MAP = {
    "boolean": "boolean",
    "string": "string",
    "number": "double"
}

PRIMITIVE_SHAPES = collections.OrderedDict([
    ("boolean", {
        "type": "boolean"
    }),
    ("double", {
        "type": "double"
    }),
    ("integer", {
        "type": "integer"
    }),
    ("long", {
        "type": "long"
    }),
    ("string", {
        "type": "string"
    }),
    ("timestamp", {
        "type": "timestamp"
    }),
])


def get_referenced_schema_name(reference_uri):
    """
    Takes a reference to a schema and returns the name of what is being
    referenced. For example, the input "#/definitions/AddCreditCardRequest"
    results in the output "AddCreditCardRequest".
    :param reference_uri: The URI string that is referencing a schema.
    :return The name of the schema that the URI references.
    """
    match_result = re.match(INTERNAL_DEFINITION_URI_PATTERN, reference_uri)
    return match_result.group(1)


def build_metadata(swagger_schema):
    """
    Builds the "metadata" portion of the AWS schema.
    :param swagger_schema: The API's swagger schema as a dictionary.
    :return An ordeered dictionary that represents the AWS schema's
    "metadata"
    """
    version_date_time_string = swagger_schema["info"]["version"]
    match = re.match(r"(\d{4}-\d{2}-\d{2})T", version_date_time_string)
    aws_api_version = match.group(1)
    service_name = swagger_schema["info"]["title"]
    return collections.OrderedDict([
        ("apiVersion", aws_api_version),
        ("endpointPrefix", "execute-api"),
        ("protocol", "application/json"),
        ("serviceFullName", service_name),
    ])


def build_operations(swagger_schema):
    """
    Builds the "operations" portion of the AWS schema.
    :param swagger_schema: The API's swagger schema as a dictionary.
    :return An ordered dictionary that represents the AWS schema's
    "operations".
    """
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
        aws_http_info = collections.OrderedDict([
            ("method", "POST"),
            ("requestUri", full_path),
            ("responseCode", 200),
        ])

        post_info = path_info["post"]
        if not "parameters" in post_info:
            continue

        post_parameters = post_info["parameters"]

        post_parameter_schema = post_parameters[0]["schema"]
        post_parameter_schema_reference_uri = \
            post_parameter_schema[JSON_REF_KEYWORD]

        post_parameter_schema_name = get_referenced_schema_name(
            post_parameter_schema_reference_uri)

        aws_input = collections.OrderedDict([("shape",
                                              post_parameter_schema_name)])

        # Get the name of the schema referenced in the swagger schema's
        # 200 response.
        response_schema_ref_string = \
            post_info["responses"]["200"]["schema"]["$ref"]

        definition_name = get_referenced_schema_name(
            response_schema_ref_string)

        # Make the AWS schema's output a shape of the same name.
        aws_output = {"shape": definition_name}

        # Build the operation.
        operation_info = collections.OrderedDict([
            ("name", aws_name),
            ("http", aws_http_info),
            ("input", aws_input),
            ("output", aws_output),
        ])

        operations[aws_name] = operation_info

    return operations


def build_shapes(swagger_schema):
    """
    Builds the "shapes" portion of the api-definition.
    :param swagger_schema: The API swagger schema as a dictionary.
    :return An ordered dictionary that represents the api-definition's
    "shapes".
    """
    shapes = collections.OrderedDict(PRIMITIVE_SHAPES)
    definitions = swagger_schema["definitions"]
    for model_name, model_schema in definitions.items():
        shapes[model_name] = build_shape(model_schema, shapes)

    return shapes


def build_shape(schema, all_shapes):
    """
    Builds a shape that is equivalent to a schema in a swagger file.
    :param schema: The schema from a swagger file. This schema's "type"
    must be "object".
    :param all_shapes: A dictionary mapping shape names to shapes. If this
    routine needs to define any additionaly shapes, it will add them to
    this dictionary.
    :return An ordered dictionary that represents a shape.
    """

    assert (schema["type"] == "object")

    get_logger().debug("schema={}".format(schema))
    shape_required = schema.get("required", [])
    shape_members = build_shape_members(
        schema.get("properties", {}), all_shapes)

    return collections.OrderedDict([
        ("type", "structure"),
        ("required", shape_required),
        ("members", shape_members),
    ])


def build_shape_members(properties, all_shapes):
    """
    Builds the "members" portion of a shape.
    :param properties: The properties in the shape's swagger counterpart.
    :param all_shapes: A dictionary mapping shape names to shapes. If this
    routine needs to define any shapes, it will add them to this dictionary.
    :return An ordered dictionary that represents the shape's members.
    """
    members = collections.OrderedDict()
    for property_name, property_schema in properties.items():
        if JSON_REF_KEYWORD in property_schema:
            schema_reference = property_schema[JSON_REF_KEYWORD]
            property_shape_name = get_referenced_schema_name(schema_reference)

        else:
            property_type = property_schema["type"]
            if property_type == "array":
                property_shape_name = define_list_shape(
                    property_schema["items"], all_shapes)

            else:
                property_shape_name = shape_from_swagger_primitive(
                    property_type)

        members[property_name] = {"shape": property_shape_name}

    return members


def define_list_shape(item_schema, all_shapes):
    """
    Defines a shape for a list type.
    :param item_schema: The schema of the list's elements.
    :param all_shapes: A dictionary mapping shape names to shapes. This
    routine will add the list shape that it defines to this dictionary.
    :return The name of the newly defined list shape.
    """
    if JSON_REF_KEYWORD in item_schema:
        schema_reference = item_schema[JSON_REF_KEYWORD]
        item_shape_name = get_referenced_schema_name(schema_reference)

    else:
        item_shape_name = shape_from_swagger_primitive(item_schema["type"])

    list_shape_name = "{}List".format(item_shape_name)
    list_shape = collections.OrderedDict([
        ("type", "list"),
        ("member", {
            "shape": item_shape_name
        }),
    ])

    all_shapes[list_shape_name] = list_shape
    return list_shape_name


def shape_from_swagger_primitive(primitive):
    """
    Gets the shape corresponding to a primitive swagger type.
    :param primitive: The name of a swagger primitive type, such as
    "string" or "number".
    :return The name of an AWS shape that is the equivalent of the given
    swagger type.
    """
    return SWAGGER_PRIMITIVE_TO_SHAPE_MAP[primitive]


def build_aws_schema(swagger_schema):
    """
    Builds an AWS schema from a swagger schema.
    :param swagger_schema: An API's swagger schema as a dictionary.
    :return The API's AWS schema as an ordered dictionary.
    """
    aws_metadata = build_metadata(swagger_schema)
    aws_operations = build_operations(swagger_schema)
    aws_shapes = build_shapes(swagger_schema)
    return collections.OrderedDict([
        ("version", "2.0"),
        ("metadata", aws_metadata),
        ("operations", aws_operations),
        ("shapes", aws_shapes),
    ])


def get_logger():
    """
    Gets this module's logger.
    """
    return logging.getLogger(__name__)


def main():
    # Configure logging.
    logging.basicConfig(level=logging.WARNING)
    logger = logging.getLogger(__name__)
    logger.setLevel(logging.WARNING)

    with open("./VitalServices-prod-swagger.json", "r") as swagger_file:
        swagger_schema = json.load(
            swagger_file, object_pairs_hook=collections.OrderedDict)

        aws_schema = build_aws_schema(swagger_schema)
        print(json.dumps(aws_schema, indent=4))

    return 0


if __name__ == '__main__':
    sys.exit(main())
