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


    /**
     * <p>The name of the target signing profile.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>The name of the target signing profile.</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileName = value; }

    /**
     * <p>The name of the target signing profile.</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileName = std::move(value); }

    /**
     * <p>The name of the target signing profile.</p>
     */
    inline void SetProfileName(const char* value) { m_profileName.assign(value); }

    /**
     * <p>The name of the target signing profile.</p>
     */
    inline GetSigningProfileResult& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>The name of the target signing profile.</p>
     */
    inline GetSigningProfileResult& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the target signing profile.</p>
     */
    inline GetSigningProfileResult& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>The current version of the signing profile.</p>
     */
    inline const Aws::String& GetProfileVersion() const{ return m_profileVersion; }

    /**
     * <p>The current version of the signing profile.</p>
     */
    inline void SetProfileVersion(const Aws::String& value) { m_profileVersion = value; }

    /**
     * <p>The current version of the signing profile.</p>
     */
    inline void SetProfileVersion(Aws::String&& value) { m_profileVersion = std::move(value); }

    /**
     * <p>The current version of the signing profile.</p>
     */
    inline void SetProfileVersion(const char* value) { m_profileVersion.assign(value); }

    /**
     * <p>The current version of the signing profile.</p>
     */
    inline GetSigningProfileResult& WithProfileVersion(const Aws::String& value) { SetProfileVersion(value); return *this;}

    /**
     * <p>The current version of the signing profile.</p>
     */
    inline GetSigningProfileResult& WithProfileVersion(Aws::String&& value) { SetProfileVersion(std::move(value)); return *this;}

    /**
     * <p>The current version of the signing profile.</p>
     */
    inline GetSigningProfileResult& WithProfileVersion(const char* value) { SetProfileVersion(value); return *this;}


    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline const Aws::String& GetProfileVersionArn() const{ return m_profileVersionArn; }

    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline void SetProfileVersionArn(const Aws::String& value) { m_profileVersionArn = value; }

    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline void SetProfileVersionArn(Aws::String&& value) { m_profileVersionArn = std::move(value); }

    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline void SetProfileVersionArn(const char* value) { m_profileVersionArn.assign(value); }

    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline GetSigningProfileResult& WithProfileVersionArn(const Aws::String& value) { SetProfileVersionArn(value); return *this;}

    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline GetSigningProfileResult& WithProfileVersionArn(Aws::String&& value) { SetProfileVersionArn(std::move(value)); return *this;}

    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline GetSigningProfileResult& WithProfileVersionArn(const char* value) { SetProfileVersionArn(value); return *this;}


    
    inline const SigningProfileRevocationRecord& GetRevocationRecord() const{ return m_revocationRecord; }

    
    inline void SetRevocationRecord(const SigningProfileRevocationRecord& value) { m_revocationRecord = value; }

    
    inline void SetRevocationRecord(SigningProfileRevocationRecord&& value) { m_revocationRecord = std::move(value); }

    
    inline GetSigningProfileResult& WithRevocationRecord(const SigningProfileRevocationRecord& value) { SetRevocationRecord(value); return *this;}

    
    inline GetSigningProfileResult& WithRevocationRecord(SigningProfileRevocationRecord&& value) { SetRevocationRecord(std::move(value)); return *this;}


    /**
     * <p>The ARN of the certificate that the target profile uses for signing
     * operations.</p>
     */
    inline const SigningMaterial& GetSigningMaterial() const{ return m_signingMaterial; }

    /**
     * <p>The ARN of the certificate that the target profile uses for signing
     * operations.</p>
     */
    inline void SetSigningMaterial(const SigningMaterial& value) { m_signingMaterial = value; }

    /**
     * <p>The ARN of the certificate that the target profile uses for signing
     * operations.</p>
     */
    inline void SetSigningMaterial(SigningMaterial&& value) { m_signingMaterial = std::move(value); }

    /**
     * <p>The ARN of the certificate that the target profile uses for signing
     * operations.</p>
     */
    inline GetSigningProfileResult& WithSigningMaterial(const SigningMaterial& value) { SetSigningMaterial(value); return *this;}

    /**
     * <p>The ARN of the certificate that the target profile uses for signing
     * operations.</p>
     */
    inline GetSigningProfileResult& WithSigningMaterial(SigningMaterial&& value) { SetSigningMaterial(std::move(value)); return *this;}


    /**
     * <p>The ID of the platform that is used by the target signing profile.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }

    /**
     * <p>The ID of the platform that is used by the target signing profile.</p>
     */
    inline void SetPlatformId(const Aws::String& value) { m_platformId = value; }

    /**
     * <p>The ID of the platform that is used by the target signing profile.</p>
     */
    inline void SetPlatformId(Aws::String&& value) { m_platformId = std::move(value); }

    /**
     * <p>The ID of the platform that is used by the target signing profile.</p>
     */
    inline void SetPlatformId(const char* value) { m_platformId.assign(value); }

    /**
     * <p>The ID of the platform that is used by the target signing profile.</p>
     */
    inline GetSigningProfileResult& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}

    /**
     * <p>The ID of the platform that is used by the target signing profile.</p>
     */
    inline GetSigningProfileResult& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}

    /**
     * <p>The ID of the platform that is used by the target signing profile.</p>
     */
    inline GetSigningProfileResult& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}


    /**
     * <p>A human-readable name for the signing platform associated with the signing
     * profile.</p>
     */
    inline const Aws::String& GetPlatformDisplayName() const{ return m_platformDisplayName; }

    /**
     * <p>A human-readable name for the signing platform associated with the signing
     * profile.</p>
     */
    inline void SetPlatformDisplayName(const Aws::String& value) { m_platformDisplayName = value; }

    /**
     * <p>A human-readable name for the signing platform associated with the signing
     * profile.</p>
     */
    inline void SetPlatformDisplayName(Aws::String&& value) { m_platformDisplayName = std::move(value); }

    /**
     * <p>A human-readable name for the signing platform associated with the signing
     * profile.</p>
     */
    inline void SetPlatformDisplayName(const char* value) { m_platformDisplayName.assign(value); }

    /**
     * <p>A human-readable name for the signing platform associated with the signing
     * profile.</p>
     */
    inline GetSigningProfileResult& WithPlatformDisplayName(const Aws::String& value) { SetPlatformDisplayName(value); return *this;}

    /**
     * <p>A human-readable name for the signing platform associated with the signing
     * profile.</p>
     */
    inline GetSigningProfileResult& WithPlatformDisplayName(Aws::String&& value) { SetPlatformDisplayName(std::move(value)); return *this;}

    /**
     * <p>A human-readable name for the signing platform associated with the signing
     * profile.</p>
     */
    inline GetSigningProfileResult& WithPlatformDisplayName(const char* value) { SetPlatformDisplayName(value); return *this;}


    
    inline const SignatureValidityPeriod& GetSignatureValidityPeriod() const{ return m_signatureValidityPeriod; }

    
    inline void SetSignatureValidityPeriod(const SignatureValidityPeriod& value) { m_signatureValidityPeriod = value; }

    
    inline void SetSignatureValidityPeriod(SignatureValidityPeriod&& value) { m_signatureValidityPeriod = std::move(value); }

    
    inline GetSigningProfileResult& WithSignatureValidityPeriod(const SignatureValidityPeriod& value) { SetSignatureValidityPeriod(value); return *this;}

    
    inline GetSigningProfileResult& WithSignatureValidityPeriod(SignatureValidityPeriod&& value) { SetSignatureValidityPeriod(std::move(value)); return *this;}


    /**
     * <p>A list of overrides applied by the target signing profile for signing
     * operations.</p>
     */
    inline const SigningPlatformOverrides& GetOverrides() const{ return m_overrides; }

    /**
     * <p>A list of overrides applied by the target signing profile for signing
     * operations.</p>
     */
    inline void SetOverrides(const SigningPlatformOverrides& value) { m_overrides = value; }

    /**
     * <p>A list of overrides applied by the target signing profile for signing
     * operations.</p>
     */
    inline void SetOverrides(SigningPlatformOverrides&& value) { m_overrides = std::move(value); }

    /**
     * <p>A list of overrides applied by the target signing profile for signing
     * operations.</p>
     */
    inline GetSigningProfileResult& WithOverrides(const SigningPlatformOverrides& value) { SetOverrides(value); return *this;}

    /**
     * <p>A list of overrides applied by the target signing profile for signing
     * operations.</p>
     */
    inline GetSigningProfileResult& WithOverrides(SigningPlatformOverrides&& value) { SetOverrides(std::move(value)); return *this;}


    /**
     * <p>A map of key-value pairs for signing operations that is attached to the
     * target signing profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSigningParameters() const{ return m_signingParameters; }

    /**
     * <p>A map of key-value pairs for signing operations that is attached to the
     * target signing profile.</p>
     */
    inline void SetSigningParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_signingParameters = value; }

    /**
     * <p>A map of key-value pairs for signing operations that is attached to the
     * target signing profile.</p>
     */
    inline void SetSigningParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_signingParameters = std::move(value); }

    /**
     * <p>A map of key-value pairs for signing operations that is attached to the
     * target signing profile.</p>
     */
    inline GetSigningProfileResult& WithSigningParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetSigningParameters(value); return *this;}

    /**
     * <p>A map of key-value pairs for signing operations that is attached to the
     * target signing profile.</p>
     */
    inline GetSigningProfileResult& WithSigningParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetSigningParameters(std::move(value)); return *this;}

    /**
     * <p>A map of key-value pairs for signing operations that is attached to the
     * target signing profile.</p>
     */
    inline GetSigningProfileResult& AddSigningParameters(const Aws::String& key, const Aws::String& value) { m_signingParameters.emplace(key, value); return *this; }

    /**
     * <p>A map of key-value pairs for signing operations that is attached to the
     * target signing profile.</p>
     */
    inline GetSigningProfileResult& AddSigningParameters(Aws::String&& key, const Aws::String& value) { m_signingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs for signing operations that is attached to the
     * target signing profile.</p>
     */
    inline GetSigningProfileResult& AddSigningParameters(const Aws::String& key, Aws::String&& value) { m_signingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs for signing operations that is attached to the
     * target signing profile.</p>
     */
    inline GetSigningProfileResult& AddSigningParameters(Aws::String&& key, Aws::String&& value) { m_signingParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs for signing operations that is attached to the
     * target signing profile.</p>
     */
    inline GetSigningProfileResult& AddSigningParameters(const char* key, Aws::String&& value) { m_signingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of key-value pairs for signing operations that is attached to the
     * target signing profile.</p>
     */
    inline GetSigningProfileResult& AddSigningParameters(Aws::String&& key, const char* value) { m_signingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of key-value pairs for signing operations that is attached to the
     * target signing profile.</p>
     */
    inline GetSigningProfileResult& AddSigningParameters(const char* key, const char* value) { m_signingParameters.emplace(key, value); return *this; }


    /**
     * <p>The status of the target signing profile.</p>
     */
    inline const SigningProfileStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the target signing profile.</p>
     */
    inline void SetStatus(const SigningProfileStatus& value) { m_status = value; }

    /**
     * <p>The status of the target signing profile.</p>
     */
    inline void SetStatus(SigningProfileStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the target signing profile.</p>
     */
    inline GetSigningProfileResult& WithStatus(const SigningProfileStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the target signing profile.</p>
     */
    inline GetSigningProfileResult& WithStatus(SigningProfileStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Reason for the status of the target signing profile.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>Reason for the status of the target signing profile.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p>Reason for the status of the target signing profile.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p>Reason for the status of the target signing profile.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p>Reason for the status of the target signing profile.</p>
     */
    inline GetSigningProfileResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>Reason for the status of the target signing profile.</p>
     */
    inline GetSigningProfileResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>Reason for the status of the target signing profile.</p>
     */
    inline GetSigningProfileResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline GetSigningProfileResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline GetSigningProfileResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the signing profile.</p>
     */
    inline GetSigningProfileResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline GetSigningProfileResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline GetSigningProfileResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline GetSigningProfileResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline GetSigningProfileResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline GetSigningProfileResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline GetSigningProfileResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline GetSigningProfileResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline GetSigningProfileResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags associated with the signing profile.</p>
     */
    inline GetSigningProfileResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

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
  };

} // namespace Model
} // namespace signer
} // namespace Aws
