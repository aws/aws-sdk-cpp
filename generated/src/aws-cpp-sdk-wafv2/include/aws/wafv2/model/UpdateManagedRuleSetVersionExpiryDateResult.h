/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class UpdateManagedRuleSetVersionExpiryDateResult
  {
  public:
    AWS_WAFV2_API UpdateManagedRuleSetVersionExpiryDateResult() = default;
    AWS_WAFV2_API UpdateManagedRuleSetVersionExpiryDateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API UpdateManagedRuleSetVersionExpiryDateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The version that is set to expire. </p>
     */
    inline const Aws::String& GetExpiringVersion() const { return m_expiringVersion; }
    template<typename ExpiringVersionT = Aws::String>
    void SetExpiringVersion(ExpiringVersionT&& value) { m_expiringVersionHasBeenSet = true; m_expiringVersion = std::forward<ExpiringVersionT>(value); }
    template<typename ExpiringVersionT = Aws::String>
    UpdateManagedRuleSetVersionExpiryDateResult& WithExpiringVersion(ExpiringVersionT&& value) { SetExpiringVersion(std::forward<ExpiringVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the version will expire. </p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTimestamp() const { return m_expiryTimestamp; }
    template<typename ExpiryTimestampT = Aws::Utils::DateTime>
    void SetExpiryTimestamp(ExpiryTimestampT&& value) { m_expiryTimestampHasBeenSet = true; m_expiryTimestamp = std::forward<ExpiryTimestampT>(value); }
    template<typename ExpiryTimestampT = Aws::Utils::DateTime>
    UpdateManagedRuleSetVersionExpiryDateResult& WithExpiryTimestamp(ExpiryTimestampT&& value) { SetExpiryTimestamp(std::forward<ExpiryTimestampT>(value)); return *this;}
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
    inline const Aws::String& GetNextLockToken() const { return m_nextLockToken; }
    template<typename NextLockTokenT = Aws::String>
    void SetNextLockToken(NextLockTokenT&& value) { m_nextLockTokenHasBeenSet = true; m_nextLockToken = std::forward<NextLockTokenT>(value); }
    template<typename NextLockTokenT = Aws::String>
    UpdateManagedRuleSetVersionExpiryDateResult& WithNextLockToken(NextLockTokenT&& value) { SetNextLockToken(std::forward<NextLockTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateManagedRuleSetVersionExpiryDateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_expiringVersion;
    bool m_expiringVersionHasBeenSet = false;

    Aws::Utils::DateTime m_expiryTimestamp{};
    bool m_expiryTimestampHasBeenSet = false;

    Aws::String m_nextLockToken;
    bool m_nextLockTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
