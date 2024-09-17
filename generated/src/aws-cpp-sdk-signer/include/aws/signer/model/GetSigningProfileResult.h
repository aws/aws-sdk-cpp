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
    AWS_SIGNER_API GetSigningProfileResult();
    AWS_SIGNER_API GetSigningProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API GetSigningProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the target signing profile.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }
    inline void SetProfileName(const Aws::String& value) { m_profileName = value; }
    inline void SetProfileName(Aws::String&& value) { m_profileName = std::move(value); }
    inline void SetProfileName(const char* value) { m_profileName.assign(value); }
    inline GetSigningProfileResult& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}
    inline GetSigningProfileResult& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}
    inline GetSigningProfileResult& WithProfileName(const char* value) { SetProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the signing profile.</p>
     */
    inline const Aws::String& GetProfileVersion() const{ return m_profileVersion; }
    inline void SetProfileVersion(const Aws::String& value) { m_profileVersion = value; }
    inline void SetProfileVersion(Aws::String&& value) { m_profileVersion = std::move(value); }
    inline void SetProfileVersion(const char* value) { m_profileVersion.assign(value); }
    inline GetSigningProfileResult& WithProfileVersion(const Aws::String& value) { SetProfileVersion(value); return *this;}
    inline GetSigningProfileResult& WithProfileVersion(Aws::String&& value) { SetProfileVersion(std::move(value)); return *this;}
    inline GetSigningProfileResult& WithProfileVersion(const char* value) { SetProfileVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline const Aws::String& GetProfileVersionArn() const{ return m_profileVersionArn; }
    inline void SetProfileVersionArn(const Aws::String& value) { m_profileVersionArn = value; }
    inline void SetProfileVersionArn(Aws::String&& value) { m_profileVersionArn = std::move(value); }
    inline void SetProfileVersionArn(const char* value) { m_profileVersionArn.assign(value); }
    inline GetSigningProfileResult& WithProfileVersionArn(const Aws::String& value) { SetProfileVersionArn(value); return *this;}
    inline GetSigningProfileResult& WithProfileVersionArn(Aws::String&& value) { SetProfileVersionArn(std::move(value)); return *this;}
    inline GetSigningProfileResult& WithProfileVersionArn(const char* value) { SetProfileVersionArn(value); return *this;}
    ///@}

    ///@{
    
    inline const SigningProfileRevocationRecord& GetRevocationRecord() const{ return m_revocationRecord; }
    inline void SetRevocationRecord(const SigningProfileRevocationRecord& value) { m_revocationRecord = value; }
    inline void SetRevocationRecord(SigningProfileRevocationRecord&& value) { m_revocationRecord = std::move(value); }
    inline GetSigningProfileResult& WithRevocationRecord(const SigningProfileRevocationRecord& value) { SetRevocationRecord(value); return *this;}
    inline GetSigningProfileResult& WithRevocationRecord(SigningProfileRevocationRecord&& value) { SetRevocationRecord(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the certificate that the target profile uses for signing
     * operations.</p>
     */
    inline const SigningMaterial& GetSigningMaterial() const{ return m_signingMaterial; }
    inline void SetSigningMaterial(const SigningMaterial& value) { m_signingMaterial = value; }
    inline void SetSigningMaterial(SigningMaterial&& value) { m_signingMaterial = std::move(value); }
    inline GetSigningProfileResult& WithSigningMaterial(const SigningMaterial& value) { SetSigningMaterial(value); return *this;}
    inline GetSigningProfileResult& WithSigningMaterial(SigningMaterial&& value) { SetSigningMaterial(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the platform that is used by the target signing profile.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }
    inline void SetPlatformId(const Aws::String& value) { m_platformId = value; }
    inline void SetPlatformId(Aws::String&& value) { m_platformId = std::move(value); }
    inline void SetPlatformId(const char* value) { m_platformId.assign(value); }
    inline GetSigningProfileResult& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}
    inline GetSigningProfileResult& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}
    inline GetSigningProfileResult& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable name for the signing platform associated with the signing
     * profile.</p>
     */
    inline const Aws::String& GetPlatformDisplayName() const{ return m_platformDisplayName; }
    inline void SetPlatformDisplayName(const Aws::String& value) { m_platformDisplayName = value; }
    inline void SetPlatformDisplayName(Aws::String&& value) { m_platformDisplayName = std::move(value); }
    inline void SetPlatformDisplayName(const char* value) { m_platformDisplayName.assign(value); }
    inline GetSigningProfileResult& WithPlatformDisplayName(const Aws::String& value) { SetPlatformDisplayName(value); return *this;}
    inline GetSigningProfileResult& WithPlatformDisplayName(Aws::String&& value) { SetPlatformDisplayName(std::move(value)); return *this;}
    inline GetSigningProfileResult& WithPlatformDisplayName(const char* value) { SetPlatformDisplayName(value); return *this;}
    ///@}

    ///@{
    
    inline const SignatureValidityPeriod& GetSignatureValidityPeriod() const{ return m_signatureValidityPeriod; }
    inline void SetSignatureValidityPeriod(const SignatureValidityPeriod& value) { m_signatureValidityPeriod = value; }
    inline void SetSignatureValidityPeriod(SignatureValidityPeriod&& value) { m_signatureValidityPeriod = std::move(value); }
    inline GetSigningProfileResult& WithSignatureValidityPeriod(const SignatureValidityPeriod& value) { SetSignatureValidityPeriod(value); return *this;}
    inline GetSigningProfileResult& WithSignatureValidityPeriod(SignatureValidityPeriod&& value) { SetSignatureValidityPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of overrides applied by the target signing profile for signing
     * operations.</p>
     */
    inline const SigningPlatformOverrides& GetOverrides() const{ return m_overrides; }
    inline void SetOverrides(const SigningPlatformOverrides& value) { m_overrides = value; }
    inline void SetOverrides(SigningPlatformOverrides&& value) { m_overrides = std::move(value); }
    inline GetSigningProfileResult& WithOverrides(const SigningPlatformOverrides& value) { SetOverrides(value); return *this;}
    inline GetSigningProfileResult& WithOverrides(SigningPlatformOverrides&& value) { SetOverrides(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs for signing operations that is attached to the
     * target signing profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSigningParameters() const{ return m_signingParameters; }
    inline void SetSigningParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_signingParameters = value; }
    inline void SetSigningParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_signingParameters = std::move(value); }
    inline GetSigningProfileResult& WithSigningParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetSigningParameters(value); return *this;}
    inline GetSigningProfileResult& WithSigningParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetSigningParameters(std::move(value)); return *this;}
    inline GetSigningProfileResult& AddSigningParameters(const Aws::String& key, const Aws::String& value) { m_signingParameters.emplace(key, value); return *this; }
    inline GetSigningProfileResult& AddSigningParameters(Aws::String&& key, const Aws::String& value) { m_signingParameters.emplace(std::move(key), value); return *this; }
    inline GetSigningProfileResult& AddSigningParameters(const Aws::String& key, Aws::String&& value) { m_signingParameters.emplace(key, std::move(value)); return *this; }
    inline GetSigningProfileResult& AddSigningParameters(Aws::String&& key, Aws::String&& value) { m_signingParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline GetSigningProfileResult& AddSigningParameters(const char* key, Aws::String&& value) { m_signingParameters.emplace(key, std::move(value)); return *this; }
    inline GetSigningProfileResult& AddSigningParameters(Aws::String&& key, const char* value) { m_signingParameters.emplace(std::move(key), value); return *this; }
    inline GetSigningProfileResult& AddSigningParameters(const char* key, const char* value) { m_signingParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the target signing profile.</p>
     */
    inline const SigningProfileStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SigningProfileStatus& value) { m_status = value; }
    inline void SetStatus(SigningProfileStatus&& value) { m_status = std::move(value); }
    inline GetSigningProfileResult& WithStatus(const SigningProfileStatus& value) { SetStatus(value); return *this;}
    inline GetSigningProfileResult& WithStatus(SigningProfileStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason for the status of the target signing profile.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline GetSigningProfileResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline GetSigningProfileResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline GetSigningProfileResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetSigningProfileResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetSigningProfileResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetSigningProfileResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetSigningProfileResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetSigningProfileResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetSigningProfileResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetSigningProfileResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetSigningProfileResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetSigningProfileResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetSigningProfileResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetSigningProfileResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetSigningProfileResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSigningProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSigningProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSigningProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_profileName;

    Aws::String m_profileVersion;

    Aws::String m_profileVersionArn;

    SigningProfileRevocationRecord m_revocationRecord;

    SigningMaterial m_signingMaterial;

    Aws::String m_platformId;

    Aws::String m_platformDisplayName;

    SignatureValidityPeriod m_signatureValidityPeriod;

    SigningPlatformOverrides m_overrides;

    Aws::Map<Aws::String, Aws::String> m_signingParameters;

    SigningProfileStatus m_status;

    Aws::String m_statusReason;

    Aws::String m_arn;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
