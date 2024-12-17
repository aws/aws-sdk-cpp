/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>


#include <aws/route53profiles/Route53ProfilesClient.h>
#include <aws/route53profiles/Route53ProfilesErrorMarshaller.h>
#include <aws/route53profiles/Route53ProfilesEndpointProvider.h>
#include <aws/route53profiles/model/AssociateProfileRequest.h>
#include <aws/route53profiles/model/AssociateResourceToProfileRequest.h>
#include <aws/route53profiles/model/CreateProfileRequest.h>
#include <aws/route53profiles/model/DeleteProfileRequest.h>
#include <aws/route53profiles/model/DisassociateProfileRequest.h>
#include <aws/route53profiles/model/DisassociateResourceFromProfileRequest.h>
#include <aws/route53profiles/model/GetProfileRequest.h>
#include <aws/route53profiles/model/GetProfileAssociationRequest.h>
#include <aws/route53profiles/model/GetProfileResourceAssociationRequest.h>
#include <aws/route53profiles/model/ListProfileAssociationsRequest.h>
#include <aws/route53profiles/model/ListProfileResourceAssociationsRequest.h>
#include <aws/route53profiles/model/ListProfilesRequest.h>
#include <aws/route53profiles/model/ListTagsForResourceRequest.h>
#include <aws/route53profiles/model/TagResourceRequest.h>
#include <aws/route53profiles/model/UntagResourceRequest.h>
#include <aws/route53profiles/model/UpdateProfileResourceAssociationRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53Profiles;
using namespace Aws::Route53Profiles::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace Route53Profiles
  {
    const char ALLOCATION_TAG[] = "Route53ProfilesClient";
    const char SERVICE_NAME[] = "route53profiles";
  }
}
const char* Route53ProfilesClient::GetServiceName() {return SERVICE_NAME;}
const char* Route53ProfilesClient::GetAllocationTag() {return ALLOCATION_TAG;}

Route53ProfilesClient::Route53ProfilesClient(const Route53Profiles::Route53ProfilesClientConfiguration& clientConfiguration,
                           std::shared_ptr<Route53ProfilesEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<Route53ProfilesErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<Route53ProfilesEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{
  init(m_clientConfiguration);
}

Route53ProfilesClient::Route53ProfilesClient(const AWSCredentials& credentials,
                           std::shared_ptr<Route53ProfilesEndpointProviderBase> endpointProvider,
                           const Route53Profiles::Route53ProfilesClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<Route53ProfilesErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<Route53ProfilesEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{
  init(m_clientConfiguration);
}

Route53ProfilesClient::Route53ProfilesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<Route53ProfilesEndpointProviderBase> endpointProvider,
                           const Route53Profiles::Route53ProfilesClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<Route53ProfilesErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<Route53ProfilesEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
Route53ProfilesClient::Route53ProfilesClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<Route53ProfilesErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<Route53ProfilesEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{
  init(m_clientConfiguration);
}

Route53ProfilesClient::Route53ProfilesClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<Route53ProfilesErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<Route53ProfilesEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{
  init(m_clientConfiguration);
}

Route53ProfilesClient::Route53ProfilesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<Route53ProfilesErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<Route53ProfilesEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{
  init(m_clientConfiguration);
}
/* End of legacy constructors due deprecation */

Route53ProfilesClient::~Route53ProfilesClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<Route53ProfilesEndpointProviderBase>& Route53ProfilesClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void Route53ProfilesClient::init(const Route53Profiles::Route53ProfilesClientConfiguration& config)
{
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void Route53ProfilesClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateProfileOutcome Route53ProfilesClient::AssociateProfile(const AssociateProfileRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateProfileOutcome>(
    [&]()-> AssociateProfileOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/profileassociation");
      return AssociateProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

AssociateResourceToProfileOutcome Route53ProfilesClient::AssociateResourceToProfile(const AssociateResourceToProfileRequest& request) const
{
  AWS_OPERATION_GUARD(AssociateResourceToProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateResourceToProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, AssociateResourceToProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, AssociateResourceToProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".AssociateResourceToProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<AssociateResourceToProfileOutcome>(
    [&]()-> AssociateResourceToProfileOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/profileresourceassociation");
      return AssociateResourceToProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateProfileOutcome Route53ProfilesClient::CreateProfile(const CreateProfileRequest& request) const
{
  AWS_OPERATION_GUARD(CreateProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateProfileOutcome>(
    [&]()-> CreateProfileOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/profile");
      return CreateProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteProfileOutcome Route53ProfilesClient::DeleteProfile(const DeleteProfileRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfile", "Required field: ProfileId, is not set");
    return DeleteProfileOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteProfileOutcome>(
    [&]()-> DeleteProfileOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/profile/");
      endpointOverrides.AddPathSegment(request.GetProfileId());
      return DeleteProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateProfileOutcome Route53ProfilesClient::DisassociateProfile(const DisassociateProfileRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateProfile", "Required field: ProfileId, is not set");
    return DisassociateProfileOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateProfile", "Required field: ResourceId, is not set");
    return DisassociateProfileOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateProfileOutcome>(
    [&]()-> DisassociateProfileOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/profileassociation/Profileid/");
      endpointOverrides.AddPathSegment(request.GetProfileId());
      endpointOverrides.AddPathSegment("/resourceid/");
      endpointOverrides.AddPathSegment(request.GetResourceId());
      return DisassociateProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateResourceFromProfileOutcome Route53ProfilesClient::DisassociateResourceFromProfile(const DisassociateResourceFromProfileRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateResourceFromProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateResourceFromProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateResourceFromProfile", "Required field: ProfileId, is not set");
    return DisassociateResourceFromProfileOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateResourceFromProfile", "Required field: ResourceArn, is not set");
    return DisassociateResourceFromProfileOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateResourceFromProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateResourceFromProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateResourceFromProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateResourceFromProfileOutcome>(
    [&]()-> DisassociateResourceFromProfileOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/profileresourceassociation/profileid/");
      endpointOverrides.AddPathSegment(request.GetProfileId());
      endpointOverrides.setRfc3986Encoded = true;
      endpointOverrides.AddPathSegment("/resourcearn/");
      endpointOverrides.AddPathSegment(request.GetResourceArn());
      return DisassociateResourceFromProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetProfileOutcome Route53ProfilesClient::GetProfile(const GetProfileRequest& request) const
{
  AWS_OPERATION_GUARD(GetProfile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProfile", "Required field: ProfileId, is not set");
    return GetProfileOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetProfile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetProfile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetProfileOutcome>(
    [&]()-> GetProfileOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/profile/");
      endpointOverrides.AddPathSegment(request.GetProfileId());
      return GetProfileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetProfileAssociationOutcome Route53ProfilesClient::GetProfileAssociation(const GetProfileAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetProfileAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProfileAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProfileAssociation", "Required field: ProfileAssociationId, is not set");
    return GetProfileAssociationOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileAssociationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetProfileAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetProfileAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetProfileAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetProfileAssociationOutcome>(
    [&]()-> GetProfileAssociationOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/profileassociation/");
      endpointOverrides.AddPathSegment(request.GetProfileAssociationId());
      return GetProfileAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetProfileResourceAssociationOutcome Route53ProfilesClient::GetProfileResourceAssociation(const GetProfileResourceAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(GetProfileResourceAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProfileResourceAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileResourceAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProfileResourceAssociation", "Required field: ProfileResourceAssociationId, is not set");
    return GetProfileResourceAssociationOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileResourceAssociationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetProfileResourceAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetProfileResourceAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetProfileResourceAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetProfileResourceAssociationOutcome>(
    [&]()-> GetProfileResourceAssociationOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/profileresourceassociation/");
      endpointOverrides.AddPathSegment(request.GetProfileResourceAssociationId());
      return GetProfileResourceAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProfileAssociationsOutcome Route53ProfilesClient::ListProfileAssociations(const ListProfileAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListProfileAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProfileAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProfileAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProfileAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProfileAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProfileAssociationsOutcome>(
    [&]()-> ListProfileAssociationsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/profileassociations");
      return ListProfileAssociationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProfileResourceAssociationsOutcome Route53ProfilesClient::ListProfileResourceAssociations(const ListProfileResourceAssociationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListProfileResourceAssociations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProfileResourceAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfileResourceAssociations", "Required field: ProfileId, is not set");
    return ListProfileResourceAssociationsOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProfileResourceAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProfileResourceAssociations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProfileResourceAssociations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProfileResourceAssociationsOutcome>(
    [&]()-> ListProfileResourceAssociationsOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/profileresourceassociations/profileid/");
      endpointOverrides.AddPathSegment(request.GetProfileId());
      return ListProfileResourceAssociationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProfilesOutcome Route53ProfilesClient::ListProfiles(const ListProfilesRequest& request) const
{
  AWS_OPERATION_GUARD(ListProfiles);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProfiles, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProfiles",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProfilesOutcome>(
    [&]()-> ListProfilesOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/profiles");
      return ListProfilesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome Route53ProfilesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/tags/");
      endpointOverrides.AddPathSegment(request.GetResourceArn());
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome Route53ProfilesClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/tags/");
      endpointOverrides.AddPathSegment(request.GetResourceArn());
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome Route53ProfilesClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/tags/");
      endpointOverrides.AddPathSegment(request.GetResourceArn());
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateProfileResourceAssociationOutcome Route53ProfilesClient::UpdateProfileResourceAssociation(const UpdateProfileResourceAssociationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateProfileResourceAssociation);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProfileResourceAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfileResourceAssociationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProfileResourceAssociation", "Required field: ProfileResourceAssociationId, is not set");
    return UpdateProfileResourceAssociationOutcome(Aws::Client::AWSError<Route53ProfilesErrors>(Route53ProfilesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileResourceAssociationId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateProfileResourceAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateProfileResourceAssociation, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateProfileResourceAssociation",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateProfileResourceAssociationOutcome>(
    [&]()-> UpdateProfileResourceAssociationOutcome {
      Aws::Endpoint::AWSEndpointResolutionOverrides endpointOverrides;
      endpointOverrides.AddPathSegment("/profileresourceassociation/");
      endpointOverrides.AddPathSegment(request.GetProfileResourceAssociationId());
      return UpdateProfileResourceAssociationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [& , endpointOverrides ](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
        for(const auto& pathSegment : endpointOverrides.pathSegments)
        {
            resolvedEndpoint.AddPathSegment(pathSegment);
        }
        resolvedEndpoint.SetRfc3986Encoded(endpointOverrides.setRfc3986Encoded);
        resolvedEndpoint.SetQueryString(endpointOverrides.queryString);
        AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


