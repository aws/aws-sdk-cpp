/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/redshift/RedshiftClient.h>
#include <aws/redshift/RedshiftEndpointProvider.h>
#include <aws/redshift/RedshiftErrorMarshaller.h>
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
#include <aws/redshift/model/CreateClusterParameterGroupRequest.h>
#include <aws/redshift/model/CreateClusterRequest.h>
#include <aws/redshift/model/CreateClusterSecurityGroupRequest.h>
#include <aws/redshift/model/CreateClusterSnapshotRequest.h>
#include <aws/redshift/model/CreateClusterSubnetGroupRequest.h>
#include <aws/redshift/model/CreateCustomDomainAssociationRequest.h>
#include <aws/redshift/model/CreateEndpointAccessRequest.h>
#include <aws/redshift/model/CreateEventSubscriptionRequest.h>
#include <aws/redshift/model/CreateHsmClientCertificateRequest.h>
#include <aws/redshift/model/CreateHsmConfigurationRequest.h>
#include <aws/redshift/model/CreateIntegrationRequest.h>
#include <aws/redshift/model/CreateRedshiftIdcApplicationRequest.h>
#include <aws/redshift/model/CreateScheduledActionRequest.h>
#include <aws/redshift/model/CreateSnapshotCopyGrantRequest.h>
#include <aws/redshift/model/CreateSnapshotScheduleRequest.h>
#include <aws/redshift/model/CreateTagsRequest.h>
#include <aws/redshift/model/CreateUsageLimitRequest.h>
#include <aws/redshift/model/DeauthorizeDataShareRequest.h>
#include <aws/redshift/model/DeleteAuthenticationProfileRequest.h>
#include <aws/redshift/model/DeleteClusterParameterGroupRequest.h>
#include <aws/redshift/model/DeleteClusterRequest.h>
#include <aws/redshift/model/DeleteClusterSecurityGroupRequest.h>
#include <aws/redshift/model/DeleteClusterSnapshotRequest.h>
#include <aws/redshift/model/DeleteClusterSubnetGroupRequest.h>
#include <aws/redshift/model/DeleteCustomDomainAssociationRequest.h>
#include <aws/redshift/model/DeleteEndpointAccessRequest.h>
#include <aws/redshift/model/DeleteEventSubscriptionRequest.h>
#include <aws/redshift/model/DeleteHsmClientCertificateRequest.h>
#include <aws/redshift/model/DeleteHsmConfigurationRequest.h>
#include <aws/redshift/model/DeleteIntegrationRequest.h>
#include <aws/redshift/model/DeletePartnerRequest.h>
#include <aws/redshift/model/DeleteRedshiftIdcApplicationRequest.h>
#include <aws/redshift/model/DeleteResourcePolicyRequest.h>
#include <aws/redshift/model/DeleteScheduledActionRequest.h>
#include <aws/redshift/model/DeleteSnapshotCopyGrantRequest.h>
#include <aws/redshift/model/DeleteSnapshotScheduleRequest.h>
#include <aws/redshift/model/DeleteTagsRequest.h>
#include <aws/redshift/model/DeleteUsageLimitRequest.h>
#include <aws/redshift/model/DeregisterNamespaceRequest.h>
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
#include <aws/redshift/model/DescribeCustomDomainAssociationsRequest.h>
#include <aws/redshift/model/DescribeDataSharesForConsumerRequest.h>
#include <aws/redshift/model/DescribeDataSharesForProducerRequest.h>
#include <aws/redshift/model/DescribeDataSharesRequest.h>
#include <aws/redshift/model/DescribeDefaultClusterParametersRequest.h>
#include <aws/redshift/model/DescribeEndpointAccessRequest.h>
#include <aws/redshift/model/DescribeEndpointAuthorizationRequest.h>
#include <aws/redshift/model/DescribeEventCategoriesRequest.h>
#include <aws/redshift/model/DescribeEventSubscriptionsRequest.h>
#include <aws/redshift/model/DescribeEventsRequest.h>
#include <aws/redshift/model/DescribeHsmClientCertificatesRequest.h>
#include <aws/redshift/model/DescribeHsmConfigurationsRequest.h>
#include <aws/redshift/model/DescribeInboundIntegrationsRequest.h>
#include <aws/redshift/model/DescribeIntegrationsRequest.h>
#include <aws/redshift/model/DescribeLoggingStatusRequest.h>
#include <aws/redshift/model/DescribeNodeConfigurationOptionsRequest.h>
#include <aws/redshift/model/DescribeOrderableClusterOptionsRequest.h>
#include <aws/redshift/model/DescribePartnersRequest.h>
#include <aws/redshift/model/DescribeRedshiftIdcApplicationsRequest.h>
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
#include <aws/redshift/model/FailoverPrimaryComputeRequest.h>
#include <aws/redshift/model/GetClusterCredentialsRequest.h>
#include <aws/redshift/model/GetClusterCredentialsWithIAMRequest.h>
#include <aws/redshift/model/GetIdentityCenterAuthTokenRequest.h>
#include <aws/redshift/model/GetReservedNodeExchangeConfigurationOptionsRequest.h>
#include <aws/redshift/model/GetReservedNodeExchangeOfferingsRequest.h>
#include <aws/redshift/model/GetResourcePolicyRequest.h>
#include <aws/redshift/model/ListRecommendationsRequest.h>
#include <aws/redshift/model/ModifyAquaConfigurationRequest.h>
#include <aws/redshift/model/ModifyAuthenticationProfileRequest.h>
#include <aws/redshift/model/ModifyClusterDbRevisionRequest.h>
#include <aws/redshift/model/ModifyClusterIamRolesRequest.h>
#include <aws/redshift/model/ModifyClusterMaintenanceRequest.h>
#include <aws/redshift/model/ModifyClusterParameterGroupRequest.h>
#include <aws/redshift/model/ModifyClusterRequest.h>
#include <aws/redshift/model/ModifyClusterSnapshotRequest.h>
#include <aws/redshift/model/ModifyClusterSnapshotScheduleRequest.h>
#include <aws/redshift/model/ModifyClusterSubnetGroupRequest.h>
#include <aws/redshift/model/ModifyCustomDomainAssociationRequest.h>
#include <aws/redshift/model/ModifyEndpointAccessRequest.h>
#include <aws/redshift/model/ModifyEventSubscriptionRequest.h>
#include <aws/redshift/model/ModifyIntegrationRequest.h>
#include <aws/redshift/model/ModifyLakehouseConfigurationRequest.h>
#include <aws/redshift/model/ModifyRedshiftIdcApplicationRequest.h>
#include <aws/redshift/model/ModifyScheduledActionRequest.h>
#include <aws/redshift/model/ModifySnapshotCopyRetentionPeriodRequest.h>
#include <aws/redshift/model/ModifySnapshotScheduleRequest.h>
#include <aws/redshift/model/ModifyUsageLimitRequest.h>
#include <aws/redshift/model/PauseClusterRequest.h>
#include <aws/redshift/model/PurchaseReservedNodeOfferingRequest.h>
#include <aws/redshift/model/PutResourcePolicyRequest.h>
#include <aws/redshift/model/RebootClusterRequest.h>
#include <aws/redshift/model/RegisterNamespaceRequest.h>
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
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Redshift;
using namespace Aws::Redshift::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Redshift {
const char SERVICE_NAME[] = "redshift";
const char ALLOCATION_TAG[] = "RedshiftClient";
}  // namespace Redshift
}  // namespace Aws
const char* RedshiftClient::GetServiceName() { return SERVICE_NAME; }
const char* RedshiftClient::GetAllocationTag() { return ALLOCATION_TAG; }

RedshiftClient::RedshiftClient(const Redshift::RedshiftClientConfiguration& clientConfiguration,
                               std::shared_ptr<RedshiftEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RedshiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RedshiftClient::RedshiftClient(const AWSCredentials& credentials, std::shared_ptr<RedshiftEndpointProviderBase> endpointProvider,
                               const Redshift::RedshiftClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RedshiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RedshiftClient::RedshiftClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<RedshiftEndpointProviderBase> endpointProvider,
                               const Redshift::RedshiftClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RedshiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
RedshiftClient::RedshiftClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RedshiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RedshiftClient::RedshiftClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RedshiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RedshiftClient::RedshiftClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RedshiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RedshiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
RedshiftClient::~RedshiftClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<RedshiftEndpointProviderBase>& RedshiftClient::accessEndpointProvider() { return m_endpointProvider; }

void RedshiftClient::init(const Redshift::RedshiftClientConfiguration& config) {
  AWSClient::SetServiceClientName("Redshift");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "redshift");
}

void RedshiftClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String RedshiftClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert,
                                                         const char* region) const {
  if (!m_endpointProvider) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess()) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

RedshiftClient::InvokeOperationOutcome RedshiftClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                              Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}
AcceptReservedNodeExchangeOutcome RedshiftClient::AcceptReservedNodeExchange(const AcceptReservedNodeExchangeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptReservedNodeExchangeOutcome(result.GetResultWithOwnership())
                            : AcceptReservedNodeExchangeOutcome(std::move(result.GetError()));
}

AddPartnerOutcome RedshiftClient::AddPartner(const AddPartnerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddPartnerOutcome(result.GetResultWithOwnership()) : AddPartnerOutcome(std::move(result.GetError()));
}

AssociateDataShareConsumerOutcome RedshiftClient::AssociateDataShareConsumer(const AssociateDataShareConsumerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateDataShareConsumerOutcome(result.GetResultWithOwnership())
                            : AssociateDataShareConsumerOutcome(std::move(result.GetError()));
}

AuthorizeClusterSecurityGroupIngressOutcome RedshiftClient::AuthorizeClusterSecurityGroupIngress(
    const AuthorizeClusterSecurityGroupIngressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AuthorizeClusterSecurityGroupIngressOutcome(result.GetResultWithOwnership())
                            : AuthorizeClusterSecurityGroupIngressOutcome(std::move(result.GetError()));
}

AuthorizeDataShareOutcome RedshiftClient::AuthorizeDataShare(const AuthorizeDataShareRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AuthorizeDataShareOutcome(result.GetResultWithOwnership())
                            : AuthorizeDataShareOutcome(std::move(result.GetError()));
}

AuthorizeEndpointAccessOutcome RedshiftClient::AuthorizeEndpointAccess(const AuthorizeEndpointAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AuthorizeEndpointAccessOutcome(result.GetResultWithOwnership())
                            : AuthorizeEndpointAccessOutcome(std::move(result.GetError()));
}

AuthorizeSnapshotAccessOutcome RedshiftClient::AuthorizeSnapshotAccess(const AuthorizeSnapshotAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AuthorizeSnapshotAccessOutcome(result.GetResultWithOwnership())
                            : AuthorizeSnapshotAccessOutcome(std::move(result.GetError()));
}

BatchDeleteClusterSnapshotsOutcome RedshiftClient::BatchDeleteClusterSnapshots(const BatchDeleteClusterSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteClusterSnapshotsOutcome(result.GetResultWithOwnership())
                            : BatchDeleteClusterSnapshotsOutcome(std::move(result.GetError()));
}

BatchModifyClusterSnapshotsOutcome RedshiftClient::BatchModifyClusterSnapshots(const BatchModifyClusterSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchModifyClusterSnapshotsOutcome(result.GetResultWithOwnership())
                            : BatchModifyClusterSnapshotsOutcome(std::move(result.GetError()));
}

CancelResizeOutcome RedshiftClient::CancelResize(const CancelResizeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelResizeOutcome(result.GetResultWithOwnership()) : CancelResizeOutcome(std::move(result.GetError()));
}

CopyClusterSnapshotOutcome RedshiftClient::CopyClusterSnapshot(const CopyClusterSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopyClusterSnapshotOutcome(result.GetResultWithOwnership())
                            : CopyClusterSnapshotOutcome(std::move(result.GetError()));
}

CreateAuthenticationProfileOutcome RedshiftClient::CreateAuthenticationProfile(const CreateAuthenticationProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAuthenticationProfileOutcome(result.GetResultWithOwnership())
                            : CreateAuthenticationProfileOutcome(std::move(result.GetError()));
}

CreateClusterOutcome RedshiftClient::CreateCluster(const CreateClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClusterOutcome(result.GetResultWithOwnership()) : CreateClusterOutcome(std::move(result.GetError()));
}

CreateClusterParameterGroupOutcome RedshiftClient::CreateClusterParameterGroup(const CreateClusterParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClusterParameterGroupOutcome(result.GetResultWithOwnership())
                            : CreateClusterParameterGroupOutcome(std::move(result.GetError()));
}

CreateClusterSecurityGroupOutcome RedshiftClient::CreateClusterSecurityGroup(const CreateClusterSecurityGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClusterSecurityGroupOutcome(result.GetResultWithOwnership())
                            : CreateClusterSecurityGroupOutcome(std::move(result.GetError()));
}

CreateClusterSnapshotOutcome RedshiftClient::CreateClusterSnapshot(const CreateClusterSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClusterSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateClusterSnapshotOutcome(std::move(result.GetError()));
}

CreateClusterSubnetGroupOutcome RedshiftClient::CreateClusterSubnetGroup(const CreateClusterSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateClusterSubnetGroupOutcome(result.GetResultWithOwnership())
                            : CreateClusterSubnetGroupOutcome(std::move(result.GetError()));
}

CreateCustomDomainAssociationOutcome RedshiftClient::CreateCustomDomainAssociation(
    const CreateCustomDomainAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCustomDomainAssociationOutcome(result.GetResultWithOwnership())
                            : CreateCustomDomainAssociationOutcome(std::move(result.GetError()));
}

CreateEndpointAccessOutcome RedshiftClient::CreateEndpointAccess(const CreateEndpointAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEndpointAccessOutcome(result.GetResultWithOwnership())
                            : CreateEndpointAccessOutcome(std::move(result.GetError()));
}

CreateEventSubscriptionOutcome RedshiftClient::CreateEventSubscription(const CreateEventSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventSubscriptionOutcome(result.GetResultWithOwnership())
                            : CreateEventSubscriptionOutcome(std::move(result.GetError()));
}

CreateHsmClientCertificateOutcome RedshiftClient::CreateHsmClientCertificate(const CreateHsmClientCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateHsmClientCertificateOutcome(result.GetResultWithOwnership())
                            : CreateHsmClientCertificateOutcome(std::move(result.GetError()));
}

CreateHsmConfigurationOutcome RedshiftClient::CreateHsmConfiguration(const CreateHsmConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateHsmConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateHsmConfigurationOutcome(std::move(result.GetError()));
}

CreateIntegrationOutcome RedshiftClient::CreateIntegration(const CreateIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIntegrationOutcome(result.GetResultWithOwnership())
                            : CreateIntegrationOutcome(std::move(result.GetError()));
}

CreateRedshiftIdcApplicationOutcome RedshiftClient::CreateRedshiftIdcApplication(const CreateRedshiftIdcApplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRedshiftIdcApplicationOutcome(result.GetResultWithOwnership())
                            : CreateRedshiftIdcApplicationOutcome(std::move(result.GetError()));
}

CreateScheduledActionOutcome RedshiftClient::CreateScheduledAction(const CreateScheduledActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateScheduledActionOutcome(result.GetResultWithOwnership())
                            : CreateScheduledActionOutcome(std::move(result.GetError()));
}

CreateSnapshotCopyGrantOutcome RedshiftClient::CreateSnapshotCopyGrant(const CreateSnapshotCopyGrantRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSnapshotCopyGrantOutcome(result.GetResultWithOwnership())
                            : CreateSnapshotCopyGrantOutcome(std::move(result.GetError()));
}

CreateSnapshotScheduleOutcome RedshiftClient::CreateSnapshotSchedule(const CreateSnapshotScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSnapshotScheduleOutcome(result.GetResultWithOwnership())
                            : CreateSnapshotScheduleOutcome(std::move(result.GetError()));
}

CreateTagsOutcome RedshiftClient::CreateTags(const CreateTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTagsOutcome(result.GetResultWithOwnership()) : CreateTagsOutcome(std::move(result.GetError()));
}

CreateUsageLimitOutcome RedshiftClient::CreateUsageLimit(const CreateUsageLimitRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUsageLimitOutcome(result.GetResultWithOwnership())
                            : CreateUsageLimitOutcome(std::move(result.GetError()));
}

DeauthorizeDataShareOutcome RedshiftClient::DeauthorizeDataShare(const DeauthorizeDataShareRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeauthorizeDataShareOutcome(result.GetResultWithOwnership())
                            : DeauthorizeDataShareOutcome(std::move(result.GetError()));
}

DeleteAuthenticationProfileOutcome RedshiftClient::DeleteAuthenticationProfile(const DeleteAuthenticationProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAuthenticationProfileOutcome(result.GetResultWithOwnership())
                            : DeleteAuthenticationProfileOutcome(std::move(result.GetError()));
}

DeleteClusterOutcome RedshiftClient::DeleteCluster(const DeleteClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteClusterOutcome(result.GetResultWithOwnership()) : DeleteClusterOutcome(std::move(result.GetError()));
}

DeleteClusterParameterGroupOutcome RedshiftClient::DeleteClusterParameterGroup(const DeleteClusterParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteClusterParameterGroupOutcome(result.GetResultWithOwnership())
                            : DeleteClusterParameterGroupOutcome(std::move(result.GetError()));
}

DeleteClusterSecurityGroupOutcome RedshiftClient::DeleteClusterSecurityGroup(const DeleteClusterSecurityGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteClusterSecurityGroupOutcome(result.GetResultWithOwnership())
                            : DeleteClusterSecurityGroupOutcome(std::move(result.GetError()));
}

DeleteClusterSnapshotOutcome RedshiftClient::DeleteClusterSnapshot(const DeleteClusterSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteClusterSnapshotOutcome(result.GetResultWithOwnership())
                            : DeleteClusterSnapshotOutcome(std::move(result.GetError()));
}

DeleteClusterSubnetGroupOutcome RedshiftClient::DeleteClusterSubnetGroup(const DeleteClusterSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteClusterSubnetGroupOutcome(result.GetResultWithOwnership())
                            : DeleteClusterSubnetGroupOutcome(std::move(result.GetError()));
}

DeleteCustomDomainAssociationOutcome RedshiftClient::DeleteCustomDomainAssociation(
    const DeleteCustomDomainAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCustomDomainAssociationOutcome(result.GetResultWithOwnership())
                            : DeleteCustomDomainAssociationOutcome(std::move(result.GetError()));
}

DeleteEndpointAccessOutcome RedshiftClient::DeleteEndpointAccess(const DeleteEndpointAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEndpointAccessOutcome(result.GetResultWithOwnership())
                            : DeleteEndpointAccessOutcome(std::move(result.GetError()));
}

DeleteEventSubscriptionOutcome RedshiftClient::DeleteEventSubscription(const DeleteEventSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteEventSubscriptionOutcome(result.GetResultWithOwnership())
                            : DeleteEventSubscriptionOutcome(std::move(result.GetError()));
}

DeleteHsmClientCertificateOutcome RedshiftClient::DeleteHsmClientCertificate(const DeleteHsmClientCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteHsmClientCertificateOutcome(result.GetResultWithOwnership())
                            : DeleteHsmClientCertificateOutcome(std::move(result.GetError()));
}

DeleteHsmConfigurationOutcome RedshiftClient::DeleteHsmConfiguration(const DeleteHsmConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteHsmConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteHsmConfigurationOutcome(std::move(result.GetError()));
}

DeleteIntegrationOutcome RedshiftClient::DeleteIntegration(const DeleteIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIntegrationOutcome(result.GetResultWithOwnership())
                            : DeleteIntegrationOutcome(std::move(result.GetError()));
}

DeletePartnerOutcome RedshiftClient::DeletePartner(const DeletePartnerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePartnerOutcome(result.GetResultWithOwnership()) : DeletePartnerOutcome(std::move(result.GetError()));
}

DeleteRedshiftIdcApplicationOutcome RedshiftClient::DeleteRedshiftIdcApplication(const DeleteRedshiftIdcApplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRedshiftIdcApplicationOutcome(result.GetResultWithOwnership())
                            : DeleteRedshiftIdcApplicationOutcome(std::move(result.GetError()));
}

DeleteResourcePolicyOutcome RedshiftClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteResourcePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteResourcePolicyOutcome(std::move(result.GetError()));
}

DeleteScheduledActionOutcome RedshiftClient::DeleteScheduledAction(const DeleteScheduledActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteScheduledActionOutcome(result.GetResultWithOwnership())
                            : DeleteScheduledActionOutcome(std::move(result.GetError()));
}

DeleteSnapshotCopyGrantOutcome RedshiftClient::DeleteSnapshotCopyGrant(const DeleteSnapshotCopyGrantRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSnapshotCopyGrantOutcome(result.GetResultWithOwnership())
                            : DeleteSnapshotCopyGrantOutcome(std::move(result.GetError()));
}

DeleteSnapshotScheduleOutcome RedshiftClient::DeleteSnapshotSchedule(const DeleteSnapshotScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSnapshotScheduleOutcome(result.GetResultWithOwnership())
                            : DeleteSnapshotScheduleOutcome(std::move(result.GetError()));
}

DeleteTagsOutcome RedshiftClient::DeleteTags(const DeleteTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTagsOutcome(result.GetResultWithOwnership()) : DeleteTagsOutcome(std::move(result.GetError()));
}

DeleteUsageLimitOutcome RedshiftClient::DeleteUsageLimit(const DeleteUsageLimitRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUsageLimitOutcome(result.GetResultWithOwnership())
                            : DeleteUsageLimitOutcome(std::move(result.GetError()));
}

DeregisterNamespaceOutcome RedshiftClient::DeregisterNamespace(const DeregisterNamespaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterNamespaceOutcome(result.GetResultWithOwnership())
                            : DeregisterNamespaceOutcome(std::move(result.GetError()));
}

DescribeAccountAttributesOutcome RedshiftClient::DescribeAccountAttributes(const DescribeAccountAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccountAttributesOutcome(result.GetResultWithOwnership())
                            : DescribeAccountAttributesOutcome(std::move(result.GetError()));
}

DescribeAuthenticationProfilesOutcome RedshiftClient::DescribeAuthenticationProfiles(
    const DescribeAuthenticationProfilesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAuthenticationProfilesOutcome(result.GetResultWithOwnership())
                            : DescribeAuthenticationProfilesOutcome(std::move(result.GetError()));
}

DescribeClusterDbRevisionsOutcome RedshiftClient::DescribeClusterDbRevisions(const DescribeClusterDbRevisionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClusterDbRevisionsOutcome(result.GetResultWithOwnership())
                            : DescribeClusterDbRevisionsOutcome(std::move(result.GetError()));
}

DescribeClusterParameterGroupsOutcome RedshiftClient::DescribeClusterParameterGroups(
    const DescribeClusterParameterGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClusterParameterGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeClusterParameterGroupsOutcome(std::move(result.GetError()));
}

DescribeClusterParametersOutcome RedshiftClient::DescribeClusterParameters(const DescribeClusterParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClusterParametersOutcome(result.GetResultWithOwnership())
                            : DescribeClusterParametersOutcome(std::move(result.GetError()));
}

DescribeClusterSecurityGroupsOutcome RedshiftClient::DescribeClusterSecurityGroups(
    const DescribeClusterSecurityGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClusterSecurityGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeClusterSecurityGroupsOutcome(std::move(result.GetError()));
}

DescribeClusterSnapshotsOutcome RedshiftClient::DescribeClusterSnapshots(const DescribeClusterSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClusterSnapshotsOutcome(result.GetResultWithOwnership())
                            : DescribeClusterSnapshotsOutcome(std::move(result.GetError()));
}

DescribeClusterSubnetGroupsOutcome RedshiftClient::DescribeClusterSubnetGroups(const DescribeClusterSubnetGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClusterSubnetGroupsOutcome(result.GetResultWithOwnership())
                            : DescribeClusterSubnetGroupsOutcome(std::move(result.GetError()));
}

DescribeClusterTracksOutcome RedshiftClient::DescribeClusterTracks(const DescribeClusterTracksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClusterTracksOutcome(result.GetResultWithOwnership())
                            : DescribeClusterTracksOutcome(std::move(result.GetError()));
}

DescribeClusterVersionsOutcome RedshiftClient::DescribeClusterVersions(const DescribeClusterVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClusterVersionsOutcome(result.GetResultWithOwnership())
                            : DescribeClusterVersionsOutcome(std::move(result.GetError()));
}

DescribeClustersOutcome RedshiftClient::DescribeClusters(const DescribeClustersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClustersOutcome(result.GetResultWithOwnership())
                            : DescribeClustersOutcome(std::move(result.GetError()));
}

DescribeCustomDomainAssociationsOutcome RedshiftClient::DescribeCustomDomainAssociations(
    const DescribeCustomDomainAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCustomDomainAssociationsOutcome(result.GetResultWithOwnership())
                            : DescribeCustomDomainAssociationsOutcome(std::move(result.GetError()));
}

DescribeDataSharesOutcome RedshiftClient::DescribeDataShares(const DescribeDataSharesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDataSharesOutcome(result.GetResultWithOwnership())
                            : DescribeDataSharesOutcome(std::move(result.GetError()));
}

DescribeDataSharesForConsumerOutcome RedshiftClient::DescribeDataSharesForConsumer(
    const DescribeDataSharesForConsumerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDataSharesForConsumerOutcome(result.GetResultWithOwnership())
                            : DescribeDataSharesForConsumerOutcome(std::move(result.GetError()));
}

DescribeDataSharesForProducerOutcome RedshiftClient::DescribeDataSharesForProducer(
    const DescribeDataSharesForProducerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDataSharesForProducerOutcome(result.GetResultWithOwnership())
                            : DescribeDataSharesForProducerOutcome(std::move(result.GetError()));
}

DescribeDefaultClusterParametersOutcome RedshiftClient::DescribeDefaultClusterParameters(
    const DescribeDefaultClusterParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDefaultClusterParametersOutcome(result.GetResultWithOwnership())
                            : DescribeDefaultClusterParametersOutcome(std::move(result.GetError()));
}

DescribeEndpointAccessOutcome RedshiftClient::DescribeEndpointAccess(const DescribeEndpointAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEndpointAccessOutcome(result.GetResultWithOwnership())
                            : DescribeEndpointAccessOutcome(std::move(result.GetError()));
}

DescribeEndpointAuthorizationOutcome RedshiftClient::DescribeEndpointAuthorization(
    const DescribeEndpointAuthorizationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEndpointAuthorizationOutcome(result.GetResultWithOwnership())
                            : DescribeEndpointAuthorizationOutcome(std::move(result.GetError()));
}

DescribeEventCategoriesOutcome RedshiftClient::DescribeEventCategories(const DescribeEventCategoriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventCategoriesOutcome(result.GetResultWithOwnership())
                            : DescribeEventCategoriesOutcome(std::move(result.GetError()));
}

DescribeEventSubscriptionsOutcome RedshiftClient::DescribeEventSubscriptions(const DescribeEventSubscriptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventSubscriptionsOutcome(result.GetResultWithOwnership())
                            : DescribeEventSubscriptionsOutcome(std::move(result.GetError()));
}

DescribeEventsOutcome RedshiftClient::DescribeEvents(const DescribeEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventsOutcome(result.GetResultWithOwnership()) : DescribeEventsOutcome(std::move(result.GetError()));
}

DescribeHsmClientCertificatesOutcome RedshiftClient::DescribeHsmClientCertificates(
    const DescribeHsmClientCertificatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeHsmClientCertificatesOutcome(result.GetResultWithOwnership())
                            : DescribeHsmClientCertificatesOutcome(std::move(result.GetError()));
}

DescribeHsmConfigurationsOutcome RedshiftClient::DescribeHsmConfigurations(const DescribeHsmConfigurationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeHsmConfigurationsOutcome(result.GetResultWithOwnership())
                            : DescribeHsmConfigurationsOutcome(std::move(result.GetError()));
}

DescribeInboundIntegrationsOutcome RedshiftClient::DescribeInboundIntegrations(const DescribeInboundIntegrationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeInboundIntegrationsOutcome(result.GetResultWithOwnership())
                            : DescribeInboundIntegrationsOutcome(std::move(result.GetError()));
}

DescribeIntegrationsOutcome RedshiftClient::DescribeIntegrations(const DescribeIntegrationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeIntegrationsOutcome(result.GetResultWithOwnership())
                            : DescribeIntegrationsOutcome(std::move(result.GetError()));
}

DescribeLoggingStatusOutcome RedshiftClient::DescribeLoggingStatus(const DescribeLoggingStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLoggingStatusOutcome(result.GetResultWithOwnership())
                            : DescribeLoggingStatusOutcome(std::move(result.GetError()));
}

DescribeNodeConfigurationOptionsOutcome RedshiftClient::DescribeNodeConfigurationOptions(
    const DescribeNodeConfigurationOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeNodeConfigurationOptionsOutcome(result.GetResultWithOwnership())
                            : DescribeNodeConfigurationOptionsOutcome(std::move(result.GetError()));
}

DescribeOrderableClusterOptionsOutcome RedshiftClient::DescribeOrderableClusterOptions(
    const DescribeOrderableClusterOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOrderableClusterOptionsOutcome(result.GetResultWithOwnership())
                            : DescribeOrderableClusterOptionsOutcome(std::move(result.GetError()));
}

DescribePartnersOutcome RedshiftClient::DescribePartners(const DescribePartnersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribePartnersOutcome(result.GetResultWithOwnership())
                            : DescribePartnersOutcome(std::move(result.GetError()));
}

DescribeRedshiftIdcApplicationsOutcome RedshiftClient::DescribeRedshiftIdcApplications(
    const DescribeRedshiftIdcApplicationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRedshiftIdcApplicationsOutcome(result.GetResultWithOwnership())
                            : DescribeRedshiftIdcApplicationsOutcome(std::move(result.GetError()));
}

DescribeReservedNodeExchangeStatusOutcome RedshiftClient::DescribeReservedNodeExchangeStatus(
    const DescribeReservedNodeExchangeStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReservedNodeExchangeStatusOutcome(result.GetResultWithOwnership())
                            : DescribeReservedNodeExchangeStatusOutcome(std::move(result.GetError()));
}

DescribeReservedNodeOfferingsOutcome RedshiftClient::DescribeReservedNodeOfferings(
    const DescribeReservedNodeOfferingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReservedNodeOfferingsOutcome(result.GetResultWithOwnership())
                            : DescribeReservedNodeOfferingsOutcome(std::move(result.GetError()));
}

DescribeReservedNodesOutcome RedshiftClient::DescribeReservedNodes(const DescribeReservedNodesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeReservedNodesOutcome(result.GetResultWithOwnership())
                            : DescribeReservedNodesOutcome(std::move(result.GetError()));
}

DescribeResizeOutcome RedshiftClient::DescribeResize(const DescribeResizeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeResizeOutcome(result.GetResultWithOwnership()) : DescribeResizeOutcome(std::move(result.GetError()));
}

DescribeScheduledActionsOutcome RedshiftClient::DescribeScheduledActions(const DescribeScheduledActionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeScheduledActionsOutcome(result.GetResultWithOwnership())
                            : DescribeScheduledActionsOutcome(std::move(result.GetError()));
}

DescribeSnapshotCopyGrantsOutcome RedshiftClient::DescribeSnapshotCopyGrants(const DescribeSnapshotCopyGrantsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSnapshotCopyGrantsOutcome(result.GetResultWithOwnership())
                            : DescribeSnapshotCopyGrantsOutcome(std::move(result.GetError()));
}

DescribeSnapshotSchedulesOutcome RedshiftClient::DescribeSnapshotSchedules(const DescribeSnapshotSchedulesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSnapshotSchedulesOutcome(result.GetResultWithOwnership())
                            : DescribeSnapshotSchedulesOutcome(std::move(result.GetError()));
}

DescribeStorageOutcome RedshiftClient::DescribeStorage(const DescribeStorageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeStorageOutcome(result.GetResultWithOwnership())
                            : DescribeStorageOutcome(std::move(result.GetError()));
}

DescribeTableRestoreStatusOutcome RedshiftClient::DescribeTableRestoreStatus(const DescribeTableRestoreStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTableRestoreStatusOutcome(result.GetResultWithOwnership())
                            : DescribeTableRestoreStatusOutcome(std::move(result.GetError()));
}

DescribeTagsOutcome RedshiftClient::DescribeTags(const DescribeTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTagsOutcome(result.GetResultWithOwnership()) : DescribeTagsOutcome(std::move(result.GetError()));
}

DescribeUsageLimitsOutcome RedshiftClient::DescribeUsageLimits(const DescribeUsageLimitsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUsageLimitsOutcome(result.GetResultWithOwnership())
                            : DescribeUsageLimitsOutcome(std::move(result.GetError()));
}

DisableLoggingOutcome RedshiftClient::DisableLogging(const DisableLoggingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableLoggingOutcome(result.GetResultWithOwnership()) : DisableLoggingOutcome(std::move(result.GetError()));
}

DisableSnapshotCopyOutcome RedshiftClient::DisableSnapshotCopy(const DisableSnapshotCopyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableSnapshotCopyOutcome(result.GetResultWithOwnership())
                            : DisableSnapshotCopyOutcome(std::move(result.GetError()));
}

DisassociateDataShareConsumerOutcome RedshiftClient::DisassociateDataShareConsumer(
    const DisassociateDataShareConsumerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateDataShareConsumerOutcome(result.GetResultWithOwnership())
                            : DisassociateDataShareConsumerOutcome(std::move(result.GetError()));
}

EnableLoggingOutcome RedshiftClient::EnableLogging(const EnableLoggingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableLoggingOutcome(result.GetResultWithOwnership()) : EnableLoggingOutcome(std::move(result.GetError()));
}

EnableSnapshotCopyOutcome RedshiftClient::EnableSnapshotCopy(const EnableSnapshotCopyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableSnapshotCopyOutcome(result.GetResultWithOwnership())
                            : EnableSnapshotCopyOutcome(std::move(result.GetError()));
}

FailoverPrimaryComputeOutcome RedshiftClient::FailoverPrimaryCompute(const FailoverPrimaryComputeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? FailoverPrimaryComputeOutcome(result.GetResultWithOwnership())
                            : FailoverPrimaryComputeOutcome(std::move(result.GetError()));
}

GetClusterCredentialsOutcome RedshiftClient::GetClusterCredentials(const GetClusterCredentialsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetClusterCredentialsOutcome(result.GetResultWithOwnership())
                            : GetClusterCredentialsOutcome(std::move(result.GetError()));
}

GetClusterCredentialsWithIAMOutcome RedshiftClient::GetClusterCredentialsWithIAM(const GetClusterCredentialsWithIAMRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetClusterCredentialsWithIAMOutcome(result.GetResultWithOwnership())
                            : GetClusterCredentialsWithIAMOutcome(std::move(result.GetError()));
}

GetIdentityCenterAuthTokenOutcome RedshiftClient::GetIdentityCenterAuthToken(const GetIdentityCenterAuthTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIdentityCenterAuthTokenOutcome(result.GetResultWithOwnership())
                            : GetIdentityCenterAuthTokenOutcome(std::move(result.GetError()));
}

GetReservedNodeExchangeConfigurationOptionsOutcome RedshiftClient::GetReservedNodeExchangeConfigurationOptions(
    const GetReservedNodeExchangeConfigurationOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetReservedNodeExchangeConfigurationOptionsOutcome(result.GetResultWithOwnership())
                            : GetReservedNodeExchangeConfigurationOptionsOutcome(std::move(result.GetError()));
}

GetReservedNodeExchangeOfferingsOutcome RedshiftClient::GetReservedNodeExchangeOfferings(
    const GetReservedNodeExchangeOfferingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetReservedNodeExchangeOfferingsOutcome(result.GetResultWithOwnership())
                            : GetReservedNodeExchangeOfferingsOutcome(std::move(result.GetError()));
}

GetResourcePolicyOutcome RedshiftClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourcePolicyOutcome(result.GetResultWithOwnership())
                            : GetResourcePolicyOutcome(std::move(result.GetError()));
}

ListRecommendationsOutcome RedshiftClient::ListRecommendations(const ListRecommendationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRecommendationsOutcome(result.GetResultWithOwnership())
                            : ListRecommendationsOutcome(std::move(result.GetError()));
}

ModifyAquaConfigurationOutcome RedshiftClient::ModifyAquaConfiguration(const ModifyAquaConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyAquaConfigurationOutcome(result.GetResultWithOwnership())
                            : ModifyAquaConfigurationOutcome(std::move(result.GetError()));
}

ModifyAuthenticationProfileOutcome RedshiftClient::ModifyAuthenticationProfile(const ModifyAuthenticationProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyAuthenticationProfileOutcome(result.GetResultWithOwnership())
                            : ModifyAuthenticationProfileOutcome(std::move(result.GetError()));
}

ModifyClusterOutcome RedshiftClient::ModifyCluster(const ModifyClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyClusterOutcome(result.GetResultWithOwnership()) : ModifyClusterOutcome(std::move(result.GetError()));
}

ModifyClusterDbRevisionOutcome RedshiftClient::ModifyClusterDbRevision(const ModifyClusterDbRevisionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyClusterDbRevisionOutcome(result.GetResultWithOwnership())
                            : ModifyClusterDbRevisionOutcome(std::move(result.GetError()));
}

ModifyClusterIamRolesOutcome RedshiftClient::ModifyClusterIamRoles(const ModifyClusterIamRolesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyClusterIamRolesOutcome(result.GetResultWithOwnership())
                            : ModifyClusterIamRolesOutcome(std::move(result.GetError()));
}

ModifyClusterMaintenanceOutcome RedshiftClient::ModifyClusterMaintenance(const ModifyClusterMaintenanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyClusterMaintenanceOutcome(result.GetResultWithOwnership())
                            : ModifyClusterMaintenanceOutcome(std::move(result.GetError()));
}

ModifyClusterParameterGroupOutcome RedshiftClient::ModifyClusterParameterGroup(const ModifyClusterParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyClusterParameterGroupOutcome(result.GetResultWithOwnership())
                            : ModifyClusterParameterGroupOutcome(std::move(result.GetError()));
}

ModifyClusterSnapshotOutcome RedshiftClient::ModifyClusterSnapshot(const ModifyClusterSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyClusterSnapshotOutcome(result.GetResultWithOwnership())
                            : ModifyClusterSnapshotOutcome(std::move(result.GetError()));
}

ModifyClusterSnapshotScheduleOutcome RedshiftClient::ModifyClusterSnapshotSchedule(
    const ModifyClusterSnapshotScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyClusterSnapshotScheduleOutcome(result.GetResultWithOwnership())
                            : ModifyClusterSnapshotScheduleOutcome(std::move(result.GetError()));
}

ModifyClusterSubnetGroupOutcome RedshiftClient::ModifyClusterSubnetGroup(const ModifyClusterSubnetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyClusterSubnetGroupOutcome(result.GetResultWithOwnership())
                            : ModifyClusterSubnetGroupOutcome(std::move(result.GetError()));
}

ModifyCustomDomainAssociationOutcome RedshiftClient::ModifyCustomDomainAssociation(
    const ModifyCustomDomainAssociationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyCustomDomainAssociationOutcome(result.GetResultWithOwnership())
                            : ModifyCustomDomainAssociationOutcome(std::move(result.GetError()));
}

ModifyEndpointAccessOutcome RedshiftClient::ModifyEndpointAccess(const ModifyEndpointAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyEndpointAccessOutcome(result.GetResultWithOwnership())
                            : ModifyEndpointAccessOutcome(std::move(result.GetError()));
}

ModifyEventSubscriptionOutcome RedshiftClient::ModifyEventSubscription(const ModifyEventSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyEventSubscriptionOutcome(result.GetResultWithOwnership())
                            : ModifyEventSubscriptionOutcome(std::move(result.GetError()));
}

ModifyIntegrationOutcome RedshiftClient::ModifyIntegration(const ModifyIntegrationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyIntegrationOutcome(result.GetResultWithOwnership())
                            : ModifyIntegrationOutcome(std::move(result.GetError()));
}

ModifyLakehouseConfigurationOutcome RedshiftClient::ModifyLakehouseConfiguration(const ModifyLakehouseConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyLakehouseConfigurationOutcome(result.GetResultWithOwnership())
                            : ModifyLakehouseConfigurationOutcome(std::move(result.GetError()));
}

ModifyRedshiftIdcApplicationOutcome RedshiftClient::ModifyRedshiftIdcApplication(const ModifyRedshiftIdcApplicationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyRedshiftIdcApplicationOutcome(result.GetResultWithOwnership())
                            : ModifyRedshiftIdcApplicationOutcome(std::move(result.GetError()));
}

ModifyScheduledActionOutcome RedshiftClient::ModifyScheduledAction(const ModifyScheduledActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyScheduledActionOutcome(result.GetResultWithOwnership())
                            : ModifyScheduledActionOutcome(std::move(result.GetError()));
}

ModifySnapshotCopyRetentionPeriodOutcome RedshiftClient::ModifySnapshotCopyRetentionPeriod(
    const ModifySnapshotCopyRetentionPeriodRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifySnapshotCopyRetentionPeriodOutcome(result.GetResultWithOwnership())
                            : ModifySnapshotCopyRetentionPeriodOutcome(std::move(result.GetError()));
}

ModifySnapshotScheduleOutcome RedshiftClient::ModifySnapshotSchedule(const ModifySnapshotScheduleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifySnapshotScheduleOutcome(result.GetResultWithOwnership())
                            : ModifySnapshotScheduleOutcome(std::move(result.GetError()));
}

ModifyUsageLimitOutcome RedshiftClient::ModifyUsageLimit(const ModifyUsageLimitRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ModifyUsageLimitOutcome(result.GetResultWithOwnership())
                            : ModifyUsageLimitOutcome(std::move(result.GetError()));
}

PauseClusterOutcome RedshiftClient::PauseCluster(const PauseClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PauseClusterOutcome(result.GetResultWithOwnership()) : PauseClusterOutcome(std::move(result.GetError()));
}

PurchaseReservedNodeOfferingOutcome RedshiftClient::PurchaseReservedNodeOffering(const PurchaseReservedNodeOfferingRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PurchaseReservedNodeOfferingOutcome(result.GetResultWithOwnership())
                            : PurchaseReservedNodeOfferingOutcome(std::move(result.GetError()));
}

PutResourcePolicyOutcome RedshiftClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutResourcePolicyOutcome(result.GetResultWithOwnership())
                            : PutResourcePolicyOutcome(std::move(result.GetError()));
}

RebootClusterOutcome RedshiftClient::RebootCluster(const RebootClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebootClusterOutcome(result.GetResultWithOwnership()) : RebootClusterOutcome(std::move(result.GetError()));
}

RegisterNamespaceOutcome RedshiftClient::RegisterNamespace(const RegisterNamespaceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterNamespaceOutcome(result.GetResultWithOwnership())
                            : RegisterNamespaceOutcome(std::move(result.GetError()));
}

RejectDataShareOutcome RedshiftClient::RejectDataShare(const RejectDataShareRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectDataShareOutcome(result.GetResultWithOwnership())
                            : RejectDataShareOutcome(std::move(result.GetError()));
}

ResetClusterParameterGroupOutcome RedshiftClient::ResetClusterParameterGroup(const ResetClusterParameterGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetClusterParameterGroupOutcome(result.GetResultWithOwnership())
                            : ResetClusterParameterGroupOutcome(std::move(result.GetError()));
}

ResizeClusterOutcome RedshiftClient::ResizeCluster(const ResizeClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResizeClusterOutcome(result.GetResultWithOwnership()) : ResizeClusterOutcome(std::move(result.GetError()));
}

RestoreFromClusterSnapshotOutcome RedshiftClient::RestoreFromClusterSnapshot(const RestoreFromClusterSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreFromClusterSnapshotOutcome(result.GetResultWithOwnership())
                            : RestoreFromClusterSnapshotOutcome(std::move(result.GetError()));
}

RestoreTableFromClusterSnapshotOutcome RedshiftClient::RestoreTableFromClusterSnapshot(
    const RestoreTableFromClusterSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreTableFromClusterSnapshotOutcome(result.GetResultWithOwnership())
                            : RestoreTableFromClusterSnapshotOutcome(std::move(result.GetError()));
}

ResumeClusterOutcome RedshiftClient::ResumeCluster(const ResumeClusterRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResumeClusterOutcome(result.GetResultWithOwnership()) : ResumeClusterOutcome(std::move(result.GetError()));
}

RevokeClusterSecurityGroupIngressOutcome RedshiftClient::RevokeClusterSecurityGroupIngress(
    const RevokeClusterSecurityGroupIngressRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RevokeClusterSecurityGroupIngressOutcome(result.GetResultWithOwnership())
                            : RevokeClusterSecurityGroupIngressOutcome(std::move(result.GetError()));
}

RevokeEndpointAccessOutcome RedshiftClient::RevokeEndpointAccess(const RevokeEndpointAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RevokeEndpointAccessOutcome(result.GetResultWithOwnership())
                            : RevokeEndpointAccessOutcome(std::move(result.GetError()));
}

RevokeSnapshotAccessOutcome RedshiftClient::RevokeSnapshotAccess(const RevokeSnapshotAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RevokeSnapshotAccessOutcome(result.GetResultWithOwnership())
                            : RevokeSnapshotAccessOutcome(std::move(result.GetError()));
}

RotateEncryptionKeyOutcome RedshiftClient::RotateEncryptionKey(const RotateEncryptionKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RotateEncryptionKeyOutcome(result.GetResultWithOwnership())
                            : RotateEncryptionKeyOutcome(std::move(result.GetError()));
}

UpdatePartnerStatusOutcome RedshiftClient::UpdatePartnerStatus(const UpdatePartnerStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePartnerStatusOutcome(result.GetResultWithOwnership())
                            : UpdatePartnerStatusOutcome(std::move(result.GetError()));
}
