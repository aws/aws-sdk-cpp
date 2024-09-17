/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/NeptuneGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/QueryLanguage.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/neptune-graph/model/PlanCacheType.h>
#include <aws/neptune-graph/model/ExplainMode.h>
#include <aws/core/utils/Document.h>
#include <utility>

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

  /**
   */
  class ExecuteQueryRequest : public NeptuneGraphRequest
  {
  public:
    AWS_NEPTUNEGRAPH_API ExecuteQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteQuery"; }

    AWS_NEPTUNEGRAPH_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEGRAPH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_NEPTUNEGRAPH_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline const Aws::String& GetGraphIdentifier() const{ return m_graphIdentifier; }
    inline bool GraphIdentifierHasBeenSet() const { return m_graphIdentifierHasBeenSet; }
    inline void SetGraphIdentifier(const Aws::String& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = value; }
    inline void SetGraphIdentifier(Aws::String&& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = std::move(value); }
    inline void SetGraphIdentifier(const char* value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier.assign(value); }
    inline ExecuteQueryRequest& WithGraphIdentifier(const Aws::String& value) { SetGraphIdentifier(value); return *this;}
    inline ExecuteQueryRequest& WithGraphIdentifier(Aws::String&& value) { SetGraphIdentifier(std::move(value)); return *this;}
    inline ExecuteQueryRequest& WithGraphIdentifier(const char* value) { SetGraphIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query string to be executed.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }
    inline ExecuteQueryRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline ExecuteQueryRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline ExecuteQueryRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query language the query is written in. Currently only openCypher is
     * supported.</p>
     */
    inline const QueryLanguage& GetLanguage() const{ return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(const QueryLanguage& value) { m_languageHasBeenSet = true; m_language = value; }
    inline void SetLanguage(QueryLanguage&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }
    inline ExecuteQueryRequest& WithLanguage(const QueryLanguage& value) { SetLanguage(value); return *this;}
    inline ExecuteQueryRequest& WithLanguage(QueryLanguage&& value) { SetLanguage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data parameters the query can use in JSON format. For example: {"name":
     * "john", "age": 20}. (optional) </p>
     */
    inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline ExecuteQueryRequest& WithParameters(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { SetParameters(value); return *this;}
    inline ExecuteQueryRequest& WithParameters(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { SetParameters(std::move(value)); return *this;}
    inline ExecuteQueryRequest& AddParameters(const Aws::String& key, const Aws::Utils::Document& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline ExecuteQueryRequest& AddParameters(Aws::String&& key, const Aws::Utils::Document& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline ExecuteQueryRequest& AddParameters(const Aws::String& key, Aws::Utils::Document&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline ExecuteQueryRequest& AddParameters(Aws::String&& key, Aws::Utils::Document&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline ExecuteQueryRequest& AddParameters(const char* key, Aws::Utils::Document&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline ExecuteQueryRequest& AddParameters(const char* key, const Aws::Utils::Document& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Query plan cache is a feature that saves the query plan and reuses it on
     * successive executions of the same query. This reduces query latency, and works
     * for both <code>READ</code> and <code>UPDATE</code> queries. The plan cache is an
     * LRU cache with a 5 minute TTL and a capacity of 1000.</p>
     */
    inline const PlanCacheType& GetPlanCache() const{ return m_planCache; }
    inline bool PlanCacheHasBeenSet() const { return m_planCacheHasBeenSet; }
    inline void SetPlanCache(const PlanCacheType& value) { m_planCacheHasBeenSet = true; m_planCache = value; }
    inline void SetPlanCache(PlanCacheType&& value) { m_planCacheHasBeenSet = true; m_planCache = std::move(value); }
    inline ExecuteQueryRequest& WithPlanCache(const PlanCacheType& value) { SetPlanCache(value); return *this;}
    inline ExecuteQueryRequest& WithPlanCache(PlanCacheType&& value) { SetPlanCache(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The explain mode parameter returns a query explain instead of the actual
     * query results. A query explain can be used to gather insights about the query
     * execution such as planning decisions, time spent on each operator, solutions
     * flowing etc.</p>
     */
    inline const ExplainMode& GetExplainMode() const{ return m_explainMode; }
    inline bool ExplainModeHasBeenSet() const { return m_explainModeHasBeenSet; }
    inline void SetExplainMode(const ExplainMode& value) { m_explainModeHasBeenSet = true; m_explainMode = value; }
    inline void SetExplainMode(ExplainMode&& value) { m_explainModeHasBeenSet = true; m_explainMode = std::move(value); }
    inline ExecuteQueryRequest& WithExplainMode(const ExplainMode& value) { SetExplainMode(value); return *this;}
    inline ExecuteQueryRequest& WithExplainMode(ExplainMode&& value) { SetExplainMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the query timeout duration, in milliseconds. (optional)</p>
     */
    inline int GetQueryTimeoutMilliseconds() const{ return m_queryTimeoutMilliseconds; }
    inline bool QueryTimeoutMillisecondsHasBeenSet() const { return m_queryTimeoutMillisecondsHasBeenSet; }
    inline void SetQueryTimeoutMilliseconds(int value) { m_queryTimeoutMillisecondsHasBeenSet = true; m_queryTimeoutMilliseconds = value; }
    inline ExecuteQueryRequest& WithQueryTimeoutMilliseconds(int value) { SetQueryTimeoutMilliseconds(value); return *this;}
    ///@}
  private:

    Aws::String m_graphIdentifier;
    bool m_graphIdentifierHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    QueryLanguage m_language;
    bool m_languageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Utils::Document> m_parameters;
    bool m_parametersHasBeenSet = false;

    PlanCacheType m_planCache;
    bool m_planCacheHasBeenSet = false;

    ExplainMode m_explainMode;
    bool m_explainModeHasBeenSet = false;

    int m_queryTimeoutMilliseconds;
    bool m_queryTimeoutMillisecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
