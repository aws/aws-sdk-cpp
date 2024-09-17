/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/Category.h>
#include <aws/signer/model/SigningConfiguration.h>
#include <aws/signer/model/SigningImageFormat.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>Contains information about the signing configurations and parameters that are
   * used to perform a code-signing job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningPlatform">AWS
   * API Reference</a></p>
   */
  class SigningPlatform
  {
  public:
    AWS_SIGNER_API SigningPlatform();
    AWS_SIGNER_API SigningPlatform(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningPlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a signing platform.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }
    inline void SetPlatformId(const Aws::String& value) { m_platformIdHasBeenSet = true; m_platformId = value; }
    inline void SetPlatformId(Aws::String&& value) { m_platformIdHasBeenSet = true; m_platformId = std::move(value); }
    inline void SetPlatformId(const char* value) { m_platformIdHasBeenSet = true; m_platformId.assign(value); }
    inline SigningPlatform& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}
    inline SigningPlatform& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}
    inline SigningPlatform& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of a signing platform.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline SigningPlatform& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline SigningPlatform& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline SigningPlatform& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any partner entities linked to a signing platform.</p>
     */
    inline const Aws::String& GetPartner() const{ return m_partner; }
    inline bool PartnerHasBeenSet() const { return m_partnerHasBeenSet; }
    inline void SetPartner(const Aws::String& value) { m_partnerHasBeenSet = true; m_partner = value; }
    inline void SetPartner(Aws::String&& value) { m_partnerHasBeenSet = true; m_partner = std::move(value); }
    inline void SetPartner(const char* value) { m_partnerHasBeenSet = true; m_partner.assign(value); }
    inline SigningPlatform& WithPartner(const Aws::String& value) { SetPartner(value); return *this;}
    inline SigningPlatform& WithPartner(Aws::String&& value) { SetPartner(std::move(value)); return *this;}
    inline SigningPlatform& WithPartner(const char* value) { SetPartner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of targets that can be signed by a signing platform.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline SigningPlatform& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline SigningPlatform& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline SigningPlatform& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of a signing platform.</p>
     */
    inline const Category& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Category& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Category&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline SigningPlatform& WithCategory(const Category& value) { SetCategory(value); return *this;}
    inline SigningPlatform& WithCategory(Category&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a signing platform. This includes the designated hash
     * algorithm and encryption algorithm of a signing platform.</p>
     */
    inline const SigningConfiguration& GetSigningConfiguration() const{ return m_signingConfiguration; }
    inline bool SigningConfigurationHasBeenSet() const { return m_signingConfigurationHasBeenSet; }
    inline void SetSigningConfiguration(const SigningConfiguration& value) { m_signingConfigurationHasBeenSet = true; m_signingConfiguration = value; }
    inline void SetSigningConfiguration(SigningConfiguration&& value) { m_signingConfigurationHasBeenSet = true; m_signingConfiguration = std::move(value); }
    inline SigningPlatform& WithSigningConfiguration(const SigningConfiguration& value) { SetSigningConfiguration(value); return *this;}
    inline SigningPlatform& WithSigningConfiguration(SigningConfiguration&& value) { SetSigningConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SigningImageFormat& GetSigningImageFormat() const{ return m_signingImageFormat; }
    inline bool SigningImageFormatHasBeenSet() const { return m_signingImageFormatHasBeenSet; }
    inline void SetSigningImageFormat(const SigningImageFormat& value) { m_signingImageFormatHasBeenSet = true; m_signingImageFormat = value; }
    inline void SetSigningImageFormat(SigningImageFormat&& value) { m_signingImageFormatHasBeenSet = true; m_signingImageFormat = std::move(value); }
    inline SigningPlatform& WithSigningImageFormat(const SigningImageFormat& value) { SetSigningImageFormat(value); return *this;}
    inline SigningPlatform& WithSigningImageFormat(SigningImageFormat&& value) { SetSigningImageFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size (in MB) of code that can be signed by a signing
     * platform.</p>
     */
    inline int GetMaxSizeInMB() const{ return m_maxSizeInMB; }
    inline bool MaxSizeInMBHasBeenSet() const { return m_maxSizeInMBHasBeenSet; }
    inline void SetMaxSizeInMB(int value) { m_maxSizeInMBHasBeenSet = true; m_maxSizeInMB = value; }
    inline SigningPlatform& WithMaxSizeInMB(int value) { SetMaxSizeInMB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether revocation is supported for the platform.</p>
     */
    inline bool GetRevocationSupported() const{ return m_revocationSupported; }
    inline bool RevocationSupportedHasBeenSet() const { return m_revocationSupportedHasBeenSet; }
    inline void SetRevocationSupported(bool value) { m_revocationSupportedHasBeenSet = true; m_revocationSupported = value; }
    inline SigningPlatform& WithRevocationSupported(bool value) { SetRevocationSupported(value); return *this;}
    ///@}
  private:

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_partner;
    bool m_partnerHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Category m_category;
    bool m_categoryHasBeenSet = false;

    SigningConfiguration m_signingConfiguration;
    bool m_signingConfigurationHasBeenSet = false;

    SigningImageFormat m_signingImageFormat;
    bool m_signingImageFormatHasBeenSet = false;

    int m_maxSizeInMB;
    bool m_maxSizeInMBHasBeenSet = false;

    bool m_revocationSupported;
    bool m_revocationSupportedHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
