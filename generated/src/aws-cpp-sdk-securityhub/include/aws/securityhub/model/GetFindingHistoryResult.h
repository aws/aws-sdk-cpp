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
    AWS_SECURITYHUB_API GetFindingHistoryResult() = default;
    AWS_SECURITYHUB_API GetFindingHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetFindingHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of events that altered the specified finding during the specified
     * time period. </p>
     */
    inline const Aws::Vector<FindingHistoryRecord>& GetRecords() const { return m_records; }
    template<typename RecordsT = Aws::Vector<FindingHistoryRecord>>
    void SetRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records = std::forward<RecordsT>(value); }
    template<typename RecordsT = Aws::Vector<FindingHistoryRecord>>
    GetFindingHistoryResult& WithRecords(RecordsT&& value) { SetRecords(std::forward<RecordsT>(value)); return *this;}
    template<typename RecordsT = FindingHistoryRecord>
    GetFindingHistoryResult& AddRecords(RecordsT&& value) { m_recordsHasBeenSet = true; m_records.emplace_back(std::forward<RecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <code>GetFindingsHistory</code> to get up to an additional 100
     * results of history for the same finding that you specified in your initial
     * request. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetFindingHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFindingHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FindingHistoryRecord> m_records;
    bool m_recordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
