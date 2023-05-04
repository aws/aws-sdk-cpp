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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/quicksight/QuickSightClient.h>
#include <aws/quicksight/QuickSightErrorMarshaller.h>
#include <aws/quicksight/QuickSightEndpointProvider.h>
#include <aws/quicksight/model/CancelIngestionRequest.h>
#include <aws/quicksight/model/CreateAccountCustomizationRequest.h>
#include <aws/quicksight/model/CreateAccountSubscriptionRequest.h>
#include <aws/quicksight/model/CreateAnalysisRequest.h>
#include <aws/quicksight/model/CreateDashboardRequest.h>
#include <aws/quicksight/model/CreateDataSetRequest.h>
#include <aws/quicksight/model/CreateDataSourceRequest.h>
#include <aws/quicksight/model/CreateFolderRequest.h>
#include <aws/quicksight/model/CreateFolderMembershipRequest.h>
#include <aws/quicksight/model/CreateGroupRequest.h>
#include <aws/quicksight/model/CreateGroupMembershipRequest.h>
#include <aws/quicksight/model/CreateIAMPolicyAssignmentRequest.h>
#include <aws/quicksight/model/CreateIngestionRequest.h>
#include <aws/quicksight/model/CreateNamespaceRequest.h>
#include <aws/quicksight/model/CreateRefreshScheduleRequest.h>
#include <aws/quicksight/model/CreateTemplateRequest.h>
#include <aws/quicksight/model/CreateTemplateAliasRequest.h>
#include <aws/quicksight/model/CreateThemeRequest.h>
#include <aws/quicksight/model/CreateThemeAliasRequest.h>
#include <aws/quicksight/model/CreateTopicRequest.h>
#include <aws/quicksight/model/CreateTopicRefreshScheduleRequest.h>
#include <aws/quicksight/model/CreateVPCConnectionRequest.h>
#include <aws/quicksight/model/DeleteAccountCustomizationRequest.h>
#include <aws/quicksight/model/DeleteAccountSubscriptionRequest.h>
#include <aws/quicksight/model/DeleteAnalysisRequest.h>
#include <aws/quicksight/model/DeleteDashboardRequest.h>
#include <aws/quicksight/model/DeleteDataSetRequest.h>
#include <aws/quicksight/model/DeleteDataSetRefreshPropertiesRequest.h>
#include <aws/quicksight/model/DeleteDataSourceRequest.h>
#include <aws/quicksight/model/DeleteFolderRequest.h>
#include <aws/quicksight/model/DeleteFolderMembershipRequest.h>
#include <aws/quicksight/model/DeleteGroupRequest.h>
#include <aws/quicksight/model/DeleteGroupMembershipRequest.h>
#include <aws/quicksight/model/DeleteIAMPolicyAssignmentRequest.h>
#include <aws/quicksight/model/DeleteNamespaceRequest.h>
#include <aws/quicksight/model/DeleteRefreshScheduleRequest.h>
#include <aws/quicksight/model/DeleteTemplateRequest.h>
#include <aws/quicksight/model/DeleteTemplateAliasRequest.h>
#include <aws/quicksight/model/DeleteThemeRequest.h>
#include <aws/quicksight/model/DeleteThemeAliasRequest.h>
#include <aws/quicksight/model/DeleteTopicRequest.h>
#include <aws/quicksight/model/DeleteTopicRefreshScheduleRequest.h>
#include <aws/quicksight/model/DeleteUserRequest.h>
#include <aws/quicksight/model/DeleteUserByPrincipalIdRequest.h>
#include <aws/quicksight/model/DeleteVPCConnectionRequest.h>
#include <aws/quicksight/model/DescribeAccountCustomizationRequest.h>
#include <aws/quicksight/model/DescribeAccountSettingsRequest.h>
#include <aws/quicksight/model/DescribeAccountSubscriptionRequest.h>
#include <aws/quicksight/model/DescribeAnalysisRequest.h>
#include <aws/quicksight/model/DescribeAnalysisDefinitionRequest.h>
#include <aws/quicksight/model/DescribeAnalysisPermissionsRequest.h>
#include <aws/quicksight/model/DescribeDashboardRequest.h>
#include <aws/quicksight/model/DescribeDashboardDefinitionRequest.h>
#include <aws/quicksight/model/DescribeDashboardPermissionsRequest.h>
#include <aws/quicksight/model/DescribeDataSetRequest.h>
#include <aws/quicksight/model/DescribeDataSetPermissionsRequest.h>
#include <aws/quicksight/model/DescribeDataSetRefreshPropertiesRequest.h>
#include <aws/quicksight/model/DescribeDataSourceRequest.h>
#include <aws/quicksight/model/DescribeDataSourcePermissionsRequest.h>
#include <aws/quicksight/model/DescribeFolderRequest.h>
#include <aws/quicksight/model/DescribeFolderPermissionsRequest.h>
#include <aws/quicksight/model/DescribeFolderResolvedPermissionsRequest.h>
#include <aws/quicksight/model/DescribeGroupRequest.h>
#include <aws/quicksight/model/DescribeGroupMembershipRequest.h>
#include <aws/quicksight/model/DescribeIAMPolicyAssignmentRequest.h>
#include <aws/quicksight/model/DescribeIngestionRequest.h>
#include <aws/quicksight/model/DescribeIpRestrictionRequest.h>
#include <aws/quicksight/model/DescribeNamespaceRequest.h>
#include <aws/quicksight/model/DescribeRefreshScheduleRequest.h>
#include <aws/quicksight/model/DescribeTemplateRequest.h>
#include <aws/quicksight/model/DescribeTemplateAliasRequest.h>
#include <aws/quicksight/model/DescribeTemplateDefinitionRequest.h>
#include <aws/quicksight/model/DescribeTemplatePermissionsRequest.h>
#include <aws/quicksight/model/DescribeThemeRequest.h>
#include <aws/quicksight/model/DescribeThemeAliasRequest.h>
#include <aws/quicksight/model/DescribeThemePermissionsRequest.h>
#include <aws/quicksight/model/DescribeTopicRequest.h>
#include <aws/quicksight/model/DescribeTopicPermissionsRequest.h>
#include <aws/quicksight/model/DescribeTopicRefreshRequest.h>
#include <aws/quicksight/model/DescribeTopicRefreshScheduleRequest.h>
#include <aws/quicksight/model/DescribeUserRequest.h>
#include <aws/quicksight/model/DescribeVPCConnectionRequest.h>
#include <aws/quicksight/model/GenerateEmbedUrlForAnonymousUserRequest.h>
#include <aws/quicksight/model/GenerateEmbedUrlForRegisteredUserRequest.h>
#include <aws/quicksight/model/GetDashboardEmbedUrlRequest.h>
#include <aws/quicksight/model/GetSessionEmbedUrlRequest.h>
#include <aws/quicksight/model/ListAnalysesRequest.h>
#include <aws/quicksight/model/ListDashboardVersionsRequest.h>
#include <aws/quicksight/model/ListDashboardsRequest.h>
#include <aws/quicksight/model/ListDataSetsRequest.h>
#include <aws/quicksight/model/ListDataSourcesRequest.h>
#include <aws/quicksight/model/ListFolderMembersRequest.h>
#include <aws/quicksight/model/ListFoldersRequest.h>
#include <aws/quicksight/model/ListGroupMembershipsRequest.h>
#include <aws/quicksight/model/ListGroupsRequest.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsRequest.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsForUserRequest.h>
#include <aws/quicksight/model/ListIngestionsRequest.h>
#include <aws/quicksight/model/ListNamespacesRequest.h>
#include <aws/quicksight/model/ListRefreshSchedulesRequest.h>
#include <aws/quicksight/model/ListTagsForResourceRequest.h>
#include <aws/quicksight/model/ListTemplateAliasesRequest.h>
#include <aws/quicksight/model/ListTemplateVersionsRequest.h>
#include <aws/quicksight/model/ListTemplatesRequest.h>
#include <aws/quicksight/model/ListThemeAliasesRequest.h>
#include <aws/quicksight/model/ListThemeVersionsRequest.h>
#include <aws/quicksight/model/ListThemesRequest.h>
#include <aws/quicksight/model/ListTopicRefreshSchedulesRequest.h>
#include <aws/quicksight/model/ListTopicsRequest.h>
#include <aws/quicksight/model/ListUserGroupsRequest.h>
#include <aws/quicksight/model/ListUsersRequest.h>
#include <aws/quicksight/model/ListVPCConnectionsRequest.h>
#include <aws/quicksight/model/PutDataSetRefreshPropertiesRequest.h>
#include <aws/quicksight/model/RegisterUserRequest.h>
#include <aws/quicksight/model/RestoreAnalysisRequest.h>
#include <aws/quicksight/model/SearchAnalysesRequest.h>
#include <aws/quicksight/model/SearchDashboardsRequest.h>
#include <aws/quicksight/model/SearchDataSetsRequest.h>
#include <aws/quicksight/model/SearchDataSourcesRequest.h>
#include <aws/quicksight/model/SearchFoldersRequest.h>
#include <aws/quicksight/model/SearchGroupsRequest.h>
#include <aws/quicksight/model/TagResourceRequest.h>
#include <aws/quicksight/model/UntagResourceRequest.h>
#include <aws/quicksight/model/UpdateAccountCustomizationRequest.h>
#include <aws/quicksight/model/UpdateAccountSettingsRequest.h>
#include <aws/quicksight/model/UpdateAnalysisRequest.h>
#include <aws/quicksight/model/UpdateAnalysisPermissionsRequest.h>
#include <aws/quicksight/model/UpdateDashboardRequest.h>
#include <aws/quicksight/model/UpdateDashboardPermissionsRequest.h>
#include <aws/quicksight/model/UpdateDashboardPublishedVersionRequest.h>
#include <aws/quicksight/model/UpdateDataSetRequest.h>
#include <aws/quicksight/model/UpdateDataSetPermissionsRequest.h>
#include <aws/quicksight/model/UpdateDataSourceRequest.h>
#include <aws/quicksight/model/UpdateDataSourcePermissionsRequest.h>
#include <aws/quicksight/model/UpdateFolderRequest.h>
#include <aws/quicksight/model/UpdateFolderPermissionsRequest.h>
#include <aws/quicksight/model/UpdateGroupRequest.h>
#include <aws/quicksight/model/UpdateIAMPolicyAssignmentRequest.h>
#include <aws/quicksight/model/UpdateIpRestrictionRequest.h>
#include <aws/quicksight/model/UpdatePublicSharingSettingsRequest.h>
#include <aws/quicksight/model/UpdateRefreshScheduleRequest.h>
#include <aws/quicksight/model/UpdateTemplateRequest.h>
#include <aws/quicksight/model/UpdateTemplateAliasRequest.h>
#include <aws/quicksight/model/UpdateTemplatePermissionsRequest.h>
#include <aws/quicksight/model/UpdateThemeRequest.h>
#include <aws/quicksight/model/UpdateThemeAliasRequest.h>
#include <aws/quicksight/model/UpdateThemePermissionsRequest.h>
#include <aws/quicksight/model/UpdateTopicRequest.h>
#include <aws/quicksight/model/UpdateTopicPermissionsRequest.h>
#include <aws/quicksight/model/UpdateTopicRefreshScheduleRequest.h>
#include <aws/quicksight/model/UpdateUserRequest.h>
#include <aws/quicksight/model/UpdateVPCConnectionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::QuickSight;
using namespace Aws::QuickSight::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* QuickSightClient::SERVICE_NAME = "quicksight";
const char* QuickSightClient::ALLOCATION_TAG = "QuickSightClient";

QuickSightClient::QuickSightClient(const QuickSight::QuickSightClientConfiguration& clientConfiguration,
                                   std::shared_ptr<QuickSightEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

QuickSightClient::QuickSightClient(const AWSCredentials& credentials,
                                   std::shared_ptr<QuickSightEndpointProviderBase> endpointProvider,
                                   const QuickSight::QuickSightClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

QuickSightClient::QuickSightClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<QuickSightEndpointProviderBase> endpointProvider,
                                   const QuickSight::QuickSightClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  QuickSightClient::QuickSightClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<QuickSightEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

QuickSightClient::QuickSightClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<QuickSightEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

QuickSightClient::QuickSightClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<QuickSightEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
QuickSightClient::~QuickSightClient()
{
}

std::shared_ptr<QuickSightEndpointProviderBase>& QuickSightClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void QuickSightClient::init(const QuickSight::QuickSightClientConfiguration& config)
{
  AWSClient::SetServiceClientName("QuickSight");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void QuickSightClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelIngestionOutcome QuickSightClient::CancelIngestion(const CancelIngestionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelIngestion", "Required field: AwsAccountId, is not set");
    return CancelIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelIngestion", "Required field: DataSetId, is not set");
    return CancelIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.IngestionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelIngestion", "Required field: IngestionId, is not set");
    return CancelIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionId());
  return CancelIngestionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CreateAccountCustomizationOutcome QuickSightClient::CreateAccountCustomization(const CreateAccountCustomizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAccountCustomization", "Required field: AwsAccountId, is not set");
    return CreateAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customizations");
  return CreateAccountCustomizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAccountSubscriptionOutcome QuickSightClient::CreateAccountSubscription(const CreateAccountSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccountSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAccountSubscription", "Required field: AwsAccountId, is not set");
    return CreateAccountSubscriptionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccountSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/account/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  return CreateAccountSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAnalysisOutcome QuickSightClient::CreateAnalysis(const CreateAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAnalysis", "Required field: AwsAccountId, is not set");
    return CreateAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAnalysis", "Required field: AnalysisId, is not set");
    return CreateAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  return CreateAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDashboardOutcome QuickSightClient::CreateDashboard(const CreateDashboardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDashboard", "Required field: AwsAccountId, is not set");
    return CreateDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDashboard", "Required field: DashboardId, is not set");
    return CreateDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  return CreateDashboardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataSetOutcome QuickSightClient::CreateDataSet(const CreateDataSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataSet", "Required field: AwsAccountId, is not set");
    return CreateDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets");
  return CreateDataSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataSourceOutcome QuickSightClient::CreateDataSource(const CreateDataSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataSource", "Required field: AwsAccountId, is not set");
    return CreateDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources");
  return CreateDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFolderOutcome QuickSightClient::CreateFolder(const CreateFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFolder", "Required field: AwsAccountId, is not set");
    return CreateFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFolder", "Required field: FolderId, is not set");
    return CreateFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  return CreateFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFolderMembershipOutcome QuickSightClient::CreateFolderMembership(const CreateFolderMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFolderMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFolderMembership", "Required field: AwsAccountId, is not set");
    return CreateFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFolderMembership", "Required field: FolderId, is not set");
    return CreateFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  if (!request.MemberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFolderMembership", "Required field: MemberId, is not set");
    return CreateFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }
  if (!request.MemberTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFolderMembership", "Required field: MemberType, is not set");
    return CreateFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFolderMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
  endpointResolutionOutcome.GetResult().AddPathSegment(MemberTypeMapper::GetNameForMemberType(request.GetMemberType()));
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberId());
  return CreateFolderMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupOutcome QuickSightClient::CreateGroup(const CreateGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGroup", "Required field: AwsAccountId, is not set");
    return CreateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGroup", "Required field: Namespace, is not set");
    return CreateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups");
  return CreateGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGroupMembershipOutcome QuickSightClient::CreateGroupMembership(const CreateGroupMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateGroupMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MemberNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGroupMembership", "Required field: MemberName, is not set");
    return CreateGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberName]", false));
  }
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGroupMembership", "Required field: GroupName, is not set");
    return CreateGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGroupMembership", "Required field: AwsAccountId, is not set");
    return CreateGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateGroupMembership", "Required field: Namespace, is not set");
    return CreateGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateGroupMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberName());
  return CreateGroupMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateIAMPolicyAssignmentOutcome QuickSightClient::CreateIAMPolicyAssignment(const CreateIAMPolicyAssignmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIAMPolicyAssignment", "Required field: AwsAccountId, is not set");
    return CreateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIAMPolicyAssignment", "Required field: Namespace, is not set");
    return CreateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments/");
  return CreateIAMPolicyAssignmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIngestionOutcome QuickSightClient::CreateIngestion(const CreateIngestionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIngestion", "Required field: DataSetId, is not set");
    return CreateIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.IngestionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIngestion", "Required field: IngestionId, is not set");
    return CreateIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIngestion", "Required field: AwsAccountId, is not set");
    return CreateIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionId());
  return CreateIngestionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateNamespaceOutcome QuickSightClient::CreateNamespace(const CreateNamespaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateNamespace", "Required field: AwsAccountId, is not set");
    return CreateNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  return CreateNamespaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRefreshScheduleOutcome QuickSightClient::CreateRefreshSchedule(const CreateRefreshScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRefreshSchedule", "Required field: DataSetId, is not set");
    return CreateRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRefreshSchedule", "Required field: AwsAccountId, is not set");
    return CreateRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-schedules");
  return CreateRefreshScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTemplateOutcome QuickSightClient::CreateTemplate(const CreateTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTemplate", "Required field: AwsAccountId, is not set");
    return CreateTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTemplate", "Required field: TemplateId, is not set");
    return CreateTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  return CreateTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTemplateAliasOutcome QuickSightClient::CreateTemplateAlias(const CreateTemplateAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTemplateAlias", "Required field: AwsAccountId, is not set");
    return CreateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTemplateAlias", "Required field: TemplateId, is not set");
    return CreateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTemplateAlias", "Required field: AliasName, is not set");
    return CreateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return CreateTemplateAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateThemeOutcome QuickSightClient::CreateTheme(const CreateThemeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTheme", "Required field: AwsAccountId, is not set");
    return CreateThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTheme", "Required field: ThemeId, is not set");
    return CreateThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  return CreateThemeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateThemeAliasOutcome QuickSightClient::CreateThemeAlias(const CreateThemeAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateThemeAlias", "Required field: AwsAccountId, is not set");
    return CreateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateThemeAlias", "Required field: ThemeId, is not set");
    return CreateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateThemeAlias", "Required field: AliasName, is not set");
    return CreateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return CreateThemeAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTopicOutcome QuickSightClient::CreateTopic(const CreateTopicRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTopic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTopic", "Required field: AwsAccountId, is not set");
    return CreateTopicOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTopic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/topics");
  return CreateTopicOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTopicRefreshScheduleOutcome QuickSightClient::CreateTopicRefreshSchedule(const CreateTopicRefreshScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTopicRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTopicRefreshSchedule", "Required field: AwsAccountId, is not set");
    return CreateTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTopicRefreshSchedule", "Required field: TopicId, is not set");
    return CreateTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTopicRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schedules");
  return CreateTopicRefreshScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVPCConnectionOutcome QuickSightClient::CreateVPCConnection(const CreateVPCConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateVPCConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVPCConnection", "Required field: AwsAccountId, is not set");
    return CreateVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateVPCConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-connections");
  return CreateVPCConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccountCustomizationOutcome QuickSightClient::DeleteAccountCustomization(const DeleteAccountCustomizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccountCustomization", "Required field: AwsAccountId, is not set");
    return DeleteAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customizations");
  return DeleteAccountCustomizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccountSubscriptionOutcome QuickSightClient::DeleteAccountSubscription(const DeleteAccountSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccountSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccountSubscription", "Required field: AwsAccountId, is not set");
    return DeleteAccountSubscriptionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccountSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/account/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  return DeleteAccountSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAnalysisOutcome QuickSightClient::DeleteAnalysis(const DeleteAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAnalysis", "Required field: AwsAccountId, is not set");
    return DeleteAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAnalysis", "Required field: AnalysisId, is not set");
    return DeleteAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  return DeleteAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDashboardOutcome QuickSightClient::DeleteDashboard(const DeleteDashboardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDashboard", "Required field: AwsAccountId, is not set");
    return DeleteDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDashboard", "Required field: DashboardId, is not set");
    return DeleteDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  return DeleteDashboardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataSetOutcome QuickSightClient::DeleteDataSet(const DeleteDataSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSet", "Required field: AwsAccountId, is not set");
    return DeleteDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSet", "Required field: DataSetId, is not set");
    return DeleteDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  return DeleteDataSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataSetRefreshPropertiesOutcome QuickSightClient::DeleteDataSetRefreshProperties(const DeleteDataSetRefreshPropertiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataSetRefreshProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSetRefreshProperties", "Required field: AwsAccountId, is not set");
    return DeleteDataSetRefreshPropertiesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSetRefreshProperties", "Required field: DataSetId, is not set");
    return DeleteDataSetRefreshPropertiesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataSetRefreshProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-properties");
  return DeleteDataSetRefreshPropertiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataSourceOutcome QuickSightClient::DeleteDataSource(const DeleteDataSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: AwsAccountId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: DataSourceId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  return DeleteDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFolderOutcome QuickSightClient::DeleteFolder(const DeleteFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolder", "Required field: AwsAccountId, is not set");
    return DeleteFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolder", "Required field: FolderId, is not set");
    return DeleteFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  return DeleteFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFolderMembershipOutcome QuickSightClient::DeleteFolderMembership(const DeleteFolderMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFolderMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolderMembership", "Required field: AwsAccountId, is not set");
    return DeleteFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolderMembership", "Required field: FolderId, is not set");
    return DeleteFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  if (!request.MemberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolderMembership", "Required field: MemberId, is not set");
    return DeleteFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }
  if (!request.MemberTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFolderMembership", "Required field: MemberType, is not set");
    return DeleteFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFolderMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
  endpointResolutionOutcome.GetResult().AddPathSegment(MemberTypeMapper::GetNameForMemberType(request.GetMemberType()));
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberId());
  return DeleteFolderMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupOutcome QuickSightClient::DeleteGroup(const DeleteGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: GroupName, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: AwsAccountId, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: Namespace, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  return DeleteGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGroupMembershipOutcome QuickSightClient::DeleteGroupMembership(const DeleteGroupMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteGroupMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MemberNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroupMembership", "Required field: MemberName, is not set");
    return DeleteGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberName]", false));
  }
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroupMembership", "Required field: GroupName, is not set");
    return DeleteGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroupMembership", "Required field: AwsAccountId, is not set");
    return DeleteGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGroupMembership", "Required field: Namespace, is not set");
    return DeleteGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteGroupMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberName());
  return DeleteGroupMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIAMPolicyAssignmentOutcome QuickSightClient::DeleteIAMPolicyAssignment(const DeleteIAMPolicyAssignmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIAMPolicyAssignment", "Required field: AwsAccountId, is not set");
    return DeleteIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AssignmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIAMPolicyAssignment", "Required field: AssignmentName, is not set");
    return DeleteIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssignmentName]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIAMPolicyAssignment", "Required field: Namespace, is not set");
    return DeleteIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespace/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssignmentName());
  return DeleteIAMPolicyAssignmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteNamespaceOutcome QuickSightClient::DeleteNamespace(const DeleteNamespaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNamespace", "Required field: AwsAccountId, is not set");
    return DeleteNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNamespace", "Required field: Namespace, is not set");
    return DeleteNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  return DeleteNamespaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRefreshScheduleOutcome QuickSightClient::DeleteRefreshSchedule(const DeleteRefreshScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRefreshSchedule", "Required field: DataSetId, is not set");
    return DeleteRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRefreshSchedule", "Required field: AwsAccountId, is not set");
    return DeleteRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ScheduleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRefreshSchedule", "Required field: ScheduleId, is not set");
    return DeleteRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScheduleId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-schedules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScheduleId());
  return DeleteRefreshScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTemplateOutcome QuickSightClient::DeleteTemplate(const DeleteTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTemplate", "Required field: AwsAccountId, is not set");
    return DeleteTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTemplate", "Required field: TemplateId, is not set");
    return DeleteTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  return DeleteTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTemplateAliasOutcome QuickSightClient::DeleteTemplateAlias(const DeleteTemplateAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTemplateAlias", "Required field: AwsAccountId, is not set");
    return DeleteTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTemplateAlias", "Required field: TemplateId, is not set");
    return DeleteTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTemplateAlias", "Required field: AliasName, is not set");
    return DeleteTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return DeleteTemplateAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteThemeOutcome QuickSightClient::DeleteTheme(const DeleteThemeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTheme", "Required field: AwsAccountId, is not set");
    return DeleteThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTheme", "Required field: ThemeId, is not set");
    return DeleteThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  return DeleteThemeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteThemeAliasOutcome QuickSightClient::DeleteThemeAlias(const DeleteThemeAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteThemeAlias", "Required field: AwsAccountId, is not set");
    return DeleteThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteThemeAlias", "Required field: ThemeId, is not set");
    return DeleteThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteThemeAlias", "Required field: AliasName, is not set");
    return DeleteThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return DeleteThemeAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTopicOutcome QuickSightClient::DeleteTopic(const DeleteTopicRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTopic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTopic", "Required field: AwsAccountId, is not set");
    return DeleteTopicOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTopic", "Required field: TopicId, is not set");
    return DeleteTopicOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTopic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
  return DeleteTopicOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTopicRefreshScheduleOutcome QuickSightClient::DeleteTopicRefreshSchedule(const DeleteTopicRefreshScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTopicRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTopicRefreshSchedule", "Required field: AwsAccountId, is not set");
    return DeleteTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTopicRefreshSchedule", "Required field: TopicId, is not set");
    return DeleteTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTopicRefreshSchedule", "Required field: DatasetId, is not set");
    return DeleteTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTopicRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schedules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetId());
  return DeleteTopicRefreshScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserOutcome QuickSightClient::DeleteUser(const DeleteUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: UserName, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: AwsAccountId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: Namespace, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
  return DeleteUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserByPrincipalIdOutcome QuickSightClient::DeleteUserByPrincipalId(const DeleteUserByPrincipalIdRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserByPrincipalId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserByPrincipalId", "Required field: PrincipalId, is not set");
    return DeleteUserByPrincipalIdOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserByPrincipalId", "Required field: AwsAccountId, is not set");
    return DeleteUserByPrincipalIdOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserByPrincipalId", "Required field: Namespace, is not set");
    return DeleteUserByPrincipalIdOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserByPrincipalId, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/user-principals/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  return DeleteUserByPrincipalIdOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVPCConnectionOutcome QuickSightClient::DeleteVPCConnection(const DeleteVPCConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteVPCConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVPCConnection", "Required field: AwsAccountId, is not set");
    return DeleteVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.VPCConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVPCConnection", "Required field: VPCConnectionId, is not set");
    return DeleteVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VPCConnectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteVPCConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-connections/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVPCConnectionId());
  return DeleteVPCConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountCustomizationOutcome QuickSightClient::DescribeAccountCustomization(const DescribeAccountCustomizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAccountCustomization", "Required field: AwsAccountId, is not set");
    return DescribeAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customizations");
  return DescribeAccountCustomizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountSettingsOutcome QuickSightClient::DescribeAccountSettings(const DescribeAccountSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAccountSettings", "Required field: AwsAccountId, is not set");
    return DescribeAccountSettingsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return DescribeAccountSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAccountSubscriptionOutcome QuickSightClient::DescribeAccountSubscription(const DescribeAccountSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAccountSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAccountSubscription", "Required field: AwsAccountId, is not set");
    return DescribeAccountSubscriptionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAccountSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/account/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  return DescribeAccountSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnalysisOutcome QuickSightClient::DescribeAnalysis(const DescribeAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAnalysis", "Required field: AwsAccountId, is not set");
    return DescribeAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAnalysis", "Required field: AnalysisId, is not set");
    return DescribeAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  return DescribeAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnalysisDefinitionOutcome QuickSightClient::DescribeAnalysisDefinition(const DescribeAnalysisDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAnalysisDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAnalysisDefinition", "Required field: AwsAccountId, is not set");
    return DescribeAnalysisDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAnalysisDefinition", "Required field: AnalysisId, is not set");
    return DescribeAnalysisDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAnalysisDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/definition");
  return DescribeAnalysisDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnalysisPermissionsOutcome QuickSightClient::DescribeAnalysisPermissions(const DescribeAnalysisPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAnalysisPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAnalysisPermissions", "Required field: AwsAccountId, is not set");
    return DescribeAnalysisPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAnalysisPermissions", "Required field: AnalysisId, is not set");
    return DescribeAnalysisPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAnalysisPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeAnalysisPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDashboardOutcome QuickSightClient::DescribeDashboard(const DescribeDashboardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDashboard", "Required field: AwsAccountId, is not set");
    return DescribeDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDashboard", "Required field: DashboardId, is not set");
    return DescribeDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  return DescribeDashboardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDashboardDefinitionOutcome QuickSightClient::DescribeDashboardDefinition(const DescribeDashboardDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDashboardDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDashboardDefinition", "Required field: AwsAccountId, is not set");
    return DescribeDashboardDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDashboardDefinition", "Required field: DashboardId, is not set");
    return DescribeDashboardDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDashboardDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/definition");
  return DescribeDashboardDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDashboardPermissionsOutcome QuickSightClient::DescribeDashboardPermissions(const DescribeDashboardPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDashboardPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDashboardPermissions", "Required field: AwsAccountId, is not set");
    return DescribeDashboardPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDashboardPermissions", "Required field: DashboardId, is not set");
    return DescribeDashboardPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDashboardPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeDashboardPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataSetOutcome QuickSightClient::DescribeDataSet(const DescribeDataSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSet", "Required field: AwsAccountId, is not set");
    return DescribeDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSet", "Required field: DataSetId, is not set");
    return DescribeDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  return DescribeDataSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataSetPermissionsOutcome QuickSightClient::DescribeDataSetPermissions(const DescribeDataSetPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataSetPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSetPermissions", "Required field: AwsAccountId, is not set");
    return DescribeDataSetPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSetPermissions", "Required field: DataSetId, is not set");
    return DescribeDataSetPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataSetPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeDataSetPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataSetRefreshPropertiesOutcome QuickSightClient::DescribeDataSetRefreshProperties(const DescribeDataSetRefreshPropertiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataSetRefreshProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSetRefreshProperties", "Required field: AwsAccountId, is not set");
    return DescribeDataSetRefreshPropertiesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSetRefreshProperties", "Required field: DataSetId, is not set");
    return DescribeDataSetRefreshPropertiesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataSetRefreshProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-properties");
  return DescribeDataSetRefreshPropertiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataSourceOutcome QuickSightClient::DescribeDataSource(const DescribeDataSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSource", "Required field: AwsAccountId, is not set");
    return DescribeDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSource", "Required field: DataSourceId, is not set");
    return DescribeDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  return DescribeDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeDataSourcePermissionsOutcome QuickSightClient::DescribeDataSourcePermissions(const DescribeDataSourcePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataSourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSourcePermissions", "Required field: AwsAccountId, is not set");
    return DescribeDataSourcePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeDataSourcePermissions", "Required field: DataSourceId, is not set");
    return DescribeDataSourcePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataSourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeDataSourcePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFolderOutcome QuickSightClient::DescribeFolder(const DescribeFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFolder", "Required field: AwsAccountId, is not set");
    return DescribeFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFolder", "Required field: FolderId, is not set");
    return DescribeFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  return DescribeFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFolderPermissionsOutcome QuickSightClient::DescribeFolderPermissions(const DescribeFolderPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFolderPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFolderPermissions", "Required field: AwsAccountId, is not set");
    return DescribeFolderPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFolderPermissions", "Required field: FolderId, is not set");
    return DescribeFolderPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFolderPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeFolderPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFolderResolvedPermissionsOutcome QuickSightClient::DescribeFolderResolvedPermissions(const DescribeFolderResolvedPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFolderResolvedPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFolderResolvedPermissions", "Required field: AwsAccountId, is not set");
    return DescribeFolderResolvedPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFolderResolvedPermissions", "Required field: FolderId, is not set");
    return DescribeFolderResolvedPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFolderResolvedPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resolved-permissions");
  return DescribeFolderResolvedPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeGroupOutcome QuickSightClient::DescribeGroup(const DescribeGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroup", "Required field: GroupName, is not set");
    return DescribeGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroup", "Required field: AwsAccountId, is not set");
    return DescribeGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroup", "Required field: Namespace, is not set");
    return DescribeGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  return DescribeGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeGroupMembershipOutcome QuickSightClient::DescribeGroupMembership(const DescribeGroupMembershipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGroupMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MemberNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroupMembership", "Required field: MemberName, is not set");
    return DescribeGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberName]", false));
  }
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroupMembership", "Required field: GroupName, is not set");
    return DescribeGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroupMembership", "Required field: AwsAccountId, is not set");
    return DescribeGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeGroupMembership", "Required field: Namespace, is not set");
    return DescribeGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeGroupMembership, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberName());
  return DescribeGroupMembershipOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeIAMPolicyAssignmentOutcome QuickSightClient::DescribeIAMPolicyAssignment(const DescribeIAMPolicyAssignmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIAMPolicyAssignment", "Required field: AwsAccountId, is not set");
    return DescribeIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AssignmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIAMPolicyAssignment", "Required field: AssignmentName, is not set");
    return DescribeIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssignmentName]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIAMPolicyAssignment", "Required field: Namespace, is not set");
    return DescribeIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssignmentName());
  return DescribeIAMPolicyAssignmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeIngestionOutcome QuickSightClient::DescribeIngestion(const DescribeIngestionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIngestion", "Required field: AwsAccountId, is not set");
    return DescribeIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIngestion", "Required field: DataSetId, is not set");
    return DescribeIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.IngestionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIngestion", "Required field: IngestionId, is not set");
    return DescribeIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IngestionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIngestion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionId());
  return DescribeIngestionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeIpRestrictionOutcome QuickSightClient::DescribeIpRestriction(const DescribeIpRestrictionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeIpRestriction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeIpRestriction", "Required field: AwsAccountId, is not set");
    return DescribeIpRestrictionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeIpRestriction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ip-restriction");
  return DescribeIpRestrictionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeNamespaceOutcome QuickSightClient::DescribeNamespace(const DescribeNamespaceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNamespace", "Required field: AwsAccountId, is not set");
    return DescribeNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeNamespace", "Required field: Namespace, is not set");
    return DescribeNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeNamespace, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  return DescribeNamespaceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRefreshScheduleOutcome QuickSightClient::DescribeRefreshSchedule(const DescribeRefreshScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRefreshSchedule", "Required field: AwsAccountId, is not set");
    return DescribeRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRefreshSchedule", "Required field: DataSetId, is not set");
    return DescribeRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.ScheduleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRefreshSchedule", "Required field: ScheduleId, is not set");
    return DescribeRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScheduleId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-schedules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScheduleId());
  return DescribeRefreshScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTemplateOutcome QuickSightClient::DescribeTemplate(const DescribeTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplate", "Required field: AwsAccountId, is not set");
    return DescribeTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplate", "Required field: TemplateId, is not set");
    return DescribeTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  return DescribeTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTemplateAliasOutcome QuickSightClient::DescribeTemplateAlias(const DescribeTemplateAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplateAlias", "Required field: AwsAccountId, is not set");
    return DescribeTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplateAlias", "Required field: TemplateId, is not set");
    return DescribeTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplateAlias", "Required field: AliasName, is not set");
    return DescribeTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return DescribeTemplateAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTemplateDefinitionOutcome QuickSightClient::DescribeTemplateDefinition(const DescribeTemplateDefinitionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTemplateDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplateDefinition", "Required field: AwsAccountId, is not set");
    return DescribeTemplateDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplateDefinition", "Required field: TemplateId, is not set");
    return DescribeTemplateDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTemplateDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/definition");
  return DescribeTemplateDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTemplatePermissionsOutcome QuickSightClient::DescribeTemplatePermissions(const DescribeTemplatePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTemplatePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplatePermissions", "Required field: AwsAccountId, is not set");
    return DescribeTemplatePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplatePermissions", "Required field: TemplateId, is not set");
    return DescribeTemplatePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTemplatePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeTemplatePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeThemeOutcome QuickSightClient::DescribeTheme(const DescribeThemeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTheme", "Required field: AwsAccountId, is not set");
    return DescribeThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTheme", "Required field: ThemeId, is not set");
    return DescribeThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  return DescribeThemeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeThemeAliasOutcome QuickSightClient::DescribeThemeAlias(const DescribeThemeAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThemeAlias", "Required field: AwsAccountId, is not set");
    return DescribeThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThemeAlias", "Required field: ThemeId, is not set");
    return DescribeThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThemeAlias", "Required field: AliasName, is not set");
    return DescribeThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return DescribeThemeAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeThemePermissionsOutcome QuickSightClient::DescribeThemePermissions(const DescribeThemePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeThemePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThemePermissions", "Required field: AwsAccountId, is not set");
    return DescribeThemePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThemePermissions", "Required field: ThemeId, is not set");
    return DescribeThemePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeThemePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeThemePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTopicOutcome QuickSightClient::DescribeTopic(const DescribeTopicRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTopic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopic", "Required field: AwsAccountId, is not set");
    return DescribeTopicOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopic", "Required field: TopicId, is not set");
    return DescribeTopicOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTopic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
  return DescribeTopicOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTopicPermissionsOutcome QuickSightClient::DescribeTopicPermissions(const DescribeTopicPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTopicPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicPermissions", "Required field: AwsAccountId, is not set");
    return DescribeTopicPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicPermissions", "Required field: TopicId, is not set");
    return DescribeTopicPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTopicPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return DescribeTopicPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTopicRefreshOutcome QuickSightClient::DescribeTopicRefresh(const DescribeTopicRefreshRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTopicRefresh, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicRefresh", "Required field: AwsAccountId, is not set");
    return DescribeTopicRefreshOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicRefresh", "Required field: TopicId, is not set");
    return DescribeTopicRefreshOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  if (!request.RefreshIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicRefresh", "Required field: RefreshId, is not set");
    return DescribeTopicRefreshOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RefreshId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTopicRefresh, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/refresh/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRefreshId());
  return DescribeTopicRefreshOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeTopicRefreshScheduleOutcome QuickSightClient::DescribeTopicRefreshSchedule(const DescribeTopicRefreshScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTopicRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicRefreshSchedule", "Required field: AwsAccountId, is not set");
    return DescribeTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicRefreshSchedule", "Required field: TopicId, is not set");
    return DescribeTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicRefreshSchedule", "Required field: DatasetId, is not set");
    return DescribeTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTopicRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schedules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetId());
  return DescribeTopicRefreshScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeUserOutcome QuickSightClient::DescribeUser(const DescribeUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: UserName, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: AwsAccountId, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: Namespace, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
  return DescribeUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVPCConnectionOutcome QuickSightClient::DescribeVPCConnection(const DescribeVPCConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVPCConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVPCConnection", "Required field: AwsAccountId, is not set");
    return DescribeVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.VPCConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVPCConnection", "Required field: VPCConnectionId, is not set");
    return DescribeVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VPCConnectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVPCConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-connections/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVPCConnectionId());
  return DescribeVPCConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GenerateEmbedUrlForAnonymousUserOutcome QuickSightClient::GenerateEmbedUrlForAnonymousUser(const GenerateEmbedUrlForAnonymousUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateEmbedUrlForAnonymousUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateEmbedUrlForAnonymousUser", "Required field: AwsAccountId, is not set");
    return GenerateEmbedUrlForAnonymousUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateEmbedUrlForAnonymousUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/embed-url/anonymous-user");
  return GenerateEmbedUrlForAnonymousUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateEmbedUrlForRegisteredUserOutcome QuickSightClient::GenerateEmbedUrlForRegisteredUser(const GenerateEmbedUrlForRegisteredUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateEmbedUrlForRegisteredUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateEmbedUrlForRegisteredUser", "Required field: AwsAccountId, is not set");
    return GenerateEmbedUrlForRegisteredUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateEmbedUrlForRegisteredUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/embed-url/registered-user");
  return GenerateEmbedUrlForRegisteredUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDashboardEmbedUrlOutcome QuickSightClient::GetDashboardEmbedUrl(const GetDashboardEmbedUrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDashboardEmbedUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDashboardEmbedUrl", "Required field: AwsAccountId, is not set");
    return GetDashboardEmbedUrlOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDashboardEmbedUrl", "Required field: DashboardId, is not set");
    return GetDashboardEmbedUrlOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  if (!request.IdentityTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDashboardEmbedUrl", "Required field: IdentityType, is not set");
    return GetDashboardEmbedUrlOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDashboardEmbedUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/embed-url");
  return GetDashboardEmbedUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSessionEmbedUrlOutcome QuickSightClient::GetSessionEmbedUrl(const GetSessionEmbedUrlRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSessionEmbedUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSessionEmbedUrl", "Required field: AwsAccountId, is not set");
    return GetSessionEmbedUrlOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSessionEmbedUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/session-embed-url");
  return GetSessionEmbedUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAnalysesOutcome QuickSightClient::ListAnalyses(const ListAnalysesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAnalyses", "Required field: AwsAccountId, is not set");
    return ListAnalysesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses");
  return ListAnalysesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDashboardVersionsOutcome QuickSightClient::ListDashboardVersions(const ListDashboardVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDashboardVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDashboardVersions", "Required field: AwsAccountId, is not set");
    return ListDashboardVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDashboardVersions", "Required field: DashboardId, is not set");
    return ListDashboardVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDashboardVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListDashboardVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDashboardsOutcome QuickSightClient::ListDashboards(const ListDashboardsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDashboards", "Required field: AwsAccountId, is not set");
    return ListDashboardsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards");
  return ListDashboardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataSetsOutcome QuickSightClient::ListDataSets(const ListDataSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSets", "Required field: AwsAccountId, is not set");
    return ListDataSetsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets");
  return ListDataSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataSourcesOutcome QuickSightClient::ListDataSources(const ListDataSourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: AwsAccountId, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources");
  return ListDataSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFolderMembersOutcome QuickSightClient::ListFolderMembers(const ListFolderMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFolderMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFolderMembers", "Required field: AwsAccountId, is not set");
    return ListFolderMembersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFolderMembers", "Required field: FolderId, is not set");
    return ListFolderMembersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFolderMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  return ListFolderMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFoldersOutcome QuickSightClient::ListFolders(const ListFoldersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFolders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFolders", "Required field: AwsAccountId, is not set");
    return ListFoldersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFolders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders");
  return ListFoldersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGroupMembershipsOutcome QuickSightClient::ListGroupMemberships(const ListGroupMembershipsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroupMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroupMemberships", "Required field: GroupName, is not set");
    return ListGroupMembershipsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroupMemberships", "Required field: AwsAccountId, is not set");
    return ListGroupMembershipsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroupMemberships", "Required field: Namespace, is not set");
    return ListGroupMembershipsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGroupMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  return ListGroupMembershipsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGroupsOutcome QuickSightClient::ListGroups(const ListGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroups", "Required field: AwsAccountId, is not set");
    return ListGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroups", "Required field: Namespace, is not set");
    return ListGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups");
  return ListGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIAMPolicyAssignmentsOutcome QuickSightClient::ListIAMPolicyAssignments(const ListIAMPolicyAssignmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIAMPolicyAssignments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIAMPolicyAssignments", "Required field: AwsAccountId, is not set");
    return ListIAMPolicyAssignmentsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIAMPolicyAssignments", "Required field: Namespace, is not set");
    return ListIAMPolicyAssignmentsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIAMPolicyAssignments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v2/iam-policy-assignments");
  return ListIAMPolicyAssignmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIAMPolicyAssignmentsForUserOutcome QuickSightClient::ListIAMPolicyAssignmentsForUser(const ListIAMPolicyAssignmentsForUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIAMPolicyAssignmentsForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIAMPolicyAssignmentsForUser", "Required field: AwsAccountId, is not set");
    return ListIAMPolicyAssignmentsForUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIAMPolicyAssignmentsForUser", "Required field: UserName, is not set");
    return ListIAMPolicyAssignmentsForUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIAMPolicyAssignmentsForUser", "Required field: Namespace, is not set");
    return ListIAMPolicyAssignmentsForUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIAMPolicyAssignmentsForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments");
  return ListIAMPolicyAssignmentsForUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIngestionsOutcome QuickSightClient::ListIngestions(const ListIngestionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIngestions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIngestions", "Required field: DataSetId, is not set");
    return ListIngestionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIngestions", "Required field: AwsAccountId, is not set");
    return ListIngestionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIngestions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions");
  return ListIngestionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNamespacesOutcome QuickSightClient::ListNamespaces(const ListNamespacesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNamespaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNamespaces", "Required field: AwsAccountId, is not set");
    return ListNamespacesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNamespaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces");
  return ListNamespacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRefreshSchedulesOutcome QuickSightClient::ListRefreshSchedules(const ListRefreshSchedulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRefreshSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRefreshSchedules", "Required field: AwsAccountId, is not set");
    return ListRefreshSchedulesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRefreshSchedules", "Required field: DataSetId, is not set");
    return ListRefreshSchedulesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRefreshSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-schedules");
  return ListRefreshSchedulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome QuickSightClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplateAliasesOutcome QuickSightClient::ListTemplateAliases(const ListTemplateAliasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplateAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateAliases", "Required field: AwsAccountId, is not set");
    return ListTemplateAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateAliases", "Required field: TemplateId, is not set");
    return ListTemplateAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplateAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases");
  return ListTemplateAliasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplateVersionsOutcome QuickSightClient::ListTemplateVersions(const ListTemplateVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateVersions", "Required field: AwsAccountId, is not set");
    return ListTemplateVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateVersions", "Required field: TemplateId, is not set");
    return ListTemplateVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListTemplateVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTemplatesOutcome QuickSightClient::ListTemplates(const ListTemplatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplates", "Required field: AwsAccountId, is not set");
    return ListTemplatesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates");
  return ListTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThemeAliasesOutcome QuickSightClient::ListThemeAliases(const ListThemeAliasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListThemeAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemeAliases", "Required field: AwsAccountId, is not set");
    return ListThemeAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemeAliases", "Required field: ThemeId, is not set");
    return ListThemeAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListThemeAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases");
  return ListThemeAliasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThemeVersionsOutcome QuickSightClient::ListThemeVersions(const ListThemeVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListThemeVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemeVersions", "Required field: AwsAccountId, is not set");
    return ListThemeVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemeVersions", "Required field: ThemeId, is not set");
    return ListThemeVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListThemeVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  return ListThemeVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThemesOutcome QuickSightClient::ListThemes(const ListThemesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListThemes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemes", "Required field: AwsAccountId, is not set");
    return ListThemesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListThemes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes");
  return ListThemesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTopicRefreshSchedulesOutcome QuickSightClient::ListTopicRefreshSchedules(const ListTopicRefreshSchedulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTopicRefreshSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTopicRefreshSchedules", "Required field: AwsAccountId, is not set");
    return ListTopicRefreshSchedulesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTopicRefreshSchedules", "Required field: TopicId, is not set");
    return ListTopicRefreshSchedulesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTopicRefreshSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schedules");
  return ListTopicRefreshSchedulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTopicsOutcome QuickSightClient::ListTopics(const ListTopicsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTopics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTopics", "Required field: AwsAccountId, is not set");
    return ListTopicsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTopics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/topics");
  return ListTopicsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUserGroupsOutcome QuickSightClient::ListUserGroups(const ListUserGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUserGroups", "Required field: UserName, is not set");
    return ListUserGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUserGroups", "Required field: AwsAccountId, is not set");
    return ListUserGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUserGroups", "Required field: Namespace, is not set");
    return ListUserGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups");
  return ListUserGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUsersOutcome QuickSightClient::ListUsers(const ListUsersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: AwsAccountId, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: Namespace, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  return ListUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVPCConnectionsOutcome QuickSightClient::ListVPCConnections(const ListVPCConnectionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVPCConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVPCConnections", "Required field: AwsAccountId, is not set");
    return ListVPCConnectionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVPCConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-connections");
  return ListVPCConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

PutDataSetRefreshPropertiesOutcome QuickSightClient::PutDataSetRefreshProperties(const PutDataSetRefreshPropertiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutDataSetRefreshProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutDataSetRefreshProperties", "Required field: AwsAccountId, is not set");
    return PutDataSetRefreshPropertiesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutDataSetRefreshProperties", "Required field: DataSetId, is not set");
    return PutDataSetRefreshPropertiesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutDataSetRefreshProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-properties");
  return PutDataSetRefreshPropertiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

RegisterUserOutcome QuickSightClient::RegisterUser(const RegisterUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterUser", "Required field: AwsAccountId, is not set");
    return RegisterUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterUser", "Required field: Namespace, is not set");
    return RegisterUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  return RegisterUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreAnalysisOutcome QuickSightClient::RestoreAnalysis(const RestoreAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreAnalysis", "Required field: AwsAccountId, is not set");
    return RestoreAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreAnalysis", "Required field: AnalysisId, is not set");
    return RestoreAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/restore/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  return RestoreAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchAnalysesOutcome QuickSightClient::SearchAnalyses(const SearchAnalysesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchAnalyses", "Required field: AwsAccountId, is not set");
    return SearchAnalysesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search/analyses");
  return SearchAnalysesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchDashboardsOutcome QuickSightClient::SearchDashboards(const SearchDashboardsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchDashboards", "Required field: AwsAccountId, is not set");
    return SearchDashboardsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search/dashboards");
  return SearchDashboardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchDataSetsOutcome QuickSightClient::SearchDataSets(const SearchDataSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchDataSets", "Required field: AwsAccountId, is not set");
    return SearchDataSetsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search/data-sets");
  return SearchDataSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchDataSourcesOutcome QuickSightClient::SearchDataSources(const SearchDataSourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchDataSources", "Required field: AwsAccountId, is not set");
    return SearchDataSourcesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search/data-sources");
  return SearchDataSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchFoldersOutcome QuickSightClient::SearchFolders(const SearchFoldersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchFolders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchFolders", "Required field: AwsAccountId, is not set");
    return SearchFoldersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchFolders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/search/folders");
  return SearchFoldersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchGroupsOutcome QuickSightClient::SearchGroups(const SearchGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchGroups", "Required field: AwsAccountId, is not set");
    return SearchGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchGroups", "Required field: Namespace, is not set");
    return SearchGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups-search");
  return SearchGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome QuickSightClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome QuickSightClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateAccountCustomizationOutcome QuickSightClient::UpdateAccountCustomization(const UpdateAccountCustomizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccountCustomization", "Required field: AwsAccountId, is not set");
    return UpdateAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/customizations");
  return UpdateAccountCustomizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAccountSettingsOutcome QuickSightClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccountSettings", "Required field: AwsAccountId, is not set");
    return UpdateAccountSettingsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  return UpdateAccountSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAnalysisOutcome QuickSightClient::UpdateAnalysis(const UpdateAnalysisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnalysis", "Required field: AwsAccountId, is not set");
    return UpdateAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnalysis", "Required field: AnalysisId, is not set");
    return UpdateAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  return UpdateAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAnalysisPermissionsOutcome QuickSightClient::UpdateAnalysisPermissions(const UpdateAnalysisPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAnalysisPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnalysisPermissions", "Required field: AwsAccountId, is not set");
    return UpdateAnalysisPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnalysisPermissions", "Required field: AnalysisId, is not set");
    return UpdateAnalysisPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAnalysisPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdateAnalysisPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDashboardOutcome QuickSightClient::UpdateDashboard(const UpdateDashboardRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboard", "Required field: AwsAccountId, is not set");
    return UpdateDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboard", "Required field: DashboardId, is not set");
    return UpdateDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  return UpdateDashboardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDashboardPermissionsOutcome QuickSightClient::UpdateDashboardPermissions(const UpdateDashboardPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDashboardPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPermissions", "Required field: AwsAccountId, is not set");
    return UpdateDashboardPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPermissions", "Required field: DashboardId, is not set");
    return UpdateDashboardPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDashboardPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdateDashboardPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDashboardPublishedVersionOutcome QuickSightClient::UpdateDashboardPublishedVersion(const UpdateDashboardPublishedVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDashboardPublishedVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPublishedVersion", "Required field: AwsAccountId, is not set");
    return UpdateDashboardPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPublishedVersion", "Required field: DashboardId, is not set");
    return UpdateDashboardPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  if (!request.VersionNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPublishedVersion", "Required field: VersionNumber, is not set");
    return UpdateDashboardPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDashboardPublishedVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
  return UpdateDashboardPublishedVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataSetOutcome QuickSightClient::UpdateDataSet(const UpdateDataSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSet", "Required field: AwsAccountId, is not set");
    return UpdateDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSet", "Required field: DataSetId, is not set");
    return UpdateDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  return UpdateDataSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataSetPermissionsOutcome QuickSightClient::UpdateDataSetPermissions(const UpdateDataSetPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSetPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSetPermissions", "Required field: AwsAccountId, is not set");
    return UpdateDataSetPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSetPermissions", "Required field: DataSetId, is not set");
    return UpdateDataSetPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataSetPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdateDataSetPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataSourceOutcome QuickSightClient::UpdateDataSource(const UpdateDataSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: AwsAccountId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: DataSourceId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  return UpdateDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataSourcePermissionsOutcome QuickSightClient::UpdateDataSourcePermissions(const UpdateDataSourcePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSourcePermissions", "Required field: AwsAccountId, is not set");
    return UpdateDataSourcePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSourcePermissions", "Required field: DataSourceId, is not set");
    return UpdateDataSourcePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataSourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdateDataSourcePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFolderOutcome QuickSightClient::UpdateFolder(const UpdateFolderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFolder", "Required field: AwsAccountId, is not set");
    return UpdateFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFolder", "Required field: FolderId, is not set");
    return UpdateFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  return UpdateFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFolderPermissionsOutcome QuickSightClient::UpdateFolderPermissions(const UpdateFolderPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFolderPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFolderPermissions", "Required field: AwsAccountId, is not set");
    return UpdateFolderPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFolderPermissions", "Required field: FolderId, is not set");
    return UpdateFolderPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFolderPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdateFolderPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateGroupOutcome QuickSightClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGroup", "Required field: GroupName, is not set");
    return UpdateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGroup", "Required field: AwsAccountId, is not set");
    return UpdateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGroup", "Required field: Namespace, is not set");
    return UpdateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  return UpdateGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateIAMPolicyAssignmentOutcome QuickSightClient::UpdateIAMPolicyAssignment(const UpdateIAMPolicyAssignmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIAMPolicyAssignment", "Required field: AwsAccountId, is not set");
    return UpdateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AssignmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIAMPolicyAssignment", "Required field: AssignmentName, is not set");
    return UpdateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssignmentName]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIAMPolicyAssignment", "Required field: Namespace, is not set");
    return UpdateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssignmentName());
  return UpdateIAMPolicyAssignmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateIpRestrictionOutcome QuickSightClient::UpdateIpRestriction(const UpdateIpRestrictionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIpRestriction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIpRestriction", "Required field: AwsAccountId, is not set");
    return UpdateIpRestrictionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIpRestriction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ip-restriction");
  return UpdateIpRestrictionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePublicSharingSettingsOutcome QuickSightClient::UpdatePublicSharingSettings(const UpdatePublicSharingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePublicSharingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePublicSharingSettings", "Required field: AwsAccountId, is not set");
    return UpdatePublicSharingSettingsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePublicSharingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/public-sharing-settings");
  return UpdatePublicSharingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRefreshScheduleOutcome QuickSightClient::UpdateRefreshSchedule(const UpdateRefreshScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRefreshSchedule", "Required field: DataSetId, is not set");
    return UpdateRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRefreshSchedule", "Required field: AwsAccountId, is not set");
    return UpdateRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-schedules");
  return UpdateRefreshScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTemplateOutcome QuickSightClient::UpdateTemplate(const UpdateTemplateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplate", "Required field: AwsAccountId, is not set");
    return UpdateTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplate", "Required field: TemplateId, is not set");
    return UpdateTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  return UpdateTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTemplateAliasOutcome QuickSightClient::UpdateTemplateAlias(const UpdateTemplateAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplateAlias", "Required field: AwsAccountId, is not set");
    return UpdateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplateAlias", "Required field: TemplateId, is not set");
    return UpdateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplateAlias", "Required field: AliasName, is not set");
    return UpdateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTemplateAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return UpdateTemplateAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTemplatePermissionsOutcome QuickSightClient::UpdateTemplatePermissions(const UpdateTemplatePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTemplatePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplatePermissions", "Required field: AwsAccountId, is not set");
    return UpdateTemplatePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplatePermissions", "Required field: TemplateId, is not set");
    return UpdateTemplatePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTemplatePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdateTemplatePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateThemeOutcome QuickSightClient::UpdateTheme(const UpdateThemeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTheme", "Required field: AwsAccountId, is not set");
    return UpdateThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTheme", "Required field: ThemeId, is not set");
    return UpdateThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  return UpdateThemeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateThemeAliasOutcome QuickSightClient::UpdateThemeAlias(const UpdateThemeAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThemeAlias", "Required field: AwsAccountId, is not set");
    return UpdateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThemeAlias", "Required field: ThemeId, is not set");
    return UpdateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThemeAlias", "Required field: AliasName, is not set");
    return UpdateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  return UpdateThemeAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateThemePermissionsOutcome QuickSightClient::UpdateThemePermissions(const UpdateThemePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateThemePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThemePermissions", "Required field: AwsAccountId, is not set");
    return UpdateThemePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThemePermissions", "Required field: ThemeId, is not set");
    return UpdateThemePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateThemePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdateThemePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTopicOutcome QuickSightClient::UpdateTopic(const UpdateTopicRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTopic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTopic", "Required field: AwsAccountId, is not set");
    return UpdateTopicOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTopic", "Required field: TopicId, is not set");
    return UpdateTopicOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTopic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
  return UpdateTopicOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTopicPermissionsOutcome QuickSightClient::UpdateTopicPermissions(const UpdateTopicPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTopicPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTopicPermissions", "Required field: AwsAccountId, is not set");
    return UpdateTopicPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTopicPermissions", "Required field: TopicId, is not set");
    return UpdateTopicPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTopicPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  return UpdateTopicPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTopicRefreshScheduleOutcome QuickSightClient::UpdateTopicRefreshSchedule(const UpdateTopicRefreshScheduleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTopicRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTopicRefreshSchedule", "Required field: AwsAccountId, is not set");
    return UpdateTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTopicRefreshSchedule", "Required field: TopicId, is not set");
    return UpdateTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTopicRefreshSchedule", "Required field: DatasetId, is not set");
    return UpdateTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTopicRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/schedules/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetId());
  return UpdateTopicRefreshScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserOutcome QuickSightClient::UpdateUser(const UpdateUserRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: UserName, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: AwsAccountId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: Namespace, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
  return UpdateUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateVPCConnectionOutcome QuickSightClient::UpdateVPCConnection(const UpdateVPCConnectionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateVPCConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVPCConnection", "Required field: AwsAccountId, is not set");
    return UpdateVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.VPCConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVPCConnection", "Required field: VPCConnectionId, is not set");
    return UpdateVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VPCConnectionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateVPCConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-connections/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVPCConnectionId());
  return UpdateVPCConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

