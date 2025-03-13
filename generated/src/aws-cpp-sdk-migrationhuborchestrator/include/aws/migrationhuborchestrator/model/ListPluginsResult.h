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
    AWS_MIGRATIONHUBORCHESTRATOR_API ListPluginsResult() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API ListPluginsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API ListPluginsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPluginsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Migration Hub Orchestrator plugins.</p>
     */
    inline const Aws::Vector<PluginSummary>& GetPlugins() const { return m_plugins; }
    template<typename PluginsT = Aws::Vector<PluginSummary>>
    void SetPlugins(PluginsT&& value) { m_pluginsHasBeenSet = true; m_plugins = std::forward<PluginsT>(value); }
    template<typename PluginsT = Aws::Vector<PluginSummary>>
    ListPluginsResult& WithPlugins(PluginsT&& value) { SetPlugins(std::forward<PluginsT>(value)); return *this;}
    template<typename PluginsT = PluginSummary>
    ListPluginsResult& AddPlugins(PluginsT&& value) { m_pluginsHasBeenSet = true; m_plugins.emplace_back(std::forward<PluginsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPluginsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PluginSummary> m_plugins;
    bool m_pluginsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
