/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSOOIDC
{
namespace Model
{

  /**
   * <p>This structure contains Amazon Web Services-specific parameter extensions for
   * the token endpoint responses and includes the identity context.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-oidc-2019-06-10/AwsAdditionalDetails">AWS
   * API Reference</a></p>
   */
  class AwsAdditionalDetails
  {
  public:
    AWS_SSOOIDC_API AwsAdditionalDetails() = default;
    AWS_SSOOIDC_API AwsAdditionalDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOOIDC_API AwsAdditionalDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOOIDC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>STS context assertion that carries a user identifier to the Amazon Web
     * Services service that it calls and can be used to obtain an identity-enhanced
     * IAM role session. This value corresponds to the
     * <code>sts:identity_context</code> claim in the ID token.</p>
     */
    inline const Aws::String& GetIdentityContext() const { return m_identityContext; }
    inline bool IdentityContextHasBeenSet() const { return m_identityContextHasBeenSet; }
    template<typename IdentityContextT = Aws::String>
    void SetIdentityContext(IdentityContextT&& value) { m_identityContextHasBeenSet = true; m_identityContext = std::forward<IdentityContextT>(value); }
    template<typename IdentityContextT = Aws::String>
    AwsAdditionalDetails& WithIdentityContext(IdentityContextT&& value) { SetIdentityContext(std::forward<IdentityContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityContext;
    bool m_identityContextHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
