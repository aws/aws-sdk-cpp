/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
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
namespace SSOAdmin
{
namespace Model
{
  class GetInlinePolicyForPermissionSetResult
  {
  public:
    AWS_SSOADMIN_API GetInlinePolicyForPermissionSetResult();
    AWS_SSOADMIN_API GetInlinePolicyForPermissionSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API GetInlinePolicyForPermissionSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The inline policy that is attached to the permission set.</p>
     */
    inline const Aws::String& GetInlinePolicy() const{ return m_inlinePolicy; }

    /**
     * <p>The inline policy that is attached to the permission set.</p>
     */
    inline void SetInlinePolicy(const Aws::String& value) { m_inlinePolicy = value; }

    /**
     * <p>The inline policy that is attached to the permission set.</p>
     */
    inline void SetInlinePolicy(Aws::String&& value) { m_inlinePolicy = std::move(value); }

    /**
     * <p>The inline policy that is attached to the permission set.</p>
     */
    inline void SetInlinePolicy(const char* value) { m_inlinePolicy.assign(value); }

    /**
     * <p>The inline policy that is attached to the permission set.</p>
     */
    inline GetInlinePolicyForPermissionSetResult& WithInlinePolicy(const Aws::String& value) { SetInlinePolicy(value); return *this;}

    /**
     * <p>The inline policy that is attached to the permission set.</p>
     */
    inline GetInlinePolicyForPermissionSetResult& WithInlinePolicy(Aws::String&& value) { SetInlinePolicy(std::move(value)); return *this;}

    /**
     * <p>The inline policy that is attached to the permission set.</p>
     */
    inline GetInlinePolicyForPermissionSetResult& WithInlinePolicy(const char* value) { SetInlinePolicy(value); return *this;}

  private:

    Aws::String m_inlinePolicy;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
