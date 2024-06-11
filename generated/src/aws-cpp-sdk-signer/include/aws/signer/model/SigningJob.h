/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/Source.h>
#include <aws/signer/model/SignedObject.h>
#include <aws/signer/model/SigningMaterial.h>
#include <aws/core/utils/DateTime.h>
#include <aws/signer/model/SigningStatus.h>
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
   * <p>Contains information about a signing job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningJob">AWS
   * API Reference</a></p>
   */
  class SigningJob
  {
  public:
    AWS_SIGNER_API SigningJob();
    AWS_SIGNER_API SigningJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the signing job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline SigningJob& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline SigningJob& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline SigningJob& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>Source</code> that contains information about a signing job's code
     * image source.</p>
     */
    inline const Source& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline SigningJob& WithSource(const Source& value) { SetSource(value); return *this;}
    inline SigningJob& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>SignedObject</code> structure that contains information about a
     * signing job's signed code image.</p>
     */
    inline const SignedObject& GetSignedObject() const{ return m_signedObject; }
    inline bool SignedObjectHasBeenSet() const { return m_signedObjectHasBeenSet; }
    inline void SetSignedObject(const SignedObject& value) { m_signedObjectHasBeenSet = true; m_signedObject = value; }
    inline void SetSignedObject(SignedObject&& value) { m_signedObjectHasBeenSet = true; m_signedObject = std::move(value); }
    inline SigningJob& WithSignedObject(const SignedObject& value) { SetSignedObject(value); return *this;}
    inline SigningJob& WithSignedObject(SignedObject&& value) { SetSignedObject(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>SigningMaterial</code> object that contains the Amazon Resource Name
     * (ARN) of the certificate used for the signing job.</p>
     */
    inline const SigningMaterial& GetSigningMaterial() const{ return m_signingMaterial; }
    inline bool SigningMaterialHasBeenSet() const { return m_signingMaterialHasBeenSet; }
    inline void SetSigningMaterial(const SigningMaterial& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = value; }
    inline void SetSigningMaterial(SigningMaterial&& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = std::move(value); }
    inline SigningJob& WithSigningMaterial(const SigningMaterial& value) { SetSigningMaterial(value); return *this;}
    inline SigningJob& WithSigningMaterial(SigningMaterial&& value) { SetSigningMaterial(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the signing job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline SigningJob& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline SigningJob& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the signing job.</p>
     */
    inline const SigningStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SigningStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SigningStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SigningJob& WithStatus(const SigningStatus& value) { SetStatus(value); return *this;}
    inline SigningJob& WithStatus(SigningStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the signing job is revoked.</p>
     */
    inline bool GetIsRevoked() const{ return m_isRevoked; }
    inline bool IsRevokedHasBeenSet() const { return m_isRevokedHasBeenSet; }
    inline void SetIsRevoked(bool value) { m_isRevokedHasBeenSet = true; m_isRevoked = value; }
    inline SigningJob& WithIsRevoked(bool value) { SetIsRevoked(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the signing profile that created a signing job.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }
    inline SigningJob& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}
    inline SigningJob& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}
    inline SigningJob& WithProfileName(const char* value) { SetProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the signing profile that created a signing job.</p>
     */
    inline const Aws::String& GetProfileVersion() const{ return m_profileVersion; }
    inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }
    inline void SetProfileVersion(const Aws::String& value) { m_profileVersionHasBeenSet = true; m_profileVersion = value; }
    inline void SetProfileVersion(Aws::String&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::move(value); }
    inline void SetProfileVersion(const char* value) { m_profileVersionHasBeenSet = true; m_profileVersion.assign(value); }
    inline SigningJob& WithProfileVersion(const Aws::String& value) { SetProfileVersion(value); return *this;}
    inline SigningJob& WithProfileVersion(Aws::String&& value) { SetProfileVersion(std::move(value)); return *this;}
    inline SigningJob& WithProfileVersion(const char* value) { SetProfileVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for a signing platform.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }
    inline void SetPlatformId(const Aws::String& value) { m_platformIdHasBeenSet = true; m_platformId = value; }
    inline void SetPlatformId(Aws::String&& value) { m_platformIdHasBeenSet = true; m_platformId = std::move(value); }
    inline void SetPlatformId(const char* value) { m_platformIdHasBeenSet = true; m_platformId.assign(value); }
    inline SigningJob& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}
    inline SigningJob& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}
    inline SigningJob& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a signing platform.</p>
     */
    inline const Aws::String& GetPlatformDisplayName() const{ return m_platformDisplayName; }
    inline bool PlatformDisplayNameHasBeenSet() const { return m_platformDisplayNameHasBeenSet; }
    inline void SetPlatformDisplayName(const Aws::String& value) { m_platformDisplayNameHasBeenSet = true; m_platformDisplayName = value; }
    inline void SetPlatformDisplayName(Aws::String&& value) { m_platformDisplayNameHasBeenSet = true; m_platformDisplayName = std::move(value); }
    inline void SetPlatformDisplayName(const char* value) { m_platformDisplayNameHasBeenSet = true; m_platformDisplayName.assign(value); }
    inline SigningJob& WithPlatformDisplayName(const Aws::String& value) { SetPlatformDisplayName(value); return *this;}
    inline SigningJob& WithPlatformDisplayName(Aws::String&& value) { SetPlatformDisplayName(std::move(value)); return *this;}
    inline SigningJob& WithPlatformDisplayName(const char* value) { SetPlatformDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the signature of a signing job expires.</p>
     */
    inline const Aws::Utils::DateTime& GetSignatureExpiresAt() const{ return m_signatureExpiresAt; }
    inline bool SignatureExpiresAtHasBeenSet() const { return m_signatureExpiresAtHasBeenSet; }
    inline void SetSignatureExpiresAt(const Aws::Utils::DateTime& value) { m_signatureExpiresAtHasBeenSet = true; m_signatureExpiresAt = value; }
    inline void SetSignatureExpiresAt(Aws::Utils::DateTime&& value) { m_signatureExpiresAtHasBeenSet = true; m_signatureExpiresAt = std::move(value); }
    inline SigningJob& WithSignatureExpiresAt(const Aws::Utils::DateTime& value) { SetSignatureExpiresAt(value); return *this;}
    inline SigningJob& WithSignatureExpiresAt(Aws::Utils::DateTime&& value) { SetSignatureExpiresAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the job owner.</p>
     */
    inline const Aws::String& GetJobOwner() const{ return m_jobOwner; }
    inline bool JobOwnerHasBeenSet() const { return m_jobOwnerHasBeenSet; }
    inline void SetJobOwner(const Aws::String& value) { m_jobOwnerHasBeenSet = true; m_jobOwner = value; }
    inline void SetJobOwner(Aws::String&& value) { m_jobOwnerHasBeenSet = true; m_jobOwner = std::move(value); }
    inline void SetJobOwner(const char* value) { m_jobOwnerHasBeenSet = true; m_jobOwner.assign(value); }
    inline SigningJob& WithJobOwner(const Aws::String& value) { SetJobOwner(value); return *this;}
    inline SigningJob& WithJobOwner(Aws::String&& value) { SetJobOwner(std::move(value)); return *this;}
    inline SigningJob& WithJobOwner(const char* value) { SetJobOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the job invoker.</p>
     */
    inline const Aws::String& GetJobInvoker() const{ return m_jobInvoker; }
    inline bool JobInvokerHasBeenSet() const { return m_jobInvokerHasBeenSet; }
    inline void SetJobInvoker(const Aws::String& value) { m_jobInvokerHasBeenSet = true; m_jobInvoker = value; }
    inline void SetJobInvoker(Aws::String&& value) { m_jobInvokerHasBeenSet = true; m_jobInvoker = std::move(value); }
    inline void SetJobInvoker(const char* value) { m_jobInvokerHasBeenSet = true; m_jobInvoker.assign(value); }
    inline SigningJob& WithJobInvoker(const Aws::String& value) { SetJobInvoker(value); return *this;}
    inline SigningJob& WithJobInvoker(Aws::String&& value) { SetJobInvoker(std::move(value)); return *this;}
    inline SigningJob& WithJobInvoker(const char* value) { SetJobInvoker(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;

    SignedObject m_signedObject;
    bool m_signedObjectHasBeenSet = false;

    SigningMaterial m_signingMaterial;
    bool m_signingMaterialHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    SigningStatus m_status;
    bool m_statusHasBeenSet = false;

    bool m_isRevoked;
    bool m_isRevokedHasBeenSet = false;

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_profileVersion;
    bool m_profileVersionHasBeenSet = false;

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet = false;

    Aws::String m_platformDisplayName;
    bool m_platformDisplayNameHasBeenSet = false;

    Aws::Utils::DateTime m_signatureExpiresAt;
    bool m_signatureExpiresAtHasBeenSet = false;

    Aws::String m_jobOwner;
    bool m_jobOwnerHasBeenSet = false;

    Aws::String m_jobInvoker;
    bool m_jobInvokerHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
