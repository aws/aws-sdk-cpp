/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/AuthenticationMethod.h>
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
  class GetApplicationAuthenticationMethodResult
  {
  public:
    AWS_SSOADMIN_API GetApplicationAuthenticationMethodResult() = default;
    AWS_SSOADMIN_API GetApplicationAuthenticationMethodResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API GetApplicationAuthenticationMethodResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that contains details about the requested authentication
     * method.</p>
     */
    inline const AuthenticationMethod& GetAuthenticationMethod() const { return m_authenticationMethod; }
    template<typename AuthenticationMethodT = AuthenticationMethod>
    void SetAuthenticationMethod(AuthenticationMethodT&& value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = std::forward<AuthenticationMethodT>(value); }
    template<typename AuthenticationMethodT = AuthenticationMethod>
    GetApplicationAuthenticationMethodResult& WithAuthenticationMethod(AuthenticationMethodT&& value) { SetAuthenticationMethod(std::forward<AuthenticationMethodT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApplicationAuthenticationMethodResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AuthenticationMethod m_authenticationMethod;
    bool m_authenticationMethodHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
