/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/SigningMaterial.h>
#include <aws/signer/model/SignatureValidityPeriod.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/signer/model/SigningProfileStatus.h>
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
   * <p>Contains information about the ACM certificates and signing configuration
   * parameters that can be used by a given code signing user.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningProfile">AWS
   * API Reference</a></p>
   */
  class SigningProfile
  {
  public:
    AWS_SIGNER_API SigningProfile() = default;
    AWS_SIGNER_API SigningProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the signing profile.</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    SigningProfile& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of a signing profile.</p>
     */
    inline const Aws::String& GetProfileVersion() const { return m_profileVersion; }
    inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }
    template<typename ProfileVersionT = Aws::String>
    void SetProfileVersion(ProfileVersionT&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::forward<ProfileVersionT>(value); }
    template<typename ProfileVersionT = Aws::String>
    SigningProfile& WithProfileVersion(ProfileVersionT&& value) { SetProfileVersion(std::forward<ProfileVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a signing profile, including the profile version.</p>
     */
    inline const Aws::String& GetProfileVersionArn() const { return m_profileVersionArn; }
    inline bool ProfileVersionArnHasBeenSet() const { return m_profileVersionArnHasBeenSet; }
    template<typename ProfileVersionArnT = Aws::String>
    void SetProfileVersionArn(ProfileVersionArnT&& value) { m_profileVersionArnHasBeenSet = true; m_profileVersionArn = std::forward<ProfileVersionArnT>(value); }
    template<typename ProfileVersionArnT = Aws::String>
    SigningProfile& WithProfileVersionArn(ProfileVersionArnT&& value) { SetProfileVersionArn(std::forward<ProfileVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ACM certificate that is available for use by a signing profile.</p>
     */
    inline const SigningMaterial& GetSigningMaterial() const { return m_signingMaterial; }
    inline bool SigningMaterialHasBeenSet() const { return m_signingMaterialHasBeenSet; }
    template<typename SigningMaterialT = SigningMaterial>
    void SetSigningMaterial(SigningMaterialT&& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = std::forward<SigningMaterialT>(value); }
    template<typename SigningMaterialT = SigningMaterial>
    SigningProfile& WithSigningMaterial(SigningMaterialT&& value) { SetSigningMaterial(std::forward<SigningMaterialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validity period for a signing job created using this signing profile.</p>
     */
    inline const SignatureValidityPeriod& GetSignatureValidityPeriod() const { return m_signatureValidityPeriod; }
    inline bool SignatureValidityPeriodHasBeenSet() const { return m_signatureValidityPeriodHasBeenSet; }
    template<typename SignatureValidityPeriodT = SignatureValidityPeriod>
    void SetSignatureValidityPeriod(SignatureValidityPeriodT&& value) { m_signatureValidityPeriodHasBeenSet = true; m_signatureValidityPeriod = std::forward<SignatureValidityPeriodT>(value); }
    template<typename SignatureValidityPeriodT = SignatureValidityPeriod>
    SigningProfile& WithSignatureValidityPeriod(SignatureValidityPeriodT&& value) { SetSignatureValidityPeriod(std::forward<SignatureValidityPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline const Aws::String& GetPlatformId() const { return m_platformId; }
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }
    template<typename PlatformIdT = Aws::String>
    void SetPlatformId(PlatformIdT&& value) { m_platformIdHasBeenSet = true; m_platformId = std::forward<PlatformIdT>(value); }
    template<typename PlatformIdT = Aws::String>
    SigningProfile& WithPlatformId(PlatformIdT&& value) { SetPlatformId(std::forward<PlatformIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the signing platform.</p>
     */
    inline const Aws::String& GetPlatformDisplayName() const { return m_platformDisplayName; }
    inline bool PlatformDisplayNameHasBeenSet() const { return m_platformDisplayNameHasBeenSet; }
    template<typename PlatformDisplayNameT = Aws::String>
    void SetPlatformDisplayName(PlatformDisplayNameT&& value) { m_platformDisplayNameHasBeenSet = true; m_platformDisplayName = std::forward<PlatformDisplayNameT>(value); }
    template<typename PlatformDisplayNameT = Aws::String>
    SigningProfile& WithPlatformDisplayName(PlatformDisplayNameT&& value) { SetPlatformDisplayName(std::forward<PlatformDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that are available for use by a Signer user.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSigningParameters() const { return m_signingParameters; }
    inline bool SigningParametersHasBeenSet() const { return m_signingParametersHasBeenSet; }
    template<typename SigningParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetSigningParameters(SigningParametersT&& value) { m_signingParametersHasBeenSet = true; m_signingParameters = std::forward<SigningParametersT>(value); }
    template<typename SigningParametersT = Aws::Map<Aws::String, Aws::String>>
    SigningProfile& WithSigningParameters(SigningParametersT&& value) { SetSigningParameters(std::forward<SigningParametersT>(value)); return *this;}
    template<typename SigningParametersKeyT = Aws::String, typename SigningParametersValueT = Aws::String>
    SigningProfile& AddSigningParameters(SigningParametersKeyT&& key, SigningParametersValueT&& value) {
      m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::forward<SigningParametersKeyT>(key), std::forward<SigningParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of a signing profile.</p>
     */
    inline SigningProfileStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SigningProfileStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SigningProfile& WithStatus(SigningProfileStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    SigningProfile& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    SigningProfile& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    SigningProfile& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_profileVersion;
    bool m_profileVersionHasBeenSet = false;

    Aws::String m_profileVersionArn;
    bool m_profileVersionArnHasBeenSet = false;

    SigningMaterial m_signingMaterial;
    bool m_signingMaterialHasBeenSet = false;

    SignatureValidityPeriod m_signatureValidityPeriod;
    bool m_signatureValidityPeriodHasBeenSet = false;

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet = false;

    Aws::String m_platformDisplayName;
    bool m_platformDisplayNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_signingParameters;
    bool m_signingParametersHasBeenSet = false;

    SigningProfileStatus m_status{SigningProfileStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
