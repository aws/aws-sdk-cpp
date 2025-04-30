/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/servicediscovery/ServiceDiscoveryClient.h>
#include <aws/servicediscovery/ServiceDiscoveryEndpointProvider.h>
#include <aws/servicediscovery/ServiceDiscoveryEndpointRules.h>
#include <aws/servicediscovery/ServiceDiscoveryErrorMarshaller.h>
#include <aws/servicediscovery/ServiceDiscoveryErrors.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/servicediscovery/ServiceDiscoveryServiceClientModel.h>
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/CreateHttpNamespaceRequest.h>
#include <aws/servicediscovery/model/CreateHttpNamespaceResult.h>
#include <aws/servicediscovery/model/CreatePrivateDnsNamespaceRequest.h>
#include <aws/servicediscovery/model/CreatePrivateDnsNamespaceResult.h>
#include <aws/servicediscovery/model/CreatePublicDnsNamespaceRequest.h>
#include <aws/servicediscovery/model/CreatePublicDnsNamespaceResult.h>
#include <aws/servicediscovery/model/CreateServiceRequest.h>
#include <aws/servicediscovery/model/CreateServiceResult.h>
#include <aws/servicediscovery/model/CustomHealthStatus.h>
#include <aws/servicediscovery/model/DeleteNamespaceRequest.h>
#include <aws/servicediscovery/model/DeleteNamespaceResult.h>
#include <aws/servicediscovery/model/DeleteServiceAttributesRequest.h>
#include <aws/servicediscovery/model/DeleteServiceAttributesResult.h>
#include <aws/servicediscovery/model/DeleteServiceRequest.h>
#include <aws/servicediscovery/model/DeleteServiceResult.h>
#include <aws/servicediscovery/model/DeregisterInstanceRequest.h>
#include <aws/servicediscovery/model/DeregisterInstanceResult.h>
#include <aws/servicediscovery/model/DiscoverInstancesRequest.h>
#include <aws/servicediscovery/model/DiscoverInstancesResult.h>
#include <aws/servicediscovery/model/DiscoverInstancesRevisionRequest.h>
#include <aws/servicediscovery/model/DiscoverInstancesRevisionResult.h>
#include <aws/servicediscovery/model/DnsConfig.h>
#include <aws/servicediscovery/model/DnsConfigChange.h>
#include <aws/servicediscovery/model/DnsProperties.h>
#include <aws/servicediscovery/model/DnsRecord.h>
#include <aws/servicediscovery/model/DuplicateRequest.h>
#include <aws/servicediscovery/model/FilterCondition.h>
#include <aws/servicediscovery/model/GetInstanceRequest.h>
#include <aws/servicediscovery/model/GetInstanceResult.h>
#include <aws/servicediscovery/model/GetInstancesHealthStatusRequest.h>
#include <aws/servicediscovery/model/GetInstancesHealthStatusResult.h>
#include <aws/servicediscovery/model/GetNamespaceRequest.h>
#include <aws/servicediscovery/model/GetNamespaceResult.h>
#include <aws/servicediscovery/model/GetOperationRequest.h>
#include <aws/servicediscovery/model/GetOperationResult.h>
#include <aws/servicediscovery/model/GetServiceAttributesRequest.h>
#include <aws/servicediscovery/model/GetServiceAttributesResult.h>
#include <aws/servicediscovery/model/GetServiceRequest.h>
#include <aws/servicediscovery/model/GetServiceResult.h>
#include <aws/servicediscovery/model/HealthCheckConfig.h>
#include <aws/servicediscovery/model/HealthCheckCustomConfig.h>
#include <aws/servicediscovery/model/HealthCheckType.h>
#include <aws/servicediscovery/model/HealthStatus.h>
#include <aws/servicediscovery/model/HealthStatusFilter.h>
#include <aws/servicediscovery/model/HttpInstanceSummary.h>
#include <aws/servicediscovery/model/HttpNamespaceChange.h>
#include <aws/servicediscovery/model/HttpProperties.h>
#include <aws/servicediscovery/model/Instance.h>
#include <aws/servicediscovery/model/InstanceSummary.h>
#include <aws/servicediscovery/model/ListInstancesRequest.h>
#include <aws/servicediscovery/model/ListInstancesResult.h>
#include <aws/servicediscovery/model/ListNamespacesRequest.h>
#include <aws/servicediscovery/model/ListNamespacesResult.h>
#include <aws/servicediscovery/model/ListOperationsRequest.h>
#include <aws/servicediscovery/model/ListOperationsResult.h>
#include <aws/servicediscovery/model/ListServicesRequest.h>
#include <aws/servicediscovery/model/ListServicesResult.h>
#include <aws/servicediscovery/model/ListTagsForResourceRequest.h>
#include <aws/servicediscovery/model/ListTagsForResourceResult.h>
#include <aws/servicediscovery/model/Namespace.h>
#include <aws/servicediscovery/model/NamespaceAlreadyExists.h>
#include <aws/servicediscovery/model/NamespaceFilter.h>
#include <aws/servicediscovery/model/NamespaceFilterName.h>
#include <aws/servicediscovery/model/NamespaceProperties.h>
#include <aws/servicediscovery/model/NamespaceSummary.h>
#include <aws/servicediscovery/model/NamespaceType.h>
#include <aws/servicediscovery/model/Operation.h>
#include <aws/servicediscovery/model/OperationFilter.h>
#include <aws/servicediscovery/model/OperationFilterName.h>
#include <aws/servicediscovery/model/OperationStatus.h>
#include <aws/servicediscovery/model/OperationSummary.h>
#include <aws/servicediscovery/model/OperationTargetType.h>
#include <aws/servicediscovery/model/OperationType.h>
#include <aws/servicediscovery/model/PrivateDnsNamespaceChange.h>
#include <aws/servicediscovery/model/PrivateDnsNamespaceProperties.h>
#include <aws/servicediscovery/model/PrivateDnsNamespacePropertiesChange.h>
#include <aws/servicediscovery/model/PrivateDnsPropertiesMutable.h>
#include <aws/servicediscovery/model/PrivateDnsPropertiesMutableChange.h>
#include <aws/servicediscovery/model/PublicDnsNamespaceChange.h>
#include <aws/servicediscovery/model/PublicDnsNamespaceProperties.h>
#include <aws/servicediscovery/model/PublicDnsNamespacePropertiesChange.h>
#include <aws/servicediscovery/model/PublicDnsPropertiesMutable.h>
#include <aws/servicediscovery/model/PublicDnsPropertiesMutableChange.h>
#include <aws/servicediscovery/model/RecordType.h>
#include <aws/servicediscovery/model/RegisterInstanceRequest.h>
#include <aws/servicediscovery/model/RegisterInstanceResult.h>
#include <aws/servicediscovery/model/RoutingPolicy.h>
#include <aws/servicediscovery/model/SOA.h>
#include <aws/servicediscovery/model/SOAChange.h>
#include <aws/servicediscovery/model/Service.h>
#include <aws/servicediscovery/model/ServiceAlreadyExists.h>
#include <aws/servicediscovery/model/ServiceAttributes.h>
#include <aws/servicediscovery/model/ServiceChange.h>
#include <aws/servicediscovery/model/ServiceFilter.h>
#include <aws/servicediscovery/model/ServiceFilterName.h>
#include <aws/servicediscovery/model/ServiceSummary.h>
#include <aws/servicediscovery/model/ServiceType.h>
#include <aws/servicediscovery/model/ServiceTypeOption.h>
#include <aws/servicediscovery/model/Tag.h>
#include <aws/servicediscovery/model/TagResourceRequest.h>
#include <aws/servicediscovery/model/TagResourceResult.h>
#include <aws/servicediscovery/model/TooManyTagsException.h>
#include <aws/servicediscovery/model/UntagResourceRequest.h>
#include <aws/servicediscovery/model/UntagResourceResult.h>
#include <aws/servicediscovery/model/UpdateHttpNamespaceRequest.h>
#include <aws/servicediscovery/model/UpdateHttpNamespaceResult.h>
#include <aws/servicediscovery/model/UpdateInstanceCustomHealthStatusRequest.h>
#include <aws/servicediscovery/model/UpdatePrivateDnsNamespaceRequest.h>
#include <aws/servicediscovery/model/UpdatePrivateDnsNamespaceResult.h>
#include <aws/servicediscovery/model/UpdatePublicDnsNamespaceRequest.h>
#include <aws/servicediscovery/model/UpdatePublicDnsNamespaceResult.h>
#include <aws/servicediscovery/model/UpdateServiceAttributesRequest.h>
#include <aws/servicediscovery/model/UpdateServiceAttributesResult.h>
#include <aws/servicediscovery/model/UpdateServiceRequest.h>
#include <aws/servicediscovery/model/UpdateServiceResult.h>

using ServiceDiscoveryIncludeTest = ::testing::Test;

TEST_F(ServiceDiscoveryIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ServiceDiscovery::ServiceDiscoveryClient>("ServiceDiscoveryIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
