/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signer-data/SignerDataRequest.h>
#include <aws/signer-data/SignerData_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace SignerData {
namespace Model {

/**
 * <p>Request structure for checking revocation status.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signer-data-2017-08-25/GetRevocationStatusRequest">AWS
 * API Reference</a></p>
 */
class GetRevocationStatusRequest : public SignerDataRequest {
 public:
  AWS_SIGNERDATA_API GetRevocationStatusRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRevocationStatus"; }

  AWS_SIGNERDATA_API Aws::String SerializePayload() const override;

  AWS_SIGNERDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The timestamp when the artifact was signed, in ISO 8601 format.</p>
   */
  inline const Aws::Utils::DateTime& GetSignatureTimestamp() const { return m_signatureTimestamp; }
  inline bool SignatureTimestampHasBeenSet() const { return m_signatureTimestampHasBeenSet; }
  template <typename SignatureTimestampT = Aws::Utils::DateTime>
  void SetSignatureTimestamp(SignatureTimestampT&& value) {
    m_signatureTimestampHasBeenSet = true;
    m_signatureTimestamp = std::forward<SignatureTimestampT>(value);
  }
  template <typename SignatureTimestampT = Aws::Utils::DateTime>
  GetRevocationStatusRequest& WithSignatureTimestamp(SignatureTimestampT&& value) {
    SetSignatureTimestamp(std::forward<SignatureTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The platform identifier for the signing platform used.</p>
   */
  inline const Aws::String& GetPlatformId() const { return m_platformId; }
  inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }
  template <typename PlatformIdT = Aws::String>
  void SetPlatformId(PlatformIdT&& value) {
    m_platformIdHasBeenSet = true;
    m_platformId = std::forward<PlatformIdT>(value);
  }
  template <typename PlatformIdT = Aws::String>
  GetRevocationStatusRequest& WithPlatformId(PlatformIdT&& value) {
    SetPlatformId(std::forward<PlatformIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the signing profile version used to sign the artifact.</p>
   */
  inline const Aws::String& GetProfileVersionArn() const { return m_profileVersionArn; }
  inline bool ProfileVersionArnHasBeenSet() const { return m_profileVersionArnHasBeenSet; }
  template <typename ProfileVersionArnT = Aws::String>
  void SetProfileVersionArn(ProfileVersionArnT&& value) {
    m_profileVersionArnHasBeenSet = true;
    m_profileVersionArn = std::forward<ProfileVersionArnT>(value);
  }
  template <typename ProfileVersionArnT = Aws::String>
  GetRevocationStatusRequest& WithProfileVersionArn(ProfileVersionArnT&& value) {
    SetProfileVersionArn(std::forward<ProfileVersionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the signing job that produced the signature.</p>
   */
  inline const Aws::String& GetJobArn() const { return m_jobArn; }
  inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
  template <typename JobArnT = Aws::String>
  void SetJobArn(JobArnT&& value) {
    m_jobArnHasBeenSet = true;
    m_jobArn = std::forward<JobArnT>(value);
  }
  template <typename JobArnT = Aws::String>
  GetRevocationStatusRequest& WithJobArn(JobArnT&& value) {
    SetJobArn(std::forward<JobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of certificate hashes to check for revocation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCertificateHashes() const { return m_certificateHashes; }
  inline bool CertificateHashesHasBeenSet() const { return m_certificateHashesHasBeenSet; }
  template <typename CertificateHashesT = Aws::Vector<Aws::String>>
  void SetCertificateHashes(CertificateHashesT&& value) {
    m_certificateHashesHasBeenSet = true;
    m_certificateHashes = std::forward<CertificateHashesT>(value);
  }
  template <typename CertificateHashesT = Aws::Vector<Aws::String>>
  GetRevocationStatusRequest& WithCertificateHashes(CertificateHashesT&& value) {
    SetCertificateHashes(std::forward<CertificateHashesT>(value));
    return *this;
  }
  template <typename CertificateHashesT = Aws::String>
  GetRevocationStatusRequest& AddCertificateHashes(CertificateHashesT&& value) {
    m_certificateHashesHasBeenSet = true;
    m_certificateHashes.emplace_back(std::forward<CertificateHashesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_signatureTimestamp{};

  Aws::String m_platformId;

  Aws::String m_profileVersionArn;

  Aws::String m_jobArn;

  Aws::Vector<Aws::String> m_certificateHashes;
  bool m_signatureTimestampHasBeenSet = false;
  bool m_platformIdHasBeenSet = false;
  bool m_profileVersionArnHasBeenSet = false;
  bool m_jobArnHasBeenSet = false;
  bool m_certificateHashesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SignerData
}  // namespace Aws
