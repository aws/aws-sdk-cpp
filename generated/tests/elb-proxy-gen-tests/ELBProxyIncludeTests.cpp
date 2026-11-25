/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/elb-proxy/ELBProxyClient.h>
#include <aws/elb-proxy/ELBProxyClientPagination.h>
#include <aws/elb-proxy/ELBProxyEndpointProvider.h>
#include <aws/elb-proxy/ELBProxyErrorMarshaller.h>
#include <aws/elb-proxy/ELBProxyErrors.h>
#include <aws/elb-proxy/ELBProxyPaginationBase.h>
#include <aws/elb-proxy/ELBProxyRequest.h>
#include <aws/elb-proxy/ELBProxyServiceClientModel.h>
#include <aws/elb-proxy/ELBProxyWaiter.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/internal/ELBProxyEndpointRules.h>
#include <aws/elb-proxy/model/AssociateCertificateRequest.h>
#include <aws/elb-proxy/model/AssociateCertificateResult.h>
#include <aws/elb-proxy/model/Attribute.h>
#include <aws/elb-proxy/model/AttributeDetails.h>
#include <aws/elb-proxy/model/CertificateAssociation.h>
#include <aws/elb-proxy/model/CertificateAssociationStatus.h>
#include <aws/elb-proxy/model/CertificateAssociationStatusCode.h>
#include <aws/elb-proxy/model/CertificateAssociationStatusReason.h>
#include <aws/elb-proxy/model/ConfigurationArchive.h>
#include <aws/elb-proxy/model/ConfigurationFile.h>
#include <aws/elb-proxy/model/ConfigurationMetadata.h>
#include <aws/elb-proxy/model/CreateProxyRequest.h>
#include <aws/elb-proxy/model/CreateProxyResult.h>
#include <aws/elb-proxy/model/DeleteProxyRequest.h>
#include <aws/elb-proxy/model/DeleteProxyResult.h>
#include <aws/elb-proxy/model/DisassociateCertificateRequest.h>
#include <aws/elb-proxy/model/DisassociateCertificateResult.h>
#include <aws/elb-proxy/model/GetProxyAttributesRequest.h>
#include <aws/elb-proxy/model/GetProxyAttributesResult.h>
#include <aws/elb-proxy/model/GetProxyConfigurationContentsRequest.h>
#include <aws/elb-proxy/model/GetProxyConfigurationContentsResult.h>
#include <aws/elb-proxy/model/GetProxyRequest.h>
#include <aws/elb-proxy/model/GetProxyResult.h>
#include <aws/elb-proxy/model/GetProxyUpdateRequest.h>
#include <aws/elb-proxy/model/GetProxyUpdateResult.h>
#include <aws/elb-proxy/model/ListCertificateAssociationsPaginationTraits.h>
#include <aws/elb-proxy/model/ListCertificateAssociationsRequest.h>
#include <aws/elb-proxy/model/ListCertificateAssociationsResult.h>
#include <aws/elb-proxy/model/ListProxiesPaginationTraits.h>
#include <aws/elb-proxy/model/ListProxiesRequest.h>
#include <aws/elb-proxy/model/ListProxiesResult.h>
#include <aws/elb-proxy/model/ListProxyUpdatesPaginationTraits.h>
#include <aws/elb-proxy/model/ListProxyUpdatesRequest.h>
#include <aws/elb-proxy/model/ListProxyUpdatesResult.h>
#include <aws/elb-proxy/model/ListProxyVersionsPaginationTraits.h>
#include <aws/elb-proxy/model/ListProxyVersionsRequest.h>
#include <aws/elb-proxy/model/ListProxyVersionsResult.h>
#include <aws/elb-proxy/model/ListTagsForResourceRequest.h>
#include <aws/elb-proxy/model/ListTagsForResourceResult.h>
#include <aws/elb-proxy/model/ProxyConfiguration.h>
#include <aws/elb-proxy/model/ProxyConfigurationUpdateDetails.h>
#include <aws/elb-proxy/model/ProxyIpAddressingConfiguration.h>
#include <aws/elb-proxy/model/ProxyIpConfiguration.h>
#include <aws/elb-proxy/model/ProxyIpv4Addressability.h>
#include <aws/elb-proxy/model/ProxyIpv6Addressability.h>
#include <aws/elb-proxy/model/ProxyNetworkConfiguration.h>
#include <aws/elb-proxy/model/ProxyNetworkUserConfiguration.h>
#include <aws/elb-proxy/model/ProxyStatus.h>
#include <aws/elb-proxy/model/ProxyStatusCode.h>
#include <aws/elb-proxy/model/ProxyStatusReason.h>
#include <aws/elb-proxy/model/ProxySummary.h>
#include <aws/elb-proxy/model/ProxyType.h>
#include <aws/elb-proxy/model/ProxyUpdateDetails.h>
#include <aws/elb-proxy/model/ProxyUpdatePropagationStatus.h>
#include <aws/elb-proxy/model/ProxyUpdateState.h>
#include <aws/elb-proxy/model/ProxyUpdateSummary.h>
#include <aws/elb-proxy/model/ProxyUpdateType.h>
#include <aws/elb-proxy/model/ProxyUpdateValidationStatus.h>
#include <aws/elb-proxy/model/ProxyVersionSummary.h>
#include <aws/elb-proxy/model/ProxyVpcConfiguration.h>
#include <aws/elb-proxy/model/ProxyVpcUserConfiguration.h>
#include <aws/elb-proxy/model/SecurityGroupDetails.h>
#include <aws/elb-proxy/model/ServiceQuotaExceededException.h>
#include <aws/elb-proxy/model/SubnetAndZone.h>
#include <aws/elb-proxy/model/SubnetDetails.h>
#include <aws/elb-proxy/model/TagResourceRequest.h>
#include <aws/elb-proxy/model/TagResourceResult.h>
#include <aws/elb-proxy/model/UntagResourceRequest.h>
#include <aws/elb-proxy/model/UntagResourceResult.h>
#include <aws/elb-proxy/model/UpdateProxyAttributesRequest.h>
#include <aws/elb-proxy/model/UpdateProxyAttributesResult.h>
#include <aws/elb-proxy/model/UpdateProxyConfigurationRequest.h>
#include <aws/elb-proxy/model/UpdateProxyConfigurationResult.h>
#include <aws/elb-proxy/model/UpdateProxyNetworkConfigurationRequest.h>
#include <aws/elb-proxy/model/UpdateProxyNetworkConfigurationResult.h>
#include <aws/elb-proxy/model/UpdateProxyVpcConfiguration.h>

using ELBProxyIncludeTest = ::testing::Test;

TEST_F(ELBProxyIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ELBProxy::ELBProxyClient>("ELBProxyIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
