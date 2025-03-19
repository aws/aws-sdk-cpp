/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ExecuteQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NeptuneGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ExecuteQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("query", m_queryString);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("language", QueryLanguageMapper::GetNameForQueryLanguage(m_language));
  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithObject(parametersItem.first, parametersItem.second.View());
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  if(m_planCacheHasBeenSet)
  {
   payload.WithString("planCache", PlanCacheTypeMapper::GetNameForPlanCacheType(m_planCache));
  }

  if(m_explainModeHasBeenSet)
  {
   payload.WithString("explain", ExplainModeMapper::GetNameForExplainMode(m_explainMode));
  }

  if(m_queryTimeoutMillisecondsHasBeenSet)
  {
   payload.WithInteger("queryTimeoutMilliseconds", m_queryTimeoutMilliseconds);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExecuteQueryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_graphIdentifierHasBeenSet)
  {
    ss << m_graphIdentifier;
    headers.emplace("graphidentifier",  ss.str());
    ss.str("");
  }

  return headers;

}



ExecuteQueryRequest::EndpointParameters ExecuteQueryRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("ApiType"), "DataPlane", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
    return parameters;
}


