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
    AWS_SIGNER_API SigningJob() = default;
    AWS_SIGNER_API SigningJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the signing job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    SigningJob& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>Source</code> that contains information about a signing job's code
     * image source.</p>
     */
    inline const Source& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Source>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Source>
    SigningJob& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>SignedObject</code> structure that contains information about a
     * signing job's signed code image.</p>
     */
    inline const SignedObject& GetSignedObject() const { return m_signedObject; }
    inline bool SignedObjectHasBeenSet() const { return m_signedObjectHasBeenSet; }
    template<typename SignedObjectT = SignedObject>
    void SetSignedObject(SignedObjectT&& value) { m_signedObjectHasBeenSet = true; m_signedObject = std::forward<SignedObjectT>(value); }
    template<typename SignedObjectT = SignedObject>
    SigningJob& WithSignedObject(SignedObjectT&& value) { SetSignedObject(std::forward<SignedObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>SigningMaterial</code> object that contains the Amazon Resource Name
     * (ARN) of the certificate used for the signing job.</p>
     */
    inline const SigningMaterial& GetSigningMaterial() const { return m_signingMaterial; }
    inline bool SigningMaterialHasBeenSet() const { return m_signingMaterialHasBeenSet; }
    template<typename SigningMaterialT = SigningMaterial>
    void SetSigningMaterial(SigningMaterialT&& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = std::forward<SigningMaterialT>(value); }
    template<typename SigningMaterialT = SigningMaterial>
    SigningJob& WithSigningMaterial(SigningMaterialT&& value) { SetSigningMaterial(std::forward<SigningMaterialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the signing job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    SigningJob& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the signing job.</p>
     */
    inline SigningStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SigningStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SigningJob& WithStatus(SigningStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the signing job is revoked.</p>
     */
    inline bool GetIsRevoked() const { return m_isRevoked; }
    inline bool IsRevokedHasBeenSet() const { return m_isRevokedHasBeenSet; }
    inline void SetIsRevoked(bool value) { m_isRevokedHasBeenSet = true; m_isRevoked = value; }
    inline SigningJob& WithIsRevoked(bool value) { SetIsRevoked(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the signing profile that created a signing job.</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    SigningJob& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the signing profile that created a signing job.</p>
     */
    inline const Aws::String& GetProfileVersion() const { return m_profileVersion; }
    inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }
    template<typename ProfileVersionT = Aws::String>
    void SetProfileVersion(ProfileVersionT&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::forward<ProfileVersionT>(value); }
    template<typename ProfileVersionT = Aws::String>
    SigningJob& WithProfileVersion(ProfileVersionT&& value) { SetProfileVersion(std::forward<ProfileVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for a signing platform.</p>
     */
    inline const Aws::String& GetPlatformId() const { return m_platformId; }
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }
    template<typename PlatformIdT = Aws::String>
    void SetPlatformId(PlatformIdT&& value) { m_platformIdHasBeenSet = true; m_platformId = std::forward<PlatformIdT>(value); }
    template<typename PlatformIdT = Aws::String>
    SigningJob& WithPlatformId(PlatformIdT&& value) { SetPlatformId(std::forward<PlatformIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a signing platform.</p>
     */
    inline const Aws::String& GetPlatformDisplayName() const { return m_platformDisplayName; }
    inline bool PlatformDisplayNameHasBeenSet() const { return m_platformDisplayNameHasBeenSet; }
    template<typename PlatformDisplayNameT = Aws::String>
    void SetPlatformDisplayName(PlatformDisplayNameT&& value) { m_platformDisplayNameHasBeenSet = true; m_platformDisplayName = std::forward<PlatformDisplayNameT>(value); }
    template<typename PlatformDisplayNameT = Aws::String>
    SigningJob& WithPlatformDisplayName(PlatformDisplayNameT&& value) { SetPlatformDisplayName(std::forward<PlatformDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the signature of a signing job expires.</p>
     */
    inline const Aws::Utils::DateTime& GetSignatureExpiresAt() const { return m_signatureExpiresAt; }
    inline bool SignatureExpiresAtHasBeenSet() const { return m_signatureExpiresAtHasBeenSet; }
    template<typename SignatureExpiresAtT = Aws::Utils::DateTime>
    void SetSignatureExpiresAt(SignatureExpiresAtT&& value) { m_signatureExpiresAtHasBeenSet = true; m_signatureExpiresAt = std::forward<SignatureExpiresAtT>(value); }
    template<typename SignatureExpiresAtT = Aws::Utils::DateTime>
    SigningJob& WithSignatureExpiresAt(SignatureExpiresAtT&& value) { SetSignatureExpiresAt(std::forward<SignatureExpiresAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the job owner.</p>
     */
    inline const Aws::String& GetJobOwner() const { return m_jobOwner; }
    inline bool JobOwnerHasBeenSet() const { return m_jobOwnerHasBeenSet; }
    template<typename JobOwnerT = Aws::String>
    void SetJobOwner(JobOwnerT&& value) { m_jobOwnerHasBeenSet = true; m_jobOwner = std::forward<JobOwnerT>(value); }
    template<typename JobOwnerT = Aws::String>
    SigningJob& WithJobOwner(JobOwnerT&& value) { SetJobOwner(std::forward<JobOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the job invoker.</p>
     */
    inline const Aws::String& GetJobInvoker() const { return m_jobInvoker; }
    inline bool JobInvokerHasBeenSet() const { return m_jobInvokerHasBeenSet; }
    template<typename JobInvokerT = Aws::String>
    void SetJobInvoker(JobInvokerT&& value) { m_jobInvokerHasBeenSet = true; m_jobInvoker = std::forward<JobInvokerT>(value); }
    template<typename JobInvokerT = Aws::String>
    SigningJob& WithJobInvoker(JobInvokerT&& value) { SetJobInvoker(std::forward<JobInvokerT>(value)); return *this;}
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

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    SigningStatus m_status{SigningStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    bool m_isRevoked{false};
    bool m_isRevokedHasBeenSet = false;

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_profileVersion;
    bool m_profileVersionHasBeenSet = false;

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet = false;

    Aws::String m_platformDisplayName;
    bool m_platformDisplayNameHasBeenSet = false;

    Aws::Utils::DateTime m_signatureExpiresAt{};
    bool m_signatureExpiresAtHasBeenSet = false;

    Aws::String m_jobOwner;
    bool m_jobOwnerHasBeenSet = false;

    Aws::String m_jobInvoker;
    bool m_jobInvokerHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
