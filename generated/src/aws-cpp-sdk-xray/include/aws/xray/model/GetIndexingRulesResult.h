/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/IndexingRule.h>
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
  class GetIndexingRulesResult
  {
  public:
    AWS_XRAY_API GetIndexingRulesResult() = default;
    AWS_XRAY_API GetIndexingRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetIndexingRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Retrieves all indexing rules.</p>
     */
    inline const Aws::Vector<IndexingRule>& GetIndexingRules() const { return m_indexingRules; }
    template<typename IndexingRulesT = Aws::Vector<IndexingRule>>
    void SetIndexingRules(IndexingRulesT&& value) { m_indexingRulesHasBeenSet = true; m_indexingRules = std::forward<IndexingRulesT>(value); }
    template<typename IndexingRulesT = Aws::Vector<IndexingRule>>
    GetIndexingRulesResult& WithIndexingRules(IndexingRulesT&& value) { SetIndexingRules(std::forward<IndexingRulesT>(value)); return *this;}
    template<typename IndexingRulesT = IndexingRule>
    GetIndexingRulesResult& AddIndexingRules(IndexingRulesT&& value) { m_indexingRulesHasBeenSet = true; m_indexingRules.emplace_back(std::forward<IndexingRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specify the pagination token returned by a previous request to retrieve the
     * next page of indexes. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetIndexingRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIndexingRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IndexingRule> m_indexingRules;
    bool m_indexingRulesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
