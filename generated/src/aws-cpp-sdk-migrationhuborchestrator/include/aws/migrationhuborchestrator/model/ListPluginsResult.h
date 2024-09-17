/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/PluginSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MigrationHubOrchestrator
{
namespace Model
{
  class ListPluginsResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API ListPluginsResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API ListPluginsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API ListPluginsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPluginsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPluginsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPluginsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Migration Hub Orchestrator plugins.</p>
     */
    inline const Aws::Vector<PluginSummary>& GetPlugins() const{ return m_plugins; }
    inline void SetPlugins(const Aws::Vector<PluginSummary>& value) { m_plugins = value; }
    inline void SetPlugins(Aws::Vector<PluginSummary>&& value) { m_plugins = std::move(value); }
    inline ListPluginsResult& WithPlugins(const Aws::Vector<PluginSummary>& value) { SetPlugins(value); return *this;}
    inline ListPluginsResult& WithPlugins(Aws::Vector<PluginSummary>&& value) { SetPlugins(std::move(value)); return *this;}
    inline ListPluginsResult& AddPlugins(const PluginSummary& value) { m_plugins.push_back(value); return *this; }
    inline ListPluginsResult& AddPlugins(PluginSummary&& value) { m_plugins.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPluginsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPluginsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPluginsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<PluginSummary> m_plugins;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
