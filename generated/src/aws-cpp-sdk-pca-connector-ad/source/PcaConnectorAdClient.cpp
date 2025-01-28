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


#include <aws/pca-connector-ad/PcaConnectorAdClient.h>
#include <aws/pca-connector-ad/PcaConnectorAdErrorMarshaller.h>
#include <aws/pca-connector-ad/PcaConnectorAdEndpointProvider.h>
#include <aws/pca-connector-ad/model/CreateConnectorRequest.h>
#include <aws/pca-connector-ad/model/CreateDirectoryRegistrationRequest.h>
#include <aws/pca-connector-ad/model/CreateServicePrincipalNameRequest.h>
#include <aws/pca-connector-ad/model/CreateTemplateRequest.h>
#include <aws/pca-connector-ad/model/CreateTemplateGroupAccessControlEntryRequest.h>
#include <aws/pca-connector-ad/model/DeleteConnectorRequest.h>
#include <aws/pca-connector-ad/model/DeleteDirectoryRegistrationRequest.h>
#include <aws/pca-connector-ad/model/DeleteServicePrincipalNameRequest.h>
#include <aws/pca-connector-ad/model/DeleteTemplateRequest.h>
#include <aws/pca-connector-ad/model/DeleteTemplateGroupAccessControlEntryRequest.h>
#include <aws/pca-connector-ad/model/GetConnectorRequest.h>
#include <aws/pca-connector-ad/model/GetDirectoryRegistrationRequest.h>
#include <aws/pca-connector-ad/model/GetServicePrincipalNameRequest.h>
#include <aws/pca-connector-ad/model/GetTemplateRequest.h>
#include <aws/pca-connector-ad/model/GetTemplateGroupAccessControlEntryRequest.h>
#include <aws/pca-connector-ad/model/ListConnectorsRequest.h>
#include <aws/pca-connector-ad/model/ListDirectoryRegistrationsRequest.h>
#include <aws/pca-connector-ad/model/ListServicePrincipalNamesRequest.h>
#include <aws/pca-connector-ad/model/ListTagsForResourceRequest.h>
#include <aws/pca-connector-ad/model/ListTemplateGroupAccessControlEntriesRequest.h>
#include <aws/pca-connector-ad/model/ListTemplatesRequest.h>
#include <aws/pca-connector-ad/model/TagResourceRequest.h>
#include <aws/pca-connector-ad/model/UntagResourceRequest.h>
#include <aws/pca-connector-ad/model/UpdateTemplateRequest.h>
#include <aws/pca-connector-ad/model/UpdateTemplateGroupAccessControlEntryRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PcaConnectorAd;
using namespace Aws::PcaConnectorAd::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace PcaConnectorAd
  {
    const char ALLOCATION_TAG[] = "PcaConnectorAdClient";
    const char SERVICE_NAME[] = "pca-connector-ad";
  }
}
const char* PcaConnectorAdClient::GetServiceName() {return SERVICE_NAME;}
const char* PcaConnectorAdClient::GetAllocationTag() {return ALLOCATION_TAG;}

PcaConnectorAdClient::PcaConnectorAdClient(const PcaConnectorAd::PcaConnectorAdClientConfiguration& clientConfiguration,
                           std::shared_ptr<PcaConnectorAdEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Pca Connector Ad",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<PcaConnectorAdErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<PcaConnectorAdEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

PcaConnectorAdClient::PcaConnectorAdClient(const AWSCredentials& credentials,
                           std::shared_ptr<PcaConnectorAdEndpointProviderBase> endpointProvider,
                           const PcaConnectorAd::PcaConnectorAdClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Pca Connector Ad",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<PcaConnectorAdErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<PcaConnectorAdEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

PcaConnectorAdClient::PcaConnectorAdClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<PcaConnectorAdEndpointProviderBase> endpointProvider,
                           const PcaConnectorAd::PcaConnectorAdClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Pca Connector Ad",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<PcaConnectorAdErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<PcaConnectorAdEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
PcaConnectorAdClient::PcaConnectorAdClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Pca Connector Ad",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<PcaConnectorAdErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<PcaConnectorAdEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

PcaConnectorAdClient::PcaConnectorAdClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Pca Connector Ad",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<PcaConnectorAdErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<PcaConnectorAdEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

PcaConnectorAdClient::PcaConnectorAdClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Pca Connector Ad",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<PcaConnectorAdErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<PcaConnectorAdEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

PcaConnectorAdClient::~PcaConnectorAdClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<PcaConnectorAdEndpointProviderBase>& PcaConnectorAdClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void PcaConnectorAdClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
CreateConnectorOutcome PcaConnectorAdClient::CreateConnector(const CreateConnectorRequest& request) const
{
  AWS_OPERATION_GUARD(CreateConnector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateConnector, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateConnector, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateConnector",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateConnectorOutcome>(
    [&]()-> CreateConnectorOutcome {
      return CreateConnectorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/connectors");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateDirectoryRegistrationOutcome PcaConnectorAdClient::CreateDirectoryRegistration(const CreateDirectoryRegistrationRequest& request) const
{
  AWS_OPERATION_GUARD(CreateDirectoryRegistration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDirectoryRegistration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateDirectoryRegistration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateDirectoryRegistration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateDirectoryRegistration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateDirectoryRegistrationOutcome>(
    [&]()-> CreateDirectoryRegistrationOutcome {
      return CreateDirectoryRegistrationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/directoryRegistrations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateServicePrincipalNameOutcome PcaConnectorAdClient::CreateServicePrincipalName(const CreateServicePrincipalNameRequest& request) const
{
  AWS_OPERATION_GUARD(CreateServicePrincipalName);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateServicePrincipalName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateServicePrincipalName", "Required field: ConnectorArn, is not set");
    return CreateServicePrincipalNameOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }
  if (!request.DirectoryRegistrationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateServicePrincipalName", "Required field: DirectoryRegistrationArn, is not set");
    return CreateServicePrincipalNameOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryRegistrationArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateServicePrincipalName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateServicePrincipalName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateServicePrincipalName",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateServicePrincipalNameOutcome>(
    [&]()-> CreateServicePrincipalNameOutcome {
      return CreateServicePrincipalNameOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/directoryRegistrations/");
      resolvedEndpoint.AddPathSegment(request.GetDirectoryRegistrationArn());
      resolvedEndpoint.AddPathSegments("/servicePrincipalNames/");
      resolvedEndpoint.AddPathSegment(request.GetConnectorArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTemplateOutcome PcaConnectorAdClient::CreateTemplate(const CreateTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTemplateOutcome>(
    [&]()-> CreateTemplateOutcome {
      return CreateTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/templates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateTemplateGroupAccessControlEntryOutcome PcaConnectorAdClient::CreateTemplateGroupAccessControlEntry(const CreateTemplateGroupAccessControlEntryRequest& request) const
{
  AWS_OPERATION_GUARD(CreateTemplateGroupAccessControlEntry);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateTemplateGroupAccessControlEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTemplateGroupAccessControlEntry", "Required field: TemplateArn, is not set");
    return CreateTemplateGroupAccessControlEntryOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateTemplateGroupAccessControlEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateTemplateGroupAccessControlEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateTemplateGroupAccessControlEntry",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateTemplateGroupAccessControlEntryOutcome>(
    [&]()-> CreateTemplateGroupAccessControlEntryOutcome {
      return CreateTemplateGroupAccessControlEntryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/templates/");
      resolvedEndpoint.AddPathSegment(request.GetTemplateArn());
      resolvedEndpoint.AddPathSegments("/accessControlEntries");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteConnectorOutcome PcaConnectorAdClient::DeleteConnector(const DeleteConnectorRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteConnector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConnector", "Required field: ConnectorArn, is not set");
    return DeleteConnectorOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteConnector, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteConnector, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteConnector",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteConnectorOutcome>(
    [&]()-> DeleteConnectorOutcome {
      return DeleteConnectorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/connectors/");
      resolvedEndpoint.AddPathSegment(request.GetConnectorArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteDirectoryRegistrationOutcome PcaConnectorAdClient::DeleteDirectoryRegistration(const DeleteDirectoryRegistrationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteDirectoryRegistration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDirectoryRegistration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DirectoryRegistrationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDirectoryRegistration", "Required field: DirectoryRegistrationArn, is not set");
    return DeleteDirectoryRegistrationOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryRegistrationArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteDirectoryRegistration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteDirectoryRegistration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteDirectoryRegistration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteDirectoryRegistrationOutcome>(
    [&]()-> DeleteDirectoryRegistrationOutcome {
      return DeleteDirectoryRegistrationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/directoryRegistrations/");
      resolvedEndpoint.AddPathSegment(request.GetDirectoryRegistrationArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteServicePrincipalNameOutcome PcaConnectorAdClient::DeleteServicePrincipalName(const DeleteServicePrincipalNameRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteServicePrincipalName);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteServicePrincipalName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteServicePrincipalName", "Required field: ConnectorArn, is not set");
    return DeleteServicePrincipalNameOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }
  if (!request.DirectoryRegistrationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteServicePrincipalName", "Required field: DirectoryRegistrationArn, is not set");
    return DeleteServicePrincipalNameOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryRegistrationArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteServicePrincipalName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteServicePrincipalName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteServicePrincipalName",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteServicePrincipalNameOutcome>(
    [&]()-> DeleteServicePrincipalNameOutcome {
      return DeleteServicePrincipalNameOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/directoryRegistrations/");
      resolvedEndpoint.AddPathSegment(request.GetDirectoryRegistrationArn());
      resolvedEndpoint.AddPathSegments("/servicePrincipalNames/");
      resolvedEndpoint.AddPathSegment(request.GetConnectorArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTemplateOutcome PcaConnectorAdClient::DeleteTemplate(const DeleteTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTemplate", "Required field: TemplateArn, is not set");
    return DeleteTemplateOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTemplateOutcome>(
    [&]()-> DeleteTemplateOutcome {
      return DeleteTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/templates/");
      resolvedEndpoint.AddPathSegment(request.GetTemplateArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteTemplateGroupAccessControlEntryOutcome PcaConnectorAdClient::DeleteTemplateGroupAccessControlEntry(const DeleteTemplateGroupAccessControlEntryRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteTemplateGroupAccessControlEntry);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTemplateGroupAccessControlEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupSecurityIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTemplateGroupAccessControlEntry", "Required field: GroupSecurityIdentifier, is not set");
    return DeleteTemplateGroupAccessControlEntryOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupSecurityIdentifier]", false));
  }
  if (!request.TemplateArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTemplateGroupAccessControlEntry", "Required field: TemplateArn, is not set");
    return DeleteTemplateGroupAccessControlEntryOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteTemplateGroupAccessControlEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteTemplateGroupAccessControlEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteTemplateGroupAccessControlEntry",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteTemplateGroupAccessControlEntryOutcome>(
    [&]()-> DeleteTemplateGroupAccessControlEntryOutcome {
      return DeleteTemplateGroupAccessControlEntryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/templates/");
      resolvedEndpoint.AddPathSegment(request.GetTemplateArn());
      resolvedEndpoint.AddPathSegments("/accessControlEntries/");
      resolvedEndpoint.AddPathSegment(request.GetGroupSecurityIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetConnectorOutcome PcaConnectorAdClient::GetConnector(const GetConnectorRequest& request) const
{
  AWS_OPERATION_GUARD(GetConnector);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConnector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConnector", "Required field: ConnectorArn, is not set");
    return GetConnectorOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetConnector, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetConnector, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetConnector",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetConnectorOutcome>(
    [&]()-> GetConnectorOutcome {
      return GetConnectorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/connectors/");
      resolvedEndpoint.AddPathSegment(request.GetConnectorArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDirectoryRegistrationOutcome PcaConnectorAdClient::GetDirectoryRegistration(const GetDirectoryRegistrationRequest& request) const
{
  AWS_OPERATION_GUARD(GetDirectoryRegistration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDirectoryRegistration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DirectoryRegistrationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDirectoryRegistration", "Required field: DirectoryRegistrationArn, is not set");
    return GetDirectoryRegistrationOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryRegistrationArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetDirectoryRegistration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDirectoryRegistration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDirectoryRegistration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDirectoryRegistrationOutcome>(
    [&]()-> GetDirectoryRegistrationOutcome {
      return GetDirectoryRegistrationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/directoryRegistrations/");
      resolvedEndpoint.AddPathSegment(request.GetDirectoryRegistrationArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetServicePrincipalNameOutcome PcaConnectorAdClient::GetServicePrincipalName(const GetServicePrincipalNameRequest& request) const
{
  AWS_OPERATION_GUARD(GetServicePrincipalName);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetServicePrincipalName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetServicePrincipalName", "Required field: ConnectorArn, is not set");
    return GetServicePrincipalNameOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }
  if (!request.DirectoryRegistrationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetServicePrincipalName", "Required field: DirectoryRegistrationArn, is not set");
    return GetServicePrincipalNameOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryRegistrationArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetServicePrincipalName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetServicePrincipalName, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetServicePrincipalName",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetServicePrincipalNameOutcome>(
    [&]()-> GetServicePrincipalNameOutcome {
      return GetServicePrincipalNameOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/directoryRegistrations/");
      resolvedEndpoint.AddPathSegment(request.GetDirectoryRegistrationArn());
      resolvedEndpoint.AddPathSegments("/servicePrincipalNames/");
      resolvedEndpoint.AddPathSegment(request.GetConnectorArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTemplateOutcome PcaConnectorAdClient::GetTemplate(const GetTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(GetTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplate", "Required field: TemplateArn, is not set");
    return GetTemplateOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTemplateOutcome>(
    [&]()-> GetTemplateOutcome {
      return GetTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/templates/");
      resolvedEndpoint.AddPathSegment(request.GetTemplateArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTemplateGroupAccessControlEntryOutcome PcaConnectorAdClient::GetTemplateGroupAccessControlEntry(const GetTemplateGroupAccessControlEntryRequest& request) const
{
  AWS_OPERATION_GUARD(GetTemplateGroupAccessControlEntry);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTemplateGroupAccessControlEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupSecurityIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplateGroupAccessControlEntry", "Required field: GroupSecurityIdentifier, is not set");
    return GetTemplateGroupAccessControlEntryOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupSecurityIdentifier]", false));
  }
  if (!request.TemplateArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTemplateGroupAccessControlEntry", "Required field: TemplateArn, is not set");
    return GetTemplateGroupAccessControlEntryOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTemplateGroupAccessControlEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTemplateGroupAccessControlEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTemplateGroupAccessControlEntry",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTemplateGroupAccessControlEntryOutcome>(
    [&]()-> GetTemplateGroupAccessControlEntryOutcome {
      return GetTemplateGroupAccessControlEntryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/templates/");
      resolvedEndpoint.AddPathSegment(request.GetTemplateArn());
      resolvedEndpoint.AddPathSegments("/accessControlEntries/");
      resolvedEndpoint.AddPathSegment(request.GetGroupSecurityIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListConnectorsOutcome PcaConnectorAdClient::ListConnectors(const ListConnectorsRequest& request) const
{
  AWS_OPERATION_GUARD(ListConnectors);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConnectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListConnectors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListConnectors, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListConnectors",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListConnectorsOutcome>(
    [&]()-> ListConnectorsOutcome {
      return ListConnectorsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/connectors");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDirectoryRegistrationsOutcome PcaConnectorAdClient::ListDirectoryRegistrations(const ListDirectoryRegistrationsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDirectoryRegistrations);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDirectoryRegistrations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListDirectoryRegistrations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDirectoryRegistrations, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDirectoryRegistrations",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDirectoryRegistrationsOutcome>(
    [&]()-> ListDirectoryRegistrationsOutcome {
      return ListDirectoryRegistrationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/directoryRegistrations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListServicePrincipalNamesOutcome PcaConnectorAdClient::ListServicePrincipalNames(const ListServicePrincipalNamesRequest& request) const
{
  AWS_OPERATION_GUARD(ListServicePrincipalNames);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListServicePrincipalNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DirectoryRegistrationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListServicePrincipalNames", "Required field: DirectoryRegistrationArn, is not set");
    return ListServicePrincipalNamesOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DirectoryRegistrationArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListServicePrincipalNames, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListServicePrincipalNames, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListServicePrincipalNames",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListServicePrincipalNamesOutcome>(
    [&]()-> ListServicePrincipalNamesOutcome {
      return ListServicePrincipalNamesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/directoryRegistrations/");
      resolvedEndpoint.AddPathSegment(request.GetDirectoryRegistrationArn());
      resolvedEndpoint.AddPathSegments("/servicePrincipalNames");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome PcaConnectorAdClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

ListTemplateGroupAccessControlEntriesOutcome PcaConnectorAdClient::ListTemplateGroupAccessControlEntries(const ListTemplateGroupAccessControlEntriesRequest& request) const
{
  AWS_OPERATION_GUARD(ListTemplateGroupAccessControlEntries);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplateGroupAccessControlEntries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateGroupAccessControlEntries", "Required field: TemplateArn, is not set");
    return ListTemplateGroupAccessControlEntriesOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTemplateGroupAccessControlEntries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTemplateGroupAccessControlEntries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTemplateGroupAccessControlEntries",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTemplateGroupAccessControlEntriesOutcome>(
    [&]()-> ListTemplateGroupAccessControlEntriesOutcome {
      return ListTemplateGroupAccessControlEntriesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/templates/");
      resolvedEndpoint.AddPathSegment(request.GetTemplateArn());
      resolvedEndpoint.AddPathSegments("/accessControlEntries");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTemplatesOutcome PcaConnectorAdClient::ListTemplates(const ListTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConnectorArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplates", "Required field: ConnectorArn, is not set");
    return ListTemplatesOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTemplatesOutcome>(
    [&]()-> ListTemplatesOutcome {
      return ListTemplatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/templates");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome PcaConnectorAdClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
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

UntagResourceOutcome PcaConnectorAdClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
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

UpdateTemplateOutcome PcaConnectorAdClient::UpdateTemplate(const UpdateTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TemplateArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplate", "Required field: TemplateArn, is not set");
    return UpdateTemplateOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateTemplateOutcome>(
    [&]()-> UpdateTemplateOutcome {
      return UpdateTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/templates/");
      resolvedEndpoint.AddPathSegment(request.GetTemplateArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateTemplateGroupAccessControlEntryOutcome PcaConnectorAdClient::UpdateTemplateGroupAccessControlEntry(const UpdateTemplateGroupAccessControlEntryRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateTemplateGroupAccessControlEntry);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTemplateGroupAccessControlEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupSecurityIdentifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplateGroupAccessControlEntry", "Required field: GroupSecurityIdentifier, is not set");
    return UpdateTemplateGroupAccessControlEntryOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupSecurityIdentifier]", false));
  }
  if (!request.TemplateArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTemplateGroupAccessControlEntry", "Required field: TemplateArn, is not set");
    return UpdateTemplateGroupAccessControlEntryOutcome(Aws::Client::AWSError<PcaConnectorAdErrors>(PcaConnectorAdErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateTemplateGroupAccessControlEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateTemplateGroupAccessControlEntry, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateTemplateGroupAccessControlEntry",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateTemplateGroupAccessControlEntryOutcome>(
    [&]()-> UpdateTemplateGroupAccessControlEntryOutcome {
      return UpdateTemplateGroupAccessControlEntryOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/templates/");
      resolvedEndpoint.AddPathSegment(request.GetTemplateArn());
      resolvedEndpoint.AddPathSegments("/accessControlEntries/");
      resolvedEndpoint.AddPathSegment(request.GetGroupSecurityIdentifier());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


