/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/Plugin.h>
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
namespace QBusiness
{
namespace Model
{
  class ListPluginsResult
  {
  public:
    AWS_QBUSINESS_API ListPluginsResult() = default;
    AWS_QBUSINESS_API ListPluginsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListPluginsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q Business returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of plugins.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPluginsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a configured plugin.</p>
     */
    inline const Aws::Vector<Plugin>& GetPlugins() const { return m_plugins; }
    template<typename PluginsT = Aws::Vector<Plugin>>
    void SetPlugins(PluginsT&& value) { m_pluginsHasBeenSet = true; m_plugins = std::forward<PluginsT>(value); }
    template<typename PluginsT = Aws::Vector<Plugin>>
    ListPluginsResult& WithPlugins(PluginsT&& value) { SetPlugins(std::forward<PluginsT>(value)); return *this;}
    template<typename PluginsT = Plugin>
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

    Aws::Vector<Plugin> m_plugins;
    bool m_pluginsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
