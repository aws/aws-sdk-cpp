/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/emr-containers/EMRContainersClient.h>
#include <aws/emr-containers/EMRContainersEndpointProvider.h>
#include <aws/emr-containers/EMRContainersEndpointRules.h>
#include <aws/emr-containers/EMRContainersErrorMarshaller.h>
#include <aws/emr-containers/EMRContainersErrors.h>
#include <aws/emr-containers/EMRContainersRequest.h>
#include <aws/emr-containers/EMRContainersServiceClientModel.h>
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/AllowAWSToRetainLogs.h>
#include <aws/emr-containers/model/AuthorizationConfiguration.h>
#include <aws/emr-containers/model/CancelJobRunRequest.h>
#include <aws/emr-containers/model/CancelJobRunResult.h>
#include <aws/emr-containers/model/Certificate.h>
#include <aws/emr-containers/model/CertificateProviderType.h>
#include <aws/emr-containers/model/CloudWatchMonitoringConfiguration.h>
#include <aws/emr-containers/model/Configuration.h>
#include <aws/emr-containers/model/ConfigurationOverrides.h>
#include <aws/emr-containers/model/ContainerInfo.h>
#include <aws/emr-containers/model/ContainerLogRotationConfiguration.h>
#include <aws/emr-containers/model/ContainerProvider.h>
#include <aws/emr-containers/model/ContainerProviderType.h>
#include <aws/emr-containers/model/CreateJobTemplateRequest.h>
#include <aws/emr-containers/model/CreateJobTemplateResult.h>
#include <aws/emr-containers/model/CreateManagedEndpointRequest.h>
#include <aws/emr-containers/model/CreateManagedEndpointResult.h>
#include <aws/emr-containers/model/CreateSecurityConfigurationRequest.h>
#include <aws/emr-containers/model/CreateSecurityConfigurationResult.h>
#include <aws/emr-containers/model/CreateVirtualClusterRequest.h>
#include <aws/emr-containers/model/CreateVirtualClusterResult.h>
#include <aws/emr-containers/model/Credentials.h>
#include <aws/emr-containers/model/DeleteJobTemplateRequest.h>
#include <aws/emr-containers/model/DeleteJobTemplateResult.h>
#include <aws/emr-containers/model/DeleteManagedEndpointRequest.h>
#include <aws/emr-containers/model/DeleteManagedEndpointResult.h>
#include <aws/emr-containers/model/DeleteVirtualClusterRequest.h>
#include <aws/emr-containers/model/DeleteVirtualClusterResult.h>
#include <aws/emr-containers/model/DescribeJobRunRequest.h>
#include <aws/emr-containers/model/DescribeJobRunResult.h>
#include <aws/emr-containers/model/DescribeJobTemplateRequest.h>
#include <aws/emr-containers/model/DescribeJobTemplateResult.h>
#include <aws/emr-containers/model/DescribeManagedEndpointRequest.h>
#include <aws/emr-containers/model/DescribeManagedEndpointResult.h>
#include <aws/emr-containers/model/DescribeSecurityConfigurationRequest.h>
#include <aws/emr-containers/model/DescribeSecurityConfigurationResult.h>
#include <aws/emr-containers/model/DescribeVirtualClusterRequest.h>
#include <aws/emr-containers/model/DescribeVirtualClusterResult.h>
#include <aws/emr-containers/model/EksInfo.h>
#include <aws/emr-containers/model/EncryptionConfiguration.h>
#include <aws/emr-containers/model/Endpoint.h>
#include <aws/emr-containers/model/EndpointState.h>
#include <aws/emr-containers/model/FailureReason.h>
#include <aws/emr-containers/model/GetManagedEndpointSessionCredentialsRequest.h>
#include <aws/emr-containers/model/GetManagedEndpointSessionCredentialsResult.h>
#include <aws/emr-containers/model/InTransitEncryptionConfiguration.h>
#include <aws/emr-containers/model/JobDriver.h>
#include <aws/emr-containers/model/JobRun.h>
#include <aws/emr-containers/model/JobRunState.h>
#include <aws/emr-containers/model/JobTemplate.h>
#include <aws/emr-containers/model/JobTemplateData.h>
#include <aws/emr-containers/model/LakeFormationConfiguration.h>
#include <aws/emr-containers/model/ListJobRunsRequest.h>
#include <aws/emr-containers/model/ListJobRunsResult.h>
#include <aws/emr-containers/model/ListJobTemplatesRequest.h>
#include <aws/emr-containers/model/ListJobTemplatesResult.h>
#include <aws/emr-containers/model/ListManagedEndpointsRequest.h>
#include <aws/emr-containers/model/ListManagedEndpointsResult.h>
#include <aws/emr-containers/model/ListSecurityConfigurationsRequest.h>
#include <aws/emr-containers/model/ListSecurityConfigurationsResult.h>
#include <aws/emr-containers/model/ListTagsForResourceRequest.h>
#include <aws/emr-containers/model/ListTagsForResourceResult.h>
#include <aws/emr-containers/model/ListVirtualClustersRequest.h>
#include <aws/emr-containers/model/ListVirtualClustersResult.h>
#include <aws/emr-containers/model/ManagedLogs.h>
#include <aws/emr-containers/model/MonitoringConfiguration.h>
#include <aws/emr-containers/model/ParametricCloudWatchMonitoringConfiguration.h>
#include <aws/emr-containers/model/ParametricConfigurationOverrides.h>
#include <aws/emr-containers/model/ParametricMonitoringConfiguration.h>
#include <aws/emr-containers/model/ParametricS3MonitoringConfiguration.h>
#include <aws/emr-containers/model/PersistentAppUI.h>
#include <aws/emr-containers/model/RetryPolicyConfiguration.h>
#include <aws/emr-containers/model/RetryPolicyExecution.h>
#include <aws/emr-containers/model/S3MonitoringConfiguration.h>
#include <aws/emr-containers/model/SecureNamespaceInfo.h>
#include <aws/emr-containers/model/SecurityConfiguration.h>
#include <aws/emr-containers/model/SecurityConfigurationData.h>
#include <aws/emr-containers/model/SparkSqlJobDriver.h>
#include <aws/emr-containers/model/SparkSubmitJobDriver.h>
#include <aws/emr-containers/model/StartJobRunRequest.h>
#include <aws/emr-containers/model/StartJobRunResult.h>
#include <aws/emr-containers/model/TLSCertificateConfiguration.h>
#include <aws/emr-containers/model/TagResourceRequest.h>
#include <aws/emr-containers/model/TagResourceResult.h>
#include <aws/emr-containers/model/TemplateParameterConfiguration.h>
#include <aws/emr-containers/model/TemplateParameterDataType.h>
#include <aws/emr-containers/model/UntagResourceRequest.h>
#include <aws/emr-containers/model/UntagResourceResult.h>
#include <aws/emr-containers/model/VirtualCluster.h>
#include <aws/emr-containers/model/VirtualClusterState.h>

using EMRContainersIncludeTest = ::testing::Test;

TEST_F(EMRContainersIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::EMRContainers::EMRContainersClient>("EMRContainersIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
