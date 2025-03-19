/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ComplianceItem.h>
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
  class ListComplianceItemsResult
  {
  public:
    AWS_SSM_API ListComplianceItemsResult() = default;
    AWS_SSM_API ListComplianceItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListComplianceItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of compliance information for the specified resource ID. </p>
     */
    inline const Aws::Vector<ComplianceItem>& GetComplianceItems() const { return m_complianceItems; }
    template<typename ComplianceItemsT = Aws::Vector<ComplianceItem>>
    void SetComplianceItems(ComplianceItemsT&& value) { m_complianceItemsHasBeenSet = true; m_complianceItems = std::forward<ComplianceItemsT>(value); }
    template<typename ComplianceItemsT = Aws::Vector<ComplianceItem>>
    ListComplianceItemsResult& WithComplianceItems(ComplianceItemsT&& value) { SetComplianceItems(std::forward<ComplianceItemsT>(value)); return *this;}
    template<typename ComplianceItemsT = ComplianceItem>
    ListComplianceItemsResult& AddComplianceItems(ComplianceItemsT&& value) { m_complianceItemsHasBeenSet = true; m_complianceItems.emplace_back(std::forward<ComplianceItemsT>(value)); return *this; }
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
    ListComplianceItemsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListComplianceItemsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComplianceItem> m_complianceItems;
    bool m_complianceItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
