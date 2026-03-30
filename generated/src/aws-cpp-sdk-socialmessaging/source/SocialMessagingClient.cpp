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
#include <aws/socialmessaging/SocialMessagingClient.h>
#include <aws/socialmessaging/SocialMessagingEndpointProvider.h>
#include <aws/socialmessaging/SocialMessagingErrorMarshaller.h>
#include <aws/socialmessaging/model/AssociateWhatsAppBusinessAccountRequest.h>
#include <aws/socialmessaging/model/CreateWhatsAppMessageTemplateFromLibraryRequest.h>
#include <aws/socialmessaging/model/CreateWhatsAppMessageTemplateMediaRequest.h>
#include <aws/socialmessaging/model/CreateWhatsAppMessageTemplateRequest.h>
#include <aws/socialmessaging/model/DeleteWhatsAppMessageMediaRequest.h>
#include <aws/socialmessaging/model/DeleteWhatsAppMessageTemplateRequest.h>
#include <aws/socialmessaging/model/DisassociateWhatsAppBusinessAccountRequest.h>
#include <aws/socialmessaging/model/GetLinkedWhatsAppBusinessAccountPhoneNumberRequest.h>
#include <aws/socialmessaging/model/GetLinkedWhatsAppBusinessAccountRequest.h>
#include <aws/socialmessaging/model/GetWhatsAppMessageMediaRequest.h>
#include <aws/socialmessaging/model/GetWhatsAppMessageTemplateRequest.h>
#include <aws/socialmessaging/model/ListLinkedWhatsAppBusinessAccountsRequest.h>
#include <aws/socialmessaging/model/ListTagsForResourceRequest.h>
#include <aws/socialmessaging/model/ListWhatsAppMessageTemplatesRequest.h>
#include <aws/socialmessaging/model/ListWhatsAppTemplateLibraryRequest.h>
#include <aws/socialmessaging/model/PostWhatsAppMessageMediaRequest.h>
#include <aws/socialmessaging/model/PutWhatsAppBusinessAccountEventDestinationsRequest.h>
#include <aws/socialmessaging/model/SendWhatsAppMessageRequest.h>
#include <aws/socialmessaging/model/TagResourceRequest.h>
#include <aws/socialmessaging/model/UntagResourceRequest.h>
#include <aws/socialmessaging/model/UpdateWhatsAppMessageTemplateRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SocialMessaging;
using namespace Aws::SocialMessaging::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SocialMessaging {
const char SERVICE_NAME[] = "social-messaging";
const char ALLOCATION_TAG[] = "SocialMessagingClient";
}  // namespace SocialMessaging
}  // namespace Aws
const char* SocialMessagingClient::GetServiceName() { return SERVICE_NAME; }
const char* SocialMessagingClient::GetAllocationTag() { return ALLOCATION_TAG; }

SocialMessagingClient::SocialMessagingClient(const SocialMessaging::SocialMessagingClientConfiguration& clientConfiguration,
                                             std::shared_ptr<SocialMessagingEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SocialMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SocialMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SocialMessagingClient::SocialMessagingClient(const AWSCredentials& credentials,
                                             std::shared_ptr<SocialMessagingEndpointProviderBase> endpointProvider,
                                             const SocialMessaging::SocialMessagingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SocialMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SocialMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SocialMessagingClient::SocialMessagingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<SocialMessagingEndpointProviderBase> endpointProvider,
                                             const SocialMessaging::SocialMessagingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SocialMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<SocialMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SocialMessagingClient::SocialMessagingClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SocialMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SocialMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SocialMessagingClient::SocialMessagingClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SocialMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SocialMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SocialMessagingClient::SocialMessagingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SocialMessagingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SocialMessagingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SocialMessagingClient::~SocialMessagingClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SocialMessagingEndpointProviderBase>& SocialMessagingClient::accessEndpointProvider() { return m_endpointProvider; }

void SocialMessagingClient::init(const SocialMessaging::SocialMessagingClientConfiguration& config) {
  AWSClient::SetServiceClientName("SocialMessaging");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "social-messaging");
}

void SocialMessagingClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SocialMessagingClient::InvokeOperationOutcome SocialMessagingClient::InvokeServiceOperation(
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

AssociateWhatsAppBusinessAccountOutcome SocialMessagingClient::AssociateWhatsAppBusinessAccount(
    const AssociateWhatsAppBusinessAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/signup");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateWhatsAppBusinessAccountOutcome(result.GetResultWithOwnership())
                            : AssociateWhatsAppBusinessAccountOutcome(std::move(result.GetError()));
}

CreateWhatsAppMessageTemplateOutcome SocialMessagingClient::CreateWhatsAppMessageTemplate(
    const CreateWhatsAppMessageTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/template/put");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWhatsAppMessageTemplateOutcome(result.GetResultWithOwnership())
                            : CreateWhatsAppMessageTemplateOutcome(std::move(result.GetError()));
}

CreateWhatsAppMessageTemplateFromLibraryOutcome SocialMessagingClient::CreateWhatsAppMessageTemplateFromLibrary(
    const CreateWhatsAppMessageTemplateFromLibraryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/template/create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWhatsAppMessageTemplateFromLibraryOutcome(result.GetResultWithOwnership())
                            : CreateWhatsAppMessageTemplateFromLibraryOutcome(std::move(result.GetError()));
}

CreateWhatsAppMessageTemplateMediaOutcome SocialMessagingClient::CreateWhatsAppMessageTemplateMedia(
    const CreateWhatsAppMessageTemplateMediaRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/template/media");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWhatsAppMessageTemplateMediaOutcome(result.GetResultWithOwnership())
                            : CreateWhatsAppMessageTemplateMediaOutcome(std::move(result.GetError()));
}

DeleteWhatsAppMessageMediaOutcome SocialMessagingClient::DeleteWhatsAppMessageMedia(
    const DeleteWhatsAppMessageMediaRequest& request) const {
  if (!request.MediaIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWhatsAppMessageMedia", "Required field: MediaId, is not set");
    return DeleteWhatsAppMessageMediaOutcome(Aws::Client::AWSError<SocialMessagingErrors>(
        SocialMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MediaId]", false));
  }
  if (!request.OriginationPhoneNumberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWhatsAppMessageMedia", "Required field: OriginationPhoneNumberId, is not set");
    return DeleteWhatsAppMessageMediaOutcome(Aws::Client::AWSError<SocialMessagingErrors>(
        SocialMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginationPhoneNumberId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/media");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteWhatsAppMessageMediaOutcome(result.GetResultWithOwnership())
                            : DeleteWhatsAppMessageMediaOutcome(std::move(result.GetError()));
}

DeleteWhatsAppMessageTemplateOutcome SocialMessagingClient::DeleteWhatsAppMessageTemplate(
    const DeleteWhatsAppMessageTemplateRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWhatsAppMessageTemplate", "Required field: Id, is not set");
    return DeleteWhatsAppMessageTemplateOutcome(Aws::Client::AWSError<SocialMessagingErrors>(
        SocialMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWhatsAppMessageTemplate", "Required field: TemplateName, is not set");
    return DeleteWhatsAppMessageTemplateOutcome(Aws::Client::AWSError<SocialMessagingErrors>(
        SocialMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/template");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteWhatsAppMessageTemplateOutcome(result.GetResultWithOwnership())
                            : DeleteWhatsAppMessageTemplateOutcome(std::move(result.GetError()));
}

DisassociateWhatsAppBusinessAccountOutcome SocialMessagingClient::DisassociateWhatsAppBusinessAccount(
    const DisassociateWhatsAppBusinessAccountRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateWhatsAppBusinessAccount", "Required field: Id, is not set");
    return DisassociateWhatsAppBusinessAccountOutcome(Aws::Client::AWSError<SocialMessagingErrors>(
        SocialMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/waba/disassociate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateWhatsAppBusinessAccountOutcome(result.GetResultWithOwnership())
                            : DisassociateWhatsAppBusinessAccountOutcome(std::move(result.GetError()));
}

GetLinkedWhatsAppBusinessAccountOutcome SocialMessagingClient::GetLinkedWhatsAppBusinessAccount(
    const GetLinkedWhatsAppBusinessAccountRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLinkedWhatsAppBusinessAccount", "Required field: Id, is not set");
    return GetLinkedWhatsAppBusinessAccountOutcome(Aws::Client::AWSError<SocialMessagingErrors>(
        SocialMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/waba/details");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetLinkedWhatsAppBusinessAccountOutcome(result.GetResultWithOwnership())
                            : GetLinkedWhatsAppBusinessAccountOutcome(std::move(result.GetError()));
}

GetLinkedWhatsAppBusinessAccountPhoneNumberOutcome SocialMessagingClient::GetLinkedWhatsAppBusinessAccountPhoneNumber(
    const GetLinkedWhatsAppBusinessAccountPhoneNumberRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLinkedWhatsAppBusinessAccountPhoneNumber", "Required field: Id, is not set");
    return GetLinkedWhatsAppBusinessAccountPhoneNumberOutcome(Aws::Client::AWSError<SocialMessagingErrors>(
        SocialMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/waba/phone/details");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetLinkedWhatsAppBusinessAccountPhoneNumberOutcome(result.GetResultWithOwnership())
                            : GetLinkedWhatsAppBusinessAccountPhoneNumberOutcome(std::move(result.GetError()));
}

GetWhatsAppMessageMediaOutcome SocialMessagingClient::GetWhatsAppMessageMedia(const GetWhatsAppMessageMediaRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/media/get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetWhatsAppMessageMediaOutcome(result.GetResultWithOwnership())
                            : GetWhatsAppMessageMediaOutcome(std::move(result.GetError()));
}

GetWhatsAppMessageTemplateOutcome SocialMessagingClient::GetWhatsAppMessageTemplate(
    const GetWhatsAppMessageTemplateRequest& request) const {
  if (!request.MetaTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWhatsAppMessageTemplate", "Required field: MetaTemplateId, is not set");
    return GetWhatsAppMessageTemplateOutcome(Aws::Client::AWSError<SocialMessagingErrors>(
        SocialMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetaTemplateId]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWhatsAppMessageTemplate", "Required field: Id, is not set");
    return GetWhatsAppMessageTemplateOutcome(Aws::Client::AWSError<SocialMessagingErrors>(
        SocialMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/template");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetWhatsAppMessageTemplateOutcome(result.GetResultWithOwnership())
                            : GetWhatsAppMessageTemplateOutcome(std::move(result.GetError()));
}

ListLinkedWhatsAppBusinessAccountsOutcome SocialMessagingClient::ListLinkedWhatsAppBusinessAccounts(
    const ListLinkedWhatsAppBusinessAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/waba/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListLinkedWhatsAppBusinessAccountsOutcome(result.GetResultWithOwnership())
                            : ListLinkedWhatsAppBusinessAccountsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome SocialMessagingClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SocialMessagingErrors>(
        SocialMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListWhatsAppMessageTemplatesOutcome SocialMessagingClient::ListWhatsAppMessageTemplates(
    const ListWhatsAppMessageTemplatesRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWhatsAppMessageTemplates", "Required field: Id, is not set");
    return ListWhatsAppMessageTemplatesOutcome(Aws::Client::AWSError<SocialMessagingErrors>(
        SocialMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/template/list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListWhatsAppMessageTemplatesOutcome(result.GetResultWithOwnership())
                            : ListWhatsAppMessageTemplatesOutcome(std::move(result.GetError()));
}

ListWhatsAppTemplateLibraryOutcome SocialMessagingClient::ListWhatsAppTemplateLibrary(
    const ListWhatsAppTemplateLibraryRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWhatsAppTemplateLibrary", "Required field: Id, is not set");
    return ListWhatsAppTemplateLibraryOutcome(Aws::Client::AWSError<SocialMessagingErrors>(
        SocialMessagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/template/library");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWhatsAppTemplateLibraryOutcome(result.GetResultWithOwnership())
                            : ListWhatsAppTemplateLibraryOutcome(std::move(result.GetError()));
}

PostWhatsAppMessageMediaOutcome SocialMessagingClient::PostWhatsAppMessageMedia(const PostWhatsAppMessageMediaRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/media");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PostWhatsAppMessageMediaOutcome(result.GetResultWithOwnership())
                            : PostWhatsAppMessageMediaOutcome(std::move(result.GetError()));
}

PutWhatsAppBusinessAccountEventDestinationsOutcome SocialMessagingClient::PutWhatsAppBusinessAccountEventDestinations(
    const PutWhatsAppBusinessAccountEventDestinationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/waba/eventdestinations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutWhatsAppBusinessAccountEventDestinationsOutcome(result.GetResultWithOwnership())
                            : PutWhatsAppBusinessAccountEventDestinationsOutcome(std::move(result.GetError()));
}

SendWhatsAppMessageOutcome SocialMessagingClient::SendWhatsAppMessage(const SendWhatsAppMessageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/send");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendWhatsAppMessageOutcome(result.GetResultWithOwnership())
                            : SendWhatsAppMessageOutcome(std::move(result.GetError()));
}

TagResourceOutcome SocialMessagingClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/tag-resource");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome SocialMessagingClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/untag-resource");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateWhatsAppMessageTemplateOutcome SocialMessagingClient::UpdateWhatsAppMessageTemplate(
    const UpdateWhatsAppMessageTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/template");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWhatsAppMessageTemplateOutcome(result.GetResultWithOwnership())
                            : UpdateWhatsAppMessageTemplateOutcome(std::move(result.GetError()));
}
