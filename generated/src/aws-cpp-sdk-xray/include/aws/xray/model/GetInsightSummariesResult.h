/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/InsightSummary.h>
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
namespace XRay
{
namespace Model
{
  class GetInsightSummariesResult
  {
  public:
    AWS_XRAY_API GetInsightSummariesResult();
    AWS_XRAY_API GetInsightSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetInsightSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The summary of each insight within the group matching the provided filters.
     * The summary contains the InsightID, start and end time, the root cause service,
     * the root cause and client impact statistics, the top anomalous services, and the
     * status of the insight.</p>
     */
    inline const Aws::Vector<InsightSummary>& GetInsightSummaries() const{ return m_insightSummaries; }

    /**
     * <p>The summary of each insight within the group matching the provided filters.
     * The summary contains the InsightID, start and end time, the root cause service,
     * the root cause and client impact statistics, the top anomalous services, and the
     * status of the insight.</p>
     */
    inline void SetInsightSummaries(const Aws::Vector<InsightSummary>& value) { m_insightSummaries = value; }

    /**
     * <p>The summary of each insight within the group matching the provided filters.
     * The summary contains the InsightID, start and end time, the root cause service,
     * the root cause and client impact statistics, the top anomalous services, and the
     * status of the insight.</p>
     */
    inline void SetInsightSummaries(Aws::Vector<InsightSummary>&& value) { m_insightSummaries = std::move(value); }

    /**
     * <p>The summary of each insight within the group matching the provided filters.
     * The summary contains the InsightID, start and end time, the root cause service,
     * the root cause and client impact statistics, the top anomalous services, and the
     * status of the insight.</p>
     */
    inline GetInsightSummariesResult& WithInsightSummaries(const Aws::Vector<InsightSummary>& value) { SetInsightSummaries(value); return *this;}

    /**
     * <p>The summary of each insight within the group matching the provided filters.
     * The summary contains the InsightID, start and end time, the root cause service,
     * the root cause and client impact statistics, the top anomalous services, and the
     * status of the insight.</p>
     */
    inline GetInsightSummariesResult& WithInsightSummaries(Aws::Vector<InsightSummary>&& value) { SetInsightSummaries(std::move(value)); return *this;}

    /**
     * <p>The summary of each insight within the group matching the provided filters.
     * The summary contains the InsightID, start and end time, the root cause service,
     * the root cause and client impact statistics, the top anomalous services, and the
     * status of the insight.</p>
     */
    inline GetInsightSummariesResult& AddInsightSummaries(const InsightSummary& value) { m_insightSummaries.push_back(value); return *this; }

    /**
     * <p>The summary of each insight within the group matching the provided filters.
     * The summary contains the InsightID, start and end time, the root cause service,
     * the root cause and client impact statistics, the top anomalous services, and the
     * status of the insight.</p>
     */
    inline GetInsightSummariesResult& AddInsightSummaries(InsightSummary&& value) { m_insightSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline GetInsightSummariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline GetInsightSummariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline GetInsightSummariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InsightSummary> m_insightSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
