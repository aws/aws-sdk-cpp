#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

"""
A set of utils to go through c2j models and their corresponding endpoint rules
"""
import datetime
import json
import os
import re

# Legacy table of service model remaps/name correction during the code generation
SERVICE_NAME_REMAPS = {"runtime.lex": "lex",
                       "runtime.lex.v2": "lexv2-runtime",
                       "models.lex.v2": "lexv2-models",
                       "transfer": "awstransfer",
                       "transcribe-streaming": "transcribestreaming",
                       "streams.dynamodb": "dynamodbstreams"}

SMITHY_EXCLUSION_CLIENTS = {
    # multi auth
    "eventbridge"
    , "cloudfront-keyvaluestore"
    , "cognito-identity"
    , "cognito-idp"
    # customization
    , "machinelearning"
    , "apigatewayv2"
    , "apigateway"
    , "eventbridge"
    , "glacier"
    , "lambda"
    , "polly"
    , "sqs"
    # bearer token
    # ,"codecatalyst"
    # bidirectional streaming
    , "lexv2-runtime"
    , "qbusiness"
    , "transcribestreaming"
    , "s3-crt"
    , "s3"
    , "s3control"
}

# Regexp to parse C2J model filename to extract service name and date version
SERVICE_MODEL_FILENAME_PATTERN = re.compile(
    "^"
    "(?P<service>.+)-"  # service name
    "(?P<date>[0-9][0-9][0-9][0-9]-[0-9][0-9]-[0-9][0-9])"  # model date
    ".normal.json$"
)


class ServiceModel(object):
    # A helper class to store C2j model info and metadata (endpoint rules and tests)
    def __init__(self, service_id: str, c2j_model: str, endpoint_rule_set: str, endpoint_tests: str, use_smithy: bool):
        self.service_id = service_id  # For debugging purposes, not used atm
        # only filenames, no filesystem path
        self.c2j_model = c2j_model
        self.endpoint_rule_set = endpoint_rule_set
        self.endpoint_tests = endpoint_tests
        self.use_smithy = use_smithy


class ModelUtils(object):
    """A helper utility to collect available for generation models:
     process models dir, find corresponding endpoint rules and do some legacy name remapping,
     filter models requested for generation.
    """

    def __init__(self, args: dict):
        self.debug = args.get("debug", False)
        self.args = args
        self.models_available = self._collect_available_models(args["path_to_api_definitions"],
                                                               args["path_to_endpoint_rules"])
        self.models_to_generate = self._get_models_to_generate()

    def get_clients_to_build(self) -> set:
        """
        Return a set of c2j client names to be generated
        :return: a set
        """
        return set(self.models_to_generate.keys())

    def _get_models_to_generate(self):
        # this method may return an empty dict if both all and client_list are missing
        # (for example, in case of defaults, partitions or tests generation)
        if self.args.get("all"):
            return self.models_available
        else:
            clients_to_build = self.args.get("client_list")
            if not clients_to_build:
                clients_to_build = []
            clients_to_build_set = set(clients_to_build)
            available_models_set = set(self.models_available.keys())
            not_found_models = clients_to_build_set - available_models_set
            if len(not_found_models):
                raise RuntimeError(f"Requested to build clients but their model files are not present: "
                                   f"{not_found_models}")

            return dict((k, self.models_available[k]) for k in clients_to_build if k in clients_to_build)

    @staticmethod
    def _collect_available_models(models_dir: str, endpoint_rules_dir: str) -> dict:
        """Return a dict of <service_name, ServiceModel> with all available c2j models in a models_dir

        :param models_dir: path to the directory with c2j models
        :param endpoint_rules_dir: path to the directory with endpoints dir models
        :return: dict<service_name, model_file_name> in models dir
        """
        model_files = os.listdir(models_dir)
        service_name_to_model_filename_date = dict()

        for filename in model_files:
            if not os.path.isfile("/".join([models_dir, filename])):
                continue
            match = SERVICE_MODEL_FILENAME_PATTERN.match(filename)

            service_model_name = match.group("service")
            service_model_date = match.group("date")
            service_model_date = datetime.datetime.strptime(service_model_date, "%Y-%m-%d").date()
            already_found_model = service_name_to_model_filename_date.get(service_model_name, None)
            if already_found_model:
                already_found_date = already_found_model[1]
                if already_found_date < service_model_date:
                    service_name_to_model_filename_date[service_model_name] = (filename, service_model_date)
            else:
                service_name_to_model_filename_date[service_model_name] = (filename, service_model_date)

        service_name_to_model_filename = dict()
        missing = set()
        for raw_key, model_file_date in service_name_to_model_filename_date.items():
            key = SERVICE_NAME_REMAPS.get(raw_key, raw_key)
            if "." in key:
                key = "-".join(reversed(key.split(".")))  # just replicating existing legacy behavior
            if ";" in key:
                key = key.replace(";", "-")  # just in case... just replicating existing legacy behavior

            # fetch endpoint-rules filename which is based on ServiceId in c2j models:
            try:
                service_name_to_model_filename[key] = ModelUtils._build_service_model(models_dir,
                                                                                      endpoint_rules_dir,
                                                                                      model_file_date[0])

                if key == "s3":
                    service_name_to_model_filename["s3-crt"] = service_name_to_model_filename["s3"]
            except Exception as exc:
                # TODO: re-enable with endpoints introduction
                # print(f"C2J model does not have a corresponding endpoints ruleset: {exc}")
                missing.add(model_file_date[0])
                service_name_to_model_filename[key] = ServiceModel(service_id=key,
                                                                   c2j_model=model_file_date[0],
                                                                   endpoint_rule_set=None,
                                                                   endpoint_tests=None,
                                                                   use_smithy=False)
        if missing:
            # TODO: re-enable with endpoints introduction
            # print(f"Missing endpoints for services: {missing}")
            pass

        if service_name_to_model_filename.get("s3") and "s3-crt" not in service_name_to_model_filename:
            service_name_to_model_filename["s3-crt"] = service_name_to_model_filename["s3"]

        return service_name_to_model_filename

    @staticmethod
    def is_smithy_enabled(service_id, models_dir, c2j_model_filename):
        """Return true if given service id and c2j model file should enable smithy client generation path

        :param service_id:
        :param models_dir:
        :param c2j_model_filename:
        :return:
        """
        use_smithy = False
        if service_id not in SMITHY_EXCLUSION_CLIENTS:
            with open(models_dir + "/" + c2j_model_filename, 'r') as json_file:
                model = json.load(json_file)
                model_protocol = model.get("metadata", dict()).get("protocol", "UNKNOWN_PROTOCOL")
                #if model_protocol in {"json", "rest-json", "rest-xml", "query"}:
                #    use_smithy = True
        return use_smithy

    @staticmethod
    def _build_service_model(models_dir: str, endpoint_rules_dir: str, c2j_model_filename) -> ServiceModel:
        """Return a ServiceModel containing paths to the Service models: C2J model and endpoints (rules and tests).

        :param models_dir (str): filepath (absolute or relative) to the dir with c2j models
        :param endpoint_rules_dir (str): filepath (absolute or relative) to the dir with dirs of endpoints
        :param c2j_model_filename (str): filename of a service C2J model (relative to models_dir, no separator)
        :return: ServiceModel, a descriptor class holding Service models filenames
        """

        endpoint_rules_filename = c2j_model_filename.replace('.normal.json', '.endpoint-rule-set.json')
        endpoint_rules_filepath = f"{endpoint_rules_dir}/{endpoint_rules_filename}"
        endpoint_tests_filename = c2j_model_filename.replace('.normal.json', '.endpoint-tests.json')
        endpoint_tests_filepath = f"{endpoint_rules_dir}/{endpoint_tests_filename}"
        match = SERVICE_MODEL_FILENAME_PATTERN.match(c2j_model_filename)
        service_id = match.group("service")

        use_smithy = ModelUtils.is_smithy_enabled(service_id, models_dir, c2j_model_filename)

        if os.path.exists(endpoint_rules_filepath) and os.path.exists(endpoint_tests_filepath):
            return ServiceModel(service_id=service_id,
                                c2j_model=c2j_model_filename,
                                endpoint_rule_set=endpoint_rules_filename,
                                endpoint_tests=endpoint_tests_filename,
                                use_smithy=use_smithy)
