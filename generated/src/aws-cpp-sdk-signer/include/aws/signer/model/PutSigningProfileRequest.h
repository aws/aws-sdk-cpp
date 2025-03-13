/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/SigningMaterial.h>
#include <aws/signer/model/SignatureValidityPeriod.h>
#include <aws/signer/model/SigningPlatformOverrides.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace signer
{
namespace Model
{

  /**
   */
  class PutSigningProfileRequest : public SignerRequest
  {
  public:
    AWS_SIGNER_API PutSigningProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSigningProfile"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the signing profile to be created.</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    PutSigningProfileRequest& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Certificate Manager certificate that will be used to sign code with
     * the new signing profile.</p>
     */
    inline const SigningMaterial& GetSigningMaterial() const { return m_signingMaterial; }
    inline bool SigningMaterialHasBeenSet() const { return m_signingMaterialHasBeenSet; }
    template<typename SigningMaterialT = SigningMaterial>
    void SetSigningMaterial(SigningMaterialT&& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = std::forward<SigningMaterialT>(value); }
    template<typename SigningMaterialT = SigningMaterial>
    PutSigningProfileRequest& WithSigningMaterial(SigningMaterialT&& value) { SetSigningMaterial(std::forward<SigningMaterialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default validity period override for any signature generated using this
     * signing profile. If unspecified, the default is 135 months.</p>
     */
    inline const SignatureValidityPeriod& GetSignatureValidityPeriod() const { return m_signatureValidityPeriod; }
    inline bool SignatureValidityPeriodHasBeenSet() const { return m_signatureValidityPeriodHasBeenSet; }
    template<typename SignatureValidityPeriodT = SignatureValidityPeriod>
    void SetSignatureValidityPeriod(SignatureValidityPeriodT&& value) { m_signatureValidityPeriodHasBeenSet = true; m_signatureValidityPeriod = std::forward<SignatureValidityPeriodT>(value); }
    template<typename SignatureValidityPeriodT = SignatureValidityPeriod>
    PutSigningProfileRequest& WithSignatureValidityPeriod(SignatureValidityPeriodT&& value) { SetSignatureValidityPeriod(std::forward<SignatureValidityPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the signing platform to be created.</p>
     */
    inline const Aws::String& GetPlatformId() const { return m_platformId; }
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }
    template<typename PlatformIdT = Aws::String>
    void SetPlatformId(PlatformIdT&& value) { m_platformIdHasBeenSet = true; m_platformId = std::forward<PlatformIdT>(value); }
    template<typename PlatformIdT = Aws::String>
    PutSigningProfileRequest& WithPlatformId(PlatformIdT&& value) { SetPlatformId(std::forward<PlatformIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subfield of <code>platform</code>. This specifies any different
     * configuration options that you want to apply to the chosen platform (such as a
     * different <code>hash-algorithm</code> or <code>signing-algorithm</code>).</p>
     */
    inline const SigningPlatformOverrides& GetOverrides() const { return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    template<typename OverridesT = SigningPlatformOverrides>
    void SetOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides = std::forward<OverridesT>(value); }
    template<typename OverridesT = SigningPlatformOverrides>
    PutSigningProfileRequest& WithOverrides(OverridesT&& value) { SetOverrides(std::forward<OverridesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map of key-value pairs for signing. These can include any information that
     * you want to use during signing.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSigningParameters() const { return m_signingParameters; }
    inline bool SigningParametersHasBeenSet() const { return m_signingParametersHasBeenSet; }
    template<typename SigningParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetSigningParameters(SigningParametersT&& value) { m_signingParametersHasBeenSet = true; m_signingParameters = std::forward<SigningParametersT>(value); }
    template<typename SigningParametersT = Aws::Map<Aws::String, Aws::String>>
    PutSigningProfileRequest& WithSigningParameters(SigningParametersT&& value) { SetSigningParameters(std::forward<SigningParametersT>(value)); return *this;}
    template<typename SigningParametersKeyT = Aws::String, typename SigningParametersValueT = Aws::String>
    PutSigningProfileRequest& AddSigningParameters(SigningParametersKeyT&& key, SigningParametersValueT&& value) {
      m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::forward<SigningParametersKeyT>(key), std::forward<SigningParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Tags to be associated with the signing profile that is being created.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    PutSigningProfileRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    PutSigningProfileRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    SigningMaterial m_signingMaterial;
    bool m_signingMaterialHasBeenSet = false;

    SignatureValidityPeriod m_signatureValidityPeriod;
    bool m_signatureValidityPeriodHasBeenSet = false;

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet = false;

    SigningPlatformOverrides m_overrides;
    bool m_overridesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_signingParameters;
    bool m_signingParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
