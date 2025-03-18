/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso/SSO_EXPORTS.h>
#include <aws/sso/model/RoleCredentials.h>
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
namespace SSO
{
namespace Model
{
  class GetRoleCredentialsResult
  {
  public:
    AWS_SSO_API GetRoleCredentialsResult() = default;
    AWS_SSO_API GetRoleCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSO_API GetRoleCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The credentials for the role that is assigned to the user.</p>
     */
    inline const RoleCredentials& GetRoleCredentials() const { return m_roleCredentials; }
    template<typename RoleCredentialsT = RoleCredentials>
    void SetRoleCredentials(RoleCredentialsT&& value) { m_roleCredentialsHasBeenSet = true; m_roleCredentials = std::forward<RoleCredentialsT>(value); }
    template<typename RoleCredentialsT = RoleCredentials>
    GetRoleCredentialsResult& WithRoleCredentials(RoleCredentialsT&& value) { SetRoleCredentials(std::forward<RoleCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRoleCredentialsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RoleCredentials m_roleCredentials;
    bool m_roleCredentialsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSO
} // namespace Aws
