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
    AWS_SSOADMIN_API GetInlinePolicyForPermissionSetResult() = default;
    AWS_SSOADMIN_API GetInlinePolicyForPermissionSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API GetInlinePolicyForPermissionSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The inline policy that is attached to the permission set.</p>  <p>For
     * <code>Length Constraints</code>, if a valid ARN is provided for a permission
     * set, it is possible for an empty inline policy to be returned.</p> 
     */
    inline const Aws::String& GetInlinePolicy() const { return m_inlinePolicy; }
    template<typename InlinePolicyT = Aws::String>
    void SetInlinePolicy(InlinePolicyT&& value) { m_inlinePolicyHasBeenSet = true; m_inlinePolicy = std::forward<InlinePolicyT>(value); }
    template<typename InlinePolicyT = Aws::String>
    GetInlinePolicyForPermissionSetResult& WithInlinePolicy(InlinePolicyT&& value) { SetInlinePolicy(std::forward<InlinePolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInlinePolicyForPermissionSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inlinePolicy;
    bool m_inlinePolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
