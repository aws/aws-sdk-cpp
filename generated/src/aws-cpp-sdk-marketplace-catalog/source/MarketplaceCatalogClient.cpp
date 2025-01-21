﻿/**
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


#include <aws/marketplace-catalog/MarketplaceCatalogClient.h>
#include <aws/marketplace-catalog/MarketplaceCatalogErrorMarshaller.h>
#include <aws/marketplace-catalog/MarketplaceCatalogEndpointProvider.h>
#include <aws/marketplace-catalog/model/BatchDescribeEntitiesRequest.h>
#include <aws/marketplace-catalog/model/CancelChangeSetRequest.h>
#include <aws/marketplace-catalog/model/DeleteResourcePolicyRequest.h>
#include <aws/marketplace-catalog/model/DescribeChangeSetRequest.h>
#include <aws/marketplace-catalog/model/DescribeEntityRequest.h>
#include <aws/marketplace-catalog/model/GetResourcePolicyRequest.h>
#include <aws/marketplace-catalog/model/ListChangeSetsRequest.h>
#include <aws/marketplace-catalog/model/ListEntitiesRequest.h>
#include <aws/marketplace-catalog/model/ListTagsForResourceRequest.h>
#include <aws/marketplace-catalog/model/PutResourcePolicyRequest.h>
#include <aws/marketplace-catalog/model/StartChangeSetRequest.h>
#include <aws/marketplace-catalog/model/TagResourceRequest.h>
#include <aws/marketplace-catalog/model/UntagResourceRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MarketplaceCatalog;
using namespace Aws::MarketplaceCatalog::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace MarketplaceCatalog
  {
    const char ALLOCATION_TAG[] = "MarketplaceCatalogClient";
    const char SERVICE_NAME[] = "aws-marketplace";
  }
}
const char* MarketplaceCatalogClient::GetServiceName() {return SERVICE_NAME;}
const char* MarketplaceCatalogClient::GetAllocationTag() {return ALLOCATION_TAG;}

MarketplaceCatalogClient::MarketplaceCatalogClient(const MarketplaceCatalog::MarketplaceCatalogClientConfiguration& clientConfiguration,
                           std::shared_ptr<MarketplaceCatalogEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Marketplace Catalog",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<MarketplaceCatalogEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

MarketplaceCatalogClient::MarketplaceCatalogClient(const AWSCredentials& credentials,
                           std::shared_ptr<MarketplaceCatalogEndpointProviderBase> endpointProvider,
                           const MarketplaceCatalog::MarketplaceCatalogClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Marketplace Catalog",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<MarketplaceCatalogEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

MarketplaceCatalogClient::MarketplaceCatalogClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<MarketplaceCatalogEndpointProviderBase> endpointProvider,
                           const MarketplaceCatalog::MarketplaceCatalogClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Marketplace Catalog",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<MarketplaceCatalogEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
MarketplaceCatalogClient::MarketplaceCatalogClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Marketplace Catalog",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<MarketplaceCatalogEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

MarketplaceCatalogClient::MarketplaceCatalogClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Marketplace Catalog",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<MarketplaceCatalogEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

MarketplaceCatalogClient::MarketplaceCatalogClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Marketplace Catalog",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<MarketplaceCatalogErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<MarketplaceCatalogEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

MarketplaceCatalogClient::~MarketplaceCatalogClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<MarketplaceCatalogEndpointProviderBase>& MarketplaceCatalogClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MarketplaceCatalogClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
BatchDescribeEntitiesOutcome MarketplaceCatalogClient::BatchDescribeEntities(const BatchDescribeEntitiesRequest& request) const
{
  AWS_OPERATION_GUARD(BatchDescribeEntities);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDescribeEntities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, BatchDescribeEntities, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, BatchDescribeEntities, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".BatchDescribeEntities",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<BatchDescribeEntitiesOutcome>(
    [&]()-> BatchDescribeEntitiesOutcome {
      return BatchDescribeEntitiesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/BatchDescribeEntities");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CancelChangeSetOutcome MarketplaceCatalogClient::CancelChangeSet(const CancelChangeSetRequest& request) const
{
  AWS_OPERATION_GUARD(CancelChangeSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CatalogHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelChangeSet", "Required field: Catalog, is not set");
    return CancelChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Catalog]", false));
  }
  if (!request.ChangeSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelChangeSet", "Required field: ChangeSetId, is not set");
    return CancelChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangeSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelChangeSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelChangeSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelChangeSet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelChangeSetOutcome>(
    [&]()-> CancelChangeSetOutcome {
      return CancelChangeSetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PATCH, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/CancelChangeSet");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteResourcePolicyOutcome MarketplaceCatalogClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResourcePolicy", "Required field: ResourceArn, is not set");
    return DeleteResourcePolicyOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteResourcePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteResourcePolicyOutcome>(
    [&]()-> DeleteResourcePolicyOutcome {
      return DeleteResourcePolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/DeleteResourcePolicy");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeChangeSetOutcome MarketplaceCatalogClient::DescribeChangeSet(const DescribeChangeSetRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeChangeSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CatalogHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChangeSet", "Required field: Catalog, is not set");
    return DescribeChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Catalog]", false));
  }
  if (!request.ChangeSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeChangeSet", "Required field: ChangeSetId, is not set");
    return DescribeChangeSetOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChangeSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeChangeSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeChangeSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeChangeSet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeChangeSetOutcome>(
    [&]()-> DescribeChangeSetOutcome {
      return DescribeChangeSetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/DescribeChangeSet");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeEntityOutcome MarketplaceCatalogClient::DescribeEntity(const DescribeEntityRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeEntity);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEntity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CatalogHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeEntity", "Required field: Catalog, is not set");
    return DescribeEntityOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Catalog]", false));
  }
  if (!request.EntityIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeEntity", "Required field: EntityId, is not set");
    return DescribeEntityOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntityId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeEntity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeEntity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeEntity",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeEntityOutcome>(
    [&]()-> DescribeEntityOutcome {
      return DescribeEntityOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/DescribeEntity");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetResourcePolicyOutcome MarketplaceCatalogClient::GetResourcePolicy(const GetResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResourcePolicy", "Required field: ResourceArn, is not set");
    return GetResourcePolicyOutcome(Aws::Client::AWSError<MarketplaceCatalogErrors>(MarketplaceCatalogErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetResourcePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetResourcePolicyOutcome>(
    [&]()-> GetResourcePolicyOutcome {
      return GetResourcePolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/GetResourcePolicy");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListChangeSetsOutcome MarketplaceCatalogClient::ListChangeSets(const ListChangeSetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListChangeSets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListChangeSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListChangeSets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListChangeSets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListChangeSets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListChangeSetsOutcome>(
    [&]()-> ListChangeSetsOutcome {
      return ListChangeSetsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/ListChangeSets");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListEntitiesOutcome MarketplaceCatalogClient::ListEntities(const ListEntitiesRequest& request) const
{
  AWS_OPERATION_GUARD(ListEntities);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEntities, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListEntities, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListEntities, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListEntities",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListEntitiesOutcome>(
    [&]()-> ListEntitiesOutcome {
      return ListEntitiesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/ListEntities");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome MarketplaceCatalogClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      return ListTagsForResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/ListTagsForResource");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutResourcePolicyOutcome MarketplaceCatalogClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutResourcePolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutResourcePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutResourcePolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutResourcePolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutResourcePolicyOutcome>(
    [&]()-> PutResourcePolicyOutcome {
      return PutResourcePolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/PutResourcePolicy");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartChangeSetOutcome MarketplaceCatalogClient::StartChangeSet(const StartChangeSetRequest& request) const
{
  AWS_OPERATION_GUARD(StartChangeSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartChangeSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartChangeSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartChangeSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartChangeSet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartChangeSetOutcome>(
    [&]()-> StartChangeSetOutcome {
      return StartChangeSetOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/StartChangeSet");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome MarketplaceCatalogClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
      resolvedEndpoint.AddPathSegments("/TagResource");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome MarketplaceCatalogClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/UntagResource");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


