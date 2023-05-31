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

#include <aws/workspaces-web/WorkSpacesWebClient.h>
#include <aws/workspaces-web/WorkSpacesWebErrorMarshaller.h>
#include <aws/workspaces-web/WorkSpacesWebEndpointProvider.h>
#include <aws/workspaces-web/model/AssociateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/AssociateIpAccessSettingsRequest.h>
#include <aws/workspaces-web/model/AssociateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/AssociateTrustStoreRequest.h>
#include <aws/workspaces-web/model/AssociateUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/AssociateUserSettingsRequest.h>
#include <aws/workspaces-web/model/CreateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/CreateIdentityProviderRequest.h>
#include <aws/workspaces-web/model/CreateIpAccessSettingsRequest.h>
#include <aws/workspaces-web/model/CreateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/CreatePortalRequest.h>
#include <aws/workspaces-web/model/CreateTrustStoreRequest.h>
#include <aws/workspaces-web/model/CreateUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/CreateUserSettingsRequest.h>
#include <aws/workspaces-web/model/DeleteBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/DeleteIdentityProviderRequest.h>
#include <aws/workspaces-web/model/DeleteIpAccessSettingsRequest.h>
#include <aws/workspaces-web/model/DeleteNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/DeletePortalRequest.h>
#include <aws/workspaces-web/model/DeleteTrustStoreRequest.h>
#include <aws/workspaces-web/model/DeleteUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/DeleteUserSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateIpAccessSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateTrustStoreRequest.h>
#include <aws/workspaces-web/model/DisassociateUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/DisassociateUserSettingsRequest.h>
#include <aws/workspaces-web/model/GetBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/GetIdentityProviderRequest.h>
#include <aws/workspaces-web/model/GetIpAccessSettingsRequest.h>
#include <aws/workspaces-web/model/GetNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/GetPortalRequest.h>
#include <aws/workspaces-web/model/GetPortalServiceProviderMetadataRequest.h>
#include <aws/workspaces-web/model/GetTrustStoreRequest.h>
#include <aws/workspaces-web/model/GetTrustStoreCertificateRequest.h>
#include <aws/workspaces-web/model/GetUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/GetUserSettingsRequest.h>
#include <aws/workspaces-web/model/ListBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/ListIdentityProvidersRequest.h>
#include <aws/workspaces-web/model/ListIpAccessSettingsRequest.h>
#include <aws/workspaces-web/model/ListNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/ListPortalsRequest.h>
#include <aws/workspaces-web/model/ListTagsForResourceRequest.h>
#include <aws/workspaces-web/model/ListTrustStoreCertificatesRequest.h>
#include <aws/workspaces-web/model/ListTrustStoresRequest.h>
#include <aws/workspaces-web/model/ListUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/ListUserSettingsRequest.h>
#include <aws/workspaces-web/model/TagResourceRequest.h>
#include <aws/workspaces-web/model/UntagResourceRequest.h>
#include <aws/workspaces-web/model/UpdateBrowserSettingsRequest.h>
#include <aws/workspaces-web/model/UpdateIdentityProviderRequest.h>
#include <aws/workspaces-web/model/UpdateIpAccessSettingsRequest.h>
#include <aws/workspaces-web/model/UpdateNetworkSettingsRequest.h>
#include <aws/workspaces-web/model/UpdatePortalRequest.h>
#include <aws/workspaces-web/model/UpdateTrustStoreRequest.h>
#include <aws/workspaces-web/model/UpdateUserAccessLoggingSettingsRequest.h>
#include <aws/workspaces-web/model/UpdateUserSettingsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkSpacesWeb;
using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* WorkSpacesWebClient::SERVICE_NAME = "workspaces-web";
const char* WorkSpacesWebClient::ALLOCATION_TAG = "WorkSpacesWebClient";

WorkSpacesWebClient::WorkSpacesWebClient(const WorkSpacesWeb::WorkSpacesWebClientConfiguration& clientConfiguration,
                                         std::shared_ptr<WorkSpacesWebEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WorkSpacesWebClient::WorkSpacesWebClient(const AWSCredentials& credentials,
                                         std::shared_ptr<WorkSpacesWebEndpointProviderBase> endpointProvider,
                                         const WorkSpacesWeb::WorkSpacesWebClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WorkSpacesWebClient::WorkSpacesWebClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<WorkSpacesWebEndpointProviderBase> endpointProvider,
                                         const WorkSpacesWeb::WorkSpacesWebClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  WorkSpacesWebClient::WorkSpacesWebClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<WorkSpacesWebEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WorkSpacesWebClient::WorkSpacesWebClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WorkSpacesWebEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WorkSpacesWebClient::WorkSpacesWebClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkSpacesWebErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WorkSpacesWebEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
WorkSpacesWebClient::~WorkSpacesWebClient()
{
}

std::shared_ptr<WorkSpacesWebEndpointProviderBase>& WorkSpacesWebClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void WorkSpacesWebClient::init(const WorkSpacesWeb::WorkSpacesWebClientConfiguration& config)
{
  AWSClient::SetServiceClientName("WorkSpaces Web");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void WorkSpacesWebClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateBrowserSettingsOutcome WorkSpacesWebClient::AssociateBrowserSettings(const AssociateBrowserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrowserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateBrowserSettings", "Required field: BrowserSettingsArn, is not set");
    return AssociateBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserSettingsArn]", false));
  }
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateBrowserSettings", "Required field: PortalArn, is not set");
    return AssociateBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings");
  return AssociateBrowserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateIpAccessSettingsOutcome WorkSpacesWebClient::AssociateIpAccessSettings(const AssociateIpAccessSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateIpAccessSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IpAccessSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateIpAccessSettings", "Required field: IpAccessSettingsArn, is not set");
    return AssociateIpAccessSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IpAccessSettingsArn]", false));
  }
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateIpAccessSettings", "Required field: PortalArn, is not set");
    return AssociateIpAccessSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateIpAccessSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ipAccessSettings");
  return AssociateIpAccessSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateNetworkSettingsOutcome WorkSpacesWebClient::AssociateNetworkSettings(const AssociateNetworkSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateNetworkSettings", "Required field: NetworkSettingsArn, is not set");
    return AssociateNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSettingsArn]", false));
  }
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateNetworkSettings", "Required field: PortalArn, is not set");
    return AssociateNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings");
  return AssociateNetworkSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateTrustStoreOutcome WorkSpacesWebClient::AssociateTrustStore(const AssociateTrustStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateTrustStore", "Required field: PortalArn, is not set");
    return AssociateTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateTrustStore", "Required field: TrustStoreArn, is not set");
    return AssociateTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores");
  return AssociateTrustStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateUserAccessLoggingSettingsOutcome WorkSpacesWebClient::AssociateUserAccessLoggingSettings(const AssociateUserAccessLoggingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateUserAccessLoggingSettings", "Required field: PortalArn, is not set");
    return AssociateUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  if (!request.UserAccessLoggingSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateUserAccessLoggingSettings", "Required field: UserAccessLoggingSettingsArn, is not set");
    return AssociateUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserAccessLoggingSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings");
  return AssociateUserAccessLoggingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AssociateUserSettingsOutcome WorkSpacesWebClient::AssociateUserSettings(const AssociateUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateUserSettings", "Required field: PortalArn, is not set");
    return AssociateUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  if (!request.UserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateUserSettings", "Required field: UserSettingsArn, is not set");
    return AssociateUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings");
  return AssociateUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateBrowserSettingsOutcome WorkSpacesWebClient::CreateBrowserSettings(const CreateBrowserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings");
  return CreateBrowserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIdentityProviderOutcome WorkSpacesWebClient::CreateIdentityProvider(const CreateIdentityProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identityProviders");
  return CreateIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIpAccessSettingsOutcome WorkSpacesWebClient::CreateIpAccessSettings(const CreateIpAccessSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIpAccessSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIpAccessSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ipAccessSettings");
  return CreateIpAccessSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateNetworkSettingsOutcome WorkSpacesWebClient::CreateNetworkSettings(const CreateNetworkSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings");
  return CreateNetworkSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePortalOutcome WorkSpacesWebClient::CreatePortal(const CreatePortalRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals");
  return CreatePortalOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTrustStoreOutcome WorkSpacesWebClient::CreateTrustStore(const CreateTrustStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores");
  return CreateTrustStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserAccessLoggingSettingsOutcome WorkSpacesWebClient::CreateUserAccessLoggingSettings(const CreateUserAccessLoggingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings");
  return CreateUserAccessLoggingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUserSettingsOutcome WorkSpacesWebClient::CreateUserSettings(const CreateUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings");
  return CreateUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBrowserSettingsOutcome WorkSpacesWebClient::DeleteBrowserSettings(const DeleteBrowserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrowserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBrowserSettings", "Required field: BrowserSettingsArn, is not set");
    return DeleteBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetBrowserSettingsArn());
  return DeleteBrowserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIdentityProviderOutcome WorkSpacesWebClient::DeleteIdentityProvider(const DeleteIdentityProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityProviderArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIdentityProvider", "Required field: IdentityProviderArn, is not set");
    return DeleteIdentityProviderOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityProviderArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identityProviders/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetIdentityProviderArn());
  return DeleteIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIpAccessSettingsOutcome WorkSpacesWebClient::DeleteIpAccessSettings(const DeleteIpAccessSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIpAccessSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IpAccessSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIpAccessSettings", "Required field: IpAccessSettingsArn, is not set");
    return DeleteIpAccessSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IpAccessSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIpAccessSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ipAccessSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetIpAccessSettingsArn());
  return DeleteIpAccessSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteNetworkSettingsOutcome WorkSpacesWebClient::DeleteNetworkSettings(const DeleteNetworkSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNetworkSettings", "Required field: NetworkSettingsArn, is not set");
    return DeleteNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetNetworkSettingsArn());
  return DeleteNetworkSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePortalOutcome WorkSpacesWebClient::DeletePortal(const DeletePortalRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePortal", "Required field: PortalArn, is not set");
    return DeletePortalOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  return DeletePortalOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTrustStoreOutcome WorkSpacesWebClient::DeleteTrustStore(const DeleteTrustStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTrustStore", "Required field: TrustStoreArn, is not set");
    return DeleteTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetTrustStoreArn());
  return DeleteTrustStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserAccessLoggingSettingsOutcome WorkSpacesWebClient::DeleteUserAccessLoggingSettings(const DeleteUserAccessLoggingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserAccessLoggingSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserAccessLoggingSettings", "Required field: UserAccessLoggingSettingsArn, is not set");
    return DeleteUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserAccessLoggingSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserAccessLoggingSettingsArn());
  return DeleteUserAccessLoggingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUserSettingsOutcome WorkSpacesWebClient::DeleteUserSettings(const DeleteUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUserSettings", "Required field: UserSettingsArn, is not set");
    return DeleteUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserSettingsArn());
  return DeleteUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateBrowserSettingsOutcome WorkSpacesWebClient::DisassociateBrowserSettings(const DisassociateBrowserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateBrowserSettings", "Required field: PortalArn, is not set");
    return DisassociateBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings");
  return DisassociateBrowserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateIpAccessSettingsOutcome WorkSpacesWebClient::DisassociateIpAccessSettings(const DisassociateIpAccessSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateIpAccessSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateIpAccessSettings", "Required field: PortalArn, is not set");
    return DisassociateIpAccessSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateIpAccessSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ipAccessSettings");
  return DisassociateIpAccessSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateNetworkSettingsOutcome WorkSpacesWebClient::DisassociateNetworkSettings(const DisassociateNetworkSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateNetworkSettings", "Required field: PortalArn, is not set");
    return DisassociateNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings");
  return DisassociateNetworkSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateTrustStoreOutcome WorkSpacesWebClient::DisassociateTrustStore(const DisassociateTrustStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateTrustStore", "Required field: PortalArn, is not set");
    return DisassociateTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores");
  return DisassociateTrustStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateUserAccessLoggingSettingsOutcome WorkSpacesWebClient::DisassociateUserAccessLoggingSettings(const DisassociateUserAccessLoggingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateUserAccessLoggingSettings", "Required field: PortalArn, is not set");
    return DisassociateUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings");
  return DisassociateUserAccessLoggingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateUserSettingsOutcome WorkSpacesWebClient::DisassociateUserSettings(const DisassociateUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateUserSettings", "Required field: PortalArn, is not set");
    return DisassociateUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings");
  return DisassociateUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetBrowserSettingsOutcome WorkSpacesWebClient::GetBrowserSettings(const GetBrowserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrowserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBrowserSettings", "Required field: BrowserSettingsArn, is not set");
    return GetBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetBrowserSettingsArn());
  return GetBrowserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIdentityProviderOutcome WorkSpacesWebClient::GetIdentityProvider(const GetIdentityProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityProviderArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIdentityProvider", "Required field: IdentityProviderArn, is not set");
    return GetIdentityProviderOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityProviderArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identityProviders/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetIdentityProviderArn());
  return GetIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIpAccessSettingsOutcome WorkSpacesWebClient::GetIpAccessSettings(const GetIpAccessSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIpAccessSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IpAccessSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIpAccessSettings", "Required field: IpAccessSettingsArn, is not set");
    return GetIpAccessSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IpAccessSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIpAccessSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ipAccessSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetIpAccessSettingsArn());
  return GetIpAccessSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetNetworkSettingsOutcome WorkSpacesWebClient::GetNetworkSettings(const GetNetworkSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetworkSettings", "Required field: NetworkSettingsArn, is not set");
    return GetNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetNetworkSettingsArn());
  return GetNetworkSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPortalOutcome WorkSpacesWebClient::GetPortal(const GetPortalRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPortal", "Required field: PortalArn, is not set");
    return GetPortalOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  return GetPortalOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPortalServiceProviderMetadataOutcome WorkSpacesWebClient::GetPortalServiceProviderMetadata(const GetPortalServiceProviderMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPortalServiceProviderMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPortalServiceProviderMetadata", "Required field: PortalArn, is not set");
    return GetPortalServiceProviderMetadataOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPortalServiceProviderMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portalIdp/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  return GetPortalServiceProviderMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTrustStoreOutcome WorkSpacesWebClient::GetTrustStore(const GetTrustStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrustStore", "Required field: TrustStoreArn, is not set");
    return GetTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetTrustStoreArn());
  return GetTrustStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTrustStoreCertificateOutcome WorkSpacesWebClient::GetTrustStoreCertificate(const GetTrustStoreCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTrustStoreCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ThumbprintHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrustStoreCertificate", "Required field: Thumbprint, is not set");
    return GetTrustStoreCertificateOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Thumbprint]", false));
  }
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTrustStoreCertificate", "Required field: TrustStoreArn, is not set");
    return GetTrustStoreCertificateOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTrustStoreCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetTrustStoreArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/certificate");
  return GetTrustStoreCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUserAccessLoggingSettingsOutcome WorkSpacesWebClient::GetUserAccessLoggingSettings(const GetUserAccessLoggingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserAccessLoggingSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUserAccessLoggingSettings", "Required field: UserAccessLoggingSettingsArn, is not set");
    return GetUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserAccessLoggingSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserAccessLoggingSettingsArn());
  return GetUserAccessLoggingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUserSettingsOutcome WorkSpacesWebClient::GetUserSettings(const GetUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUserSettings", "Required field: UserSettingsArn, is not set");
    return GetUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserSettingsArn());
  return GetUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBrowserSettingsOutcome WorkSpacesWebClient::ListBrowserSettings(const ListBrowserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings");
  return ListBrowserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIdentityProvidersOutcome WorkSpacesWebClient::ListIdentityProviders(const ListIdentityProvidersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdentityProviders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIdentityProviders", "Required field: PortalArn, is not set");
    return ListIdentityProvidersOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIdentityProviders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identityProviders");
  return ListIdentityProvidersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIpAccessSettingsOutcome WorkSpacesWebClient::ListIpAccessSettings(const ListIpAccessSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIpAccessSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIpAccessSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ipAccessSettings");
  return ListIpAccessSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListNetworkSettingsOutcome WorkSpacesWebClient::ListNetworkSettings(const ListNetworkSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings");
  return ListNetworkSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPortalsOutcome WorkSpacesWebClient::ListPortals(const ListPortalsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPortals, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPortals, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals");
  return ListPortalsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome WorkSpacesWebClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTrustStoreCertificatesOutcome WorkSpacesWebClient::ListTrustStoreCertificates(const ListTrustStoreCertificatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrustStoreCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTrustStoreCertificates", "Required field: TrustStoreArn, is not set");
    return ListTrustStoreCertificatesOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrustStoreCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetTrustStoreArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/certificates");
  return ListTrustStoreCertificatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTrustStoresOutcome WorkSpacesWebClient::ListTrustStores(const ListTrustStoresRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTrustStores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTrustStores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores");
  return ListTrustStoresOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUserAccessLoggingSettingsOutcome WorkSpacesWebClient::ListUserAccessLoggingSettings(const ListUserAccessLoggingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings");
  return ListUserAccessLoggingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListUserSettingsOutcome WorkSpacesWebClient::ListUserSettings(const ListUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings");
  return ListUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome WorkSpacesWebClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome WorkSpacesWebClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateBrowserSettingsOutcome WorkSpacesWebClient::UpdateBrowserSettings(const UpdateBrowserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BrowserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBrowserSettings", "Required field: BrowserSettingsArn, is not set");
    return UpdateBrowserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrowserSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBrowserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/browserSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetBrowserSettingsArn());
  return UpdateBrowserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateIdentityProviderOutcome WorkSpacesWebClient::UpdateIdentityProvider(const UpdateIdentityProviderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdentityProviderArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIdentityProvider", "Required field: IdentityProviderArn, is not set");
    return UpdateIdentityProviderOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityProviderArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIdentityProvider, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/identityProviders/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetIdentityProviderArn());
  return UpdateIdentityProviderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateIpAccessSettingsOutcome WorkSpacesWebClient::UpdateIpAccessSettings(const UpdateIpAccessSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIpAccessSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IpAccessSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIpAccessSettings", "Required field: IpAccessSettingsArn, is not set");
    return UpdateIpAccessSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IpAccessSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIpAccessSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ipAccessSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetIpAccessSettingsArn());
  return UpdateIpAccessSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateNetworkSettingsOutcome WorkSpacesWebClient::UpdateNetworkSettings(const UpdateNetworkSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NetworkSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateNetworkSettings", "Required field: NetworkSettingsArn, is not set");
    return UpdateNetworkSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateNetworkSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/networkSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetNetworkSettingsArn());
  return UpdateNetworkSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdatePortalOutcome WorkSpacesWebClient::UpdatePortal(const UpdatePortalRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PortalArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePortal", "Required field: PortalArn, is not set");
    return UpdatePortalOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PortalArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePortal, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetPortalArn());
  return UpdatePortalOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateTrustStoreOutcome WorkSpacesWebClient::UpdateTrustStore(const UpdateTrustStoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TrustStoreArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTrustStore", "Required field: TrustStoreArn, is not set");
    return UpdateTrustStoreOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TrustStoreArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTrustStore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/trustStores/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetTrustStoreArn());
  return UpdateTrustStoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserAccessLoggingSettingsOutcome WorkSpacesWebClient::UpdateUserAccessLoggingSettings(const UpdateUserAccessLoggingSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserAccessLoggingSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserAccessLoggingSettings", "Required field: UserAccessLoggingSettingsArn, is not set");
    return UpdateUserAccessLoggingSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserAccessLoggingSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserAccessLoggingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userAccessLoggingSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserAccessLoggingSettingsArn());
  return UpdateUserAccessLoggingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateUserSettingsOutcome WorkSpacesWebClient::UpdateUserSettings(const UpdateUserSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserSettingsArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUserSettings", "Required field: UserSettingsArn, is not set");
    return UpdateUserSettingsOutcome(Aws::Client::AWSError<WorkSpacesWebErrors>(WorkSpacesWebErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserSettingsArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateUserSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/userSettings/");
  endpointResolutionOutcome.GetResult().AddPathSegments(request.GetUserSettingsArn());
  return UpdateUserSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

