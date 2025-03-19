/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace signer
{
namespace Model
{

  /**
   */
  class GetRevocationStatusRequest : public SignerRequest
  {
  public:
    AWS_SIGNER_API GetRevocationStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRevocationStatus"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;

    AWS_SIGNER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The timestamp of the signature that validates the profile or job.</p>
     */
    inline const Aws::Utils::DateTime& GetSignatureTimestamp() const { return m_signatureTimestamp; }
    inline bool SignatureTimestampHasBeenSet() const { return m_signatureTimestampHasBeenSet; }
    template<typename SignatureTimestampT = Aws::Utils::DateTime>
    void SetSignatureTimestamp(SignatureTimestampT&& value) { m_signatureTimestampHasBeenSet = true; m_signatureTimestamp = std::forward<SignatureTimestampT>(value); }
    template<typename SignatureTimestampT = Aws::Utils::DateTime>
    GetRevocationStatusRequest& WithSignatureTimestamp(SignatureTimestampT&& value) { SetSignatureTimestamp(std::forward<SignatureTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a signing platform. </p>
     */
    inline const Aws::String& GetPlatformId() const { return m_platformId; }
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }
    template<typename PlatformIdT = Aws::String>
    void SetPlatformId(PlatformIdT&& value) { m_platformIdHasBeenSet = true; m_platformId = std::forward<PlatformIdT>(value); }
    template<typename PlatformIdT = Aws::String>
    GetRevocationStatusRequest& WithPlatformId(PlatformIdT&& value) { SetPlatformId(std::forward<PlatformIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of a signing profile.</p>
     */
    inline const Aws::String& GetProfileVersionArn() const { return m_profileVersionArn; }
    inline bool ProfileVersionArnHasBeenSet() const { return m_profileVersionArnHasBeenSet; }
    template<typename ProfileVersionArnT = Aws::String>
    void SetProfileVersionArn(ProfileVersionArnT&& value) { m_profileVersionArnHasBeenSet = true; m_profileVersionArn = std::forward<ProfileVersionArnT>(value); }
    template<typename ProfileVersionArnT = Aws::String>
    GetRevocationStatusRequest& WithProfileVersionArn(ProfileVersionArnT&& value) { SetProfileVersionArn(std::forward<ProfileVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a signing job.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    GetRevocationStatusRequest& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of composite signed hashes that identify certificates.</p> <p>A
     * certificate identifier consists of a subject certificate TBS hash (signed by the
     * parent CA) combined with a parent CA TBS hash (signed by the parent CA’s CA).
     * Root certificates are defined as their own CA.</p> <p>The following example
     * shows how to calculate a hash for this parameter using OpenSSL commands: </p>
     * <p> <code>openssl asn1parse -in childCert.pem -strparse 4 -out
     * childCert.tbs</code> </p> <p> <code>openssl sha384 &lt; childCert.tbs -binary
     * &gt; childCertTbsHash</code> </p> <p> <code>openssl asn1parse -in parentCert.pem
     * -strparse 4 -out parentCert.tbs</code> </p> <p> <code>openssl sha384 &lt;
     * parentCert.tbs -binary &gt; parentCertTbsHash xxd -p childCertTbsHash &gt;
     * certificateHash.hex xxd -p parentCertTbsHash &gt;&gt; certificateHash.hex</code>
     * </p> <p> <code>cat certificateHash.hex | tr -d '\n'</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetCertificateHashes() const { return m_certificateHashes; }
    inline bool CertificateHashesHasBeenSet() const { return m_certificateHashesHasBeenSet; }
    template<typename CertificateHashesT = Aws::Vector<Aws::String>>
    void SetCertificateHashes(CertificateHashesT&& value) { m_certificateHashesHasBeenSet = true; m_certificateHashes = std::forward<CertificateHashesT>(value); }
    template<typename CertificateHashesT = Aws::Vector<Aws::String>>
    GetRevocationStatusRequest& WithCertificateHashes(CertificateHashesT&& value) { SetCertificateHashes(std::forward<CertificateHashesT>(value)); return *this;}
    template<typename CertificateHashesT = Aws::String>
    GetRevocationStatusRequest& AddCertificateHashes(CertificateHashesT&& value) { m_certificateHashesHasBeenSet = true; m_certificateHashes.emplace_back(std::forward<CertificateHashesT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_signatureTimestamp{};
    bool m_signatureTimestampHasBeenSet = false;

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet = false;

    Aws::String m_profileVersionArn;
    bool m_profileVersionArnHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_certificateHashes;
    bool m_certificateHashesHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
