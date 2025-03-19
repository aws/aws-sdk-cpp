/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
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
namespace WorkMail
{
namespace Model
{
  class CreateImpersonationRoleResult
  {
  public:
    AWS_WORKMAIL_API CreateImpersonationRoleResult() = default;
    AWS_WORKMAIL_API CreateImpersonationRoleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API CreateImpersonationRoleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The new impersonation role ID.</p>
     */
    inline const Aws::String& GetImpersonationRoleId() const { return m_impersonationRoleId; }
    template<typename ImpersonationRoleIdT = Aws::String>
    void SetImpersonationRoleId(ImpersonationRoleIdT&& value) { m_impersonationRoleIdHasBeenSet = true; m_impersonationRoleId = std::forward<ImpersonationRoleIdT>(value); }
    template<typename ImpersonationRoleIdT = Aws::String>
    CreateImpersonationRoleResult& WithImpersonationRoleId(ImpersonationRoleIdT&& value) { SetImpersonationRoleId(std::forward<ImpersonationRoleIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateImpersonationRoleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_impersonationRoleId;
    bool m_impersonationRoleIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
