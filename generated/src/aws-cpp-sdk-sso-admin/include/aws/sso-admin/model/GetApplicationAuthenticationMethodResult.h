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
    AWS_SSOADMIN_API GetApplicationAuthenticationMethodResult();
    AWS_SSOADMIN_API GetApplicationAuthenticationMethodResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API GetApplicationAuthenticationMethodResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains details about the requested authentication
     * method.</p>
     */
    inline const AuthenticationMethod& GetAuthenticationMethod() const{ return m_authenticationMethod; }

    /**
     * <p>A structure that contains details about the requested authentication
     * method.</p>
     */
    inline void SetAuthenticationMethod(const AuthenticationMethod& value) { m_authenticationMethod = value; }

    /**
     * <p>A structure that contains details about the requested authentication
     * method.</p>
     */
    inline void SetAuthenticationMethod(AuthenticationMethod&& value) { m_authenticationMethod = std::move(value); }

    /**
     * <p>A structure that contains details about the requested authentication
     * method.</p>
     */
    inline GetApplicationAuthenticationMethodResult& WithAuthenticationMethod(const AuthenticationMethod& value) { SetAuthenticationMethod(value); return *this;}

    /**
     * <p>A structure that contains details about the requested authentication
     * method.</p>
     */
    inline GetApplicationAuthenticationMethodResult& WithAuthenticationMethod(AuthenticationMethod&& value) { SetAuthenticationMethod(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetApplicationAuthenticationMethodResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetApplicationAuthenticationMethodResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetApplicationAuthenticationMethodResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AuthenticationMethod m_authenticationMethod;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
