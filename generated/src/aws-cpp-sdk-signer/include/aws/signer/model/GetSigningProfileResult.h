/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/SigningProfileRevocationRecord.h>
#include <aws/signer/model/SigningMaterial.h>
#include <aws/signer/model/SignatureValidityPeriod.h>
#include <aws/signer/model/SigningPlatformOverrides.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/signer/model/SigningProfileStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace signer
{
namespace Model
{
  class GetSigningProfileResult
  {
  public:
    AWS_SIGNER_API GetSigningProfileResult() = default;
    AWS_SIGNER_API GetSigningProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API GetSigningProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the target signing profile.</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    GetSigningProfileResult& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the signing profile.</p>
     */
    inline const Aws::String& GetProfileVersion() const { return m_profileVersion; }
    template<typename ProfileVersionT = Aws::String>
    void SetProfileVersion(ProfileVersionT&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::forward<ProfileVersionT>(value); }
    template<typename ProfileVersionT = Aws::String>
    GetSigningProfileResult& WithProfileVersion(ProfileVersionT&& value) { SetProfileVersion(std::forward<ProfileVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline const Aws::String& GetProfileVersionArn() const { return m_profileVersionArn; }
    template<typename ProfileVersionArnT = Aws::String>
    void SetProfileVersionArn(ProfileVersionArnT&& value) { m_profileVersionArnHasBeenSet = true; m_profileVersionArn = std::forward<ProfileVersionArnT>(value); }
    template<typename ProfileVersionArnT = Aws::String>
    GetSigningProfileResult& WithProfileVersionArn(ProfileVersionArnT&& value) { SetProfileVersionArn(std::forward<ProfileVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SigningProfileRevocationRecord& GetRevocationRecord() const { return m_revocationRecord; }
    template<typename RevocationRecordT = SigningProfileRevocationRecord>
    void SetRevocationRecord(RevocationRecordT&& value) { m_revocationRecordHasBeenSet = true; m_revocationRecord = std::forward<RevocationRecordT>(value); }
    template<typename RevocationRecordT = SigningProfileRevocationRecord>
    GetSigningProfileResult& WithRevocationRecord(RevocationRecordT&& value) { SetRevocationRecord(std::forward<RevocationRecordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the certificate that the target profile uses for signing
     * operations.</p>
     */
    inline const SigningMaterial& GetSigningMaterial() const { return m_signingMaterial; }
    template<typename SigningMaterialT = SigningMaterial>
    void SetSigningMaterial(SigningMaterialT&& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = std::forward<SigningMaterialT>(value); }
    template<typename SigningMaterialT = SigningMaterial>
    GetSigningProfileResult& WithSigningMaterial(SigningMaterialT&& value) { SetSigningMaterial(std::forward<SigningMaterialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the platform that is used by the target signing profile.</p>
     */
    inline const Aws::String& GetPlatformId() const { return m_platformId; }
    template<typename PlatformIdT = Aws::String>
    void SetPlatformId(PlatformIdT&& value) { m_platformIdHasBeenSet = true; m_platformId = std::forward<PlatformIdT>(value); }
    template<typename PlatformIdT = Aws::String>
    GetSigningProfileResult& WithPlatformId(PlatformIdT&& value) { SetPlatformId(std::forward<PlatformIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable name for the signing platform associated with the signing
     * profile.</p>
     */
    inline const Aws::String& GetPlatformDisplayName() const { return m_platformDisplayName; }
    template<typename PlatformDisplayNameT = Aws::String>
    void SetPlatformDisplayName(PlatformDisplayNameT&& value) { m_platformDisplayNameHasBeenSet = true; m_platformDisplayName = std::forward<PlatformDisplayNameT>(value); }
    template<typename PlatformDisplayNameT = Aws::String>
    GetSigningProfileResult& WithPlatformDisplayName(PlatformDisplayNameT&& value) { SetPlatformDisplayName(std::forward<PlatformDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SignatureValidityPeriod& GetSignatureValidityPeriod() const { return m_signatureValidityPeriod; }
    template<typename SignatureValidityPeriodT = SignatureValidityPeriod>
    void SetSignatureValidityPeriod(SignatureValidityPeriodT&& value) { m_signatureValidityPeriodHasBeenSet = true; m_signatureValidityPeriod = std::forward<SignatureValidityPeriodT>(value); }
    template<typename SignatureValidityPeriodT = SignatureValidityPeriod>
    GetSigningProfileResult& WithSignatureValidityPeriod(SignatureValidityPeriodT&& value) { SetSignatureValidityPeriod(std::forward<SignatureValidityPeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of overrides applied by the target signing profile for signing
     * operations.</p>
     */
    inline const SigningPlatformOverrides& GetOverrides() const { return m_overrides; }
    template<typename OverridesT = SigningPlatformOverrides>
    void SetOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides = std::forward<OverridesT>(value); }
    template<typename OverridesT = SigningPlatformOverrides>
    GetSigningProfileResult& WithOverrides(OverridesT&& value) { SetOverrides(std::forward<OverridesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs for signing operations that is attached to the
     * target signing profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSigningParameters() const { return m_signingParameters; }
    template<typename SigningParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetSigningParameters(SigningParametersT&& value) { m_signingParametersHasBeenSet = true; m_signingParameters = std::forward<SigningParametersT>(value); }
    template<typename SigningParametersT = Aws::Map<Aws::String, Aws::String>>
    GetSigningProfileResult& WithSigningParameters(SigningParametersT&& value) { SetSigningParameters(std::forward<SigningParametersT>(value)); return *this;}
    template<typename SigningParametersKeyT = Aws::String, typename SigningParametersValueT = Aws::String>
    GetSigningProfileResult& AddSigningParameters(SigningParametersKeyT&& key, SigningParametersValueT&& value) {
      m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::forward<SigningParametersKeyT>(key), std::forward<SigningParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the target signing profile.</p>
     */
    inline SigningProfileStatus GetStatus() const { return m_status; }
    inline void SetStatus(SigningProfileStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetSigningProfileResult& WithStatus(SigningProfileStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason for the status of the target signing profile.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    GetSigningProfileResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetSigningProfileResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetSigningProfileResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetSigningProfileResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSigningProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_profileVersion;
    bool m_profileVersionHasBeenSet = false;

    Aws::String m_profileVersionArn;
    bool m_profileVersionArnHasBeenSet = false;

    SigningProfileRevocationRecord m_revocationRecord;
    bool m_revocationRecordHasBeenSet = false;

    SigningMaterial m_signingMaterial;
    bool m_signingMaterialHasBeenSet = false;

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet = false;

    Aws::String m_platformDisplayName;
    bool m_platformDisplayNameHasBeenSet = false;

    SignatureValidityPeriod m_signatureValidityPeriod;
    bool m_signatureValidityPeriodHasBeenSet = false;

    SigningPlatformOverrides m_overrides;
    bool m_overridesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_signingParameters;
    bool m_signingParametersHasBeenSet = false;

    SigningProfileStatus m_status{SigningProfileStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
