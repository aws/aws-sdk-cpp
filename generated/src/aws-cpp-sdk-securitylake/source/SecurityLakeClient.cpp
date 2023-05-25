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

#include <aws/securitylake/SecurityLakeClient.h>
#include <aws/securitylake/SecurityLakeErrorMarshaller.h>
#include <aws/securitylake/SecurityLakeEndpointProvider.h>
#include <aws/securitylake/model/CreateAwsLogSourceRequest.h>
#include <aws/securitylake/model/CreateCustomLogSourceRequest.h>
#include <aws/securitylake/model/CreateDatalakeRequest.h>
#include <aws/securitylake/model/CreateDatalakeAutoEnableRequest.h>
#include <aws/securitylake/model/CreateDatalakeDelegatedAdminRequest.h>
#include <aws/securitylake/model/CreateDatalakeExceptionsSubscriptionRequest.h>
#include <aws/securitylake/model/CreateSubscriberRequest.h>
#include <aws/securitylake/model/CreateSubscriptionNotificationConfigurationRequest.h>
#include <aws/securitylake/model/DeleteAwsLogSourceRequest.h>
#include <aws/securitylake/model/DeleteCustomLogSourceRequest.h>
#include <aws/securitylake/model/DeleteDatalakeRequest.h>
#include <aws/securitylake/model/DeleteDatalakeAutoEnableRequest.h>
#include <aws/securitylake/model/DeleteDatalakeDelegatedAdminRequest.h>
#include <aws/securitylake/model/DeleteDatalakeExceptionsSubscriptionRequest.h>
#include <aws/securitylake/model/DeleteSubscriberRequest.h>
#include <aws/securitylake/model/DeleteSubscriptionNotificationConfigurationRequest.h>
#include <aws/securitylake/model/GetDatalakeRequest.h>
#include <aws/securitylake/model/GetDatalakeAutoEnableRequest.h>
#include <aws/securitylake/model/GetDatalakeExceptionsExpiryRequest.h>
#include <aws/securitylake/model/GetDatalakeExceptionsSubscriptionRequest.h>
#include <aws/securitylake/model/GetDatalakeStatusRequest.h>
#include <aws/securitylake/model/GetSubscriberRequest.h>
#include <aws/securitylake/model/ListDatalakeExceptionsRequest.h>
#include <aws/securitylake/model/ListLogSourcesRequest.h>
#include <aws/securitylake/model/ListSubscribersRequest.h>
#include <aws/securitylake/model/UpdateDatalakeRequest.h>
#include <aws/securitylake/model/UpdateDatalakeExceptionsExpiryRequest.h>
#include <aws/securitylake/model/UpdateDatalakeExceptionsSubscriptionRequest.h>
#include <aws/securitylake/model/UpdateSubscriberRequest.h>
#include <aws/securitylake/model/UpdateSubscriptionNotificationConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SecurityLake;
using namespace Aws::SecurityLake::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SecurityLakeClient::SERVICE_NAME = "securitylake";
const char* SecurityLakeClient::ALLOCATION_TAG = "SecurityLakeClient";

SecurityLakeClient::SecurityLakeClient(const SecurityLake::SecurityLakeClientConfiguration& clientConfiguration,
                                       std::shared_ptr<SecurityLakeEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SecurityLakeClient::SecurityLakeClient(const AWSCredentials& credentials,
                                       std::shared_ptr<SecurityLakeEndpointProviderBase> endpointProvider,
                                       const SecurityLake::SecurityLakeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SecurityLakeClient::SecurityLakeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<SecurityLakeEndpointProviderBase> endpointProvider,
                                       const SecurityLake::SecurityLakeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SecurityLakeClient::SecurityLakeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SecurityLakeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SecurityLakeClient::SecurityLakeClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SecurityLakeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SecurityLakeClient::SecurityLakeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SecurityLakeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SecurityLakeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SecurityLakeClient::~SecurityLakeClient()
{
}

std::shared_ptr<SecurityLakeEndpointProviderBase>& SecurityLakeClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SecurityLakeClient::init(const SecurityLake::SecurityLakeClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SecurityLake");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SecurityLakeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateAwsLogSourceOutcome SecurityLakeClient::CreateAwsLogSource(const CreateAwsLogSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAwsLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAwsLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/logsources/aws");
  return CreateAwsLogSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomLogSourceOutcome SecurityLakeClient::CreateCustomLogSource(const CreateCustomLogSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCustomLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCustomLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/logsources/custom");
  return CreateCustomLogSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatalakeOutcome SecurityLakeClient::CreateDatalake(const CreateDatalakeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake");
  return CreateDatalakeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatalakeAutoEnableOutcome SecurityLakeClient::CreateDatalakeAutoEnable(const CreateDatalakeAutoEnableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatalakeAutoEnable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatalakeAutoEnable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/autoenable");
  return CreateDatalakeAutoEnableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatalakeDelegatedAdminOutcome SecurityLakeClient::CreateDatalakeDelegatedAdmin(const CreateDatalakeDelegatedAdminRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatalakeDelegatedAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatalakeDelegatedAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/delegate");
  return CreateDatalakeDelegatedAdminOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatalakeExceptionsSubscriptionOutcome SecurityLakeClient::CreateDatalakeExceptionsSubscription(const CreateDatalakeExceptionsSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/subscription");
  return CreateDatalakeExceptionsSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSubscriberOutcome SecurityLakeClient::CreateSubscriber(const CreateSubscriberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers");
  return CreateSubscriberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSubscriptionNotificationConfigurationOutcome SecurityLakeClient::CreateSubscriptionNotificationConfiguration(const CreateSubscriptionNotificationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSubscriptionNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SubscriptionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSubscriptionNotificationConfiguration", "Required field: SubscriptionId, is not set");
    return CreateSubscriptionNotificationConfigurationOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSubscriptionNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-notifications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionId());
  return CreateSubscriptionNotificationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAwsLogSourceOutcome SecurityLakeClient::DeleteAwsLogSource(const DeleteAwsLogSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAwsLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAwsLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/logsources/aws/delete");
  return DeleteAwsLogSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomLogSourceOutcome SecurityLakeClient::DeleteCustomLogSource(const DeleteCustomLogSourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCustomLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CustomSourceNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCustomLogSource", "Required field: CustomSourceName, is not set");
    return DeleteCustomLogSourceOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomSourceName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCustomLogSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/logsources/custom");
  return DeleteCustomLogSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatalakeOutcome SecurityLakeClient::DeleteDatalake(const DeleteDatalakeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake");
  return DeleteDatalakeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatalakeAutoEnableOutcome SecurityLakeClient::DeleteDatalakeAutoEnable(const DeleteDatalakeAutoEnableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatalakeAutoEnable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatalakeAutoEnable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/autoenable/delete");
  return DeleteDatalakeAutoEnableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatalakeDelegatedAdminOutcome SecurityLakeClient::DeleteDatalakeDelegatedAdmin(const DeleteDatalakeDelegatedAdminRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatalakeDelegatedAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccountHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDatalakeDelegatedAdmin", "Required field: Account, is not set");
    return DeleteDatalakeDelegatedAdminOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Account]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatalakeDelegatedAdmin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/delegate/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccount());
  return DeleteDatalakeDelegatedAdminOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatalakeExceptionsSubscriptionOutcome SecurityLakeClient::DeleteDatalakeExceptionsSubscription(const DeleteDatalakeExceptionsSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/subscription");
  return DeleteDatalakeExceptionsSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSubscriberOutcome SecurityLakeClient::DeleteSubscriber(const DeleteSubscriberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSubscriber", "Required field: Id, is not set");
    return DeleteSubscriberOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers");
  return DeleteSubscriberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSubscriptionNotificationConfigurationOutcome SecurityLakeClient::DeleteSubscriptionNotificationConfiguration(const DeleteSubscriptionNotificationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSubscriptionNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SubscriptionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSubscriptionNotificationConfiguration", "Required field: SubscriptionId, is not set");
    return DeleteSubscriptionNotificationConfigurationOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSubscriptionNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-notifications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionId());
  return DeleteSubscriptionNotificationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

GetDatalakeOutcome SecurityLakeClient::GetDatalake(const GetDatalakeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake");
  return GetDatalakeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDatalakeAutoEnableOutcome SecurityLakeClient::GetDatalakeAutoEnable(const GetDatalakeAutoEnableRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDatalakeAutoEnable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDatalakeAutoEnable, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/autoenable");
  return GetDatalakeAutoEnableOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDatalakeExceptionsExpiryOutcome SecurityLakeClient::GetDatalakeExceptionsExpiry(const GetDatalakeExceptionsExpiryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDatalakeExceptionsExpiry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDatalakeExceptionsExpiry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/expiry");
  return GetDatalakeExceptionsExpiryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDatalakeExceptionsSubscriptionOutcome SecurityLakeClient::GetDatalakeExceptionsSubscription(const GetDatalakeExceptionsSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/subscription");
  return GetDatalakeExceptionsSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDatalakeStatusOutcome SecurityLakeClient::GetDatalakeStatus(const GetDatalakeStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDatalakeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDatalakeStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/status");
  return GetDatalakeStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSubscriberOutcome SecurityLakeClient::GetSubscriber(const GetSubscriberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSubscriber", "Required field: Id, is not set");
    return GetSubscriberOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetSubscriberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDatalakeExceptionsOutcome SecurityLakeClient::ListDatalakeExceptions(const ListDatalakeExceptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatalakeExceptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatalakeExceptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions");
  return ListDatalakeExceptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLogSourcesOutcome SecurityLakeClient::ListLogSources(const ListLogSourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLogSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLogSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/logsources/list");
  return ListLogSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSubscribersOutcome SecurityLakeClient::ListSubscribers(const ListSubscribersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSubscribers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSubscribers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers");
  return ListSubscribersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatalakeOutcome SecurityLakeClient::UpdateDatalake(const UpdateDatalakeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDatalake, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake");
  return UpdateDatalakeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatalakeExceptionsExpiryOutcome SecurityLakeClient::UpdateDatalakeExceptionsExpiry(const UpdateDatalakeExceptionsExpiryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDatalakeExceptionsExpiry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDatalakeExceptionsExpiry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/expiry");
  return UpdateDatalakeExceptionsExpiryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatalakeExceptionsSubscriptionOutcome SecurityLakeClient::UpdateDatalakeExceptionsSubscription(const UpdateDatalakeExceptionsSubscriptionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDatalakeExceptionsSubscription, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/datalake/exceptions/subscription");
  return UpdateDatalakeExceptionsSubscriptionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSubscriberOutcome SecurityLakeClient::UpdateSubscriber(const UpdateSubscriberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSubscriber", "Required field: Id, is not set");
    return UpdateSubscriberOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSubscriber, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/subscribers/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateSubscriberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateSubscriptionNotificationConfigurationOutcome SecurityLakeClient::UpdateSubscriptionNotificationConfiguration(const UpdateSubscriptionNotificationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSubscriptionNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SubscriptionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSubscriptionNotificationConfiguration", "Required field: SubscriptionId, is not set");
    return UpdateSubscriptionNotificationConfigurationOutcome(Aws::Client::AWSError<SecurityLakeErrors>(SecurityLakeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSubscriptionNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/subscription-notifications/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionId());
  return UpdateSubscriptionNotificationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

