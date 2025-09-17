#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

"""
This is a wrapper on top of Smithy smoke tests generator
"""
import json
import os
import shutil
import subprocess
from typing import List

SMITHY_GENERATOR_LOCATION = "tools/code-generation/smithy/codegen"
SMITHY_OUTPUT_DIR = "codegen_output"
SMITHY_TO_C2J_MAP_FILE = "tools/code-generation/smithy/codegen/smithy2c2j_service_map.json"


class SmokeTestsGen(object):
    """A wrapper for Smithy smoke tests generator for C++ SDK
    """

    def __init__(self, debug: bool, **kwargs):
        self.debug = debug
        with open(os.path.abspath(SMITHY_TO_C2J_MAP_FILE), 'r') as file:
            self.smithy_c2j_data = json.load(file)
            self.c2j_smithy_data = {value: key for key, value in self.smithy_c2j_data.items()}

    def generate(self, clients_to_build: set):
        """
        Generate smoke tests for SDK clients
        :param clients_to_build: a set of service client names to generate
        :return:
        """
        # List of current services
        current_services = {
            'apigateway', 'accessanalyzer', 'kafkaconnect', 'account', 'kendra', 'acm', 'kendra-ranking', 'acm-pca', 'keyspaces', 'aiops', 'keyspacesstreams', 'amp', 'kinesis', 'amplify', 'kinesis-video-archived-media', 'amplifybackend', 'kinesis-video-media', 'amplifyuibuilder', 'kinesis-video-signaling', 'kinesis-video-webrtc-storage', 'apigatewaymanagementapi', 'kinesisanalytics', 'apigatewayv2', 'kinesisanalyticsv2', 'appconfig', 'kinesisvideo', 'appconfigdata', 'kms', 'appfabric', 'lakeformation', 'appflow', 'lambda', 'appintegrations', 'launch-wizard', 'application-autoscaling', 'lex', 'application-insights', 'lex-models', 'application-signals', 'lexv2-models', 'applicationcostprofiler', 'lexv2-runtime', 'appmesh', 'license-manager', 'apprunner', 'license-manager-linux-subscriptions', 'appstream', 'license-manager-user-subscriptions', 'appsync', 'lightsail', 'apptest', 'location', 'arc-region-switch', 'logs', 'arc-zonal-shift', 'lookoutequipment', 'artifact', 'lookoutmetrics', 'athena', 'lookoutvision', 'auditmanager', 'm2', 'autoscaling', 'machinelearning', 'autoscaling-plans', 'macie2', 'AWSMigrationHub', 'mailmanager', 'awstransfer', 'managedblockchain', 'b2bi', 'managedblockchain-query', 'backup', 'marketplace-agreement', 'backup-gateway', 'marketplace-catalog', 'backupsearch', 'marketplace-deployment', 'batch', 'marketplace-entitlement', 'bcm-dashboards', 'marketplace-reporting', 'bcm-data-exports', 'marketplacecommerceanalytics', 'bcm-pricing-calculator', 'mediaconnect', 'bcm-recommended-actions', 'mediaconvert', 'bedrock', 'medialive', 'bedrock-agent', 'mediapackage', 'bedrock-agent-runtime', 'mediapackage-vod', 'bedrock-agentcore', 'mediapackagev2', 'bedrock-agentcore-control', 'mediastore', 'bedrock-data-automation', 'mediastore-data', 'bedrock-data-automation-runtime', 'mediatailor', 'bedrock-runtime', 'medical-imaging', 'billing', 'memorydb', 'billingconductor', 'meteringmarketplace', 'braket', 'mgn', 'budgets', 'migration-hub-refactor-spaces', 'ce', 'migrationhub-config', 'chatbot', 'migrationhuborchestrator', 'chime', 'migrationhubstrategy', 'chime-sdk-identity', 'monitoring', 'chime-sdk-media-pipelines', 'mpa', 'chime-sdk-meetings', 'mq', 'chime-sdk-messaging', 'mturk-requester', 'chime-sdk-voice', 'mwaa', 'cleanrooms', 'neptune', 'cleanroomsml', 'neptune-graph', 'cloud9', 'neptunedata', 'cloudcontrol', 'network-firewall', 'clouddirectory', 'networkflowmonitor', 'cloudformation', 'networkmanager', 'cloudfront', 'networkmonitor', 'cloudfront-keyvaluestore', 'notifications', 'cloudhsm', 'notificationscontacts', 'cloudhsmv2', 'oam', 'cloudsearch', 'observabilityadmin', 'cloudsearchdomain', 'odb', 'cloudtrail', 'omics', 'cloudtrail-data', 'opensearch', 'codeartifact', 'opensearchserverless', 'codebuild', 'organizations', 'codecatalyst', 'osis', 'codecommit', 'outposts', 'codeconnections', 'panorama', 'codedeploy', 'partnercentral-selling', 'codeguru-reviewer', 'payment-cryptography', 'codeguru-security', 'payment-cryptography-data', 'codeguruprofiler', 'pca-connector-ad', 'codepipeline', 'pca-connector-scep', 'codestar-connections', 'pcs', 'codestar-notifications', 'personalize', 'cognito-identity', 'personalize-events', 'cognito-idp', 'personalize-runtime', 'cognito-sync', 'pi', 'comprehend', 'pinpoint', 'comprehendmedical', 'pinpoint-email', 'compute-optimizer', 'pinpoint-sms-voice-v2', 'config', 'pipes', 'connect', 'polly', 'connect-contact-lens', 'pricing', 'connectcampaigns', 'proton', 'connectcampaignsv2', 'qapps', 'connectcases', 'qbusiness', 'connectparticipant', 'qconnect', 'controlcatalog', 'qldb', 'controltower', 'qldb-session', 'cost-optimization-hub', 'quicksight', 'cur', 'ram', 'customer-profiles', 'rbin', 'databrew', 'rds', 'dataexchange', 'rds-data', 'datapipeline', 'redshift', 'datasync', 'redshift-data', 'datazone', 'redshift-serverless', 'dax', 'rekognition', 'deadline', 'repostspace', 'detective', 'resiliencehub', 'devicefarm', 'resource-explorer-2', 'devops-guru', 'resource-groups', 'directconnect', 'resourcegroupstaggingapi', 'directory-service-data', 'robomaker', 'discovery', 'rolesanywhere', 'dlm', 'route53', 'dms', 'route53-recovery-cluster', 'docdb', 'route53-recovery-control-config', 'docdb-elastic', 'route53-recovery-readiness', 'drs', 'route53domains', 'ds', 'route53profiles', 'dsql', 'route53resolver', 'dynamodb', 'rum', 'dynamodbstreams', 's3', 'ebs', 's3-crt', 'ec2', 's3control', 'ec2-instance-connect', 's3outposts', 'ecr', 's3tables', 'ecr-public', 's3vectors', 'ecs', 'sagemaker', 'eks', 'sagemaker-a2i-runtime', 'eks-auth', 'sagemaker-edge', 'elasticache', 'sagemaker-featurestore-runtime', 'elasticbeanstalk', 'sagemaker-geospatial', 'elasticfilesystem', 'sagemaker-metrics', 'elasticloadbalancing', 'sagemaker-runtime', 'elasticloadbalancingv2', 'savingsplans', 'elasticmapreduce', 'scheduler', 'elastictranscoder', 'schemas', 'email', 'sdb', 'emr-containers', 'secretsmanager', 'emr-serverless', 'security-ir', 'entityresolution', 'securityhub', 'es', 'securitylake', 'eventbridge', 'serverlessrepo', 'events', 'service-quotas', 'evidently', 'servicecatalog', 'evs', 'servicecatalog-appregistry', 'finspace', 'servicediscovery', 'finspace-data', 'sesv2', 'firehose', 'shield', 'fis', 'signer', 'fms', 'simspaceweaver', 'forecast', 'sms-voice', 'forecastquery', 'snow-device-management', 'frauddetector', 'snowball', 'freetier', 'sns', 'fsx', 'socialmessaging', 'gamelift', 'sqs', 'gameliftstreams', 'ssm', 'geo-maps', 'ssm-contacts', 'geo-places', 'ssm-guiconnect', 'geo-routes', 'ssm-incidents', 'glacier', 'ssm-quicksetup', 'globalaccelerator', 'ssm-sap', 'glue', 'sso', 'grafana', 'sso-admin', 'greengrass', 'sso-oidc', 'greengrassv2', 'states', 'groundstation', 'storagegateway', 'guardduty', 'sts', 'health', 'supplychain', 'healthlake', 'support', 'iam', 'support-app', 'identitystore', 'swf', 'imagebuilder', 'synthetics', 'importexport', 'taxsettings', 'inspector', 'textract', 'inspector-scan', 'timestream-influxdb', 'inspector2', 'timestream-query', 'internetmonitor', 'timestream-write', 'invoicing', 'tnb', 'iot', 'transcribe', 'iot-data', 'transcribestreaming', 'iot-jobs-data', 'translate', 'iot-managed-integrations', 'trustedadvisor', 'iot1click-devices', 'verifiedpermissions', 'iot1click-projects', 'voice-id', 'iotanalytics', 'vpc-lattice', 'iotdeviceadvisor', 'waf', 'iotevents', 'waf-regional', 'iotevents-data', 'wafv2', 'iotfleethub', 'wellarchitected', 'iotfleetwise', 'wisdom', 'iotsecuretunneling', 'workdocs', 'iotsitewise', 'worklink', 'iotthingsgraph', 'workmail', 'iottwinmaker', 'workmailmessageflow', 'iotwireless', 'workspaces', 'ivs', 'workspaces-instances', 'ivs-realtime', 'workspaces-thin-client', 'ivschat', 'workspaces-web', 'kafka', 'xray'
        }
        
        # Block specific smoke tests
        blocked_services = {
            'es',
            'iot-managed-integrations',
            'elastictranscoder',
            'freetier',
            'bcm-recommended-actions',
        }
        
        # Filter to only services in current_services and c2j_smithy_data
        clients_to_build = {service for service in clients_to_build 
                           if service in current_services and service in self.c2j_smithy_data}
        clients_to_build = clients_to_build - blocked_services
        
        # get smithy names
        smithy_services = [self.c2j_smithy_data.get(service, service) for service in clients_to_build]
        print(f"Running code generator for smoke-tests for services:"+",".join(smithy_services))
        if self._generate_smoke_tests(smithy_services, json.dumps(self.smithy_c2j_data)):
            # move the output to generated folder
            self._copy_cpp_codegen_contents(os.path.abspath("tools/code-generation/smithy/codegen"),
                                            "cpp-codegen-smoke-tests-plugin",
                                            os.path.abspath("generated/smoke-tests"))
            return 0
        else:
            return -1

    def _generate_smoke_tests(self, smithy_services: List[str], smithy_c2j_data: str):
        smithy_codegen_command = [
            "./gradlew",
            "clean",
            "build",
            "-PoutputDirectory=" + SMITHY_OUTPUT_DIR,
            "-PservicesFilter=" + ",".join(smithy_services),
            "-Pc2jMap=" + smithy_c2j_data
        ]
        original_dir = os.getcwd()
        try:
            if self.debug:
                run_command_str = " ".join("%s" % item for item in smithy_codegen_command)
                print(f"RUNNING COMMAND\n{run_command_str}\nfrom directory:\n{SMITHY_GENERATOR_LOCATION}")

            process = subprocess.run(
                smithy_codegen_command,
                timeout=6*60,  # Timeout after 6 minutes
                check=True,
                capture_output=True,
                text=True,
                cwd=SMITHY_GENERATOR_LOCATION
            )
            # If successful, print the command output
            print("Smithy codegen command executed successfully!\n", process.stdout)
            return True

        except subprocess.CalledProcessError as e:
            # Handle command failure and print error details
            print(f"Command failed with return code {e.returncode}")
            print(f"Error Output:\n{e.stderr}")
            return False

    def _copy_cpp_codegen_contents(self, top_level_dir: str, plugin_name: str, target_dir: str):
        # check if the target directory exists, create it if it doesn't
        os.makedirs(target_dir, exist_ok=True)
        if self.debug:
            print(f"_copy_cpp_codegen_contents: {target_dir}")

        # Walk through the top-level directory and find all "cpp-codegen-smoke-tests-plugin" directories
        for root, dirs, files in os.walk(top_level_dir):
            if plugin_name in dirs:
                source_dir = os.path.join(root, plugin_name)
                # recursively copy all contents from the source to the target folder
                for item in os.listdir(source_dir):
                    source_item = os.path.join(source_dir, item)
                    target_item = os.path.join(target_dir, item)
                    # Recursively copy directories and files
                    if os.path.isdir(source_item):
                        shutil.copytree(source_item, target_item, dirs_exist_ok=True)
                    else:
                        shutil.copy2(source_item, target_item)
                print(f"Copied contents from '{source_dir}' to '{target_dir}'.")
