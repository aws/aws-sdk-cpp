/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso/SSO_EXPORTS.h>
#include <aws/sso/model/RoleCredentials.h>
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
    AWS_SSO_API GetRoleCredentialsResult();
    AWS_SSO_API GetRoleCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSO_API GetRoleCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The credentials for the role that is assigned to the user.</p>
     */
    inline const RoleCredentials& GetRoleCredentials() const{ return m_roleCredentials; }

    /**
     * <p>The credentials for the role that is assigned to the user.</p>
     */
    inline void SetRoleCredentials(const RoleCredentials& value) { m_roleCredentials = value; }

    /**
     * <p>The credentials for the role that is assigned to the user.</p>
     */
    inline void SetRoleCredentials(RoleCredentials&& value) { m_roleCredentials = std::move(value); }

    /**
     * <p>The credentials for the role that is assigned to the user.</p>
     */
    inline GetRoleCredentialsResult& WithRoleCredentials(const RoleCredentials& value) { SetRoleCredentials(value); return *this;}

    /**
     * <p>The credentials for the role that is assigned to the user.</p>
     */
    inline GetRoleCredentialsResult& WithRoleCredentials(RoleCredentials&& value) { SetRoleCredentials(std::move(value)); return *this;}

  private:

    RoleCredentials m_roleCredentials;
  };

} // namespace Model
} // namespace SSO
} // namespace Aws
