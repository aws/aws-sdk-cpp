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
    AWS_SIGNER_API SigningPlatform() = default;
    AWS_SIGNER_API SigningPlatform(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningPlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a signing platform.</p>
     */
    inline const Aws::String& GetPlatformId() const { return m_platformId; }
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }
    template<typename PlatformIdT = Aws::String>
    void SetPlatformId(PlatformIdT&& value) { m_platformIdHasBeenSet = true; m_platformId = std::forward<PlatformIdT>(value); }
    template<typename PlatformIdT = Aws::String>
    SigningPlatform& WithPlatformId(PlatformIdT&& value) { SetPlatformId(std::forward<PlatformIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of a signing platform.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    SigningPlatform& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any partner entities linked to a signing platform.</p>
     */
    inline const Aws::String& GetPartner() const { return m_partner; }
    inline bool PartnerHasBeenSet() const { return m_partnerHasBeenSet; }
    template<typename PartnerT = Aws::String>
    void SetPartner(PartnerT&& value) { m_partnerHasBeenSet = true; m_partner = std::forward<PartnerT>(value); }
    template<typename PartnerT = Aws::String>
    SigningPlatform& WithPartner(PartnerT&& value) { SetPartner(std::forward<PartnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of targets that can be signed by a signing platform.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    SigningPlatform& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of a signing platform.</p>
     */
    inline Category GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(Category value) { m_categoryHasBeenSet = true; m_category = value; }
    inline SigningPlatform& WithCategory(Category value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of a signing platform. This includes the designated hash
     * algorithm and encryption algorithm of a signing platform.</p>
     */
    inline const SigningConfiguration& GetSigningConfiguration() const { return m_signingConfiguration; }
    inline bool SigningConfigurationHasBeenSet() const { return m_signingConfigurationHasBeenSet; }
    template<typename SigningConfigurationT = SigningConfiguration>
    void SetSigningConfiguration(SigningConfigurationT&& value) { m_signingConfigurationHasBeenSet = true; m_signingConfiguration = std::forward<SigningConfigurationT>(value); }
    template<typename SigningConfigurationT = SigningConfiguration>
    SigningPlatform& WithSigningConfiguration(SigningConfigurationT&& value) { SetSigningConfiguration(std::forward<SigningConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SigningImageFormat& GetSigningImageFormat() const { return m_signingImageFormat; }
    inline bool SigningImageFormatHasBeenSet() const { return m_signingImageFormatHasBeenSet; }
    template<typename SigningImageFormatT = SigningImageFormat>
    void SetSigningImageFormat(SigningImageFormatT&& value) { m_signingImageFormatHasBeenSet = true; m_signingImageFormat = std::forward<SigningImageFormatT>(value); }
    template<typename SigningImageFormatT = SigningImageFormat>
    SigningPlatform& WithSigningImageFormat(SigningImageFormatT&& value) { SetSigningImageFormat(std::forward<SigningImageFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size (in MB) of code that can be signed by a signing
     * platform.</p>
     */
    inline int GetMaxSizeInMB() const { return m_maxSizeInMB; }
    inline bool MaxSizeInMBHasBeenSet() const { return m_maxSizeInMBHasBeenSet; }
    inline void SetMaxSizeInMB(int value) { m_maxSizeInMBHasBeenSet = true; m_maxSizeInMB = value; }
    inline SigningPlatform& WithMaxSizeInMB(int value) { SetMaxSizeInMB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether revocation is supported for the platform.</p>
     */
    inline bool GetRevocationSupported() const { return m_revocationSupported; }
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

    Category m_category{Category::NOT_SET};
    bool m_categoryHasBeenSet = false;

    SigningConfiguration m_signingConfiguration;
    bool m_signingConfigurationHasBeenSet = false;

    SigningImageFormat m_signingImageFormat;
    bool m_signingImageFormatHasBeenSet = false;

    int m_maxSizeInMB{0};
    bool m_maxSizeInMBHasBeenSet = false;

    bool m_revocationSupported{false};
    bool m_revocationSupportedHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
