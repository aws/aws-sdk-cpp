/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/model/ResponsePlanSummary.h>
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
namespace SSMIncidents
{
namespace Model
{
  class ListResponsePlansResult
  {
  public:
    AWS_SSMINCIDENTS_API ListResponsePlansResult();
    AWS_SSMINCIDENTS_API ListResponsePlansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API ListResponsePlansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline ListResponsePlansResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline ListResponsePlansResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline ListResponsePlansResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Details of each response plan.</p>
     */
    inline const Aws::Vector<ResponsePlanSummary>& GetResponsePlanSummaries() const{ return m_responsePlanSummaries; }

    /**
     * <p>Details of each response plan.</p>
     */
    inline void SetResponsePlanSummaries(const Aws::Vector<ResponsePlanSummary>& value) { m_responsePlanSummaries = value; }

    /**
     * <p>Details of each response plan.</p>
     */
    inline void SetResponsePlanSummaries(Aws::Vector<ResponsePlanSummary>&& value) { m_responsePlanSummaries = std::move(value); }

    /**
     * <p>Details of each response plan.</p>
     */
    inline ListResponsePlansResult& WithResponsePlanSummaries(const Aws::Vector<ResponsePlanSummary>& value) { SetResponsePlanSummaries(value); return *this;}

    /**
     * <p>Details of each response plan.</p>
     */
    inline ListResponsePlansResult& WithResponsePlanSummaries(Aws::Vector<ResponsePlanSummary>&& value) { SetResponsePlanSummaries(std::move(value)); return *this;}

    /**
     * <p>Details of each response plan.</p>
     */
    inline ListResponsePlansResult& AddResponsePlanSummaries(const ResponsePlanSummary& value) { m_responsePlanSummaries.push_back(value); return *this; }

    /**
     * <p>Details of each response plan.</p>
     */
    inline ListResponsePlansResult& AddResponsePlanSummaries(ResponsePlanSummary&& value) { m_responsePlanSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListResponsePlansResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListResponsePlansResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListResponsePlansResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ResponsePlanSummary> m_responsePlanSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
