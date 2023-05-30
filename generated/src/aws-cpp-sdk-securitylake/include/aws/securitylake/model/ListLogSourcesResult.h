/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/LogSource.h>
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
namespace SecurityLake
{
namespace Model
{
  class ListLogSourcesResult
  {
  public:
    AWS_SECURITYLAKE_API ListLogSourcesResult();
    AWS_SECURITYLAKE_API ListLogSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API ListLogSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline ListLogSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline ListLogSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If nextToken is returned, there are more results available. You can repeat
     * the call using the returned token to retrieve the next page.</p>
     */
    inline ListLogSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of log sources in your organization that send data to the data
     * lake.</p>
     */
    inline const Aws::Vector<LogSource>& GetSources() const{ return m_sources; }

    /**
     * <p>The list of log sources in your organization that send data to the data
     * lake.</p>
     */
    inline void SetSources(const Aws::Vector<LogSource>& value) { m_sources = value; }

    /**
     * <p>The list of log sources in your organization that send data to the data
     * lake.</p>
     */
    inline void SetSources(Aws::Vector<LogSource>&& value) { m_sources = std::move(value); }

    /**
     * <p>The list of log sources in your organization that send data to the data
     * lake.</p>
     */
    inline ListLogSourcesResult& WithSources(const Aws::Vector<LogSource>& value) { SetSources(value); return *this;}

    /**
     * <p>The list of log sources in your organization that send data to the data
     * lake.</p>
     */
    inline ListLogSourcesResult& WithSources(Aws::Vector<LogSource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The list of log sources in your organization that send data to the data
     * lake.</p>
     */
    inline ListLogSourcesResult& AddSources(const LogSource& value) { m_sources.push_back(value); return *this; }

    /**
     * <p>The list of log sources in your organization that send data to the data
     * lake.</p>
     */
    inline ListLogSourcesResult& AddSources(LogSource&& value) { m_sources.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListLogSourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListLogSourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListLogSourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<LogSource> m_sources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
