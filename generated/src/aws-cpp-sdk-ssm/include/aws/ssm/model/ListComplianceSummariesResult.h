﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ComplianceSummaryItem.h>
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
namespace SSM
{
namespace Model
{
  class ListComplianceSummariesResult
  {
  public:
    AWS_SSM_API ListComplianceSummariesResult() = default;
    AWS_SSM_API ListComplianceSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListComplianceSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of compliant and non-compliant summary counts based on compliance
     * types. For example, this call returns State Manager associations, patches, or
     * custom compliance types according to the filter criteria that you specified.</p>
     */
    inline const Aws::Vector<ComplianceSummaryItem>& GetComplianceSummaryItems() const { return m_complianceSummaryItems; }
    template<typename ComplianceSummaryItemsT = Aws::Vector<ComplianceSummaryItem>>
    void SetComplianceSummaryItems(ComplianceSummaryItemsT&& value) { m_complianceSummaryItemsHasBeenSet = true; m_complianceSummaryItems = std::forward<ComplianceSummaryItemsT>(value); }
    template<typename ComplianceSummaryItemsT = Aws::Vector<ComplianceSummaryItem>>
    ListComplianceSummariesResult& WithComplianceSummaryItems(ComplianceSummaryItemsT&& value) { SetComplianceSummaryItems(std::forward<ComplianceSummaryItemsT>(value)); return *this;}
    template<typename ComplianceSummaryItemsT = ComplianceSummaryItem>
    ListComplianceSummariesResult& AddComplianceSummaryItems(ComplianceSummaryItemsT&& value) { m_complianceSummaryItemsHasBeenSet = true; m_complianceSummaryItems.emplace_back(std::forward<ComplianceSummaryItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListComplianceSummariesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListComplianceSummariesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComplianceSummaryItem> m_complianceSummaryItems;
    bool m_complianceSummaryItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
