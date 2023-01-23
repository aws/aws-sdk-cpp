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
  class UpdateWebACLResult
  {
  public:
    AWS_WAFV2_API UpdateWebACLResult();
    AWS_WAFV2_API UpdateWebACLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API UpdateWebACLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token used for optimistic locking. WAF returns this token to your
     * <code>update</code> requests. You use <code>NextLockToken</code> in the same
     * manner as you use <code>LockToken</code>. </p>
     */
    inline const Aws::String& GetNextLockToken() const{ return m_nextLockToken; }

    /**
     * <p>A token used for optimistic locking. WAF returns this token to your
     * <code>update</code> requests. You use <code>NextLockToken</code> in the same
     * manner as you use <code>LockToken</code>. </p>
     */
    inline void SetNextLockToken(const Aws::String& value) { m_nextLockToken = value; }

    /**
     * <p>A token used for optimistic locking. WAF returns this token to your
     * <code>update</code> requests. You use <code>NextLockToken</code> in the same
     * manner as you use <code>LockToken</code>. </p>
     */
    inline void SetNextLockToken(Aws::String&& value) { m_nextLockToken = std::move(value); }

    /**
     * <p>A token used for optimistic locking. WAF returns this token to your
     * <code>update</code> requests. You use <code>NextLockToken</code> in the same
     * manner as you use <code>LockToken</code>. </p>
     */
    inline void SetNextLockToken(const char* value) { m_nextLockToken.assign(value); }

    /**
     * <p>A token used for optimistic locking. WAF returns this token to your
     * <code>update</code> requests. You use <code>NextLockToken</code> in the same
     * manner as you use <code>LockToken</code>. </p>
     */
    inline UpdateWebACLResult& WithNextLockToken(const Aws::String& value) { SetNextLockToken(value); return *this;}

    /**
     * <p>A token used for optimistic locking. WAF returns this token to your
     * <code>update</code> requests. You use <code>NextLockToken</code> in the same
     * manner as you use <code>LockToken</code>. </p>
     */
    inline UpdateWebACLResult& WithNextLockToken(Aws::String&& value) { SetNextLockToken(std::move(value)); return *this;}

    /**
     * <p>A token used for optimistic locking. WAF returns this token to your
     * <code>update</code> requests. You use <code>NextLockToken</code> in the same
     * manner as you use <code>LockToken</code>. </p>
     */
    inline UpdateWebACLResult& WithNextLockToken(const char* value) { SetNextLockToken(value); return *this;}

  private:

    Aws::String m_nextLockToken;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
