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

#include <aws/route53-recovery-readiness/Route53RecoveryReadinessClient.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessErrorMarshaller.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessEndpointProvider.h>
#include <aws/route53-recovery-readiness/model/CreateCellRequest.h>
#include <aws/route53-recovery-readiness/model/CreateCrossAccountAuthorizationRequest.h>
#include <aws/route53-recovery-readiness/model/CreateReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/CreateRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/CreateResourceSetRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteCellRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteCrossAccountAuthorizationRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/DeleteResourceSetRequest.h>
#include <aws/route53-recovery-readiness/model/GetArchitectureRecommendationsRequest.h>
#include <aws/route53-recovery-readiness/model/GetCellRequest.h>
#include <aws/route53-recovery-readiness/model/GetCellReadinessSummaryRequest.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckResourceStatusRequest.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckStatusRequest.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupReadinessSummaryRequest.h>
#include <aws/route53-recovery-readiness/model/GetResourceSetRequest.h>
#include <aws/route53-recovery-readiness/model/ListCellsRequest.h>
#include <aws/route53-recovery-readiness/model/ListCrossAccountAuthorizationsRequest.h>
#include <aws/route53-recovery-readiness/model/ListReadinessChecksRequest.h>
#include <aws/route53-recovery-readiness/model/ListRecoveryGroupsRequest.h>
#include <aws/route53-recovery-readiness/model/ListResourceSetsRequest.h>
#include <aws/route53-recovery-readiness/model/ListRulesRequest.h>
#include <aws/route53-recovery-readiness/model/ListTagsForResourcesRequest.h>
#include <aws/route53-recovery-readiness/model/TagResourceRequest.h>
#include <aws/route53-recovery-readiness/model/UntagResourceRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateCellRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateReadinessCheckRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateRecoveryGroupRequest.h>
#include <aws/route53-recovery-readiness/model/UpdateResourceSetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53RecoveryReadiness;
using namespace Aws::Route53RecoveryReadiness::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* Route53RecoveryReadinessClient::SERVICE_NAME = "route53-recovery-readiness";
const char* Route53RecoveryReadinessClient::ALLOCATION_TAG = "Route53RecoveryReadinessClient";

Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(const Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& clientConfiguration,
                                                               std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(const AWSCredentials& credentials,
                                                               std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> endpointProvider,
                                                               const Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase> endpointProvider,
                                                               const Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(const AWSCredentials& credentials,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

Route53RecoveryReadinessClient::Route53RecoveryReadinessClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53RecoveryReadinessErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<Route53RecoveryReadinessEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
Route53RecoveryReadinessClient::~Route53RecoveryReadinessClient()
{
}

std::shared_ptr<Route53RecoveryReadinessEndpointProviderBase>& Route53RecoveryReadinessClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void Route53RecoveryReadinessClient::init(const Route53RecoveryReadiness::Route53RecoveryReadinessClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Route53 Recovery Readiness");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void Route53RecoveryReadinessClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateCellOutcome Route53RecoveryReadinessClient::CreateCell(const CreateCellRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cells");
  return CreateCellOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCrossAccountAuthorizationOutcome Route53RecoveryReadinessClient::CreateCrossAccountAuthorization(const CreateCrossAccountAuthorizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCrossAccountAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCrossAccountAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/crossaccountauthorizations");
  return CreateCrossAccountAuthorizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReadinessCheckOutcome Route53RecoveryReadinessClient::CreateReadinessCheck(const CreateReadinessCheckRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks");
  return CreateReadinessCheckOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRecoveryGroupOutcome Route53RecoveryReadinessClient::CreateRecoveryGroup(const CreateRecoveryGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups");
  return CreateRecoveryGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourceSetOutcome Route53RecoveryReadinessClient::CreateResourceSet(const CreateResourceSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesets");
  return CreateResourceSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCellOutcome Route53RecoveryReadinessClient::DeleteCell(const DeleteCellRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CellNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCell", "Required field: CellName, is not set");
    return DeleteCellOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CellName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cells/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCellName());
  return DeleteCellOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCrossAccountAuthorizationOutcome Route53RecoveryReadinessClient::DeleteCrossAccountAuthorization(const DeleteCrossAccountAuthorizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCrossAccountAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CrossAccountAuthorizationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCrossAccountAuthorization", "Required field: CrossAccountAuthorization, is not set");
    return DeleteCrossAccountAuthorizationOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CrossAccountAuthorization]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCrossAccountAuthorization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/crossaccountauthorizations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCrossAccountAuthorization());
  return DeleteCrossAccountAuthorizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteReadinessCheckOutcome Route53RecoveryReadinessClient::DeleteReadinessCheck(const DeleteReadinessCheckRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReadinessCheckNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteReadinessCheck", "Required field: ReadinessCheckName, is not set");
    return DeleteReadinessCheckOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReadinessCheckName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReadinessCheckName());
  return DeleteReadinessCheckOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRecoveryGroupOutcome Route53RecoveryReadinessClient::DeleteRecoveryGroup(const DeleteRecoveryGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecoveryGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRecoveryGroup", "Required field: RecoveryGroupName, is not set");
    return DeleteRecoveryGroupOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryGroupName());
  return DeleteRecoveryGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceSetOutcome Route53RecoveryReadinessClient::DeleteResourceSet(const DeleteResourceSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResourceSet", "Required field: ResourceSetName, is not set");
    return DeleteResourceSetOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceSetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceSetName());
  return DeleteResourceSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetArchitectureRecommendationsOutcome Route53RecoveryReadinessClient::GetArchitectureRecommendations(const GetArchitectureRecommendationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetArchitectureRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecoveryGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetArchitectureRecommendations", "Required field: RecoveryGroupName, is not set");
    return GetArchitectureRecommendationsOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetArchitectureRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/architectureRecommendations");
  return GetArchitectureRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCellOutcome Route53RecoveryReadinessClient::GetCell(const GetCellRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CellNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCell", "Required field: CellName, is not set");
    return GetCellOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CellName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cells/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCellName());
  return GetCellOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCellReadinessSummaryOutcome Route53RecoveryReadinessClient::GetCellReadinessSummary(const GetCellReadinessSummaryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCellReadinessSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CellNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCellReadinessSummary", "Required field: CellName, is not set");
    return GetCellReadinessSummaryOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CellName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCellReadinessSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cellreadiness/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCellName());
  return GetCellReadinessSummaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetReadinessCheckOutcome Route53RecoveryReadinessClient::GetReadinessCheck(const GetReadinessCheckRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReadinessCheckNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReadinessCheck", "Required field: ReadinessCheckName, is not set");
    return GetReadinessCheckOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReadinessCheckName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReadinessCheckName());
  return GetReadinessCheckOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetReadinessCheckResourceStatusOutcome Route53RecoveryReadinessClient::GetReadinessCheckResourceStatus(const GetReadinessCheckResourceStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReadinessCheckResourceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReadinessCheckNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReadinessCheckResourceStatus", "Required field: ReadinessCheckName, is not set");
    return GetReadinessCheckResourceStatusOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReadinessCheckName]", false));
  }
  if (!request.ResourceIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReadinessCheckResourceStatus", "Required field: ResourceIdentifier, is not set");
    return GetReadinessCheckResourceStatusOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReadinessCheckResourceStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReadinessCheckName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resource/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return GetReadinessCheckResourceStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetReadinessCheckStatusOutcome Route53RecoveryReadinessClient::GetReadinessCheckStatus(const GetReadinessCheckStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetReadinessCheckStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReadinessCheckNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetReadinessCheckStatus", "Required field: ReadinessCheckName, is not set");
    return GetReadinessCheckStatusOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReadinessCheckName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetReadinessCheckStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReadinessCheckName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/status");
  return GetReadinessCheckStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRecoveryGroupOutcome Route53RecoveryReadinessClient::GetRecoveryGroup(const GetRecoveryGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecoveryGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecoveryGroup", "Required field: RecoveryGroupName, is not set");
    return GetRecoveryGroupOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryGroupName());
  return GetRecoveryGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRecoveryGroupReadinessSummaryOutcome Route53RecoveryReadinessClient::GetRecoveryGroupReadinessSummary(const GetRecoveryGroupReadinessSummaryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecoveryGroupReadinessSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecoveryGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecoveryGroupReadinessSummary", "Required field: RecoveryGroupName, is not set");
    return GetRecoveryGroupReadinessSummaryOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecoveryGroupReadinessSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroupreadiness/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryGroupName());
  return GetRecoveryGroupReadinessSummaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourceSetOutcome Route53RecoveryReadinessClient::GetResourceSet(const GetResourceSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourceSet", "Required field: ResourceSetName, is not set");
    return GetResourceSetOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceSetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceSetName());
  return GetResourceSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCellsOutcome Route53RecoveryReadinessClient::ListCells(const ListCellsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCells, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCells, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cells");
  return ListCellsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCrossAccountAuthorizationsOutcome Route53RecoveryReadinessClient::ListCrossAccountAuthorizations(const ListCrossAccountAuthorizationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCrossAccountAuthorizations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCrossAccountAuthorizations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/crossaccountauthorizations");
  return ListCrossAccountAuthorizationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListReadinessChecksOutcome Route53RecoveryReadinessClient::ListReadinessChecks(const ListReadinessChecksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReadinessChecks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReadinessChecks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks");
  return ListReadinessChecksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRecoveryGroupsOutcome Route53RecoveryReadinessClient::ListRecoveryGroups(const ListRecoveryGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecoveryGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecoveryGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups");
  return ListRecoveryGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListResourceSetsOutcome Route53RecoveryReadinessClient::ListResourceSets(const ListResourceSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResourceSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResourceSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesets");
  return ListResourceSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRulesOutcome Route53RecoveryReadinessClient::ListRules(const ListRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/rules");
  return ListRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourcesOutcome Route53RecoveryReadinessClient::ListTagsForResources(const ListTagsForResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResources", "Required field: ResourceArn, is not set");
    return ListTagsForResourcesOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome Route53RecoveryReadinessClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome Route53RecoveryReadinessClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateCellOutcome Route53RecoveryReadinessClient::UpdateCell(const UpdateCellRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CellNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCell", "Required field: CellName, is not set");
    return UpdateCellOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CellName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCell, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cells/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCellName());
  return UpdateCellOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateReadinessCheckOutcome Route53RecoveryReadinessClient::UpdateReadinessCheck(const UpdateReadinessCheckRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReadinessCheckNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateReadinessCheck", "Required field: ReadinessCheckName, is not set");
    return UpdateReadinessCheckOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReadinessCheckName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateReadinessCheck, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/readinesschecks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReadinessCheckName());
  return UpdateReadinessCheckOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRecoveryGroupOutcome Route53RecoveryReadinessClient::UpdateRecoveryGroup(const UpdateRecoveryGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RecoveryGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecoveryGroup", "Required field: RecoveryGroupName, is not set");
    return UpdateRecoveryGroupOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRecoveryGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recoverygroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryGroupName());
  return UpdateRecoveryGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceSetOutcome Route53RecoveryReadinessClient::UpdateResourceSet(const UpdateResourceSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResourceSet", "Required field: ResourceSetName, is not set");
    return UpdateResourceSetOutcome(Aws::Client::AWSError<Route53RecoveryReadinessErrors>(Route53RecoveryReadinessErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceSetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResourceSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resourcesets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceSetName());
  return UpdateResourceSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

