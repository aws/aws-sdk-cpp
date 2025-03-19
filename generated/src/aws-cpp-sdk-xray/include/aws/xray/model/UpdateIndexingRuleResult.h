/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/IndexingRule.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateIndexingRuleResult
  {
  public:
    AWS_XRAY_API UpdateIndexingRuleResult() = default;
    AWS_XRAY_API UpdateIndexingRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API UpdateIndexingRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Updated indexing rule. </p>
     */
    inline const IndexingRule& GetIndexingRule() const { return m_indexingRule; }
    template<typename IndexingRuleT = IndexingRule>
    void SetIndexingRule(IndexingRuleT&& value) { m_indexingRuleHasBeenSet = true; m_indexingRule = std::forward<IndexingRuleT>(value); }
    template<typename IndexingRuleT = IndexingRule>
    UpdateIndexingRuleResult& WithIndexingRule(IndexingRuleT&& value) { SetIndexingRule(std::forward<IndexingRuleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateIndexingRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IndexingRule m_indexingRule;
    bool m_indexingRuleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
