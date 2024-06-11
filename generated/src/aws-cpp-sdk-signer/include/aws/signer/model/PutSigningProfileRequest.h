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
    AWS_SIGNER_API PutSigningProfileRequest();

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
    inline const Aws::String& GetProfileName() const{ return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }
    inline PutSigningProfileRequest& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}
    inline PutSigningProfileRequest& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}
    inline PutSigningProfileRequest& WithProfileName(const char* value) { SetProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Certificate Manager certificate that will be used to sign code with
     * the new signing profile.</p>
     */
    inline const SigningMaterial& GetSigningMaterial() const{ return m_signingMaterial; }
    inline bool SigningMaterialHasBeenSet() const { return m_signingMaterialHasBeenSet; }
    inline void SetSigningMaterial(const SigningMaterial& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = value; }
    inline void SetSigningMaterial(SigningMaterial&& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = std::move(value); }
    inline PutSigningProfileRequest& WithSigningMaterial(const SigningMaterial& value) { SetSigningMaterial(value); return *this;}
    inline PutSigningProfileRequest& WithSigningMaterial(SigningMaterial&& value) { SetSigningMaterial(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default validity period override for any signature generated using this
     * signing profile. If unspecified, the default is 135 months.</p>
     */
    inline const SignatureValidityPeriod& GetSignatureValidityPeriod() const{ return m_signatureValidityPeriod; }
    inline bool SignatureValidityPeriodHasBeenSet() const { return m_signatureValidityPeriodHasBeenSet; }
    inline void SetSignatureValidityPeriod(const SignatureValidityPeriod& value) { m_signatureValidityPeriodHasBeenSet = true; m_signatureValidityPeriod = value; }
    inline void SetSignatureValidityPeriod(SignatureValidityPeriod&& value) { m_signatureValidityPeriodHasBeenSet = true; m_signatureValidityPeriod = std::move(value); }
    inline PutSigningProfileRequest& WithSignatureValidityPeriod(const SignatureValidityPeriod& value) { SetSignatureValidityPeriod(value); return *this;}
    inline PutSigningProfileRequest& WithSignatureValidityPeriod(SignatureValidityPeriod&& value) { SetSignatureValidityPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the signing platform to be created.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }
    inline void SetPlatformId(const Aws::String& value) { m_platformIdHasBeenSet = true; m_platformId = value; }
    inline void SetPlatformId(Aws::String&& value) { m_platformIdHasBeenSet = true; m_platformId = std::move(value); }
    inline void SetPlatformId(const char* value) { m_platformIdHasBeenSet = true; m_platformId.assign(value); }
    inline PutSigningProfileRequest& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}
    inline PutSigningProfileRequest& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}
    inline PutSigningProfileRequest& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subfield of <code>platform</code>. This specifies any different
     * configuration options that you want to apply to the chosen platform (such as a
     * different <code>hash-algorithm</code> or <code>signing-algorithm</code>).</p>
     */
    inline const SigningPlatformOverrides& GetOverrides() const{ return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    inline void SetOverrides(const SigningPlatformOverrides& value) { m_overridesHasBeenSet = true; m_overrides = value; }
    inline void SetOverrides(SigningPlatformOverrides&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }
    inline PutSigningProfileRequest& WithOverrides(const SigningPlatformOverrides& value) { SetOverrides(value); return *this;}
    inline PutSigningProfileRequest& WithOverrides(SigningPlatformOverrides&& value) { SetOverrides(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map of key-value pairs for signing. These can include any information that
     * you want to use during signing.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSigningParameters() const{ return m_signingParameters; }
    inline bool SigningParametersHasBeenSet() const { return m_signingParametersHasBeenSet; }
    inline void SetSigningParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_signingParametersHasBeenSet = true; m_signingParameters = value; }
    inline void SetSigningParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_signingParametersHasBeenSet = true; m_signingParameters = std::move(value); }
    inline PutSigningProfileRequest& WithSigningParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetSigningParameters(value); return *this;}
    inline PutSigningProfileRequest& WithSigningParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetSigningParameters(std::move(value)); return *this;}
    inline PutSigningProfileRequest& AddSigningParameters(const Aws::String& key, const Aws::String& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, value); return *this; }
    inline PutSigningProfileRequest& AddSigningParameters(Aws::String&& key, const Aws::String& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::move(key), value); return *this; }
    inline PutSigningProfileRequest& AddSigningParameters(const Aws::String& key, Aws::String&& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, std::move(value)); return *this; }
    inline PutSigningProfileRequest& AddSigningParameters(Aws::String&& key, Aws::String&& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline PutSigningProfileRequest& AddSigningParameters(const char* key, Aws::String&& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, std::move(value)); return *this; }
    inline PutSigningProfileRequest& AddSigningParameters(Aws::String&& key, const char* value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::move(key), value); return *this; }
    inline PutSigningProfileRequest& AddSigningParameters(const char* key, const char* value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags to be associated with the signing profile that is being created.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PutSigningProfileRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline PutSigningProfileRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline PutSigningProfileRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline PutSigningProfileRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PutSigningProfileRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PutSigningProfileRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline PutSigningProfileRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PutSigningProfileRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PutSigningProfileRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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
