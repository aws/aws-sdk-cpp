/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/FindingHistoryRecord.h>
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
namespace SecurityHub
{
namespace Model
{
  class GetFindingHistoryResult
  {
  public:
    AWS_SECURITYHUB_API GetFindingHistoryResult();
    AWS_SECURITYHUB_API GetFindingHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetFindingHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of events that altered the specified finding during the specified
     * time period. </p>
     */
    inline const Aws::Vector<FindingHistoryRecord>& GetRecords() const{ return m_records; }

    /**
     * <p> A list of events that altered the specified finding during the specified
     * time period. </p>
     */
    inline void SetRecords(const Aws::Vector<FindingHistoryRecord>& value) { m_records = value; }

    /**
     * <p> A list of events that altered the specified finding during the specified
     * time period. </p>
     */
    inline void SetRecords(Aws::Vector<FindingHistoryRecord>&& value) { m_records = std::move(value); }

    /**
     * <p> A list of events that altered the specified finding during the specified
     * time period. </p>
     */
    inline GetFindingHistoryResult& WithRecords(const Aws::Vector<FindingHistoryRecord>& value) { SetRecords(value); return *this;}

    /**
     * <p> A list of events that altered the specified finding during the specified
     * time period. </p>
     */
    inline GetFindingHistoryResult& WithRecords(Aws::Vector<FindingHistoryRecord>&& value) { SetRecords(std::move(value)); return *this;}

    /**
     * <p> A list of events that altered the specified finding during the specified
     * time period. </p>
     */
    inline GetFindingHistoryResult& AddRecords(const FindingHistoryRecord& value) { m_records.push_back(value); return *this; }

    /**
     * <p> A list of events that altered the specified finding during the specified
     * time period. </p>
     */
    inline GetFindingHistoryResult& AddRecords(FindingHistoryRecord&& value) { m_records.push_back(std::move(value)); return *this; }


    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <code>GetFindingsHistory</code> to get up to an additional 100
     * results of history for the same finding that you specified in your initial
     * request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <code>GetFindingsHistory</code> to get up to an additional 100
     * results of history for the same finding that you specified in your initial
     * request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <code>GetFindingsHistory</code> to get up to an additional 100
     * results of history for the same finding that you specified in your initial
     * request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <code>GetFindingsHistory</code> to get up to an additional 100
     * results of history for the same finding that you specified in your initial
     * request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <code>GetFindingsHistory</code> to get up to an additional 100
     * results of history for the same finding that you specified in your initial
     * request. </p>
     */
    inline GetFindingHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <code>GetFindingsHistory</code> to get up to an additional 100
     * results of history for the same finding that you specified in your initial
     * request. </p>
     */
    inline GetFindingHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <code>GetFindingsHistory</code> to get up to an additional 100
     * results of history for the same finding that you specified in your initial
     * request. </p>
     */
    inline GetFindingHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetFindingHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetFindingHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetFindingHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FindingHistoryRecord> m_records;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
