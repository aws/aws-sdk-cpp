/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AppSummary.h>
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
namespace ResilienceHub
{
namespace Model
{
  class ListAppsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppsResult();
    AWS_RESILIENCEHUB_API ListAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summaries for the Resilience Hub application.</p>
     */
    inline const Aws::Vector<AppSummary>& GetAppSummaries() const{ return m_appSummaries; }

    /**
     * <p>Summaries for the Resilience Hub application.</p>
     */
    inline void SetAppSummaries(const Aws::Vector<AppSummary>& value) { m_appSummaries = value; }

    /**
     * <p>Summaries for the Resilience Hub application.</p>
     */
    inline void SetAppSummaries(Aws::Vector<AppSummary>&& value) { m_appSummaries = std::move(value); }

    /**
     * <p>Summaries for the Resilience Hub application.</p>
     */
    inline ListAppsResult& WithAppSummaries(const Aws::Vector<AppSummary>& value) { SetAppSummaries(value); return *this;}

    /**
     * <p>Summaries for the Resilience Hub application.</p>
     */
    inline ListAppsResult& WithAppSummaries(Aws::Vector<AppSummary>&& value) { SetAppSummaries(std::move(value)); return *this;}

    /**
     * <p>Summaries for the Resilience Hub application.</p>
     */
    inline ListAppsResult& AddAppSummaries(const AppSummary& value) { m_appSummaries.push_back(value); return *this; }

    /**
     * <p>Summaries for the Resilience Hub application.</p>
     */
    inline ListAppsResult& AddAppSummaries(AppSummary&& value) { m_appSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline ListAppsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline ListAppsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline ListAppsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAppsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAppsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAppsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AppSummary> m_appSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
