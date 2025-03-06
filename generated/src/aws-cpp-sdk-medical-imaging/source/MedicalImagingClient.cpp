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


#include <aws/medical-imaging/MedicalImagingClient.h>
#include <aws/medical-imaging/MedicalImagingErrorMarshaller.h>
#include <aws/medical-imaging/MedicalImagingEndpointProvider.h>
#include <aws/medical-imaging/model/CopyImageSetRequest.h>
#include <aws/medical-imaging/model/CreateDatastoreRequest.h>
#include <aws/medical-imaging/model/DeleteDatastoreRequest.h>
#include <aws/medical-imaging/model/DeleteImageSetRequest.h>
#include <aws/medical-imaging/model/GetDICOMImportJobRequest.h>
#include <aws/medical-imaging/model/GetDatastoreRequest.h>
#include <aws/medical-imaging/model/GetImageFrameRequest.h>
#include <aws/medical-imaging/model/GetImageSetRequest.h>
#include <aws/medical-imaging/model/GetImageSetMetadataRequest.h>
#include <aws/medical-imaging/model/ListDICOMImportJobsRequest.h>
#include <aws/medical-imaging/model/ListDatastoresRequest.h>
#include <aws/medical-imaging/model/ListImageSetVersionsRequest.h>
#include <aws/medical-imaging/model/ListTagsForResourceRequest.h>
#include <aws/medical-imaging/model/SearchImageSetsRequest.h>
#include <aws/medical-imaging/model/StartDICOMImportJobRequest.h>
#include <aws/medical-imaging/model/TagResourceRequest.h>
#include <aws/medical-imaging/model/UntagResourceRequest.h>
#include <aws/medical-imaging/model/UpdateImageSetMetadataRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MedicalImaging;
using namespace Aws::MedicalImaging::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace MedicalImaging
  {
    const char ALLOCATION_TAG[] = "MedicalImagingClient";
    const char SERVICE_NAME[] = "medical-imaging";
  }
}
const char* MedicalImagingClient::GetServiceName() {return SERVICE_NAME;}
const char* MedicalImagingClient::GetAllocationTag() {return ALLOCATION_TAG;}

MedicalImagingClient::MedicalImagingClient(const MedicalImaging::MedicalImagingClientConfiguration& clientConfiguration,
                           std::shared_ptr<MedicalImagingEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Medical Imaging",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MedicalImagingErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<MedicalImagingEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

MedicalImagingClient::MedicalImagingClient(const AWSCredentials& credentials,
                           std::shared_ptr<MedicalImagingEndpointProviderBase> endpointProvider,
                           const MedicalImaging::MedicalImagingClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Medical Imaging",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MedicalImagingErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<MedicalImagingEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

MedicalImagingClient::MedicalImagingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<MedicalImagingEndpointProviderBase> endpointProvider,
                           const MedicalImaging::MedicalImagingClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Medical Imaging",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MedicalImagingErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<MedicalImagingEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
MedicalImagingClient::MedicalImagingClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Medical Imaging",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<MedicalImagingErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<MedicalImagingEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

MedicalImagingClient::MedicalImagingClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Medical Imaging",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MedicalImagingErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<MedicalImagingEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

MedicalImagingClient::MedicalImagingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Medical Imaging",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MedicalImagingErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<MedicalImagingEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

MedicalImagingClient::~MedicalImagingClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<MedicalImagingEndpointProviderBase>& MedicalImagingClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MedicalImagingClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
CopyImageSetOutcome MedicalImagingClient::CopyImageSet(const CopyImageSetRequest& request) const
{
  AWS_OPERATION_GUARD(CopyImageSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyImageSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyImageSet", "Required field: DatastoreId, is not set");
    return CopyImageSetOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  if (!request.SourceImageSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyImageSet", "Required field: SourceImageSetId, is not set");
    return CopyImageSetOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceImageSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CopyImageSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CopyImageSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CopyImageSet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CopyImageSetOutcome>(
    [&]()-> CopyImageSetOutcome {
      return CopyImageSetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/datastore/");
      resolvedEndpoint.AddPathSegment(request.GetDatastoreId());
      resolvedEndpoint.AddPathSegments("/imageSet/");
      resolvedEndpoint.AddPathSegment(request.GetSourceImageSetId());
      resolvedEndpoint.AddPathSegments("/copyImageSet");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDatastoreOutcome MedicalImagingClient::CreateDatastore(const CreateDatastoreRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDatastore);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatastore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDatastore, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDatastore, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDatastore",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDatastoreOutcome>(
    [&]()-> CreateDatastoreOutcome {
      return CreateDatastoreOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/datastore");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDatastoreOutcome MedicalImagingClient::DeleteDatastore(const DeleteDatastoreRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDatastore);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatastore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDatastore", "Required field: DatastoreId, is not set");
    return DeleteDatastoreOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDatastore, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDatastore, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDatastore",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDatastoreOutcome>(
    [&]()-> DeleteDatastoreOutcome {
      return DeleteDatastoreOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/datastore/");
      resolvedEndpoint.AddPathSegment(request.GetDatastoreId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteImageSetOutcome MedicalImagingClient::DeleteImageSet(const DeleteImageSetRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteImageSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteImageSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteImageSet", "Required field: DatastoreId, is not set");
    return DeleteImageSetOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  if (!request.ImageSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteImageSet", "Required field: ImageSetId, is not set");
    return DeleteImageSetOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteImageSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteImageSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteImageSet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteImageSetOutcome>(
    [&]()-> DeleteImageSetOutcome {
      return DeleteImageSetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/datastore/");
      resolvedEndpoint.AddPathSegment(request.GetDatastoreId());
      resolvedEndpoint.AddPathSegments("/imageSet/");
      resolvedEndpoint.AddPathSegment(request.GetImageSetId());
      resolvedEndpoint.AddPathSegments("/deleteImageSet");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDICOMImportJobOutcome MedicalImagingClient::GetDICOMImportJob(const GetDICOMImportJobRequest& request) const
{
  AWS_OPERATION_GUARD(GetDICOMImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDICOMImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDICOMImportJob", "Required field: DatastoreId, is not set");
    return GetDICOMImportJobOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDICOMImportJob", "Required field: JobId, is not set");
    return GetDICOMImportJobOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDICOMImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDICOMImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDICOMImportJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDICOMImportJobOutcome>(
    [&]()-> GetDICOMImportJobOutcome {
      return GetDICOMImportJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/getDICOMImportJob/datastore/");
      resolvedEndpoint.AddPathSegment(request.GetDatastoreId());
      resolvedEndpoint.AddPathSegments("/job/");
      resolvedEndpoint.AddPathSegment(request.GetJobId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDatastoreOutcome MedicalImagingClient::GetDatastore(const GetDatastoreRequest& request) const
{
  AWS_OPERATION_GUARD(GetDatastore);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDatastore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDatastore", "Required field: DatastoreId, is not set");
    return GetDatastoreOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDatastore, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDatastore, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDatastore",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDatastoreOutcome>(
    [&]()-> GetDatastoreOutcome {
      return GetDatastoreOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/datastore/");
      resolvedEndpoint.AddPathSegment(request.GetDatastoreId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetImageFrameOutcome MedicalImagingClient::GetImageFrame(const GetImageFrameRequest& request) const
{
  AWS_OPERATION_GUARD(GetImageFrame);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImageFrame, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImageFrame", "Required field: DatastoreId, is not set");
    return GetImageFrameOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  if (!request.ImageSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImageFrame", "Required field: ImageSetId, is not set");
    return GetImageFrameOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetImageFrame, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetImageFrame, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetImageFrame",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetImageFrameOutcome>(
    [&]()-> GetImageFrameOutcome {
      return GetImageFrameOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/datastore/");
      resolvedEndpoint.AddPathSegment(request.GetDatastoreId());
      resolvedEndpoint.AddPathSegments("/imageSet/");
      resolvedEndpoint.AddPathSegment(request.GetImageSetId());
      resolvedEndpoint.AddPathSegments("/getImageFrame");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetImageSetOutcome MedicalImagingClient::GetImageSet(const GetImageSetRequest& request) const
{
  AWS_OPERATION_GUARD(GetImageSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImageSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImageSet", "Required field: DatastoreId, is not set");
    return GetImageSetOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  if (!request.ImageSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImageSet", "Required field: ImageSetId, is not set");
    return GetImageSetOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetImageSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetImageSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetImageSet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetImageSetOutcome>(
    [&]()-> GetImageSetOutcome {
      return GetImageSetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/datastore/");
      resolvedEndpoint.AddPathSegment(request.GetDatastoreId());
      resolvedEndpoint.AddPathSegments("/imageSet/");
      resolvedEndpoint.AddPathSegment(request.GetImageSetId());
      resolvedEndpoint.AddPathSegments("/getImageSet");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetImageSetMetadataOutcome MedicalImagingClient::GetImageSetMetadata(const GetImageSetMetadataRequest& request) const
{
  AWS_OPERATION_GUARD(GetImageSetMetadata);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImageSetMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImageSetMetadata", "Required field: DatastoreId, is not set");
    return GetImageSetMetadataOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  if (!request.ImageSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImageSetMetadata", "Required field: ImageSetId, is not set");
    return GetImageSetMetadataOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetImageSetMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetImageSetMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetImageSetMetadata",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetImageSetMetadataOutcome>(
    [&]()-> GetImageSetMetadataOutcome {
      return GetImageSetMetadataOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/datastore/");
      resolvedEndpoint.AddPathSegment(request.GetDatastoreId());
      resolvedEndpoint.AddPathSegments("/imageSet/");
      resolvedEndpoint.AddPathSegment(request.GetImageSetId());
      resolvedEndpoint.AddPathSegments("/getImageSetMetadata");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDICOMImportJobsOutcome MedicalImagingClient::ListDICOMImportJobs(const ListDICOMImportJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDICOMImportJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDICOMImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDICOMImportJobs", "Required field: DatastoreId, is not set");
    return ListDICOMImportJobsOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDICOMImportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDICOMImportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDICOMImportJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDICOMImportJobsOutcome>(
    [&]()-> ListDICOMImportJobsOutcome {
      return ListDICOMImportJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/listDICOMImportJobs/datastore/");
      resolvedEndpoint.AddPathSegment(request.GetDatastoreId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDatastoresOutcome MedicalImagingClient::ListDatastores(const ListDatastoresRequest& request) const
{
  AWS_OPERATION_GUARD(ListDatastores);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatastores, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDatastores, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDatastores, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDatastores",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDatastoresOutcome>(
    [&]()-> ListDatastoresOutcome {
      return ListDatastoresOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/datastore");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListImageSetVersionsOutcome MedicalImagingClient::ListImageSetVersions(const ListImageSetVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListImageSetVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImageSetVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListImageSetVersions", "Required field: DatastoreId, is not set");
    return ListImageSetVersionsOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  if (!request.ImageSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListImageSetVersions", "Required field: ImageSetId, is not set");
    return ListImageSetVersionsOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListImageSetVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListImageSetVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListImageSetVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListImageSetVersionsOutcome>(
    [&]()-> ListImageSetVersionsOutcome {
      return ListImageSetVersionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/datastore/");
      resolvedEndpoint.AddPathSegment(request.GetDatastoreId());
      resolvedEndpoint.AddPathSegments("/imageSet/");
      resolvedEndpoint.AddPathSegment(request.GetImageSetId());
      resolvedEndpoint.AddPathSegments("/listImageSetVersions");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome MedicalImagingClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

SearchImageSetsOutcome MedicalImagingClient::SearchImageSets(const SearchImageSetsRequest& request) const
{
  AWS_OPERATION_GUARD(SearchImageSets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchImageSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchImageSets", "Required field: DatastoreId, is not set");
    return SearchImageSetsOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, SearchImageSets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchImageSets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchImageSets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchImageSetsOutcome>(
    [&]()-> SearchImageSetsOutcome {
      return SearchImageSetsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/datastore/");
      resolvedEndpoint.AddPathSegment(request.GetDatastoreId());
      resolvedEndpoint.AddPathSegments("/searchImageSets");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartDICOMImportJobOutcome MedicalImagingClient::StartDICOMImportJob(const StartDICOMImportJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartDICOMImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDICOMImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDICOMImportJob", "Required field: DatastoreId, is not set");
    return StartDICOMImportJobOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartDICOMImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartDICOMImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartDICOMImportJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartDICOMImportJobOutcome>(
    [&]()-> StartDICOMImportJobOutcome {
      return StartDICOMImportJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/startDICOMImportJob/datastore/");
      resolvedEndpoint.AddPathSegment(request.GetDatastoreId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome MedicalImagingClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

UntagResourceOutcome MedicalImagingClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
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

UpdateImageSetMetadataOutcome MedicalImagingClient::UpdateImageSetMetadata(const UpdateImageSetMetadataRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateImageSetMetadata);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateImageSetMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DatastoreIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateImageSetMetadata", "Required field: DatastoreId, is not set");
    return UpdateImageSetMetadataOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatastoreId]", false));
  }
  if (!request.ImageSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateImageSetMetadata", "Required field: ImageSetId, is not set");
    return UpdateImageSetMetadataOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ImageSetId]", false));
  }
  if (!request.LatestVersionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateImageSetMetadata", "Required field: LatestVersionId, is not set");
    return UpdateImageSetMetadataOutcome(Aws::Client::AWSError<MedicalImagingErrors>(MedicalImagingErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LatestVersionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateImageSetMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateImageSetMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateImageSetMetadata",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateImageSetMetadataOutcome>(
    [&]()-> UpdateImageSetMetadataOutcome {
      return UpdateImageSetMetadataOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/datastore/");
      resolvedEndpoint.AddPathSegment(request.GetDatastoreId());
      resolvedEndpoint.AddPathSegments("/imageSet/");
      resolvedEndpoint.AddPathSegment(request.GetImageSetId());
      resolvedEndpoint.AddPathSegments("/updateImageSetMetadata");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


