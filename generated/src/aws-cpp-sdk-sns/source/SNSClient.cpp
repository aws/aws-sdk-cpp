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
#include <aws/sns/SNSClient.h>
#include <aws/sns/SNSEndpointProvider.h>
#include <aws/sns/SNSErrorMarshaller.h>
#include <aws/sns/model/AddPermissionRequest.h>
#include <aws/sns/model/CheckIfPhoneNumberIsOptedOutRequest.h>
#include <aws/sns/model/ConfirmSubscriptionRequest.h>
#include <aws/sns/model/CreatePlatformApplicationRequest.h>
#include <aws/sns/model/CreatePlatformEndpointRequest.h>
#include <aws/sns/model/CreateSMSSandboxPhoneNumberRequest.h>
#include <aws/sns/model/CreateTopicRequest.h>
#include <aws/sns/model/DeleteEndpointRequest.h>
#include <aws/sns/model/DeletePlatformApplicationRequest.h>
#include <aws/sns/model/DeleteSMSSandboxPhoneNumberRequest.h>
#include <aws/sns/model/DeleteTopicRequest.h>
#include <aws/sns/model/GetDataProtectionPolicyRequest.h>
#include <aws/sns/model/GetEndpointAttributesRequest.h>
#include <aws/sns/model/GetPlatformApplicationAttributesRequest.h>
#include <aws/sns/model/GetSMSAttributesRequest.h>
#include <aws/sns/model/GetSMSSandboxAccountStatusRequest.h>
#include <aws/sns/model/GetSubscriptionAttributesRequest.h>
#include <aws/sns/model/GetTopicAttributesRequest.h>
#include <aws/sns/model/ListEndpointsByPlatformApplicationRequest.h>
#include <aws/sns/model/ListOriginationNumbersRequest.h>
#include <aws/sns/model/ListPhoneNumbersOptedOutRequest.h>
#include <aws/sns/model/ListPlatformApplicationsRequest.h>
#include <aws/sns/model/ListSMSSandboxPhoneNumbersRequest.h>
#include <aws/sns/model/ListSubscriptionsByTopicRequest.h>
#include <aws/sns/model/ListSubscriptionsRequest.h>
#include <aws/sns/model/ListTagsForResourceRequest.h>
#include <aws/sns/model/ListTopicsRequest.h>
#include <aws/sns/model/OptInPhoneNumberRequest.h>
#include <aws/sns/model/PublishBatchRequest.h>
#include <aws/sns/model/PublishRequest.h>
#include <aws/sns/model/PutDataProtectionPolicyRequest.h>
#include <aws/sns/model/RemovePermissionRequest.h>
#include <aws/sns/model/SetEndpointAttributesRequest.h>
#include <aws/sns/model/SetPlatformApplicationAttributesRequest.h>
#include <aws/sns/model/SetSMSAttributesRequest.h>
#include <aws/sns/model/SetSubscriptionAttributesRequest.h>
#include <aws/sns/model/SetTopicAttributesRequest.h>
#include <aws/sns/model/SubscribeRequest.h>
#include <aws/sns/model/TagResourceRequest.h>
#include <aws/sns/model/UnsubscribeRequest.h>
#include <aws/sns/model/UntagResourceRequest.h>
#include <aws/sns/model/VerifySMSSandboxPhoneNumberRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SNS;
using namespace Aws::SNS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SNS {
const char SERVICE_NAME[] = "sns";
const char ALLOCATION_TAG[] = "SNSClient";
}
}
const char* SNSClient::GetServiceName() { return SERVICE_NAME; }
const char* SNSClient::GetAllocationTag() { return ALLOCATION_TAG; }

SNSClient::SNSClient(const SNS::SNSClientConfiguration& clientConfiguration, std::shared_ptr<SNSEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SNSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SNSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SNSClient::SNSClient(const AWSCredentials& credentials, std::shared_ptr<SNSEndpointProviderBase> endpointProvider,
                     const SNS::SNSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SNSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SNSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SNSClient::SNSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<SNSEndpointProviderBase> endpointProvider, const SNS::SNSClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SNSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SNSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SNSClient::SNSClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SNSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SNSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SNSClient::SNSClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SNSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SNSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SNSClient::SNSClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SNSErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SNSEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SNSClient::~SNSClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SNSEndpointProviderBase>& SNSClient::accessEndpointProvider() { return m_endpointProvider; }

void SNSClient::init(const SNS::SNSClientConfiguration& config) {
  AWSClient::SetServiceClientName("SNS");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "sns");
}

void SNSClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String SNSClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const {
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

SNSClient::InvokeOperationOutcome SNSClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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
AddPermissionOutcome SNSClient::AddPermission(const AddPermissionRequest& request) const {
  return AddPermissionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CheckIfPhoneNumberIsOptedOutOutcome SNSClient::CheckIfPhoneNumberIsOptedOut(const CheckIfPhoneNumberIsOptedOutRequest& request) const {
  return CheckIfPhoneNumberIsOptedOutOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ConfirmSubscriptionOutcome SNSClient::ConfirmSubscription(const ConfirmSubscriptionRequest& request) const {
  return ConfirmSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePlatformApplicationOutcome SNSClient::CreatePlatformApplication(const CreatePlatformApplicationRequest& request) const {
  return CreatePlatformApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreatePlatformEndpointOutcome SNSClient::CreatePlatformEndpoint(const CreatePlatformEndpointRequest& request) const {
  return CreatePlatformEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateSMSSandboxPhoneNumberOutcome SNSClient::CreateSMSSandboxPhoneNumber(const CreateSMSSandboxPhoneNumberRequest& request) const {
  return CreateSMSSandboxPhoneNumberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTopicOutcome SNSClient::CreateTopic(const CreateTopicRequest& request) const {
  return CreateTopicOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteEndpointOutcome SNSClient::DeleteEndpoint(const DeleteEndpointRequest& request) const {
  return DeleteEndpointOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeletePlatformApplicationOutcome SNSClient::DeletePlatformApplication(const DeletePlatformApplicationRequest& request) const {
  return DeletePlatformApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteSMSSandboxPhoneNumberOutcome SNSClient::DeleteSMSSandboxPhoneNumber(const DeleteSMSSandboxPhoneNumberRequest& request) const {
  return DeleteSMSSandboxPhoneNumberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTopicOutcome SNSClient::DeleteTopic(const DeleteTopicRequest& request) const {
  return DeleteTopicOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDataProtectionPolicyOutcome SNSClient::GetDataProtectionPolicy(const GetDataProtectionPolicyRequest& request) const {
  return GetDataProtectionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetEndpointAttributesOutcome SNSClient::GetEndpointAttributes(const GetEndpointAttributesRequest& request) const {
  return GetEndpointAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetPlatformApplicationAttributesOutcome SNSClient::GetPlatformApplicationAttributes(
    const GetPlatformApplicationAttributesRequest& request) const {
  return GetPlatformApplicationAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSMSAttributesOutcome SNSClient::GetSMSAttributes(const GetSMSAttributesRequest& request) const {
  return GetSMSAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSMSSandboxAccountStatusOutcome SNSClient::GetSMSSandboxAccountStatus(const GetSMSSandboxAccountStatusRequest& request) const {
  return GetSMSSandboxAccountStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSubscriptionAttributesOutcome SNSClient::GetSubscriptionAttributes(const GetSubscriptionAttributesRequest& request) const {
  return GetSubscriptionAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTopicAttributesOutcome SNSClient::GetTopicAttributes(const GetTopicAttributesRequest& request) const {
  return GetTopicAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEndpointsByPlatformApplicationOutcome SNSClient::ListEndpointsByPlatformApplication(
    const ListEndpointsByPlatformApplicationRequest& request) const {
  return ListEndpointsByPlatformApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListOriginationNumbersOutcome SNSClient::ListOriginationNumbers(const ListOriginationNumbersRequest& request) const {
  return ListOriginationNumbersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPhoneNumbersOptedOutOutcome SNSClient::ListPhoneNumbersOptedOut(const ListPhoneNumbersOptedOutRequest& request) const {
  return ListPhoneNumbersOptedOutOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListPlatformApplicationsOutcome SNSClient::ListPlatformApplications(const ListPlatformApplicationsRequest& request) const {
  return ListPlatformApplicationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSMSSandboxPhoneNumbersOutcome SNSClient::ListSMSSandboxPhoneNumbers(const ListSMSSandboxPhoneNumbersRequest& request) const {
  return ListSMSSandboxPhoneNumbersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSubscriptionsOutcome SNSClient::ListSubscriptions(const ListSubscriptionsRequest& request) const {
  return ListSubscriptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListSubscriptionsByTopicOutcome SNSClient::ListSubscriptionsByTopic(const ListSubscriptionsByTopicRequest& request) const {
  return ListSubscriptionsByTopicOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome SNSClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTopicsOutcome SNSClient::ListTopics(const ListTopicsRequest& request) const {
  return ListTopicsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

OptInPhoneNumberOutcome SNSClient::OptInPhoneNumber(const OptInPhoneNumberRequest& request) const {
  return OptInPhoneNumberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PublishOutcome SNSClient::Publish(const PublishRequest& request) const {
  return PublishOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PublishBatchOutcome SNSClient::PublishBatch(const PublishBatchRequest& request) const {
  return PublishBatchOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutDataProtectionPolicyOutcome SNSClient::PutDataProtectionPolicy(const PutDataProtectionPolicyRequest& request) const {
  return PutDataProtectionPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RemovePermissionOutcome SNSClient::RemovePermission(const RemovePermissionRequest& request) const {
  return RemovePermissionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SetEndpointAttributesOutcome SNSClient::SetEndpointAttributes(const SetEndpointAttributesRequest& request) const {
  return SetEndpointAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SetPlatformApplicationAttributesOutcome SNSClient::SetPlatformApplicationAttributes(
    const SetPlatformApplicationAttributesRequest& request) const {
  return SetPlatformApplicationAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SetSMSAttributesOutcome SNSClient::SetSMSAttributes(const SetSMSAttributesRequest& request) const {
  return SetSMSAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SetSubscriptionAttributesOutcome SNSClient::SetSubscriptionAttributes(const SetSubscriptionAttributesRequest& request) const {
  return SetSubscriptionAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SetTopicAttributesOutcome SNSClient::SetTopicAttributes(const SetTopicAttributesRequest& request) const {
  return SetTopicAttributesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SubscribeOutcome SNSClient::Subscribe(const SubscribeRequest& request) const {
  return SubscribeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome SNSClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UnsubscribeOutcome SNSClient::Unsubscribe(const UnsubscribeRequest& request) const {
  return UnsubscribeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome SNSClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

VerifySMSSandboxPhoneNumberOutcome SNSClient::VerifySMSSandboxPhoneNumber(const VerifySMSSandboxPhoneNumberRequest& request) const {
  return VerifySMSSandboxPhoneNumberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
},
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}
