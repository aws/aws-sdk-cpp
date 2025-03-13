/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/IPSet.h>
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
  class GetIPSetResult
  {
  public:
    AWS_WAFV2_API GetIPSetResult() = default;
    AWS_WAFV2_API GetIPSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API GetIPSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p/>
     */
    inline const IPSet& GetIPSet() const { return m_iPSet; }
    template<typename IPSetT = IPSet>
    void SetIPSet(IPSetT&& value) { m_iPSetHasBeenSet = true; m_iPSet = std::forward<IPSetT>(value); }
    template<typename IPSetT = IPSet>
    GetIPSetResult& WithIPSet(IPSetT&& value) { SetIPSet(std::forward<IPSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline const Aws::String& GetLockToken() const { return m_lockToken; }
    template<typename LockTokenT = Aws::String>
    void SetLockToken(LockTokenT&& value) { m_lockTokenHasBeenSet = true; m_lockToken = std::forward<LockTokenT>(value); }
    template<typename LockTokenT = Aws::String>
    GetIPSetResult& WithLockToken(LockTokenT&& value) { SetLockToken(std::forward<LockTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIPSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IPSet m_iPSet;
    bool m_iPSetHasBeenSet = false;

    Aws::String m_lockToken;
    bool m_lockTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
