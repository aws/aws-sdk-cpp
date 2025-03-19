/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resourcegroupstaggingapi/model/Summary.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{
  class GetComplianceSummaryResult
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetComplianceSummaryResult() = default;
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetComplianceSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPSTAGGINGAPI_API GetComplianceSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A table that shows counts of noncompliant resources.</p>
     */
    inline const Aws::Vector<Summary>& GetSummaryList() const { return m_summaryList; }
    template<typename SummaryListT = Aws::Vector<Summary>>
    void SetSummaryList(SummaryListT&& value) { m_summaryListHasBeenSet = true; m_summaryList = std::forward<SummaryListT>(value); }
    template<typename SummaryListT = Aws::Vector<Summary>>
    GetComplianceSummaryResult& WithSummaryList(SummaryListT&& value) { SetSummaryList(std::forward<SummaryListT>(value)); return *this;}
    template<typename SummaryListT = Summary>
    GetComplianceSummaryResult& AddSummaryList(SummaryListT&& value) { m_summaryListHasBeenSet = true; m_summaryList.emplace_back(std::forward<SummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that indicates that there is more data available than this response
     * contains. To receive the next part of the response, specify this response value
     * as the <code>PaginationToken</code> value in the request for the next page.</p>
     */
    inline const Aws::String& GetPaginationToken() const { return m_paginationToken; }
    template<typename PaginationTokenT = Aws::String>
    void SetPaginationToken(PaginationTokenT&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = std::forward<PaginationTokenT>(value); }
    template<typename PaginationTokenT = Aws::String>
    GetComplianceSummaryResult& WithPaginationToken(PaginationTokenT&& value) { SetPaginationToken(std::forward<PaginationTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetComplianceSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Summary> m_summaryList;
    bool m_summaryListHasBeenSet = false;

    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
