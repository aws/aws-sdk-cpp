/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/Source.h>
#include <aws/signer/model/SigningMaterial.h>
#include <aws/signer/model/SigningPlatformOverrides.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/signer/model/SigningStatus.h>
#include <aws/signer/model/SigningJobRevocationRecord.h>
#include <aws/signer/model/SignedObject.h>
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
  class DescribeSigningJobResult
  {
  public:
    AWS_SIGNER_API DescribeSigningJobResult() = default;
    AWS_SIGNER_API DescribeSigningJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API DescribeSigningJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the signing job on output.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    DescribeSigningJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object that contains the name of your S3 bucket or your raw code.</p>
     */
    inline const Source& GetSource() const { return m_source; }
    template<typename SourceT = Source>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Source>
    DescribeSigningJobResult& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of your code signing certificate.</p>
     */
    inline const SigningMaterial& GetSigningMaterial() const { return m_signingMaterial; }
    template<typename SigningMaterialT = SigningMaterial>
    void SetSigningMaterial(SigningMaterialT&& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = std::forward<SigningMaterialT>(value); }
    template<typename SigningMaterialT = SigningMaterial>
    DescribeSigningJobResult& WithSigningMaterial(SigningMaterialT&& value) { SetSigningMaterial(std::forward<SigningMaterialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The microcontroller platform to which your signed code image will be
     * distributed.</p>
     */
    inline const Aws::String& GetPlatformId() const { return m_platformId; }
    template<typename PlatformIdT = Aws::String>
    void SetPlatformId(PlatformIdT&& value) { m_platformIdHasBeenSet = true; m_platformId = std::forward<PlatformIdT>(value); }
    template<typename PlatformIdT = Aws::String>
    DescribeSigningJobResult& WithPlatformId(PlatformIdT&& value) { SetPlatformId(std::forward<PlatformIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable name for the signing platform associated with the signing
     * job.</p>
     */
    inline const Aws::String& GetPlatformDisplayName() const { return m_platformDisplayName; }
    template<typename PlatformDisplayNameT = Aws::String>
    void SetPlatformDisplayName(PlatformDisplayNameT&& value) { m_platformDisplayNameHasBeenSet = true; m_platformDisplayName = std::forward<PlatformDisplayNameT>(value); }
    template<typename PlatformDisplayNameT = Aws::String>
    DescribeSigningJobResult& WithPlatformDisplayName(PlatformDisplayNameT&& value) { SetPlatformDisplayName(std::forward<PlatformDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the profile that initiated the signing operation.</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    DescribeSigningJobResult& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the signing profile used to initiate the signing job.</p>
     */
    inline const Aws::String& GetProfileVersion() const { return m_profileVersion; }
    template<typename ProfileVersionT = Aws::String>
    void SetProfileVersion(ProfileVersionT&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::forward<ProfileVersionT>(value); }
    template<typename ProfileVersionT = Aws::String>
    DescribeSigningJobResult& WithProfileVersion(ProfileVersionT&& value) { SetProfileVersion(std::forward<ProfileVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of any overrides that were applied to the signing operation.</p>
     */
    inline const SigningPlatformOverrides& GetOverrides() const { return m_overrides; }
    template<typename OverridesT = SigningPlatformOverrides>
    void SetOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides = std::forward<OverridesT>(value); }
    template<typename OverridesT = SigningPlatformOverrides>
    DescribeSigningJobResult& WithOverrides(OverridesT&& value) { SetOverrides(std::forward<OverridesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map of user-assigned key-value pairs used during signing. These values
     * contain any information that you specified for use in your signing job. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSigningParameters() const { return m_signingParameters; }
    template<typename SigningParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetSigningParameters(SigningParametersT&& value) { m_signingParametersHasBeenSet = true; m_signingParameters = std::forward<SigningParametersT>(value); }
    template<typename SigningParametersT = Aws::Map<Aws::String, Aws::String>>
    DescribeSigningJobResult& WithSigningParameters(SigningParametersT&& value) { SetSigningParameters(std::forward<SigningParametersT>(value)); return *this;}
    template<typename SigningParametersKeyT = Aws::String, typename SigningParametersValueT = Aws::String>
    DescribeSigningJobResult& AddSigningParameters(SigningParametersKeyT&& key, SigningParametersValueT&& value) {
      m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::forward<SigningParametersKeyT>(key), std::forward<SigningParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Date and time that the signing job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeSigningJobResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time that the signing job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    void SetCompletedAt(CompletedAtT&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::forward<CompletedAtT>(value); }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    DescribeSigningJobResult& WithCompletedAt(CompletedAtT&& value) { SetCompletedAt(std::forward<CompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Thr expiration timestamp for the signature generated by the signing job.</p>
     */
    inline const Aws::Utils::DateTime& GetSignatureExpiresAt() const { return m_signatureExpiresAt; }
    template<typename SignatureExpiresAtT = Aws::Utils::DateTime>
    void SetSignatureExpiresAt(SignatureExpiresAtT&& value) { m_signatureExpiresAtHasBeenSet = true; m_signatureExpiresAt = std::forward<SignatureExpiresAtT>(value); }
    template<typename SignatureExpiresAtT = Aws::Utils::DateTime>
    DescribeSigningJobResult& WithSignatureExpiresAt(SignatureExpiresAtT&& value) { SetSignatureExpiresAt(std::forward<SignatureExpiresAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline const Aws::String& GetRequestedBy() const { return m_requestedBy; }
    template<typename RequestedByT = Aws::String>
    void SetRequestedBy(RequestedByT&& value) { m_requestedByHasBeenSet = true; m_requestedBy = std::forward<RequestedByT>(value); }
    template<typename RequestedByT = Aws::String>
    DescribeSigningJobResult& WithRequestedBy(RequestedByT&& value) { SetRequestedBy(std::forward<RequestedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the signing job.</p>
     */
    inline SigningStatus GetStatus() const { return m_status; }
    inline void SetStatus(SigningStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeSigningJobResult& WithStatus(SigningStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>String value that contains the status reason.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    DescribeSigningJobResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A revocation record if the signature generated by the signing job has been
     * revoked. Contains a timestamp and the ID of the IAM entity that revoked the
     * signature.</p>
     */
    inline const SigningJobRevocationRecord& GetRevocationRecord() const { return m_revocationRecord; }
    template<typename RevocationRecordT = SigningJobRevocationRecord>
    void SetRevocationRecord(RevocationRecordT&& value) { m_revocationRecordHasBeenSet = true; m_revocationRecord = std::forward<RevocationRecordT>(value); }
    template<typename RevocationRecordT = SigningJobRevocationRecord>
    DescribeSigningJobResult& WithRevocationRecord(RevocationRecordT&& value) { SetRevocationRecord(std::forward<RevocationRecordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the S3 bucket where the signed code image is saved by AWS Signer.</p>
     */
    inline const SignedObject& GetSignedObject() const { return m_signedObject; }
    template<typename SignedObjectT = SignedObject>
    void SetSignedObject(SignedObjectT&& value) { m_signedObjectHasBeenSet = true; m_signedObject = std::forward<SignedObjectT>(value); }
    template<typename SignedObjectT = SignedObject>
    DescribeSigningJobResult& WithSignedObject(SignedObjectT&& value) { SetSignedObject(std::forward<SignedObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the job owner.</p>
     */
    inline const Aws::String& GetJobOwner() const { return m_jobOwner; }
    template<typename JobOwnerT = Aws::String>
    void SetJobOwner(JobOwnerT&& value) { m_jobOwnerHasBeenSet = true; m_jobOwner = std::forward<JobOwnerT>(value); }
    template<typename JobOwnerT = Aws::String>
    DescribeSigningJobResult& WithJobOwner(JobOwnerT&& value) { SetJobOwner(std::forward<JobOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM entity that initiated the signing job.</p>
     */
    inline const Aws::String& GetJobInvoker() const { return m_jobInvoker; }
    template<typename JobInvokerT = Aws::String>
    void SetJobInvoker(JobInvokerT&& value) { m_jobInvokerHasBeenSet = true; m_jobInvoker = std::forward<JobInvokerT>(value); }
    template<typename JobInvokerT = Aws::String>
    DescribeSigningJobResult& WithJobInvoker(JobInvokerT&& value) { SetJobInvoker(std::forward<JobInvokerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSigningJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;

    SigningMaterial m_signingMaterial;
    bool m_signingMaterialHasBeenSet = false;

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet = false;

    Aws::String m_platformDisplayName;
    bool m_platformDisplayNameHasBeenSet = false;

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_profileVersion;
    bool m_profileVersionHasBeenSet = false;

    SigningPlatformOverrides m_overrides;
    bool m_overridesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_signingParameters;
    bool m_signingParametersHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt{};
    bool m_completedAtHasBeenSet = false;

    Aws::Utils::DateTime m_signatureExpiresAt{};
    bool m_signatureExpiresAtHasBeenSet = false;

    Aws::String m_requestedBy;
    bool m_requestedByHasBeenSet = false;

    SigningStatus m_status{SigningStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    SigningJobRevocationRecord m_revocationRecord;
    bool m_revocationRecordHasBeenSet = false;

    SignedObject m_signedObject;
    bool m_signedObjectHasBeenSet = false;

    Aws::String m_jobOwner;
    bool m_jobOwnerHasBeenSet = false;

    Aws::String m_jobInvoker;
    bool m_jobInvokerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
