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
    AWS_SSOADMIN_API TrustedTokenIssuerMetadata();
    AWS_SSOADMIN_API TrustedTokenIssuerMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API TrustedTokenIssuerMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the trusted token issuer configuration in the instance of IAM
     * Identity Center.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TrustedTokenIssuerMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TrustedTokenIssuerMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TrustedTokenIssuerMetadata& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the trusted token issuer configuration in the instance of IAM
     * Identity Center.</p>
     */
    inline const Aws::String& GetTrustedTokenIssuerArn() const{ return m_trustedTokenIssuerArn; }
    inline bool TrustedTokenIssuerArnHasBeenSet() const { return m_trustedTokenIssuerArnHasBeenSet; }
    inline void SetTrustedTokenIssuerArn(const Aws::String& value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn = value; }
    inline void SetTrustedTokenIssuerArn(Aws::String&& value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn = std::move(value); }
    inline void SetTrustedTokenIssuerArn(const char* value) { m_trustedTokenIssuerArnHasBeenSet = true; m_trustedTokenIssuerArn.assign(value); }
    inline TrustedTokenIssuerMetadata& WithTrustedTokenIssuerArn(const Aws::String& value) { SetTrustedTokenIssuerArn(value); return *this;}
    inline TrustedTokenIssuerMetadata& WithTrustedTokenIssuerArn(Aws::String&& value) { SetTrustedTokenIssuerArn(std::move(value)); return *this;}
    inline TrustedTokenIssuerMetadata& WithTrustedTokenIssuerArn(const char* value) { SetTrustedTokenIssuerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of trusted token issuer.</p>
     */
    inline const TrustedTokenIssuerType& GetTrustedTokenIssuerType() const{ return m_trustedTokenIssuerType; }
    inline bool TrustedTokenIssuerTypeHasBeenSet() const { return m_trustedTokenIssuerTypeHasBeenSet; }
    inline void SetTrustedTokenIssuerType(const TrustedTokenIssuerType& value) { m_trustedTokenIssuerTypeHasBeenSet = true; m_trustedTokenIssuerType = value; }
    inline void SetTrustedTokenIssuerType(TrustedTokenIssuerType&& value) { m_trustedTokenIssuerTypeHasBeenSet = true; m_trustedTokenIssuerType = std::move(value); }
    inline TrustedTokenIssuerMetadata& WithTrustedTokenIssuerType(const TrustedTokenIssuerType& value) { SetTrustedTokenIssuerType(value); return *this;}
    inline TrustedTokenIssuerMetadata& WithTrustedTokenIssuerType(TrustedTokenIssuerType&& value) { SetTrustedTokenIssuerType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_trustedTokenIssuerArn;
    bool m_trustedTokenIssuerArnHasBeenSet = false;

    TrustedTokenIssuerType m_trustedTokenIssuerType;
    bool m_trustedTokenIssuerTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
