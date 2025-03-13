/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{
  class UpdateRuleGroupResult
  {
  public:
    AWS_WAFV2_API UpdateRuleGroupResult() = default;
    AWS_WAFV2_API UpdateRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API UpdateRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token used for optimistic locking. WAF returns this token to your
     * <code>update</code> requests. You use <code>NextLockToken</code> in the same
     * manner as you use <code>LockToken</code>. </p>
     */
    inline const Aws::String& GetNextLockToken() const { return m_nextLockToken; }
    template<typename NextLockTokenT = Aws::String>
    void SetNextLockToken(NextLockTokenT&& value) { m_nextLockTokenHasBeenSet = true; m_nextLockToken = std::forward<NextLockTokenT>(value); }
    template<typename NextLockTokenT = Aws::String>
    UpdateRuleGroupResult& WithNextLockToken(NextLockTokenT&& value) { SetNextLockToken(std::forward<NextLockTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateRuleGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextLockToken;
    bool m_nextLockTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
