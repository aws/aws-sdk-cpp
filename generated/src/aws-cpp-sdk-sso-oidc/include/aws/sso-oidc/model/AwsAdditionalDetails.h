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
   * <p>This structure contains Amazon Web Services-specific parameter extensions and
   * the <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/trustedidentitypropagation-overview.html">identity
   * context</a>.</p><p><h3>See Also:</h3>   <a
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
     * <p>The trusted context assertion is signed and encrypted by STS. It provides
     * access to <code>sts:identity_context</code> claim in the <code>idToken</code>
     * without JWT parsing</p> <p>Identity context comprises information that Amazon
     * Web Services services use to make authorization decisions when they receive
     * requests.</p>
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
