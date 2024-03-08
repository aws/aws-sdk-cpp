/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetApplicationAccessScopeResult
  {
  public:
    AWS_SSOADMIN_API GetApplicationAccessScopeResult();
    AWS_SSOADMIN_API GetApplicationAccessScopeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API GetApplicationAccessScopeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of authorized targets associated with this access scope.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedTargets() const{ return m_authorizedTargets; }

    /**
     * <p>An array of authorized targets associated with this access scope.</p>
     */
    inline void SetAuthorizedTargets(const Aws::Vector<Aws::String>& value) { m_authorizedTargets = value; }

    /**
     * <p>An array of authorized targets associated with this access scope.</p>
     */
    inline void SetAuthorizedTargets(Aws::Vector<Aws::String>&& value) { m_authorizedTargets = std::move(value); }

    /**
     * <p>An array of authorized targets associated with this access scope.</p>
     */
    inline GetApplicationAccessScopeResult& WithAuthorizedTargets(const Aws::Vector<Aws::String>& value) { SetAuthorizedTargets(value); return *this;}

    /**
     * <p>An array of authorized targets associated with this access scope.</p>
     */
    inline GetApplicationAccessScopeResult& WithAuthorizedTargets(Aws::Vector<Aws::String>&& value) { SetAuthorizedTargets(std::move(value)); return *this;}

    /**
     * <p>An array of authorized targets associated with this access scope.</p>
     */
    inline GetApplicationAccessScopeResult& AddAuthorizedTargets(const Aws::String& value) { m_authorizedTargets.push_back(value); return *this; }

    /**
     * <p>An array of authorized targets associated with this access scope.</p>
     */
    inline GetApplicationAccessScopeResult& AddAuthorizedTargets(Aws::String&& value) { m_authorizedTargets.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of authorized targets associated with this access scope.</p>
     */
    inline GetApplicationAccessScopeResult& AddAuthorizedTargets(const char* value) { m_authorizedTargets.push_back(value); return *this; }


    /**
     * <p>The name of the access scope that can be used with the authorized
     * targets.</p>
     */
    inline const Aws::String& GetScope() const{ return m_scope; }

    /**
     * <p>The name of the access scope that can be used with the authorized
     * targets.</p>
     */
    inline void SetScope(const Aws::String& value) { m_scope = value; }

    /**
     * <p>The name of the access scope that can be used with the authorized
     * targets.</p>
     */
    inline void SetScope(Aws::String&& value) { m_scope = std::move(value); }

    /**
     * <p>The name of the access scope that can be used with the authorized
     * targets.</p>
     */
    inline void SetScope(const char* value) { m_scope.assign(value); }

    /**
     * <p>The name of the access scope that can be used with the authorized
     * targets.</p>
     */
    inline GetApplicationAccessScopeResult& WithScope(const Aws::String& value) { SetScope(value); return *this;}

    /**
     * <p>The name of the access scope that can be used with the authorized
     * targets.</p>
     */
    inline GetApplicationAccessScopeResult& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}

    /**
     * <p>The name of the access scope that can be used with the authorized
     * targets.</p>
     */
    inline GetApplicationAccessScopeResult& WithScope(const char* value) { SetScope(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetApplicationAccessScopeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetApplicationAccessScopeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetApplicationAccessScopeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_authorizedTargets;

    Aws::String m_scope;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
