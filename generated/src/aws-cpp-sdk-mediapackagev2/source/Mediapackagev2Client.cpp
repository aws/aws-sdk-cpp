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


#include <aws/mediapackagev2/Mediapackagev2Client.h>
#include <aws/mediapackagev2/Mediapackagev2ErrorMarshaller.h>
#include <aws/mediapackagev2/Mediapackagev2EndpointProvider.h>
#include <aws/mediapackagev2/model/CancelHarvestJobRequest.h>
#include <aws/mediapackagev2/model/CreateChannelRequest.h>
#include <aws/mediapackagev2/model/CreateChannelGroupRequest.h>
#include <aws/mediapackagev2/model/CreateHarvestJobRequest.h>
#include <aws/mediapackagev2/model/CreateOriginEndpointRequest.h>
#include <aws/mediapackagev2/model/DeleteChannelRequest.h>
#include <aws/mediapackagev2/model/DeleteChannelGroupRequest.h>
#include <aws/mediapackagev2/model/DeleteChannelPolicyRequest.h>
#include <aws/mediapackagev2/model/DeleteOriginEndpointRequest.h>
#include <aws/mediapackagev2/model/DeleteOriginEndpointPolicyRequest.h>
#include <aws/mediapackagev2/model/GetChannelRequest.h>
#include <aws/mediapackagev2/model/GetChannelGroupRequest.h>
#include <aws/mediapackagev2/model/GetChannelPolicyRequest.h>
#include <aws/mediapackagev2/model/GetHarvestJobRequest.h>
#include <aws/mediapackagev2/model/GetOriginEndpointRequest.h>
#include <aws/mediapackagev2/model/GetOriginEndpointPolicyRequest.h>
#include <aws/mediapackagev2/model/ListChannelGroupsRequest.h>
#include <aws/mediapackagev2/model/ListChannelsRequest.h>
#include <aws/mediapackagev2/model/ListHarvestJobsRequest.h>
#include <aws/mediapackagev2/model/ListOriginEndpointsRequest.h>
#include <aws/mediapackagev2/model/ListTagsForResourceRequest.h>
#include <aws/mediapackagev2/model/PutChannelPolicyRequest.h>
#include <aws/mediapackagev2/model/PutOriginEndpointPolicyRequest.h>
#include <aws/mediapackagev2/model/TagResourceRequest.h>
#include <aws/mediapackagev2/model/UntagResourceRequest.h>
#include <aws/mediapackagev2/model/UpdateChannelRequest.h>
#include <aws/mediapackagev2/model/UpdateChannelGroupRequest.h>
#include <aws/mediapackagev2/model/UpdateOriginEndpointRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::mediapackagev2;
using namespace Aws::mediapackagev2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace mediapackagev2
  {
    const char ALLOCATION_TAG[] = "Mediapackagev2Client";
    const char SERVICE_NAME[] = "mediapackagev2";
  }
}
const char* Mediapackagev2Client::GetServiceName() {return SERVICE_NAME;}
const char* Mediapackagev2Client::GetAllocationTag() {return ALLOCATION_TAG;}

Mediapackagev2Client::Mediapackagev2Client(const mediapackagev2::Mediapackagev2ClientConfiguration& clientConfiguration,
                           std::shared_ptr<Mediapackagev2EndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "MediaPackageV2",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

Mediapackagev2Client::Mediapackagev2Client(const AWSCredentials& credentials,
                           std::shared_ptr<Mediapackagev2EndpointProviderBase> endpointProvider,
                           const mediapackagev2::Mediapackagev2ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "MediaPackageV2",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

Mediapackagev2Client::Mediapackagev2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<Mediapackagev2EndpointProviderBase> endpointProvider,
                           const mediapackagev2::Mediapackagev2ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "MediaPackageV2",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
Mediapackagev2Client::Mediapackagev2Client(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "MediaPackageV2",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

Mediapackagev2Client::Mediapackagev2Client(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "MediaPackageV2",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

Mediapackagev2Client::Mediapackagev2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "MediaPackageV2",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<Mediapackagev2ErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<Mediapackagev2EndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

Mediapackagev2Client::~Mediapackagev2Client()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<Mediapackagev2EndpointProviderBase>& Mediapackagev2Client::accessEndpointProvider()
{
  return m_endpointProvider;
}

void Mediapackagev2Client::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
CancelHarvestJobOutcome Mediapackagev2Client::CancelHarvestJob(const CancelHarvestJobRequest& request) const
{
  AWS_OPERATION_GUARD(CancelHarvestJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelHarvestJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelHarvestJob", "Required field: ChannelGroupName, is not set");
    return CancelHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelHarvestJob", "Required field: ChannelName, is not set");
    return CancelHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelHarvestJob", "Required field: OriginEndpointName, is not set");
    return CancelHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  if (!request.HarvestJobNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelHarvestJob", "Required field: HarvestJobName, is not set");
    return CancelHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HarvestJobName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelHarvestJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelHarvestJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelHarvestJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelHarvestJobOutcome>(
    [&]()-> CancelHarvestJobOutcome {
      return CancelHarvestJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      resolvedEndpoint.AddPathSegments("/originEndpoint/");
      resolvedEndpoint.AddPathSegment(request.GetOriginEndpointName());
      resolvedEndpoint.AddPathSegments("/harvestJob/");
      resolvedEndpoint.AddPathSegment(request.GetHarvestJobName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateChannelOutcome Mediapackagev2Client::CreateChannel(const CreateChannelRequest& request) const
{
  AWS_OPERATION_GUARD(CreateChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateChannel", "Required field: ChannelGroupName, is not set");
    return CreateChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateChannelOutcome>(
    [&]()-> CreateChannelOutcome {
      return CreateChannelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateChannelGroupOutcome Mediapackagev2Client::CreateChannelGroup(const CreateChannelGroupRequest& request) const
{
  AWS_OPERATION_GUARD(CreateChannelGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateChannelGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateChannelGroupOutcome>(
    [&]()-> CreateChannelGroupOutcome {
      return CreateChannelGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateHarvestJobOutcome Mediapackagev2Client::CreateHarvestJob(const CreateHarvestJobRequest& request) const
{
  AWS_OPERATION_GUARD(CreateHarvestJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateHarvestJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateHarvestJob", "Required field: ChannelGroupName, is not set");
    return CreateHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateHarvestJob", "Required field: ChannelName, is not set");
    return CreateHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateHarvestJob", "Required field: OriginEndpointName, is not set");
    return CreateHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateHarvestJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateHarvestJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateHarvestJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateHarvestJobOutcome>(
    [&]()-> CreateHarvestJobOutcome {
      return CreateHarvestJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      resolvedEndpoint.AddPathSegments("/originEndpoint/");
      resolvedEndpoint.AddPathSegment(request.GetOriginEndpointName());
      resolvedEndpoint.AddPathSegments("/harvestJob");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateOriginEndpointOutcome Mediapackagev2Client::CreateOriginEndpoint(const CreateOriginEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(CreateOriginEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateOriginEndpoint", "Required field: ChannelGroupName, is not set");
    return CreateOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateOriginEndpoint", "Required field: ChannelName, is not set");
    return CreateOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateOriginEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateOriginEndpointOutcome>(
    [&]()-> CreateOriginEndpointOutcome {
      return CreateOriginEndpointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      resolvedEndpoint.AddPathSegments("/originEndpoint");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteChannelOutcome Mediapackagev2Client::DeleteChannel(const DeleteChannelRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelGroupName, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannel", "Required field: ChannelName, is not set");
    return DeleteChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteChannelOutcome>(
    [&]()-> DeleteChannelOutcome {
      return DeleteChannelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteChannelGroupOutcome Mediapackagev2Client::DeleteChannelGroup(const DeleteChannelGroupRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteChannelGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelGroup", "Required field: ChannelGroupName, is not set");
    return DeleteChannelGroupOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteChannelGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteChannelGroupOutcome>(
    [&]()-> DeleteChannelGroupOutcome {
      return DeleteChannelGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteChannelPolicyOutcome Mediapackagev2Client::DeleteChannelPolicy(const DeleteChannelPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteChannelPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelPolicy", "Required field: ChannelGroupName, is not set");
    return DeleteChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteChannelPolicy", "Required field: ChannelName, is not set");
    return DeleteChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteChannelPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteChannelPolicyOutcome>(
    [&]()-> DeleteChannelPolicyOutcome {
      return DeleteChannelPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      resolvedEndpoint.AddPathSegments("/policy");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteOriginEndpointOutcome Mediapackagev2Client::DeleteOriginEndpoint(const DeleteOriginEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteOriginEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpoint", "Required field: ChannelGroupName, is not set");
    return DeleteOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpoint", "Required field: ChannelName, is not set");
    return DeleteOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpoint", "Required field: OriginEndpointName, is not set");
    return DeleteOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteOriginEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteOriginEndpointOutcome>(
    [&]()-> DeleteOriginEndpointOutcome {
      return DeleteOriginEndpointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      resolvedEndpoint.AddPathSegments("/originEndpoint/");
      resolvedEndpoint.AddPathSegment(request.GetOriginEndpointName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteOriginEndpointPolicyOutcome Mediapackagev2Client::DeleteOriginEndpointPolicy(const DeleteOriginEndpointPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteOriginEndpointPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOriginEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpointPolicy", "Required field: ChannelGroupName, is not set");
    return DeleteOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpointPolicy", "Required field: ChannelName, is not set");
    return DeleteOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginEndpointPolicy", "Required field: OriginEndpointName, is not set");
    return DeleteOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteOriginEndpointPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteOriginEndpointPolicyOutcome>(
    [&]()-> DeleteOriginEndpointPolicyOutcome {
      return DeleteOriginEndpointPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      resolvedEndpoint.AddPathSegments("/originEndpoint/");
      resolvedEndpoint.AddPathSegment(request.GetOriginEndpointName());
      resolvedEndpoint.AddPathSegments("/policy");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetChannelOutcome Mediapackagev2Client::GetChannel(const GetChannelRequest& request) const
{
  AWS_OPERATION_GUARD(GetChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannel", "Required field: ChannelGroupName, is not set");
    return GetChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannel", "Required field: ChannelName, is not set");
    return GetChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetChannelOutcome>(
    [&]()-> GetChannelOutcome {
      return GetChannelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetChannelGroupOutcome Mediapackagev2Client::GetChannelGroup(const GetChannelGroupRequest& request) const
{
  AWS_OPERATION_GUARD(GetChannelGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelGroup", "Required field: ChannelGroupName, is not set");
    return GetChannelGroupOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetChannelGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetChannelGroupOutcome>(
    [&]()-> GetChannelGroupOutcome {
      return GetChannelGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetChannelPolicyOutcome Mediapackagev2Client::GetChannelPolicy(const GetChannelPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetChannelPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelPolicy", "Required field: ChannelGroupName, is not set");
    return GetChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetChannelPolicy", "Required field: ChannelName, is not set");
    return GetChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetChannelPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetChannelPolicyOutcome>(
    [&]()-> GetChannelPolicyOutcome {
      return GetChannelPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      resolvedEndpoint.AddPathSegments("/policy");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetHarvestJobOutcome Mediapackagev2Client::GetHarvestJob(const GetHarvestJobRequest& request) const
{
  AWS_OPERATION_GUARD(GetHarvestJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHarvestJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHarvestJob", "Required field: ChannelGroupName, is not set");
    return GetHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHarvestJob", "Required field: ChannelName, is not set");
    return GetHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHarvestJob", "Required field: OriginEndpointName, is not set");
    return GetHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  if (!request.HarvestJobNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetHarvestJob", "Required field: HarvestJobName, is not set");
    return GetHarvestJobOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HarvestJobName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetHarvestJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetHarvestJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetHarvestJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetHarvestJobOutcome>(
    [&]()-> GetHarvestJobOutcome {
      return GetHarvestJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      resolvedEndpoint.AddPathSegments("/originEndpoint/");
      resolvedEndpoint.AddPathSegment(request.GetOriginEndpointName());
      resolvedEndpoint.AddPathSegments("/harvestJob/");
      resolvedEndpoint.AddPathSegment(request.GetHarvestJobName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetOriginEndpointOutcome Mediapackagev2Client::GetOriginEndpoint(const GetOriginEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(GetOriginEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginEndpoint", "Required field: ChannelGroupName, is not set");
    return GetOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginEndpoint", "Required field: ChannelName, is not set");
    return GetOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginEndpoint", "Required field: OriginEndpointName, is not set");
    return GetOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetOriginEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetOriginEndpointOutcome>(
    [&]()-> GetOriginEndpointOutcome {
      return GetOriginEndpointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      resolvedEndpoint.AddPathSegments("/originEndpoint/");
      resolvedEndpoint.AddPathSegment(request.GetOriginEndpointName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetOriginEndpointPolicyOutcome Mediapackagev2Client::GetOriginEndpointPolicy(const GetOriginEndpointPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetOriginEndpointPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOriginEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginEndpointPolicy", "Required field: ChannelGroupName, is not set");
    return GetOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginEndpointPolicy", "Required field: ChannelName, is not set");
    return GetOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginEndpointPolicy", "Required field: OriginEndpointName, is not set");
    return GetOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetOriginEndpointPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetOriginEndpointPolicyOutcome>(
    [&]()-> GetOriginEndpointPolicyOutcome {
      return GetOriginEndpointPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      resolvedEndpoint.AddPathSegments("/originEndpoint/");
      resolvedEndpoint.AddPathSegment(request.GetOriginEndpointName());
      resolvedEndpoint.AddPathSegments("/policy");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListChannelGroupsOutcome Mediapackagev2Client::ListChannelGroups(const ListChannelGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListChannelGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannelGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListChannelGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListChannelGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListChannelGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListChannelGroupsOutcome>(
    [&]()-> ListChannelGroupsOutcome {
      return ListChannelGroupsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListChannelsOutcome Mediapackagev2Client::ListChannels(const ListChannelsRequest& request) const
{
  AWS_OPERATION_GUARD(ListChannels);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListChannels", "Required field: ChannelGroupName, is not set");
    return ListChannelsOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListChannels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListChannels, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListChannels",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListChannelsOutcome>(
    [&]()-> ListChannelsOutcome {
      return ListChannelsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListHarvestJobsOutcome Mediapackagev2Client::ListHarvestJobs(const ListHarvestJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListHarvestJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHarvestJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListHarvestJobs", "Required field: ChannelGroupName, is not set");
    return ListHarvestJobsOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListHarvestJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListHarvestJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListHarvestJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListHarvestJobsOutcome>(
    [&]()-> ListHarvestJobsOutcome {
      return ListHarvestJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/harvestJob");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListOriginEndpointsOutcome Mediapackagev2Client::ListOriginEndpoints(const ListOriginEndpointsRequest& request) const
{
  AWS_OPERATION_GUARD(ListOriginEndpoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOriginEndpoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListOriginEndpoints", "Required field: ChannelGroupName, is not set");
    return ListOriginEndpointsOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListOriginEndpoints", "Required field: ChannelName, is not set");
    return ListOriginEndpointsOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListOriginEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListOriginEndpoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListOriginEndpoints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListOriginEndpointsOutcome>(
    [&]()-> ListOriginEndpointsOutcome {
      return ListOriginEndpointsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      resolvedEndpoint.AddPathSegments("/originEndpoint");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome Mediapackagev2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutChannelPolicyOutcome Mediapackagev2Client::PutChannelPolicy(const PutChannelPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutChannelPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutChannelPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChannelPolicy", "Required field: ChannelGroupName, is not set");
    return PutChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutChannelPolicy", "Required field: ChannelName, is not set");
    return PutChannelPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutChannelPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutChannelPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutChannelPolicyOutcome>(
    [&]()-> PutChannelPolicyOutcome {
      return PutChannelPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      resolvedEndpoint.AddPathSegments("/policy");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutOriginEndpointPolicyOutcome Mediapackagev2Client::PutOriginEndpointPolicy(const PutOriginEndpointPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutOriginEndpointPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutOriginEndpointPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutOriginEndpointPolicy", "Required field: ChannelGroupName, is not set");
    return PutOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutOriginEndpointPolicy", "Required field: ChannelName, is not set");
    return PutOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutOriginEndpointPolicy", "Required field: OriginEndpointName, is not set");
    return PutOriginEndpointPolicyOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutOriginEndpointPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutOriginEndpointPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutOriginEndpointPolicyOutcome>(
    [&]()-> PutOriginEndpointPolicyOutcome {
      return PutOriginEndpointPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      resolvedEndpoint.AddPathSegments("/originEndpoint/");
      resolvedEndpoint.AddPathSegment(request.GetOriginEndpointName());
      resolvedEndpoint.AddPathSegments("/policy");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome Mediapackagev2Client::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome Mediapackagev2Client::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
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
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateChannelOutcome Mediapackagev2Client::UpdateChannel(const UpdateChannelRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateChannel);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelGroupName, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannel", "Required field: ChannelName, is not set");
    return UpdateChannelOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateChannel, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateChannel",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateChannelOutcome>(
    [&]()-> UpdateChannelOutcome {
      return UpdateChannelOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateChannelGroupOutcome Mediapackagev2Client::UpdateChannelGroup(const UpdateChannelGroupRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateChannelGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateChannelGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateChannelGroup", "Required field: ChannelGroupName, is not set");
    return UpdateChannelGroupOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateChannelGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateChannelGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateChannelGroupOutcome>(
    [&]()-> UpdateChannelGroupOutcome {
      return UpdateChannelGroupOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateOriginEndpointOutcome Mediapackagev2Client::UpdateOriginEndpoint(const UpdateOriginEndpointRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateOriginEndpoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateOriginEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateOriginEndpoint", "Required field: ChannelGroupName, is not set");
    return UpdateOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelGroupName]", false));
  }
  if (!request.ChannelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateOriginEndpoint", "Required field: ChannelName, is not set");
    return UpdateOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelName]", false));
  }
  if (!request.OriginEndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateOriginEndpoint", "Required field: OriginEndpointName, is not set");
    return UpdateOriginEndpointOutcome(Aws::Client::AWSError<Mediapackagev2Errors>(Mediapackagev2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginEndpointName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateOriginEndpoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateOriginEndpoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateOriginEndpointOutcome>(
    [&]()-> UpdateOriginEndpointOutcome {
      return UpdateOriginEndpointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/channelGroup/");
      resolvedEndpoint.AddPathSegment(request.GetChannelGroupName());
      resolvedEndpoint.AddPathSegments("/channel/");
      resolvedEndpoint.AddPathSegment(request.GetChannelName());
      resolvedEndpoint.AddPathSegments("/originEndpoint/");
      resolvedEndpoint.AddPathSegment(request.GetOriginEndpointName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


