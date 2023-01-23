/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/redshift/RedshiftClient.h>
#include <aws/redshift/RedshiftErrorMarshaller.h>
#include <aws/redshift/RedshiftEndpointProvider.h>
#include <aws/redshift/model/AcceptReservedNodeExchangeRequest.h>
#include <aws/redshift/model/AddPartnerRequest.h>
#include <aws/redshift/model/AssociateDataShareConsumerRequest.h>
#include <aws/redshift/model/AuthorizeClusterSecurityGroupIngressRequest.h>
#include <aws/redshift/model/AuthorizeDataShareRequest.h>
#include <aws/redshift/model/AuthorizeEndpointAccessRequest.h>
#include <aws/redshift/model/AuthorizeSnapshotAccessRequest.h>
#include <aws/redshift/model/BatchDeleteClusterSnapshotsRequest.h>
#include <aws/redshift/model/BatchModifyClusterSnapshotsRequest.h>
#include <aws/redshift/model/CancelResizeRequest.h>
#include <aws/redshift/model/CopyClusterSnapshotRequest.h>
#include <aws/redshift/model/CreateAuthenticationProfileRequest.h>
#include <aws/redshift/model/CreateClusterRequest.h>
#include <aws/redshift/model/CreateClusterParameterGroupRequest.h>
#include <aws/redshift/model/CreateClusterSecurityGroupRequest.h>
#include <aws/redshift/model/CreateClusterSnapshotRequest.h>
#include <aws/redshift/model/CreateClusterSubnetGroupRequest.h>
#include <aws/redshift/model/CreateEndpointAccessRequest.h>
#include <aws/redshift/model/CreateEventSubscriptionRequest.h>
#include <aws/redshift/model/CreateHsmClientCertificateRequest.h>
#include <aws/redshift/model/CreateHsmConfigurationRequest.h>
#include <aws/redshift/model/CreateScheduledActionRequest.h>
#include <aws/redshift/model/CreateSnapshotCopyGrantRequest.h>
#include <aws/redshift/model/CreateSnapshotScheduleRequest.h>
#include <aws/redshift/model/CreateTagsRequest.h>
#include <aws/redshift/model/CreateUsageLimitRequest.h>
#include <aws/redshift/model/DeauthorizeDataShareRequest.h>
#include <aws/redshift/model/DeleteAuthenticationProfileRequest.h>
#include <aws/redshift/model/DeleteClusterRequest.h>
#include <aws/redshift/model/DeleteClusterParameterGroupRequest.h>
#include <aws/redshift/model/DeleteClusterSecurityGroupRequest.h>
#include <aws/redshift/model/DeleteClusterSnapshotRequest.h>
#include <aws/redshift/model/DeleteClusterSubnetGroupRequest.h>
#include <aws/redshift/model/DeleteEndpointAccessRequest.h>
#include <aws/redshift/model/DeleteEventSubscriptionRequest.h>
#include <aws/redshift/model/DeleteHsmClientCertificateRequest.h>
#include <aws/redshift/model/DeleteHsmConfigurationRequest.h>
#include <aws/redshift/model/DeletePartnerRequest.h>
#include <aws/redshift/model/DeleteScheduledActionRequest.h>
#include <aws/redshift/model/DeleteSnapshotCopyGrantRequest.h>
#include <aws/redshift/model/DeleteSnapshotScheduleRequest.h>
#include <aws/redshift/model/DeleteTagsRequest.h>
#include <aws/redshift/model/DeleteUsageLimitRequest.h>
#include <aws/redshift/model/DescribeAccountAttributesRequest.h>
#include <aws/redshift/model/DescribeAuthenticationProfilesRequest.h>
#include <aws/redshift/model/DescribeClusterDbRevisionsRequest.h>
#include <aws/redshift/model/DescribeClusterParameterGroupsRequest.h>
#include <aws/redshift/model/DescribeClusterParametersRequest.h>
#include <aws/redshift/model/DescribeClusterSecurityGroupsRequest.h>
#include <aws/redshift/model/DescribeClusterSnapshotsRequest.h>
#include <aws/redshift/model/DescribeClusterSubnetGroupsRequest.h>
#include <aws/redshift/model/DescribeClusterTracksRequest.h>
#include <aws/redshift/model/DescribeClusterVersionsRequest.h>
#include <aws/redshift/model/DescribeClustersRequest.h>
#include <aws/redshift/model/DescribeDataSharesRequest.h>
#include <aws/redshift/model/DescribeDataSharesForConsumerRequest.h>
#include <aws/redshift/model/DescribeDataSharesForProducerRequest.h>
#include <aws/redshift/model/DescribeDefaultClusterParametersRequest.h>
#include <aws/redshift/model/DescribeEndpointAccessRequest.h>
#include <aws/redshift/model/DescribeEndpointAuthorizationRequest.h>
#include <aws/redshift/model/DescribeEventCategoriesRequest.h>
#include <aws/redshift/model/DescribeEventSubscriptionsRequest.h>
#include <aws/redshift/model/DescribeEventsRequest.h>
#include <aws/redshift/model/DescribeHsmClientCertificatesRequest.h>
#include <aws/redshift/model/DescribeHsmConfigurationsRequest.h>
#include <aws/redshift/model/DescribeLoggingStatusRequest.h>
#include <aws/redshift/model/DescribeNodeConfigurationOptionsRequest.h>
#include <aws/redshift/model/DescribeOrderableClusterOptionsRequest.h>
#include <aws/redshift/model/DescribePartnersRequest.h>
#include <aws/redshift/model/DescribeReservedNodeExchangeStatusRequest.h>
#include <aws/redshift/model/DescribeReservedNodeOfferingsRequest.h>
#include <aws/redshift/model/DescribeReservedNodesRequest.h>
#include <aws/redshift/model/DescribeResizeRequest.h>
#include <aws/redshift/model/DescribeScheduledActionsRequest.h>
#include <aws/redshift/model/DescribeSnapshotCopyGrantsRequest.h>
#include <aws/redshift/model/DescribeSnapshotSchedulesRequest.h>
#include <aws/redshift/model/DescribeStorageRequest.h>
#include <aws/redshift/model/DescribeTableRestoreStatusRequest.h>
#include <aws/redshift/model/DescribeTagsRequest.h>
#include <aws/redshift/model/DescribeUsageLimitsRequest.h>
#include <aws/redshift/model/DisableLoggingRequest.h>
#include <aws/redshift/model/DisableSnapshotCopyRequest.h>
#include <aws/redshift/model/DisassociateDataShareConsumerRequest.h>
#include <aws/redshift/model/EnableLoggingRequest.h>
#include <aws/redshift/model/EnableSnapshotCopyRequest.h>
#include <aws/redshift/model/GetClusterCredentialsRequest.h>
#include <aws/redshift/model/GetClusterCredentialsWithIAMRequest.h>
#include <aws/redshift/model/GetReservedNodeExchangeConfigurationOptionsRequest.h>
#include <aws/redshift/model/GetReservedNodeExchangeOfferingsRequest.h>
#include <aws/redshift/model/ModifyAquaConfigurationRequest.h>
#include <aws/redshift/model/ModifyAuthenticationProfileRequest.h>
#include <aws/redshift/model/ModifyClusterRequest.h>
#include <aws/redshift/model/ModifyClusterDbRevisionRequest.h>
#include <aws/redshift/model/ModifyClusterIamRolesRequest.h>
#include <aws/redshift/model/ModifyClusterMaintenanceRequest.h>
#include <aws/redshift/model/ModifyClusterParameterGroupRequest.h>
#include <aws/redshift/model/ModifyClusterSnapshotRequest.h>
#include <aws/redshift/model/ModifyClusterSnapshotScheduleRequest.h>
#include <aws/redshift/model/ModifyClusterSubnetGroupRequest.h>
#include <aws/redshift/model/ModifyEndpointAccessRequest.h>
#include <aws/redshift/model/ModifyEventSubscriptionRequest.h>
#include <aws/redshift/model/ModifyScheduledActionRequest.h>
#include <aws/redshift/model/ModifySnapshotCopyRetentionPeriodRequest.h>
#include <aws/redshift/model/ModifySnapshotScheduleRequest.h>
#include <aws/redshift/model/ModifyUsageLimitRequest.h>
#include <aws/redshift/model/PauseClusterRequest.h>
#include <aws/redshift/model/PurchaseReservedNodeOfferingRequest.h>
#include <aws/redshift/model/RebootClusterRequest.h>
#include <aws/redshift/model/RejectDataShareRequest.h>
#include <aws/redshift/model/ResetClusterParameterGroupRequest.h>
#include <aws/redshift/model/ResizeClusterRequest.h>
#include <aws/redshift/model/RestoreFromClusterSnapshotRequest.h>
#include <aws/redshift/model/RestoreTableFromClusterSnapshotRequest.h>
#include <aws/redshift/model/ResumeClusterRequest.h>
#include <aws/redshift/model/RevokeClusterSecurityGroupIngressRequest.h>
#include <aws/redshift/model/RevokeEndpointAccessRequest.h>
#include <aws/redshift/model/RevokeSnapshotAccessRequest.h>
#include <aws/redshift/model/RotateEncryptionKeyRequest.h>
#include <aws/redshift/model/UpdatePartnerStatusRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Redshift;
using namespace Aws::Redshift::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* RedshiftClient::SERVICE_NAME = "redshift";
const char* RedshiftClient::ALLOCATION_TAG = "RedshiftClient";

RedshiftClient::RedshiftClient(const Redshift::RedshiftClientConfiguration& clientConfiguration,
                               std::shared_ptr<RedshiftEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

RedshiftClient::RedshiftClient(const AWSCredentials& credentials,
                               std::shared_ptr<RedshiftEndpointProviderBase> endpointProvider,
                               const Redshift::RedshiftClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

RedshiftClient::RedshiftClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<RedshiftEndpointProviderBase> endpointProvider,
                               const Redshift::RedshiftClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  RedshiftClient::RedshiftClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<RedshiftEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

RedshiftClient::RedshiftClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<RedshiftEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

RedshiftClient::RedshiftClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<RedshiftEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
RedshiftClient::~RedshiftClient()
{
}

std::shared_ptr<RedshiftEndpointProviderBase>& RedshiftClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void RedshiftClient::init(const Redshift::RedshiftClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Redshift");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void RedshiftClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String RedshiftClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  if (!m_endpointProvider)
  {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess())
  {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AcceptReservedNodeExchangeOutcome RedshiftClient::AcceptReservedNodeExchange(const AcceptReservedNodeExchangeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptReservedNodeExchange, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptReservedNodeExchange, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AcceptReservedNodeExchangeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AddPartnerOutcome RedshiftClient::AddPartner(const AddPartnerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddPartner, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddPartner, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AddPartnerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AssociateDataShareConsumerOutcome RedshiftClient::AssociateDataShareConsumer(const AssociateDataShareConsumerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateDataShareConsumer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateDataShareConsumer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AssociateDataShareConsumerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeClusterSecurityGroupIngressOutcome RedshiftClient::AuthorizeClusterSecurityGroupIngress(const AuthorizeClusterSecurityGroupIngressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AuthorizeClusterSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AuthorizeClusterSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AuthorizeClusterSecurityGroupIngressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeDataShareOutcome RedshiftClient::AuthorizeDataShare(const AuthorizeDataShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AuthorizeDataShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AuthorizeDataShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AuthorizeDataShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeEndpointAccessOutcome RedshiftClient::AuthorizeEndpointAccess(const AuthorizeEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AuthorizeEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AuthorizeEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AuthorizeEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

AuthorizeSnapshotAccessOutcome RedshiftClient::AuthorizeSnapshotAccess(const AuthorizeSnapshotAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AuthorizeSnapshotAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AuthorizeSnapshotAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AuthorizeSnapshotAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

BatchDeleteClusterSnapshotsOutcome RedshiftClient::BatchDeleteClusterSnapshots(const BatchDeleteClusterSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeleteClusterSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDeleteClusterSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchDeleteClusterSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

BatchModifyClusterSnapshotsOutcome RedshiftClient::BatchModifyClusterSnapshots(const BatchModifyClusterSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchModifyClusterSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchModifyClusterSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchModifyClusterSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CancelResizeOutcome RedshiftClient::CancelResize(const CancelResizeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelResize, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelResize, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CancelResizeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CopyClusterSnapshotOutcome RedshiftClient::CopyClusterSnapshot(const CopyClusterSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyClusterSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopyClusterSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CopyClusterSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateAuthenticationProfileOutcome RedshiftClient::CreateAuthenticationProfile(const CreateAuthenticationProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAuthenticationProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAuthenticationProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateAuthenticationProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateClusterOutcome RedshiftClient::CreateCluster(const CreateClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateClusterParameterGroupOutcome RedshiftClient::CreateClusterParameterGroup(const CreateClusterParameterGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateClusterParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateClusterParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateClusterParameterGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateClusterSecurityGroupOutcome RedshiftClient::CreateClusterSecurityGroup(const CreateClusterSecurityGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateClusterSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateClusterSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateClusterSecurityGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateClusterSnapshotOutcome RedshiftClient::CreateClusterSnapshot(const CreateClusterSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateClusterSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateClusterSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateClusterSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateClusterSubnetGroupOutcome RedshiftClient::CreateClusterSubnetGroup(const CreateClusterSubnetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateClusterSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateClusterSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateClusterSubnetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateEndpointAccessOutcome RedshiftClient::CreateEndpointAccess(const CreateEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateEventSubscriptionOutcome RedshiftClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEventSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateHsmClientCertificateOutcome RedshiftClient::CreateHsmClientCertificate(const CreateHsmClientCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateHsmClientCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateHsmClientCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateHsmClientCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateHsmConfigurationOutcome RedshiftClient::CreateHsmConfiguration(const CreateHsmConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateHsmConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateHsmConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateHsmConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateScheduledActionOutcome RedshiftClient::CreateScheduledAction(const CreateScheduledActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateScheduledAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateScheduledAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateScheduledActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateSnapshotCopyGrantOutcome RedshiftClient::CreateSnapshotCopyGrant(const CreateSnapshotCopyGrantRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSnapshotCopyGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSnapshotCopyGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSnapshotCopyGrantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateSnapshotScheduleOutcome RedshiftClient::CreateSnapshotSchedule(const CreateSnapshotScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSnapshotSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSnapshotSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSnapshotScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateTagsOutcome RedshiftClient::CreateTags(const CreateTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateUsageLimitOutcome RedshiftClient::CreateUsageLimit(const CreateUsageLimitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUsageLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUsageLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateUsageLimitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeauthorizeDataShareOutcome RedshiftClient::DeauthorizeDataShare(const DeauthorizeDataShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeauthorizeDataShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeauthorizeDataShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeauthorizeDataShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteAuthenticationProfileOutcome RedshiftClient::DeleteAuthenticationProfile(const DeleteAuthenticationProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAuthenticationProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAuthenticationProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAuthenticationProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteClusterOutcome RedshiftClient::DeleteCluster(const DeleteClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteClusterParameterGroupOutcome RedshiftClient::DeleteClusterParameterGroup(const DeleteClusterParameterGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteClusterParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteClusterParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteClusterParameterGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteClusterSecurityGroupOutcome RedshiftClient::DeleteClusterSecurityGroup(const DeleteClusterSecurityGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteClusterSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteClusterSecurityGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteClusterSecurityGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteClusterSnapshotOutcome RedshiftClient::DeleteClusterSnapshot(const DeleteClusterSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteClusterSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteClusterSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteClusterSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteClusterSubnetGroupOutcome RedshiftClient::DeleteClusterSubnetGroup(const DeleteClusterSubnetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteClusterSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteClusterSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteClusterSubnetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteEndpointAccessOutcome RedshiftClient::DeleteEndpointAccess(const DeleteEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteEventSubscriptionOutcome RedshiftClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEventSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteHsmClientCertificateOutcome RedshiftClient::DeleteHsmClientCertificate(const DeleteHsmClientCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteHsmClientCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteHsmClientCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteHsmClientCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteHsmConfigurationOutcome RedshiftClient::DeleteHsmConfiguration(const DeleteHsmConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteHsmConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteHsmConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteHsmConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeletePartnerOutcome RedshiftClient::DeletePartner(const DeletePartnerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePartner, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePartner, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePartnerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteScheduledActionOutcome RedshiftClient::DeleteScheduledAction(const DeleteScheduledActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteScheduledAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteScheduledAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteScheduledActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSnapshotCopyGrantOutcome RedshiftClient::DeleteSnapshotCopyGrant(const DeleteSnapshotCopyGrantRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSnapshotCopyGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSnapshotCopyGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSnapshotCopyGrantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSnapshotScheduleOutcome RedshiftClient::DeleteSnapshotSchedule(const DeleteSnapshotScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSnapshotSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSnapshotSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSnapshotScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTagsOutcome RedshiftClient::DeleteTags(const DeleteTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteUsageLimitOutcome RedshiftClient::DeleteUsageLimit(const DeleteUsageLimitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUsageLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUsageLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteUsageLimitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAccountAttributesOutcome RedshiftClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAccountAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAuthenticationProfilesOutcome RedshiftClient::DescribeAuthenticationProfiles(const DescribeAuthenticationProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAuthenticationProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAuthenticationProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAuthenticationProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterDbRevisionsOutcome RedshiftClient::DescribeClusterDbRevisions(const DescribeClusterDbRevisionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClusterDbRevisions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClusterDbRevisions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClusterDbRevisionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterParameterGroupsOutcome RedshiftClient::DescribeClusterParameterGroups(const DescribeClusterParameterGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClusterParameterGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClusterParameterGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClusterParameterGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterParametersOutcome RedshiftClient::DescribeClusterParameters(const DescribeClusterParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClusterParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClusterParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClusterParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterSecurityGroupsOutcome RedshiftClient::DescribeClusterSecurityGroups(const DescribeClusterSecurityGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClusterSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClusterSecurityGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClusterSecurityGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterSnapshotsOutcome RedshiftClient::DescribeClusterSnapshots(const DescribeClusterSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClusterSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClusterSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClusterSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterSubnetGroupsOutcome RedshiftClient::DescribeClusterSubnetGroups(const DescribeClusterSubnetGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClusterSubnetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClusterSubnetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClusterSubnetGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterTracksOutcome RedshiftClient::DescribeClusterTracks(const DescribeClusterTracksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClusterTracks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClusterTracks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClusterTracksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClusterVersionsOutcome RedshiftClient::DescribeClusterVersions(const DescribeClusterVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClusterVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClusterVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClusterVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeClustersOutcome RedshiftClient::DescribeClusters(const DescribeClustersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeClusters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeClustersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDataSharesOutcome RedshiftClient::DescribeDataShares(const DescribeDataSharesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataShares, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDataSharesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDataSharesForConsumerOutcome RedshiftClient::DescribeDataSharesForConsumer(const DescribeDataSharesForConsumerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataSharesForConsumer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataSharesForConsumer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDataSharesForConsumerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDataSharesForProducerOutcome RedshiftClient::DescribeDataSharesForProducer(const DescribeDataSharesForProducerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataSharesForProducer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataSharesForProducer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDataSharesForProducerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDefaultClusterParametersOutcome RedshiftClient::DescribeDefaultClusterParameters(const DescribeDefaultClusterParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDefaultClusterParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDefaultClusterParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDefaultClusterParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEndpointAccessOutcome RedshiftClient::DescribeEndpointAccess(const DescribeEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEndpointAuthorizationOutcome RedshiftClient::DescribeEndpointAuthorization(const DescribeEndpointAuthorizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEndpointAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEndpointAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEndpointAuthorizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventCategoriesOutcome RedshiftClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEventCategories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEventCategories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventCategoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventSubscriptionsOutcome RedshiftClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEventSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEventSubscriptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventSubscriptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeEventsOutcome RedshiftClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeHsmClientCertificatesOutcome RedshiftClient::DescribeHsmClientCertificates(const DescribeHsmClientCertificatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHsmClientCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHsmClientCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeHsmClientCertificatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeHsmConfigurationsOutcome RedshiftClient::DescribeHsmConfigurations(const DescribeHsmConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHsmConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHsmConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeHsmConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLoggingStatusOutcome RedshiftClient::DescribeLoggingStatus(const DescribeLoggingStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeLoggingStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeLoggingStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeLoggingStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeNodeConfigurationOptionsOutcome RedshiftClient::DescribeNodeConfigurationOptions(const DescribeNodeConfigurationOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNodeConfigurationOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNodeConfigurationOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeNodeConfigurationOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeOrderableClusterOptionsOutcome RedshiftClient::DescribeOrderableClusterOptions(const DescribeOrderableClusterOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOrderableClusterOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOrderableClusterOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeOrderableClusterOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribePartnersOutcome RedshiftClient::DescribePartners(const DescribePartnersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePartners, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePartners, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePartnersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedNodeExchangeStatusOutcome RedshiftClient::DescribeReservedNodeExchangeStatus(const DescribeReservedNodeExchangeStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedNodeExchangeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedNodeExchangeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReservedNodeExchangeStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedNodeOfferingsOutcome RedshiftClient::DescribeReservedNodeOfferings(const DescribeReservedNodeOfferingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedNodeOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedNodeOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReservedNodeOfferingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeReservedNodesOutcome RedshiftClient::DescribeReservedNodes(const DescribeReservedNodesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReservedNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReservedNodes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeReservedNodesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeResizeOutcome RedshiftClient::DescribeResize(const DescribeResizeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeResize, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeResize, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeResizeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeScheduledActionsOutcome RedshiftClient::DescribeScheduledActions(const DescribeScheduledActionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeScheduledActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeScheduledActions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeScheduledActionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSnapshotCopyGrantsOutcome RedshiftClient::DescribeSnapshotCopyGrants(const DescribeSnapshotCopyGrantsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSnapshotCopyGrants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSnapshotCopyGrants, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSnapshotCopyGrantsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSnapshotSchedulesOutcome RedshiftClient::DescribeSnapshotSchedules(const DescribeSnapshotSchedulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSnapshotSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSnapshotSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSnapshotSchedulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeStorageOutcome RedshiftClient::DescribeStorage(const DescribeStorageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeStorage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeStorageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTableRestoreStatusOutcome RedshiftClient::DescribeTableRestoreStatus(const DescribeTableRestoreStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTableRestoreStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTableRestoreStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTableRestoreStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTagsOutcome RedshiftClient::DescribeTags(const DescribeTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DescribeUsageLimitsOutcome RedshiftClient::DescribeUsageLimits(const DescribeUsageLimitsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUsageLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUsageLimits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeUsageLimitsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableLoggingOutcome RedshiftClient::DisableLogging(const DisableLoggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableLoggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisableSnapshotCopyOutcome RedshiftClient::DisableSnapshotCopy(const DisableSnapshotCopyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableSnapshotCopy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableSnapshotCopy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableSnapshotCopyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DisassociateDataShareConsumerOutcome RedshiftClient::DisassociateDataShareConsumer(const DisassociateDataShareConsumerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateDataShareConsumer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateDataShareConsumer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisassociateDataShareConsumerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableLoggingOutcome RedshiftClient::EnableLogging(const EnableLoggingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableLogging, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableLoggingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

EnableSnapshotCopyOutcome RedshiftClient::EnableSnapshotCopy(const EnableSnapshotCopyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableSnapshotCopy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableSnapshotCopy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableSnapshotCopyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetClusterCredentialsOutcome RedshiftClient::GetClusterCredentials(const GetClusterCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetClusterCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetClusterCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetClusterCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetClusterCredentialsWithIAMOutcome RedshiftClient::GetClusterCredentialsWithIAM(const GetClusterCredentialsWithIAMRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetClusterCredentialsWithIAM, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetClusterCredentialsWithIAM, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetClusterCredentialsWithIAMOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetReservedNodeExchangeConfigurationOptionsOutcome RedshiftClient::GetReservedNodeExchangeConfigurationOptions(const GetReservedNodeExchangeConfigurationOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReservedNodeExchangeConfigurationOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReservedNodeExchangeConfigurationOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetReservedNodeExchangeConfigurationOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetReservedNodeExchangeOfferingsOutcome RedshiftClient::GetReservedNodeExchangeOfferings(const GetReservedNodeExchangeOfferingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReservedNodeExchangeOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReservedNodeExchangeOfferings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetReservedNodeExchangeOfferingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyAquaConfigurationOutcome RedshiftClient::ModifyAquaConfiguration(const ModifyAquaConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyAquaConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyAquaConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyAquaConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyAuthenticationProfileOutcome RedshiftClient::ModifyAuthenticationProfile(const ModifyAuthenticationProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyAuthenticationProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyAuthenticationProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyAuthenticationProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterOutcome RedshiftClient::ModifyCluster(const ModifyClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterDbRevisionOutcome RedshiftClient::ModifyClusterDbRevision(const ModifyClusterDbRevisionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyClusterDbRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyClusterDbRevision, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyClusterDbRevisionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterIamRolesOutcome RedshiftClient::ModifyClusterIamRoles(const ModifyClusterIamRolesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyClusterIamRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyClusterIamRoles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyClusterIamRolesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterMaintenanceOutcome RedshiftClient::ModifyClusterMaintenance(const ModifyClusterMaintenanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyClusterMaintenance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyClusterMaintenance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyClusterMaintenanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterParameterGroupOutcome RedshiftClient::ModifyClusterParameterGroup(const ModifyClusterParameterGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyClusterParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyClusterParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyClusterParameterGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterSnapshotOutcome RedshiftClient::ModifyClusterSnapshot(const ModifyClusterSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyClusterSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyClusterSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyClusterSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterSnapshotScheduleOutcome RedshiftClient::ModifyClusterSnapshotSchedule(const ModifyClusterSnapshotScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyClusterSnapshotSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyClusterSnapshotSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyClusterSnapshotScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyClusterSubnetGroupOutcome RedshiftClient::ModifyClusterSubnetGroup(const ModifyClusterSubnetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyClusterSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyClusterSubnetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyClusterSubnetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyEndpointAccessOutcome RedshiftClient::ModifyEndpointAccess(const ModifyEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyEventSubscriptionOutcome RedshiftClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyEventSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyEventSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyScheduledActionOutcome RedshiftClient::ModifyScheduledAction(const ModifyScheduledActionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyScheduledAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyScheduledAction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyScheduledActionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifySnapshotCopyRetentionPeriodOutcome RedshiftClient::ModifySnapshotCopyRetentionPeriod(const ModifySnapshotCopyRetentionPeriodRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifySnapshotCopyRetentionPeriod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifySnapshotCopyRetentionPeriod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifySnapshotCopyRetentionPeriodOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifySnapshotScheduleOutcome RedshiftClient::ModifySnapshotSchedule(const ModifySnapshotScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifySnapshotSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifySnapshotSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifySnapshotScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ModifyUsageLimitOutcome RedshiftClient::ModifyUsageLimit(const ModifyUsageLimitRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ModifyUsageLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ModifyUsageLimit, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ModifyUsageLimitOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PauseClusterOutcome RedshiftClient::PauseCluster(const PauseClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PauseCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PauseCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PauseClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PurchaseReservedNodeOfferingOutcome RedshiftClient::PurchaseReservedNodeOffering(const PurchaseReservedNodeOfferingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PurchaseReservedNodeOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PurchaseReservedNodeOffering, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PurchaseReservedNodeOfferingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RebootClusterOutcome RedshiftClient::RebootCluster(const RebootClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebootCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebootCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RebootClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RejectDataShareOutcome RedshiftClient::RejectDataShare(const RejectDataShareRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RejectDataShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RejectDataShare, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RejectDataShareOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResetClusterParameterGroupOutcome RedshiftClient::ResetClusterParameterGroup(const ResetClusterParameterGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetClusterParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetClusterParameterGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetClusterParameterGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResizeClusterOutcome RedshiftClient::ResizeCluster(const ResizeClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResizeCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResizeCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResizeClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RestoreFromClusterSnapshotOutcome RedshiftClient::RestoreFromClusterSnapshot(const RestoreFromClusterSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreFromClusterSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreFromClusterSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreFromClusterSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RestoreTableFromClusterSnapshotOutcome RedshiftClient::RestoreTableFromClusterSnapshot(const RestoreTableFromClusterSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreTableFromClusterSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreTableFromClusterSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RestoreTableFromClusterSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ResumeClusterOutcome RedshiftClient::ResumeCluster(const ResumeClusterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResumeCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResumeCluster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResumeClusterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RevokeClusterSecurityGroupIngressOutcome RedshiftClient::RevokeClusterSecurityGroupIngress(const RevokeClusterSecurityGroupIngressRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeClusterSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeClusterSecurityGroupIngress, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RevokeClusterSecurityGroupIngressOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RevokeEndpointAccessOutcome RedshiftClient::RevokeEndpointAccess(const RevokeEndpointAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeEndpointAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RevokeEndpointAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RevokeSnapshotAccessOutcome RedshiftClient::RevokeSnapshotAccess(const RevokeSnapshotAccessRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokeSnapshotAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokeSnapshotAccess, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RevokeSnapshotAccessOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

RotateEncryptionKeyOutcome RedshiftClient::RotateEncryptionKey(const RotateEncryptionKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RotateEncryptionKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RotateEncryptionKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RotateEncryptionKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UpdatePartnerStatusOutcome RedshiftClient::UpdatePartnerStatus(const UpdatePartnerStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePartnerStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePartnerStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdatePartnerStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

