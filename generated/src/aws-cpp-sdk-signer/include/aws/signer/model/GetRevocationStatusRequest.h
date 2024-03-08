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
    AWS_SIGNER_API GetRevocationStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRevocationStatus"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;

    AWS_SIGNER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The timestamp of the signature that validates the profile or job.</p>
     */
    inline const Aws::Utils::DateTime& GetSignatureTimestamp() const{ return m_signatureTimestamp; }

    /**
     * <p>The timestamp of the signature that validates the profile or job.</p>
     */
    inline bool SignatureTimestampHasBeenSet() const { return m_signatureTimestampHasBeenSet; }

    /**
     * <p>The timestamp of the signature that validates the profile or job.</p>
     */
    inline void SetSignatureTimestamp(const Aws::Utils::DateTime& value) { m_signatureTimestampHasBeenSet = true; m_signatureTimestamp = value; }

    /**
     * <p>The timestamp of the signature that validates the profile or job.</p>
     */
    inline void SetSignatureTimestamp(Aws::Utils::DateTime&& value) { m_signatureTimestampHasBeenSet = true; m_signatureTimestamp = std::move(value); }

    /**
     * <p>The timestamp of the signature that validates the profile or job.</p>
     */
    inline GetRevocationStatusRequest& WithSignatureTimestamp(const Aws::Utils::DateTime& value) { SetSignatureTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the signature that validates the profile or job.</p>
     */
    inline GetRevocationStatusRequest& WithSignatureTimestamp(Aws::Utils::DateTime&& value) { SetSignatureTimestamp(std::move(value)); return *this;}


    /**
     * <p>The ID of a signing platform. </p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }

    /**
     * <p>The ID of a signing platform. </p>
     */
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }

    /**
     * <p>The ID of a signing platform. </p>
     */
    inline void SetPlatformId(const Aws::String& value) { m_platformIdHasBeenSet = true; m_platformId = value; }

    /**
     * <p>The ID of a signing platform. </p>
     */
    inline void SetPlatformId(Aws::String&& value) { m_platformIdHasBeenSet = true; m_platformId = std::move(value); }

    /**
     * <p>The ID of a signing platform. </p>
     */
    inline void SetPlatformId(const char* value) { m_platformIdHasBeenSet = true; m_platformId.assign(value); }

    /**
     * <p>The ID of a signing platform. </p>
     */
    inline GetRevocationStatusRequest& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}

    /**
     * <p>The ID of a signing platform. </p>
     */
    inline GetRevocationStatusRequest& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}

    /**
     * <p>The ID of a signing platform. </p>
     */
    inline GetRevocationStatusRequest& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}


    /**
     * <p>The version of a signing profile.</p>
     */
    inline const Aws::String& GetProfileVersionArn() const{ return m_profileVersionArn; }

    /**
     * <p>The version of a signing profile.</p>
     */
    inline bool ProfileVersionArnHasBeenSet() const { return m_profileVersionArnHasBeenSet; }

    /**
     * <p>The version of a signing profile.</p>
     */
    inline void SetProfileVersionArn(const Aws::String& value) { m_profileVersionArnHasBeenSet = true; m_profileVersionArn = value; }

    /**
     * <p>The version of a signing profile.</p>
     */
    inline void SetProfileVersionArn(Aws::String&& value) { m_profileVersionArnHasBeenSet = true; m_profileVersionArn = std::move(value); }

    /**
     * <p>The version of a signing profile.</p>
     */
    inline void SetProfileVersionArn(const char* value) { m_profileVersionArnHasBeenSet = true; m_profileVersionArn.assign(value); }

    /**
     * <p>The version of a signing profile.</p>
     */
    inline GetRevocationStatusRequest& WithProfileVersionArn(const Aws::String& value) { SetProfileVersionArn(value); return *this;}

    /**
     * <p>The version of a signing profile.</p>
     */
    inline GetRevocationStatusRequest& WithProfileVersionArn(Aws::String&& value) { SetProfileVersionArn(std::move(value)); return *this;}

    /**
     * <p>The version of a signing profile.</p>
     */
    inline GetRevocationStatusRequest& WithProfileVersionArn(const char* value) { SetProfileVersionArn(value); return *this;}


    /**
     * <p>The ARN of a signing job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The ARN of a signing job.</p>
     */
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }

    /**
     * <p>The ARN of a signing job.</p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }

    /**
     * <p>The ARN of a signing job.</p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }

    /**
     * <p>The ARN of a signing job.</p>
     */
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }

    /**
     * <p>The ARN of a signing job.</p>
     */
    inline GetRevocationStatusRequest& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The ARN of a signing job.</p>
     */
    inline GetRevocationStatusRequest& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a signing job.</p>
     */
    inline GetRevocationStatusRequest& WithJobArn(const char* value) { SetJobArn(value); return *this;}


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
    inline const Aws::Vector<Aws::String>& GetCertificateHashes() const{ return m_certificateHashes; }

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
    inline bool CertificateHashesHasBeenSet() const { return m_certificateHashesHasBeenSet; }

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
    inline void SetCertificateHashes(const Aws::Vector<Aws::String>& value) { m_certificateHashesHasBeenSet = true; m_certificateHashes = value; }

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
    inline void SetCertificateHashes(Aws::Vector<Aws::String>&& value) { m_certificateHashesHasBeenSet = true; m_certificateHashes = std::move(value); }

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
    inline GetRevocationStatusRequest& WithCertificateHashes(const Aws::Vector<Aws::String>& value) { SetCertificateHashes(value); return *this;}

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
    inline GetRevocationStatusRequest& WithCertificateHashes(Aws::Vector<Aws::String>&& value) { SetCertificateHashes(std::move(value)); return *this;}

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
    inline GetRevocationStatusRequest& AddCertificateHashes(const Aws::String& value) { m_certificateHashesHasBeenSet = true; m_certificateHashes.push_back(value); return *this; }

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
    inline GetRevocationStatusRequest& AddCertificateHashes(Aws::String&& value) { m_certificateHashesHasBeenSet = true; m_certificateHashes.push_back(std::move(value)); return *this; }

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
    inline GetRevocationStatusRequest& AddCertificateHashes(const char* value) { m_certificateHashesHasBeenSet = true; m_certificateHashes.push_back(value); return *this; }

  private:

    Aws::Utils::DateTime m_signatureTimestamp;
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
