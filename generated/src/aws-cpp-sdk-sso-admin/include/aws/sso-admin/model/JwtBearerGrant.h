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
   * supports the JWT Bearer Token Authorization Grant. The
   * <code>AuthorizedAudience</code> field is the aud claim. For more information,
   * see <a href="https://datatracker.ietf.org/doc/html/rfc7523">RFC
   * 7523</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/JwtBearerGrant">AWS
   * API Reference</a></p>
   */
  class JwtBearerGrant
  {
  public:
    AWS_SSOADMIN_API JwtBearerGrant() = default;
    AWS_SSOADMIN_API JwtBearerGrant(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API JwtBearerGrant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of allowed token issuers trusted by the Identity Center instances for
     * this application.</p>  <p> <code>AuthorizedTokenIssuers</code> is required
     * when the grant type is <code>JwtBearerGrant</code>.</p> 
     */
    inline const Aws::Vector<AuthorizedTokenIssuer>& GetAuthorizedTokenIssuers() const { return m_authorizedTokenIssuers; }
    inline bool AuthorizedTokenIssuersHasBeenSet() const { return m_authorizedTokenIssuersHasBeenSet; }
    template<typename AuthorizedTokenIssuersT = Aws::Vector<AuthorizedTokenIssuer>>
    void SetAuthorizedTokenIssuers(AuthorizedTokenIssuersT&& value) { m_authorizedTokenIssuersHasBeenSet = true; m_authorizedTokenIssuers = std::forward<AuthorizedTokenIssuersT>(value); }
    template<typename AuthorizedTokenIssuersT = Aws::Vector<AuthorizedTokenIssuer>>
    JwtBearerGrant& WithAuthorizedTokenIssuers(AuthorizedTokenIssuersT&& value) { SetAuthorizedTokenIssuers(std::forward<AuthorizedTokenIssuersT>(value)); return *this;}
    template<typename AuthorizedTokenIssuersT = AuthorizedTokenIssuer>
    JwtBearerGrant& AddAuthorizedTokenIssuers(AuthorizedTokenIssuersT&& value) { m_authorizedTokenIssuersHasBeenSet = true; m_authorizedTokenIssuers.emplace_back(std::forward<AuthorizedTokenIssuersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AuthorizedTokenIssuer> m_authorizedTokenIssuers;
    bool m_authorizedTokenIssuersHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
