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
    AWS_QBUSINESS_API ListPluginsResult();
    AWS_QBUSINESS_API ListPluginsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListPluginsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of plugins.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of plugins.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of plugins.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of plugins.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of plugins.</p>
     */
    inline ListPluginsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of plugins.</p>
     */
    inline ListPluginsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the <code>maxResults</code> response was incomplete because there is more
     * data to retrieve, Amazon Q returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of plugins.</p>
     */
    inline ListPluginsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about a configured plugin.</p>
     */
    inline const Aws::Vector<Plugin>& GetPlugins() const{ return m_plugins; }

    /**
     * <p>Information about a configured plugin.</p>
     */
    inline void SetPlugins(const Aws::Vector<Plugin>& value) { m_plugins = value; }

    /**
     * <p>Information about a configured plugin.</p>
     */
    inline void SetPlugins(Aws::Vector<Plugin>&& value) { m_plugins = std::move(value); }

    /**
     * <p>Information about a configured plugin.</p>
     */
    inline ListPluginsResult& WithPlugins(const Aws::Vector<Plugin>& value) { SetPlugins(value); return *this;}

    /**
     * <p>Information about a configured plugin.</p>
     */
    inline ListPluginsResult& WithPlugins(Aws::Vector<Plugin>&& value) { SetPlugins(std::move(value)); return *this;}

    /**
     * <p>Information about a configured plugin.</p>
     */
    inline ListPluginsResult& AddPlugins(const Plugin& value) { m_plugins.push_back(value); return *this; }

    /**
     * <p>Information about a configured plugin.</p>
     */
    inline ListPluginsResult& AddPlugins(Plugin&& value) { m_plugins.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPluginsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPluginsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPluginsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<Plugin> m_plugins;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
