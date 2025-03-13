/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/RecordDetail.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class ListRecordHistoryResult
  {
  public:
    AWS_SERVICECATALOG_API ListRecordHistoryResult() = default;
    AWS_SERVICECATALOG_API ListRecordHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListRecordHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The records, in reverse chronological order.</p>
     */
    inline const Aws::Vector<RecordDetail>& GetRecordDetails() const { return m_recordDetails; }
    template<typename RecordDetailsT = Aws::Vector<RecordDetail>>
    void SetRecordDetails(RecordDetailsT&& value) { m_recordDetailsHasBeenSet = true; m_recordDetails = std::forward<RecordDetailsT>(value); }
    template<typename RecordDetailsT = Aws::Vector<RecordDetail>>
    ListRecordHistoryResult& WithRecordDetails(RecordDetailsT&& value) { SetRecordDetails(std::forward<RecordDetailsT>(value)); return *this;}
    template<typename RecordDetailsT = RecordDetail>
    ListRecordHistoryResult& AddRecordDetails(RecordDetailsT&& value) { m_recordDetailsHasBeenSet = true; m_recordDetails.emplace_back(std::forward<RecordDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    ListRecordHistoryResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRecordHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RecordDetail> m_recordDetails;
    bool m_recordDetailsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
