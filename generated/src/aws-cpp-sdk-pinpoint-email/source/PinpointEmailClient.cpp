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

#include <aws/pinpoint-email/PinpointEmailClient.h>
#include <aws/pinpoint-email/PinpointEmailErrorMarshaller.h>
#include <aws/pinpoint-email/PinpointEmailEndpointProvider.h>
#include <aws/pinpoint-email/model/CreateConfigurationSetRequest.h>
#include <aws/pinpoint-email/model/CreateConfigurationSetEventDestinationRequest.h>
#include <aws/pinpoint-email/model/CreateDedicatedIpPoolRequest.h>
#include <aws/pinpoint-email/model/CreateDeliverabilityTestReportRequest.h>
#include <aws/pinpoint-email/model/CreateEmailIdentityRequest.h>
#include <aws/pinpoint-email/model/DeleteConfigurationSetRequest.h>
#include <aws/pinpoint-email/model/DeleteConfigurationSetEventDestinationRequest.h>
#include <aws/pinpoint-email/model/DeleteDedicatedIpPoolRequest.h>
#include <aws/pinpoint-email/model/DeleteEmailIdentityRequest.h>
#include <aws/pinpoint-email/model/GetAccountRequest.h>
#include <aws/pinpoint-email/model/GetBlacklistReportsRequest.h>
#include <aws/pinpoint-email/model/GetConfigurationSetRequest.h>
#include <aws/pinpoint-email/model/GetConfigurationSetEventDestinationsRequest.h>
#include <aws/pinpoint-email/model/GetDedicatedIpRequest.h>
#include <aws/pinpoint-email/model/GetDedicatedIpsRequest.h>
#include <aws/pinpoint-email/model/GetDeliverabilityDashboardOptionsRequest.h>
#include <aws/pinpoint-email/model/GetDeliverabilityTestReportRequest.h>
#include <aws/pinpoint-email/model/GetDomainDeliverabilityCampaignRequest.h>
#include <aws/pinpoint-email/model/GetDomainStatisticsReportRequest.h>
#include <aws/pinpoint-email/model/GetEmailIdentityRequest.h>
#include <aws/pinpoint-email/model/ListConfigurationSetsRequest.h>
#include <aws/pinpoint-email/model/ListDedicatedIpPoolsRequest.h>
#include <aws/pinpoint-email/model/ListDeliverabilityTestReportsRequest.h>
#include <aws/pinpoint-email/model/ListDomainDeliverabilityCampaignsRequest.h>
#include <aws/pinpoint-email/model/ListEmailIdentitiesRequest.h>
#include <aws/pinpoint-email/model/ListTagsForResourceRequest.h>
#include <aws/pinpoint-email/model/PutAccountDedicatedIpWarmupAttributesRequest.h>
#include <aws/pinpoint-email/model/PutAccountSendingAttributesRequest.h>
#include <aws/pinpoint-email/model/PutConfigurationSetDeliveryOptionsRequest.h>
#include <aws/pinpoint-email/model/PutConfigurationSetReputationOptionsRequest.h>
#include <aws/pinpoint-email/model/PutConfigurationSetSendingOptionsRequest.h>
#include <aws/pinpoint-email/model/PutConfigurationSetTrackingOptionsRequest.h>
#include <aws/pinpoint-email/model/PutDedicatedIpInPoolRequest.h>
#include <aws/pinpoint-email/model/PutDedicatedIpWarmupAttributesRequest.h>
#include <aws/pinpoint-email/model/PutDeliverabilityDashboardOptionRequest.h>
#include <aws/pinpoint-email/model/PutEmailIdentityDkimAttributesRequest.h>
#include <aws/pinpoint-email/model/PutEmailIdentityFeedbackAttributesRequest.h>
#include <aws/pinpoint-email/model/PutEmailIdentityMailFromAttributesRequest.h>
#include <aws/pinpoint-email/model/SendEmailRequest.h>
#include <aws/pinpoint-email/model/TagResourceRequest.h>
#include <aws/pinpoint-email/model/UntagResourceRequest.h>
#include <aws/pinpoint-email/model/UpdateConfigurationSetEventDestinationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PinpointEmail;
using namespace Aws::PinpointEmail::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* PinpointEmailClient::SERVICE_NAME = "ses";
const char* PinpointEmailClient::ALLOCATION_TAG = "PinpointEmailClient";

PinpointEmailClient::PinpointEmailClient(const PinpointEmail::PinpointEmailClientConfiguration& clientConfiguration,
                                         std::shared_ptr<PinpointEmailEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointEmailErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PinpointEmailClient::PinpointEmailClient(const AWSCredentials& credentials,
                                         std::shared_ptr<PinpointEmailEndpointProviderBase> endpointProvider,
                                         const PinpointEmail::PinpointEmailClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointEmailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PinpointEmailClient::PinpointEmailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<PinpointEmailEndpointProviderBase> endpointProvider,
                                         const PinpointEmail::PinpointEmailClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointEmailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  PinpointEmailClient::PinpointEmailClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointEmailErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<PinpointEmailEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PinpointEmailClient::PinpointEmailClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointEmailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PinpointEmailEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PinpointEmailClient::PinpointEmailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PinpointEmailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PinpointEmailEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
PinpointEmailClient::~PinpointEmailClient()
{
}

std::shared_ptr<PinpointEmailEndpointProviderBase>& PinpointEmailClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void PinpointEmailClient::init(const PinpointEmail::PinpointEmailClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Pinpoint Email");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void PinpointEmailClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateConfigurationSetOutcome PinpointEmailClient::CreateConfigurationSet(const CreateConfigurationSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfigurationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConfigurationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets");
  return CreateConfigurationSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConfigurationSetEventDestinationOutcome PinpointEmailClient::CreateConfigurationSetEventDestination(const CreateConfigurationSetEventDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfigurationSetEventDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return CreateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConfigurationSetEventDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations");
  return CreateConfigurationSetEventDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDedicatedIpPoolOutcome PinpointEmailClient::CreateDedicatedIpPool(const CreateDedicatedIpPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDedicatedIpPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDedicatedIpPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/dedicated-ip-pools");
  return CreateDedicatedIpPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeliverabilityTestReportOutcome PinpointEmailClient::CreateDeliverabilityTestReport(const CreateDeliverabilityTestReportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDeliverabilityTestReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDeliverabilityTestReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard/test");
  return CreateDeliverabilityTestReportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEmailIdentityOutcome PinpointEmailClient::CreateEmailIdentity(const CreateEmailIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEmailIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEmailIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/identities");
  return CreateEmailIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfigurationSetOutcome PinpointEmailClient::DeleteConfigurationSet(const DeleteConfigurationSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfigurationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSet", "Required field: ConfigurationSetName, is not set");
    return DeleteConfigurationSetOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConfigurationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
  return DeleteConfigurationSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfigurationSetEventDestinationOutcome PinpointEmailClient::DeleteConfigurationSetEventDestination(const DeleteConfigurationSetEventDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfigurationSetEventDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return DeleteConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  if (!request.EventDestinationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfigurationSetEventDestination", "Required field: EventDestinationName, is not set");
    return DeleteConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventDestinationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConfigurationSetEventDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventDestinationName());
  return DeleteConfigurationSetEventDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDedicatedIpPoolOutcome PinpointEmailClient::DeleteDedicatedIpPool(const DeleteDedicatedIpPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDedicatedIpPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PoolNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDedicatedIpPool", "Required field: PoolName, is not set");
    return DeleteDedicatedIpPoolOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PoolName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDedicatedIpPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/dedicated-ip-pools/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPoolName());
  return DeleteDedicatedIpPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEmailIdentityOutcome PinpointEmailClient::DeleteEmailIdentity(const DeleteEmailIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEmailIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEmailIdentity", "Required field: EmailIdentity, is not set");
    return DeleteEmailIdentityOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEmailIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/identities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
  return DeleteEmailIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetAccountOutcome PinpointEmailClient::GetAccount(const GetAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/account");
  return GetAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBlacklistReportsOutcome PinpointEmailClient::GetBlacklistReports(const GetBlacklistReportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBlacklistReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BlacklistItemNamesHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBlacklistReports", "Required field: BlacklistItemNames, is not set");
    return GetBlacklistReportsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BlacklistItemNames]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBlacklistReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard/blacklist-report");
  return GetBlacklistReportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConfigurationSetOutcome PinpointEmailClient::GetConfigurationSet(const GetConfigurationSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfigurationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfigurationSet", "Required field: ConfigurationSetName, is not set");
    return GetConfigurationSetOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConfigurationSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
  return GetConfigurationSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConfigurationSetEventDestinationsOutcome PinpointEmailClient::GetConfigurationSetEventDestinations(const GetConfigurationSetEventDestinationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfigurationSetEventDestinations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfigurationSetEventDestinations", "Required field: ConfigurationSetName, is not set");
    return GetConfigurationSetEventDestinationsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConfigurationSetEventDestinations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations");
  return GetConfigurationSetEventDestinationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDedicatedIpOutcome PinpointEmailClient::GetDedicatedIp(const GetDedicatedIpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDedicatedIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IpHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDedicatedIp", "Required field: Ip, is not set");
    return GetDedicatedIpOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDedicatedIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/dedicated-ips/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIp());
  return GetDedicatedIpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDedicatedIpsOutcome PinpointEmailClient::GetDedicatedIps(const GetDedicatedIpsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDedicatedIps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDedicatedIps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/dedicated-ips");
  return GetDedicatedIpsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeliverabilityDashboardOptionsOutcome PinpointEmailClient::GetDeliverabilityDashboardOptions(const GetDeliverabilityDashboardOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeliverabilityDashboardOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeliverabilityDashboardOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard");
  return GetDeliverabilityDashboardOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeliverabilityTestReportOutcome PinpointEmailClient::GetDeliverabilityTestReport(const GetDeliverabilityTestReportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDeliverabilityTestReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReportIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeliverabilityTestReport", "Required field: ReportId, is not set");
    return GetDeliverabilityTestReportOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDeliverabilityTestReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard/test-reports/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportId());
  return GetDeliverabilityTestReportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainDeliverabilityCampaignOutcome PinpointEmailClient::GetDomainDeliverabilityCampaign(const GetDomainDeliverabilityCampaignRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomainDeliverabilityCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CampaignIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainDeliverabilityCampaign", "Required field: CampaignId, is not set");
    return GetDomainDeliverabilityCampaignOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CampaignId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDomainDeliverabilityCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard/campaigns/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCampaignId());
  return GetDomainDeliverabilityCampaignOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainStatisticsReportOutcome PinpointEmailClient::GetDomainStatisticsReport(const GetDomainStatisticsReportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomainStatisticsReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: Domain, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Domain]", false));
  }
  if (!request.StartDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: StartDate, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainStatisticsReport", "Required field: EndDate, is not set");
    return GetDomainStatisticsReportOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDomainStatisticsReport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard/statistics-report/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomain());
  return GetDomainStatisticsReportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEmailIdentityOutcome PinpointEmailClient::GetEmailIdentity(const GetEmailIdentityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEmailIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEmailIdentity", "Required field: EmailIdentity, is not set");
    return GetEmailIdentityOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEmailIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/identities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
  return GetEmailIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConfigurationSetsOutcome PinpointEmailClient::ListConfigurationSets(const ListConfigurationSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConfigurationSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConfigurationSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets");
  return ListConfigurationSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDedicatedIpPoolsOutcome PinpointEmailClient::ListDedicatedIpPools(const ListDedicatedIpPoolsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDedicatedIpPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDedicatedIpPools, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/dedicated-ip-pools");
  return ListDedicatedIpPoolsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDeliverabilityTestReportsOutcome PinpointEmailClient::ListDeliverabilityTestReports(const ListDeliverabilityTestReportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDeliverabilityTestReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDeliverabilityTestReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard/test-reports");
  return ListDeliverabilityTestReportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainDeliverabilityCampaignsOutcome PinpointEmailClient::ListDomainDeliverabilityCampaigns(const ListDomainDeliverabilityCampaignsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDomainDeliverabilityCampaigns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StartDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: StartDate, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: EndDate, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }
  if (!request.SubscribedDomainHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDomainDeliverabilityCampaigns", "Required field: SubscribedDomain, is not set");
    return ListDomainDeliverabilityCampaignsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscribedDomain]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDomainDeliverabilityCampaigns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard/domains/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscribedDomain());
  endpointResolutionOutcome.GetResult().AddPathSegments("/campaigns");
  return ListDomainDeliverabilityCampaignsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEmailIdentitiesOutcome PinpointEmailClient::ListEmailIdentities(const ListEmailIdentitiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEmailIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEmailIdentities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/identities");
  return ListEmailIdentitiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome PinpointEmailClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/tags");
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

PutAccountDedicatedIpWarmupAttributesOutcome PinpointEmailClient::PutAccountDedicatedIpWarmupAttributes(const PutAccountDedicatedIpWarmupAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAccountDedicatedIpWarmupAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAccountDedicatedIpWarmupAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/account/dedicated-ips/warmup");
  return PutAccountDedicatedIpWarmupAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutAccountSendingAttributesOutcome PinpointEmailClient::PutAccountSendingAttributes(const PutAccountSendingAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAccountSendingAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAccountSendingAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/account/sending");
  return PutAccountSendingAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationSetDeliveryOptionsOutcome PinpointEmailClient::PutConfigurationSetDeliveryOptions(const PutConfigurationSetDeliveryOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutConfigurationSetDeliveryOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetDeliveryOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetDeliveryOptionsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutConfigurationSetDeliveryOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/delivery-options");
  return PutConfigurationSetDeliveryOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationSetReputationOptionsOutcome PinpointEmailClient::PutConfigurationSetReputationOptions(const PutConfigurationSetReputationOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutConfigurationSetReputationOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetReputationOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetReputationOptionsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutConfigurationSetReputationOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/reputation-options");
  return PutConfigurationSetReputationOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationSetSendingOptionsOutcome PinpointEmailClient::PutConfigurationSetSendingOptions(const PutConfigurationSetSendingOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutConfigurationSetSendingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetSendingOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetSendingOptionsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutConfigurationSetSendingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sending");
  return PutConfigurationSetSendingOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutConfigurationSetTrackingOptionsOutcome PinpointEmailClient::PutConfigurationSetTrackingOptions(const PutConfigurationSetTrackingOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutConfigurationSetTrackingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutConfigurationSetTrackingOptions", "Required field: ConfigurationSetName, is not set");
    return PutConfigurationSetTrackingOptionsOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutConfigurationSetTrackingOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tracking-options");
  return PutConfigurationSetTrackingOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutDedicatedIpInPoolOutcome PinpointEmailClient::PutDedicatedIpInPool(const PutDedicatedIpInPoolRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutDedicatedIpInPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IpHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutDedicatedIpInPool", "Required field: Ip, is not set");
    return PutDedicatedIpInPoolOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutDedicatedIpInPool, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/dedicated-ips/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIp());
  endpointResolutionOutcome.GetResult().AddPathSegments("/pool");
  return PutDedicatedIpInPoolOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutDedicatedIpWarmupAttributesOutcome PinpointEmailClient::PutDedicatedIpWarmupAttributes(const PutDedicatedIpWarmupAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutDedicatedIpWarmupAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IpHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutDedicatedIpWarmupAttributes", "Required field: Ip, is not set");
    return PutDedicatedIpWarmupAttributesOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Ip]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutDedicatedIpWarmupAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/dedicated-ips/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIp());
  endpointResolutionOutcome.GetResult().AddPathSegments("/warmup");
  return PutDedicatedIpWarmupAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutDeliverabilityDashboardOptionOutcome PinpointEmailClient::PutDeliverabilityDashboardOption(const PutDeliverabilityDashboardOptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutDeliverabilityDashboardOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutDeliverabilityDashboardOption, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/deliverability-dashboard");
  return PutDeliverabilityDashboardOptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutEmailIdentityDkimAttributesOutcome PinpointEmailClient::PutEmailIdentityDkimAttributes(const PutEmailIdentityDkimAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutEmailIdentityDkimAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityDkimAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityDkimAttributesOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutEmailIdentityDkimAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/identities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dkim");
  return PutEmailIdentityDkimAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutEmailIdentityFeedbackAttributesOutcome PinpointEmailClient::PutEmailIdentityFeedbackAttributes(const PutEmailIdentityFeedbackAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutEmailIdentityFeedbackAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityFeedbackAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityFeedbackAttributesOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutEmailIdentityFeedbackAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/identities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
  endpointResolutionOutcome.GetResult().AddPathSegments("/feedback");
  return PutEmailIdentityFeedbackAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutEmailIdentityMailFromAttributesOutcome PinpointEmailClient::PutEmailIdentityMailFromAttributes(const PutEmailIdentityMailFromAttributesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutEmailIdentityMailFromAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EmailIdentityHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutEmailIdentityMailFromAttributes", "Required field: EmailIdentity, is not set");
    return PutEmailIdentityMailFromAttributesOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EmailIdentity]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutEmailIdentityMailFromAttributes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/identities/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEmailIdentity());
  endpointResolutionOutcome.GetResult().AddPathSegments("/mail-from");
  return PutEmailIdentityMailFromAttributesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

SendEmailOutcome PinpointEmailClient::SendEmail(const SendEmailRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendEmail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendEmail, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/outbound-emails");
  return SendEmailOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome PinpointEmailClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/tags");
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome PinpointEmailClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/tags");
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateConfigurationSetEventDestinationOutcome PinpointEmailClient::UpdateConfigurationSetEventDestination(const UpdateConfigurationSetEventDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConfigurationSetEventDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationSetNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationSetEventDestination", "Required field: ConfigurationSetName, is not set");
    return UpdateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationSetName]", false));
  }
  if (!request.EventDestinationNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfigurationSetEventDestination", "Required field: EventDestinationName, is not set");
    return UpdateConfigurationSetEventDestinationOutcome(Aws::Client::AWSError<PinpointEmailErrors>(PinpointEmailErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventDestinationName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConfigurationSetEventDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/email/configuration-sets/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationSetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/event-destinations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventDestinationName());
  return UpdateConfigurationSetEventDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

