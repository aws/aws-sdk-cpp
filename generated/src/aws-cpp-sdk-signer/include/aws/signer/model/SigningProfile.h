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
   * <p>Contains information about the ACM certificates and code signing
   * configuration parameters that can be used by a given code signing
   * user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningProfile">AWS
   * API Reference</a></p>
   */
  class SigningProfile
  {
  public:
    AWS_SIGNER_API SigningProfile();
    AWS_SIGNER_API SigningProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the signing profile.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>The name of the signing profile.</p>
     */
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }

    /**
     * <p>The name of the signing profile.</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }

    /**
     * <p>The name of the signing profile.</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }

    /**
     * <p>The name of the signing profile.</p>
     */
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }

    /**
     * <p>The name of the signing profile.</p>
     */
    inline SigningProfile& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>The name of the signing profile.</p>
     */
    inline SigningProfile& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the signing profile.</p>
     */
    inline SigningProfile& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>The version of a signing profile.</p>
     */
    inline const Aws::String& GetProfileVersion() const{ return m_profileVersion; }

    /**
     * <p>The version of a signing profile.</p>
     */
    inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }

    /**
     * <p>The version of a signing profile.</p>
     */
    inline void SetProfileVersion(const Aws::String& value) { m_profileVersionHasBeenSet = true; m_profileVersion = value; }

    /**
     * <p>The version of a signing profile.</p>
     */
    inline void SetProfileVersion(Aws::String&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::move(value); }

    /**
     * <p>The version of a signing profile.</p>
     */
    inline void SetProfileVersion(const char* value) { m_profileVersionHasBeenSet = true; m_profileVersion.assign(value); }

    /**
     * <p>The version of a signing profile.</p>
     */
    inline SigningProfile& WithProfileVersion(const Aws::String& value) { SetProfileVersion(value); return *this;}

    /**
     * <p>The version of a signing profile.</p>
     */
    inline SigningProfile& WithProfileVersion(Aws::String&& value) { SetProfileVersion(std::move(value)); return *this;}

    /**
     * <p>The version of a signing profile.</p>
     */
    inline SigningProfile& WithProfileVersion(const char* value) { SetProfileVersion(value); return *this;}


    /**
     * <p>The ARN of a signing profile, including the profile version.</p>
     */
    inline const Aws::String& GetProfileVersionArn() const{ return m_profileVersionArn; }

    /**
     * <p>The ARN of a signing profile, including the profile version.</p>
     */
    inline bool ProfileVersionArnHasBeenSet() const { return m_profileVersionArnHasBeenSet; }

    /**
     * <p>The ARN of a signing profile, including the profile version.</p>
     */
    inline void SetProfileVersionArn(const Aws::String& value) { m_profileVersionArnHasBeenSet = true; m_profileVersionArn = value; }

    /**
     * <p>The ARN of a signing profile, including the profile version.</p>
     */
    inline void SetProfileVersionArn(Aws::String&& value) { m_profileVersionArnHasBeenSet = true; m_profileVersionArn = std::move(value); }

    /**
     * <p>The ARN of a signing profile, including the profile version.</p>
     */
    inline void SetProfileVersionArn(const char* value) { m_profileVersionArnHasBeenSet = true; m_profileVersionArn.assign(value); }

    /**
     * <p>The ARN of a signing profile, including the profile version.</p>
     */
    inline SigningProfile& WithProfileVersionArn(const Aws::String& value) { SetProfileVersionArn(value); return *this;}

    /**
     * <p>The ARN of a signing profile, including the profile version.</p>
     */
    inline SigningProfile& WithProfileVersionArn(Aws::String&& value) { SetProfileVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a signing profile, including the profile version.</p>
     */
    inline SigningProfile& WithProfileVersionArn(const char* value) { SetProfileVersionArn(value); return *this;}


    /**
     * <p>The ACM certificate that is available for use by a signing profile.</p>
     */
    inline const SigningMaterial& GetSigningMaterial() const{ return m_signingMaterial; }

    /**
     * <p>The ACM certificate that is available for use by a signing profile.</p>
     */
    inline bool SigningMaterialHasBeenSet() const { return m_signingMaterialHasBeenSet; }

    /**
     * <p>The ACM certificate that is available for use by a signing profile.</p>
     */
    inline void SetSigningMaterial(const SigningMaterial& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = value; }

    /**
     * <p>The ACM certificate that is available for use by a signing profile.</p>
     */
    inline void SetSigningMaterial(SigningMaterial&& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = std::move(value); }

    /**
     * <p>The ACM certificate that is available for use by a signing profile.</p>
     */
    inline SigningProfile& WithSigningMaterial(const SigningMaterial& value) { SetSigningMaterial(value); return *this;}

    /**
     * <p>The ACM certificate that is available for use by a signing profile.</p>
     */
    inline SigningProfile& WithSigningMaterial(SigningMaterial&& value) { SetSigningMaterial(std::move(value)); return *this;}


    /**
     * <p>The validity period for a signing job created using this signing profile.</p>
     */
    inline const SignatureValidityPeriod& GetSignatureValidityPeriod() const{ return m_signatureValidityPeriod; }

    /**
     * <p>The validity period for a signing job created using this signing profile.</p>
     */
    inline bool SignatureValidityPeriodHasBeenSet() const { return m_signatureValidityPeriodHasBeenSet; }

    /**
     * <p>The validity period for a signing job created using this signing profile.</p>
     */
    inline void SetSignatureValidityPeriod(const SignatureValidityPeriod& value) { m_signatureValidityPeriodHasBeenSet = true; m_signatureValidityPeriod = value; }

    /**
     * <p>The validity period for a signing job created using this signing profile.</p>
     */
    inline void SetSignatureValidityPeriod(SignatureValidityPeriod&& value) { m_signatureValidityPeriodHasBeenSet = true; m_signatureValidityPeriod = std::move(value); }

    /**
     * <p>The validity period for a signing job created using this signing profile.</p>
     */
    inline SigningProfile& WithSignatureValidityPeriod(const SignatureValidityPeriod& value) { SetSignatureValidityPeriod(value); return *this;}

    /**
     * <p>The validity period for a signing job created using this signing profile.</p>
     */
    inline SigningProfile& WithSignatureValidityPeriod(SignatureValidityPeriod&& value) { SetSignatureValidityPeriod(std::move(value)); return *this;}


    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }

    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }

    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline void SetPlatformId(const Aws::String& value) { m_platformIdHasBeenSet = true; m_platformId = value; }

    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline void SetPlatformId(Aws::String&& value) { m_platformIdHasBeenSet = true; m_platformId = std::move(value); }

    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline void SetPlatformId(const char* value) { m_platformIdHasBeenSet = true; m_platformId.assign(value); }

    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline SigningProfile& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}

    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline SigningProfile& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}

    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline SigningProfile& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}


    /**
     * <p>The name of the signing platform.</p>
     */
    inline const Aws::String& GetPlatformDisplayName() const{ return m_platformDisplayName; }

    /**
     * <p>The name of the signing platform.</p>
     */
    inline bool PlatformDisplayNameHasBeenSet() const { return m_platformDisplayNameHasBeenSet; }

    /**
     * <p>The name of the signing platform.</p>
     */
    inline void SetPlatformDisplayName(const Aws::String& value) { m_platformDisplayNameHasBeenSet = true; m_platformDisplayName = value; }

    /**
     * <p>The name of the signing platform.</p>
     */
    inline void SetPlatformDisplayName(Aws::String&& value) { m_platformDisplayNameHasBeenSet = true; m_platformDisplayName = std::move(value); }

    /**
     * <p>The name of the signing platform.</p>
     */
    inline void SetPlatformDisplayName(const char* value) { m_platformDisplayNameHasBeenSet = true; m_platformDisplayName.assign(value); }

    /**
     * <p>The name of the signing platform.</p>
     */
    inline SigningProfile& WithPlatformDisplayName(const Aws::String& value) { SetPlatformDisplayName(value); return *this;}

    /**
     * <p>The name of the signing platform.</p>
     */
    inline SigningProfile& WithPlatformDisplayName(Aws::String&& value) { SetPlatformDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the signing platform.</p>
     */
    inline SigningProfile& WithPlatformDisplayName(const char* value) { SetPlatformDisplayName(value); return *this;}


    /**
     * <p>The parameters that are available for use by a code signing user.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSigningParameters() const{ return m_signingParameters; }

    /**
     * <p>The parameters that are available for use by a code signing user.</p>
     */
    inline bool SigningParametersHasBeenSet() const { return m_signingParametersHasBeenSet; }

    /**
     * <p>The parameters that are available for use by a code signing user.</p>
     */
    inline void SetSigningParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_signingParametersHasBeenSet = true; m_signingParameters = value; }

    /**
     * <p>The parameters that are available for use by a code signing user.</p>
     */
    inline void SetSigningParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_signingParametersHasBeenSet = true; m_signingParameters = std::move(value); }

    /**
     * <p>The parameters that are available for use by a code signing user.</p>
     */
    inline SigningProfile& WithSigningParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetSigningParameters(value); return *this;}

    /**
     * <p>The parameters that are available for use by a code signing user.</p>
     */
    inline SigningProfile& WithSigningParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetSigningParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters that are available for use by a code signing user.</p>
     */
    inline SigningProfile& AddSigningParameters(const Aws::String& key, const Aws::String& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters that are available for use by a code signing user.</p>
     */
    inline SigningProfile& AddSigningParameters(Aws::String&& key, const Aws::String& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters that are available for use by a code signing user.</p>
     */
    inline SigningProfile& AddSigningParameters(const Aws::String& key, Aws::String&& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters that are available for use by a code signing user.</p>
     */
    inline SigningProfile& AddSigningParameters(Aws::String&& key, Aws::String&& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters that are available for use by a code signing user.</p>
     */
    inline SigningProfile& AddSigningParameters(const char* key, Aws::String&& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters that are available for use by a code signing user.</p>
     */
    inline SigningProfile& AddSigningParameters(Aws::String&& key, const char* value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters that are available for use by a code signing user.</p>
     */
    inline SigningProfile& AddSigningParameters(const char* key, const char* value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, value); return *this; }


    /**
     * <p>The status of a code signing profile.</p>
     */
    inline const SigningProfileStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a code signing profile.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a code signing profile.</p>
     */
    inline void SetStatus(const SigningProfileStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a code signing profile.</p>
     */
    inline void SetStatus(SigningProfileStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a code signing profile.</p>
     */
    inline SigningProfile& WithStatus(const SigningProfileStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a code signing profile.</p>
     */
    inline SigningProfile& WithStatus(SigningProfileStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline SigningProfile& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline SigningProfile& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline SigningProfile& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline SigningProfile& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline SigningProfile& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline SigningProfile& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline SigningProfile& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline SigningProfile& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline SigningProfile& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline SigningProfile& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline SigningProfile& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline SigningProfile& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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

    SigningProfileStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
