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
    AWS_WAFV2_API UpdateManagedRuleSetVersionExpiryDateResult();
    AWS_WAFV2_API UpdateManagedRuleSetVersionExpiryDateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API UpdateManagedRuleSetVersionExpiryDateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The version that is set to expire. </p>
     */
    inline const Aws::String& GetExpiringVersion() const{ return m_expiringVersion; }

    /**
     * <p>The version that is set to expire. </p>
     */
    inline void SetExpiringVersion(const Aws::String& value) { m_expiringVersion = value; }

    /**
     * <p>The version that is set to expire. </p>
     */
    inline void SetExpiringVersion(Aws::String&& value) { m_expiringVersion = std::move(value); }

    /**
     * <p>The version that is set to expire. </p>
     */
    inline void SetExpiringVersion(const char* value) { m_expiringVersion.assign(value); }

    /**
     * <p>The version that is set to expire. </p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateResult& WithExpiringVersion(const Aws::String& value) { SetExpiringVersion(value); return *this;}

    /**
     * <p>The version that is set to expire. </p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateResult& WithExpiringVersion(Aws::String&& value) { SetExpiringVersion(std::move(value)); return *this;}

    /**
     * <p>The version that is set to expire. </p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateResult& WithExpiringVersion(const char* value) { SetExpiringVersion(value); return *this;}


    /**
     * <p>The time that the version will expire. </p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTimestamp() const{ return m_expiryTimestamp; }

    /**
     * <p>The time that the version will expire. </p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline void SetExpiryTimestamp(const Aws::Utils::DateTime& value) { m_expiryTimestamp = value; }

    /**
     * <p>The time that the version will expire. </p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline void SetExpiryTimestamp(Aws::Utils::DateTime&& value) { m_expiryTimestamp = std::move(value); }

    /**
     * <p>The time that the version will expire. </p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateResult& WithExpiryTimestamp(const Aws::Utils::DateTime& value) { SetExpiryTimestamp(value); return *this;}

    /**
     * <p>The time that the version will expire. </p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateResult& WithExpiryTimestamp(Aws::Utils::DateTime&& value) { SetExpiryTimestamp(std::move(value)); return *this;}


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
    inline const Aws::String& GetNextLockToken() const{ return m_nextLockToken; }

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
    inline void SetNextLockToken(const Aws::String& value) { m_nextLockToken = value; }

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
    inline void SetNextLockToken(Aws::String&& value) { m_nextLockToken = std::move(value); }

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
    inline void SetNextLockToken(const char* value) { m_nextLockToken.assign(value); }

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
    inline UpdateManagedRuleSetVersionExpiryDateResult& WithNextLockToken(const Aws::String& value) { SetNextLockToken(value); return *this;}

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
    inline UpdateManagedRuleSetVersionExpiryDateResult& WithNextLockToken(Aws::String&& value) { SetNextLockToken(std::move(value)); return *this;}

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
    inline UpdateManagedRuleSetVersionExpiryDateResult& WithNextLockToken(const char* value) { SetNextLockToken(value); return *this;}

  private:

    Aws::String m_expiringVersion;

    Aws::Utils::DateTime m_expiryTimestamp;

    Aws::String m_nextLockToken;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
