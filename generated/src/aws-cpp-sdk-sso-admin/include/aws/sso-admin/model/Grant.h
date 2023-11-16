/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/AuthorizationCodeGrant.h>
#include <aws/sso-admin/model/JwtBearerGrant.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>~~~[ TODO: ADD DESCRIPTION HERE ]~~~</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/Grant">AWS API
   * Reference</a></p>
   */
  class Grant
  {
  public:
    AWS_SSOADMIN_API Grant();
    AWS_SSOADMIN_API Grant(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Grant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>~~~[ TODO: ADD DESCRIPTION HERE ]~~~</p>
     */
    inline const AuthorizationCodeGrant& GetAuthorizationCode() const{ return m_authorizationCode; }

    /**
     * <p>~~~[ TODO: ADD DESCRIPTION HERE ]~~~</p>
     */
    inline bool AuthorizationCodeHasBeenSet() const { return m_authorizationCodeHasBeenSet; }

    /**
     * <p>~~~[ TODO: ADD DESCRIPTION HERE ]~~~</p>
     */
    inline void SetAuthorizationCode(const AuthorizationCodeGrant& value) { m_authorizationCodeHasBeenSet = true; m_authorizationCode = value; }

    /**
     * <p>~~~[ TODO: ADD DESCRIPTION HERE ]~~~</p>
     */
    inline void SetAuthorizationCode(AuthorizationCodeGrant&& value) { m_authorizationCodeHasBeenSet = true; m_authorizationCode = std::move(value); }

    /**
     * <p>~~~[ TODO: ADD DESCRIPTION HERE ]~~~</p>
     */
    inline Grant& WithAuthorizationCode(const AuthorizationCodeGrant& value) { SetAuthorizationCode(value); return *this;}

    /**
     * <p>~~~[ TODO: ADD DESCRIPTION HERE ]~~~</p>
     */
    inline Grant& WithAuthorizationCode(AuthorizationCodeGrant&& value) { SetAuthorizationCode(std::move(value)); return *this;}


    /**
     * <p>~~~[ TODO: ADD DESCRIPTION HERE ]~~~</p>
     */
    inline const JwtBearerGrant& GetJwtBearer() const{ return m_jwtBearer; }

    /**
     * <p>~~~[ TODO: ADD DESCRIPTION HERE ]~~~</p>
     */
    inline bool JwtBearerHasBeenSet() const { return m_jwtBearerHasBeenSet; }

    /**
     * <p>~~~[ TODO: ADD DESCRIPTION HERE ]~~~</p>
     */
    inline void SetJwtBearer(const JwtBearerGrant& value) { m_jwtBearerHasBeenSet = true; m_jwtBearer = value; }

    /**
     * <p>~~~[ TODO: ADD DESCRIPTION HERE ]~~~</p>
     */
    inline void SetJwtBearer(JwtBearerGrant&& value) { m_jwtBearerHasBeenSet = true; m_jwtBearer = std::move(value); }

    /**
     * <p>~~~[ TODO: ADD DESCRIPTION HERE ]~~~</p>
     */
    inline Grant& WithJwtBearer(const JwtBearerGrant& value) { SetJwtBearer(value); return *this;}

    /**
     * <p>~~~[ TODO: ADD DESCRIPTION HERE ]~~~</p>
     */
    inline Grant& WithJwtBearer(JwtBearerGrant&& value) { SetJwtBearer(std::move(value)); return *this;}

  private:

    AuthorizationCodeGrant m_authorizationCode;
    bool m_authorizationCodeHasBeenSet = false;

    JwtBearerGrant m_jwtBearer;
    bool m_jwtBearerHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
