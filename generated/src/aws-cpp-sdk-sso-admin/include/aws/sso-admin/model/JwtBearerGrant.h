/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sso-admin/model/AuthorizedTokenIssuer.h>
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
   * <p>A structure that defines configuration settings for an application that
   * supports the JWT Bearer Token Authorization Grant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/JwtBearerGrant">AWS
   * API Reference</a></p>
   */
  class JwtBearerGrant
  {
  public:
    AWS_SSOADMIN_API JwtBearerGrant();
    AWS_SSOADMIN_API JwtBearerGrant(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API JwtBearerGrant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of allowed token issuers trusted by the Identity Center instances for
     * this application.</p>
     */
    inline const Aws::Vector<AuthorizedTokenIssuer>& GetAuthorizedTokenIssuers() const{ return m_authorizedTokenIssuers; }

    /**
     * <p>A list of allowed token issuers trusted by the Identity Center instances for
     * this application.</p>
     */
    inline bool AuthorizedTokenIssuersHasBeenSet() const { return m_authorizedTokenIssuersHasBeenSet; }

    /**
     * <p>A list of allowed token issuers trusted by the Identity Center instances for
     * this application.</p>
     */
    inline void SetAuthorizedTokenIssuers(const Aws::Vector<AuthorizedTokenIssuer>& value) { m_authorizedTokenIssuersHasBeenSet = true; m_authorizedTokenIssuers = value; }

    /**
     * <p>A list of allowed token issuers trusted by the Identity Center instances for
     * this application.</p>
     */
    inline void SetAuthorizedTokenIssuers(Aws::Vector<AuthorizedTokenIssuer>&& value) { m_authorizedTokenIssuersHasBeenSet = true; m_authorizedTokenIssuers = std::move(value); }

    /**
     * <p>A list of allowed token issuers trusted by the Identity Center instances for
     * this application.</p>
     */
    inline JwtBearerGrant& WithAuthorizedTokenIssuers(const Aws::Vector<AuthorizedTokenIssuer>& value) { SetAuthorizedTokenIssuers(value); return *this;}

    /**
     * <p>A list of allowed token issuers trusted by the Identity Center instances for
     * this application.</p>
     */
    inline JwtBearerGrant& WithAuthorizedTokenIssuers(Aws::Vector<AuthorizedTokenIssuer>&& value) { SetAuthorizedTokenIssuers(std::move(value)); return *this;}

    /**
     * <p>A list of allowed token issuers trusted by the Identity Center instances for
     * this application.</p>
     */
    inline JwtBearerGrant& AddAuthorizedTokenIssuers(const AuthorizedTokenIssuer& value) { m_authorizedTokenIssuersHasBeenSet = true; m_authorizedTokenIssuers.push_back(value); return *this; }

    /**
     * <p>A list of allowed token issuers trusted by the Identity Center instances for
     * this application.</p>
     */
    inline JwtBearerGrant& AddAuthorizedTokenIssuers(AuthorizedTokenIssuer&& value) { m_authorizedTokenIssuersHasBeenSet = true; m_authorizedTokenIssuers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AuthorizedTokenIssuer> m_authorizedTokenIssuers;
    bool m_authorizedTokenIssuersHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
