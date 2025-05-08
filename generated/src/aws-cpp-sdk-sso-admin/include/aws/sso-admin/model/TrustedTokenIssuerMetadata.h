/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/TrustedTokenIssuerType.h>
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
   * <p>A structure that describes a trusted token issuer.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/TrustedTokenIssuerMetadata">AWS
   * API Reference</a></p>
   */
  class TrustedTokenIssuerMetadata
  {
  public:
    AWS_SSOADMIN_API TrustedTokenIssuerMetadata() = default;
    AWS_SSOADMIN_API TrustedTokenIssuerMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API TrustedTokenIssuerMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the trusted token issuer configuration in the instance of IAM
     * Identity Center.</p>
     */
    inline const Aws::String& GetTrustedTokenIssuerArn() const { return m_trustedTokenIssuerArn; }
    inline bool TrustedTokenIssuerArnHasBeenSet() const { return m_trustedTokenIssuerArnHasBeenSet; }
    template<typename TrustedTokenIssuerArnT = Aws::String>
    void SetTrustedTokenIssuerArn(TrustedTokenIssuerArnT&& value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn = std::forward<TrustedTokenIssuerArnT>(value); }
    template<typename TrustedTokenIssuerArnT = Aws::String>
    TrustedTokenIssuerMetadata& WithTrustedTokenIssuerArn(TrustedTokenIssuerArnT&& value) { SetTrustedTokenIssuerArn(std::forward<TrustedTokenIssuerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trusted token issuer configuration in the instance of IAM
     * Identity Center.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TrustedTokenIssuerMetadata& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of trusted token issuer.</p>
     */
    inline TrustedTokenIssuerType GetTrustedTokenIssuerType() const { return m_trustedTokenIssuerType; }
    inline bool TrustedTokenIssuerTypeHasBeenSet() const { return m_trustedTokenIssuerTypeHasBeenSet; }
    inline void SetTrustedTokenIssuerType(TrustedTokenIssuerType value) { m_trustedTokenIssuerTypeHasBeenSet = true; m_trustedTokenIssuerType = value; }
    inline TrustedTokenIssuerMetadata& WithTrustedTokenIssuerType(TrustedTokenIssuerType value) { SetTrustedTokenIssuerType(value); return *this;}
    ///@}
  private:

    Aws::String m_trustedTokenIssuerArn;
    bool m_trustedTokenIssuerArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TrustedTokenIssuerType m_trustedTokenIssuerType{TrustedTokenIssuerType::NOT_SET};
    bool m_trustedTokenIssuerTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
