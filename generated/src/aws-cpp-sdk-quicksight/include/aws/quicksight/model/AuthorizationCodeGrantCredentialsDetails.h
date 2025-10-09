/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AuthorizationCodeGrantDetails.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Details for OAuth 2.0 authorization code grant credentials.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AuthorizationCodeGrantCredentialsDetails">AWS
   * API Reference</a></p>
   */
  class AuthorizationCodeGrantCredentialsDetails
  {
  public:
    AWS_QUICKSIGHT_API AuthorizationCodeGrantCredentialsDetails() = default;
    AWS_QUICKSIGHT_API AuthorizationCodeGrantCredentialsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AuthorizationCodeGrantCredentialsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization code grant configuration details.</p>
     */
    inline const AuthorizationCodeGrantDetails& GetAuthorizationCodeGrantDetails() const { return m_authorizationCodeGrantDetails; }
    inline bool AuthorizationCodeGrantDetailsHasBeenSet() const { return m_authorizationCodeGrantDetailsHasBeenSet; }
    template<typename AuthorizationCodeGrantDetailsT = AuthorizationCodeGrantDetails>
    void SetAuthorizationCodeGrantDetails(AuthorizationCodeGrantDetailsT&& value) { m_authorizationCodeGrantDetailsHasBeenSet = true; m_authorizationCodeGrantDetails = std::forward<AuthorizationCodeGrantDetailsT>(value); }
    template<typename AuthorizationCodeGrantDetailsT = AuthorizationCodeGrantDetails>
    AuthorizationCodeGrantCredentialsDetails& WithAuthorizationCodeGrantDetails(AuthorizationCodeGrantDetailsT&& value) { SetAuthorizationCodeGrantDetails(std::forward<AuthorizationCodeGrantDetailsT>(value)); return *this;}
    ///@}
  private:

    AuthorizationCodeGrantDetails m_authorizationCodeGrantDetails;
    bool m_authorizationCodeGrantDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
