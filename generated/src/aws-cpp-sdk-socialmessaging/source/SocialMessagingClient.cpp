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

  return AssociateWhatsAppBusinessAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWhatsAppMessageTemplateOutcome SocialMessagingClient::CreateWhatsAppMessageTemplate(
    const CreateWhatsAppMessageTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/template/put");
  };

  return CreateWhatsAppMessageTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWhatsAppMessageTemplateFromLibraryOutcome SocialMessagingClient::CreateWhatsAppMessageTemplateFromLibrary(
    const CreateWhatsAppMessageTemplateFromLibraryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/template/create");
  };

  return CreateWhatsAppMessageTemplateFromLibraryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWhatsAppMessageTemplateMediaOutcome SocialMessagingClient::CreateWhatsAppMessageTemplateMedia(
    const CreateWhatsAppMessageTemplateMediaRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/template/media");
  };

  return CreateWhatsAppMessageTemplateMediaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeleteWhatsAppMessageMediaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteWhatsAppMessageTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DisassociateWhatsAppBusinessAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return GetLinkedWhatsAppBusinessAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetLinkedWhatsAppBusinessAccountPhoneNumberOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWhatsAppMessageMediaOutcome SocialMessagingClient::GetWhatsAppMessageMedia(const GetWhatsAppMessageMediaRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/media/get");
  };

  return GetWhatsAppMessageMediaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return GetWhatsAppMessageTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLinkedWhatsAppBusinessAccountsOutcome SocialMessagingClient::ListLinkedWhatsAppBusinessAccounts(
    const ListLinkedWhatsAppBusinessAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/waba/list");
  };

  return ListLinkedWhatsAppBusinessAccountsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListWhatsAppMessageTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListWhatsAppTemplateLibraryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PostWhatsAppMessageMediaOutcome SocialMessagingClient::PostWhatsAppMessageMedia(const PostWhatsAppMessageMediaRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/media");
  };

  return PostWhatsAppMessageMediaOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutWhatsAppBusinessAccountEventDestinationsOutcome SocialMessagingClient::PutWhatsAppBusinessAccountEventDestinations(
    const PutWhatsAppBusinessAccountEventDestinationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/waba/eventdestinations");
  };

  return PutWhatsAppBusinessAccountEventDestinationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

SendWhatsAppMessageOutcome SocialMessagingClient::SendWhatsAppMessage(const SendWhatsAppMessageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/send");
  };

  return SendWhatsAppMessageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome SocialMessagingClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/tag-resource");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome SocialMessagingClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/tags/untag-resource");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWhatsAppMessageTemplateOutcome SocialMessagingClient::UpdateWhatsAppMessageTemplate(
    const UpdateWhatsAppMessageTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/whatsapp/template");
  };

  return UpdateWhatsAppMessageTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
