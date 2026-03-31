# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.13)
# -- Preamble --
project("sample_app"
        LANGUAGES CXX
        VERSION 1.0
        DESCRIPTION "A testing app using AWS SDK for C++"
        )

# -- Project wide setup --
# Setting C++ minimum requirements
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Setting build to hide symbols in targets by default
set(CMAKE_CXX_VISIBILITY_PRESET hidden)
set(CMAKE_VISIBILITY_INLINES_HIDDEN YES)

# Preventing writes to package registry by default
set(CMAKE_EXPORT_NO_PACKAGE_REGISTRY YES)

# Validating config type and setting default if needed
get_property(is_multi_conf_build GLOBAL PROPERTY GENERATOR_IS_MULTI_CONFIG)
if (NOT is_multi_conf_build)
    set(allowed_build_types Debug Release RelWithDebInfo MinSizeRel)
    # cmake-gui helper
    set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "${allowed_build_types}")
    if (NOT CMAKE_BUILD_TYPE)
        message(STATUS "Setting build type to 'RelWithDebInfo' as none was specified.")
        set(CMAKE_BUILD_TYPE "RelWithDebInfo" CACHE STRING "Choose the type of build." FORCE)
    elseif (NOT CMAKE_BUILD_TYPE IN_LIST allowed_build_types)
        message(FATAL_ERROR "Unknown build type: ${CMAKE_BUILD_TYPE}")
    endif ()
endif ()

# -- Dependencies --
find_package(AWSSDK REQUIRED COMPONENTS s3-crt)

# -- main build target --
add_executable(app "main.cpp")
target_link_libraries(app ${AWSSDK_LINK_LIBRARIES})
target_include_directories(app PRIVATE ${AWSSDK_INCLUDE_DIRS})

# -- install target --
include(GNUInstallDirs)
set(CMAKE_INSTALL_DOCDIR ${CMAKE_INSTALL_DATAROOTDIR}/doc/${PROJECT_NAME})

install(TARGETS app
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
        )

# -- all_services_test build target --
find_package(AWSSDK REQUIRED COMPONENTS core AWSMigrationHub accessanalyzer account acm acm-pca aiops amp amplify amplifybackend amplifyuibuilder apigateway apigatewaymanagementapi apigatewayv2 appconfig appconfigdata appfabric appflow appintegrations application-autoscaling application-insights application-signals applicationcostprofiler appmesh apprunner appstream appsync arc-region-switch arc-zonal-shift artifact athena auditmanager autoscaling autoscaling-plans awstransfer b2bi backup backup-gateway backupsearch batch bcm-dashboards bcm-data-exports bcm-pricing-calculator bcm-recommended-actions bedrock bedrock-agent bedrock-agent-runtime bedrock-agentcore bedrock-agentcore-control bedrock-data-automation bedrock-data-automation-runtime bedrock-runtime billing billingconductor braket budgets ce chatbot chime chime-sdk-identity chime-sdk-media-pipelines chime-sdk-meetings chime-sdk-messaging chime-sdk-voice cleanrooms cleanroomsml cloud9 cloudcontrol clouddirectory cloudformation cloudfront cloudfront-keyvaluestore cloudhsm cloudhsmv2 cloudsearch cloudsearchdomain cloudtrail cloudtrail-data codeartifact codebuild codecatalyst codecommit codeconnections codedeploy codeguru-reviewer codeguru-security codeguruprofiler codepipeline codestar-connections codestar-notifications cognito-identity cognito-idp cognito-sync comprehend comprehendmedical compute-optimizer compute-optimizer-automation config connect connect-contact-lens connectcampaigns connectcampaignsv2 connectcases connecthealth connectparticipant controlcatalog controltower cost-optimization-hub cur customer-profiles databrew dataexchange datapipeline datasync datazone dax deadline detective devicefarm devops-agent devops-guru directconnect directory-service-data discovery dlm dms docdb docdb-elastic drs ds dsql dynamodb dynamodbstreams ebs ec2 ec2-instance-connect ecr ecr-public ecs eks eks-auth elasticache elasticbeanstalk elasticfilesystem elasticloadbalancing elasticloadbalancingv2 elasticmapreduce elementalinference email emr-containers emr-serverless entityresolution es eventbridge events evs finspace finspace-data firehose fis fms forecast forecastquery frauddetector freetier fsx gamelift gameliftstreams geo-maps geo-places geo-routes glacier globalaccelerator glue grafana greengrass greengrassv2 groundstation guardduty health healthlake iam identitystore imagebuilder importexport inspector inspector-scan inspector2 internetmonitor invoicing iot iot-data iot-jobs-data iot-managed-integrations iotdeviceadvisor iotevents iotevents-data iotfleetwise iotsecuretunneling iotsitewise iotthingsgraph iottwinmaker iotwireless ivs ivs-realtime ivschat kafka kafkaconnect kendra kendra-ranking keyspaces keyspacesstreams kinesis kinesis-video-archived-media kinesis-video-media kinesis-video-signaling kinesis-video-webrtc-storage kinesisanalytics kinesisanalyticsv2 kinesisvideo kms lakeformation lambda launch-wizard lex lex-models lexv2-models lexv2-runtime license-manager license-manager-linux-subscriptions license-manager-user-subscriptions lightsail location logs lookoutequipment m2 machinelearning macie2 mailmanager managedblockchain managedblockchain-query marketplace-agreement marketplace-catalog marketplace-deployment marketplace-entitlement marketplace-reporting marketplacecommerceanalytics mediaconnect mediaconvert medialive mediapackage mediapackage-vod mediapackagev2 mediastore mediastore-data mediatailor medical-imaging memorydb meteringmarketplace mgn migration-hub-refactor-spaces migrationhub-config migrationhuborchestrator migrationhubstrategy monitoring mpa mq mturk-requester mwaa mwaa-serverless neptune neptune-graph neptunedata network-firewall networkflowmonitor networkmanager networkmonitor notifications notificationscontacts nova-act oam observabilityadmin odb omics opensearch opensearchserverless organizations osis outposts panorama partnercentral-account partnercentral-benefits partnercentral-channel partnercentral-selling payment-cryptography payment-cryptography-data pca-connector-ad pca-connector-scep pcs personalize personalize-events personalize-runtime pi pinpoint pinpoint-email pinpoint-sms-voice-v2 pipes polly pricing proton qapps qbusiness qconnect quicksight ram rbin rds rds-data redshift redshift-data redshift-serverless rekognition repostspace resiliencehub resource-explorer-2 resource-groups resourcegroupstaggingapi rolesanywhere route53 route53-recovery-cluster route53-recovery-control-config route53-recovery-readiness route53domains route53globalresolver route53profiles route53resolver rtbfabric rum s3 s3-crt s3control s3outposts s3tables s3vectors sagemaker sagemaker-a2i-runtime sagemaker-edge sagemaker-featurestore-runtime sagemaker-geospatial sagemaker-metrics sagemaker-runtime sagemaker-runtime-http2 savingsplans scheduler schemas sdb secretsmanager security-ir securityagent securityhub securitylake serverlessrepo service-quotas servicecatalog servicecatalog-appregistry servicediscovery sesv2 shield signer signer-data signin simpledbv2 simspaceweaver sms-voice snow-device-management snowball sns socialmessaging sqs ssm ssm-contacts ssm-guiconnect ssm-incidents ssm-quicksetup ssm-sap sso sso-admin sso-oidc states storagegateway sts supplychain support support-app sustainability swf synthetics taxsettings textract timestream-influxdb timestream-query timestream-write tnb transcribe transcribestreaming translate trustedadvisor uxc verifiedpermissions voice-id vpc-lattice waf waf-regional wafv2 wellarchitected wickr wisdom workdocs workmail workmailmessageflow workspaces workspaces-instances workspaces-thin-client workspaces-web xray)
add_executable(all_services_test all_services_test.cpp)
target_link_libraries(all_services_test ${AWSSDK_LINK_LIBRARIES})
target_include_directories(all_services_test PRIVATE ${AWSSDK_INCLUDE_DIRS})
