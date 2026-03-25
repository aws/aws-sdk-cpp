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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/mq/MQClient.h>
#include <aws/mq/MQEndpointProvider.h>
#include <aws/mq/MQErrorMarshaller.h>
#include <aws/mq/model/CreateBrokerRequest.h>
#include <aws/mq/model/CreateConfigurationRequest.h>
#include <aws/mq/model/CreateTagsRequest.h>
#include <aws/mq/model/CreateUserRequest.h>
#include <aws/mq/model/DeleteBrokerRequest.h>
#include <aws/mq/model/DeleteConfigurationRequest.h>
#include <aws/mq/model/DeleteTagsRequest.h>
#include <aws/mq/model/DeleteUserRequest.h>
#include <aws/mq/model/DescribeBrokerEngineTypesRequest.h>
#include <aws/mq/model/DescribeBrokerInstanceOptionsRequest.h>
#include <aws/mq/model/DescribeBrokerRequest.h>
#include <aws/mq/model/DescribeConfigurationRequest.h>
#include <aws/mq/model/DescribeConfigurationRevisionRequest.h>
#include <aws/mq/model/DescribeUserRequest.h>
#include <aws/mq/model/ListBrokersRequest.h>
#include <aws/mq/model/ListConfigurationRevisionsRequest.h>
#include <aws/mq/model/ListConfigurationsRequest.h>
#include <aws/mq/model/ListTagsRequest.h>
#include <aws/mq/model/ListUsersRequest.h>
#include <aws/mq/model/PromoteRequest.h>
#include <aws/mq/model/RebootBrokerRequest.h>
#include <aws/mq/model/UpdateBrokerRequest.h>
#include <aws/mq/model/UpdateConfigurationRequest.h>
#include <aws/mq/model/UpdateUserRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MQ;
using namespace Aws::MQ::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace MQ {
const char SERVICE_NAME[] = "mq";
const char ALLOCATION_TAG[] = "MQClient";
}  // namespace MQ
}  // namespace Aws
const char* MQClient::GetServiceName() { return SERVICE_NAME; }
const char* MQClient::GetAllocationTag() { return ALLOCATION_TAG; }

MQClient::MQClient(const MQ::MQClientConfiguration& clientConfiguration, std::shared_ptr<MQEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MQErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MQEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MQClient::MQClient(const AWSCredentials& credentials, std::shared_ptr<MQEndpointProviderBase> endpointProvider,
                   const MQ::MQClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MQErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MQEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MQClient::MQClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<MQEndpointProviderBase> endpointProvider, const MQ::MQClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MQErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<MQEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
MQClient::MQClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MQErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MQEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MQClient::MQClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MQErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MQEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

MQClient::MQClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<MQErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<MQEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
MQClient::~MQClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<MQEndpointProviderBase>& MQClient::accessEndpointProvider() { return m_endpointProvider; }

void MQClient::init(const MQ::MQClientConfiguration& config) {
  AWSClient::SetServiceClientName("mq");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "mq");
}

void MQClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
MQClient::InvokeOperationOutcome MQClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
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

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateBrokerOutcome MQClient::CreateBroker(const CreateBrokerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers");
  };

  return CreateBrokerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConfigurationOutcome MQClient::CreateConfiguration(const CreateConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations");
  };

  return CreateConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTagsOutcome MQClient::CreateTags(const CreateTagsRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTags", "Required field: ResourceArn, is not set");
    return CreateTagsOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return CreateTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserOutcome MQClient::CreateUser(const CreateUserRequest& request) const {
  if (!request.BrokerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: BrokerId, is not set");
    return CreateUserOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }
  if (!request.UsernameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateUser", "Required field: Username, is not set");
    return CreateUserOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Username]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsername());
  };

  return CreateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBrokerOutcome MQClient::DeleteBroker(const DeleteBrokerRequest& request) const {
  if (!request.BrokerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBroker", "Required field: BrokerId, is not set");
    return DeleteBrokerOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
  };

  return DeleteBrokerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConfigurationOutcome MQClient::DeleteConfiguration(const DeleteConfigurationRequest& request) const {
  if (!request.ConfigurationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfiguration", "Required field: ConfigurationId, is not set");
    return DeleteConfigurationOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ConfigurationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationId());
  };

  return DeleteConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTagsOutcome MQClient::DeleteTags(const DeleteTagsRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTags", "Required field: ResourceArn, is not set");
    return DeleteTagsOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTags", "Required field: TagKeys, is not set");
    return DeleteTagsOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return DeleteTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteUserOutcome MQClient::DeleteUser(const DeleteUserRequest& request) const {
  if (!request.BrokerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: BrokerId, is not set");
    return DeleteUserOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }
  if (!request.UsernameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: Username, is not set");
    return DeleteUserOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Username]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsername());
  };

  return DeleteUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeBrokerOutcome MQClient::DescribeBroker(const DescribeBrokerRequest& request) const {
  if (!request.BrokerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBroker", "Required field: BrokerId, is not set");
    return DescribeBrokerOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
  };

  return DescribeBrokerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeBrokerEngineTypesOutcome MQClient::DescribeBrokerEngineTypes(const DescribeBrokerEngineTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/broker-engine-types");
  };

  return DescribeBrokerEngineTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeBrokerInstanceOptionsOutcome MQClient::DescribeBrokerInstanceOptions(const DescribeBrokerInstanceOptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/broker-instance-options");
  };

  return DescribeBrokerInstanceOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeConfigurationOutcome MQClient::DescribeConfiguration(const DescribeConfigurationRequest& request) const {
  if (!request.ConfigurationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeConfiguration", "Required field: ConfigurationId, is not set");
    return DescribeConfigurationOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ConfigurationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationId());
  };

  return DescribeConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeConfigurationRevisionOutcome MQClient::DescribeConfigurationRevision(const DescribeConfigurationRevisionRequest& request) const {
  if (!request.ConfigurationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeConfigurationRevision", "Required field: ConfigurationId, is not set");
    return DescribeConfigurationRevisionOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ConfigurationId]", false));
  }
  if (!request.ConfigurationRevisionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeConfigurationRevision", "Required field: ConfigurationRevision, is not set");
    return DescribeConfigurationRevisionOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ConfigurationRevision]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationRevision());
  };

  return DescribeConfigurationRevisionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeUserOutcome MQClient::DescribeUser(const DescribeUserRequest& request) const {
  if (!request.BrokerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: BrokerId, is not set");
    return DescribeUserOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }
  if (!request.UsernameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: Username, is not set");
    return DescribeUserOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Username]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsername());
  };

  return DescribeUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBrokersOutcome MQClient::ListBrokers(const ListBrokersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers");
  };

  return ListBrokersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConfigurationRevisionsOutcome MQClient::ListConfigurationRevisions(const ListConfigurationRevisionsRequest& request) const {
  if (!request.ConfigurationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListConfigurationRevisions", "Required field: ConfigurationId, is not set");
    return ListConfigurationRevisionsOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ConfigurationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions");
  };

  return ListConfigurationRevisionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConfigurationsOutcome MQClient::ListConfigurations(const ListConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations");
  };

  return ListConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsOutcome MQClient::ListTags(const ListTagsRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: ResourceArn, is not set");
    return ListTagsOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListUsersOutcome MQClient::ListUsers(const ListUsersRequest& request) const {
  if (!request.BrokerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: BrokerId, is not set");
    return ListUsersOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  };

  return ListUsersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PromoteOutcome MQClient::Promote(const PromoteRequest& request) const {
  if (!request.BrokerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("Promote", "Required field: BrokerId, is not set");
    return PromoteOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/promote");
  };

  return PromoteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RebootBrokerOutcome MQClient::RebootBroker(const RebootBrokerRequest& request) const {
  if (!request.BrokerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RebootBroker", "Required field: BrokerId, is not set");
    return RebootBrokerOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reboot");
  };

  return RebootBrokerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateBrokerOutcome MQClient::UpdateBroker(const UpdateBrokerRequest& request) const {
  if (!request.BrokerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBroker", "Required field: BrokerId, is not set");
    return UpdateBrokerOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
  };

  return UpdateBrokerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateConfigurationOutcome MQClient::UpdateConfiguration(const UpdateConfigurationRequest& request) const {
  if (!request.ConfigurationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfiguration", "Required field: ConfigurationId, is not set");
    return UpdateConfigurationOutcome(Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ConfigurationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigurationId());
  };

  return UpdateConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateUserOutcome MQClient::UpdateUser(const UpdateUserRequest& request) const {
  if (!request.BrokerIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: BrokerId, is not set");
    return UpdateUserOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrokerId]", false));
  }
  if (!request.UsernameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: Username, is not set");
    return UpdateUserOutcome(
        Aws::Client::AWSError<MQErrors>(MQErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Username]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/brokers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrokerId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUsername());
  };

  return UpdateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
