/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p>A key-signing key (KSK) is a complex type that represents a public/private
   * key pair. The private key is used to generate a digital signature for the zone
   * signing key (ZSK). The public key is stored in the DNS and is used to
   * authenticate the ZSK. A KSK is always associated with a hosted zone; it cannot
   * exist by itself.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/KeySigningKey">AWS
   * API Reference</a></p>
   */
  class KeySigningKey
  {
  public:
    AWS_ROUTE53_API KeySigningKey() = default;
    AWS_ROUTE53_API KeySigningKey(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API KeySigningKey& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    KeySigningKey& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) used to identify the customer managed key in
     * Key Management Service (KMS). The <code>KmsArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone.</p> <p>You must configure the
     * customer managed key as follows:</p> <dl> <dt>Status</dt> <dd> <p>Enabled</p>
     * </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key usage</dt> <dd>
     * <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key policy must
     * give permission for the following actions:</p> <ul> <li> <p>DescribeKey</p>
     * </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li> </ul> <p>The key
     * policy must also include the Amazon Route 53 service in the principal for your
     * account. Specify the following:</p> <ul> <li> <p> <code>"Service":
     * "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd> </dl> <p>For more
     * information about working with the customer managed key in KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline const Aws::String& GetKmsArn() const { return m_kmsArn; }
    inline bool KmsArnHasBeenSet() const { return m_kmsArnHasBeenSet; }
    template<typename KmsArnT = Aws::String>
    void SetKmsArn(KmsArnT&& value) { m_kmsArnHasBeenSet = true; m_kmsArn = std::forward<KmsArnT>(value); }
    template<typename KmsArnT = Aws::String>
    KeySigningKey& WithKmsArn(KmsArnT&& value) { SetKmsArn(std::forward<KmsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer that specifies how the key is used. For key-signing key (KSK),
     * this value is always 257.</p>
     */
    inline int GetFlag() const { return m_flag; }
    inline bool FlagHasBeenSet() const { return m_flagHasBeenSet; }
    inline void SetFlag(int value) { m_flagHasBeenSet = true; m_flag = value; }
    inline KeySigningKey& WithFlag(int value) { SetFlag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string used to represent the signing algorithm. This value must follow the
     * guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.1">RFC-8624 Section 3.1</a>.
     * </p>
     */
    inline const Aws::String& GetSigningAlgorithmMnemonic() const { return m_signingAlgorithmMnemonic; }
    inline bool SigningAlgorithmMnemonicHasBeenSet() const { return m_signingAlgorithmMnemonicHasBeenSet; }
    template<typename SigningAlgorithmMnemonicT = Aws::String>
    void SetSigningAlgorithmMnemonic(SigningAlgorithmMnemonicT&& value) { m_signingAlgorithmMnemonicHasBeenSet = true; m_signingAlgorithmMnemonic = std::forward<SigningAlgorithmMnemonicT>(value); }
    template<typename SigningAlgorithmMnemonicT = Aws::String>
    KeySigningKey& WithSigningAlgorithmMnemonic(SigningAlgorithmMnemonicT&& value) { SetSigningAlgorithmMnemonic(std::forward<SigningAlgorithmMnemonicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer used to represent the signing algorithm. This value must follow
     * the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.1">RFC-8624 Section 3.1</a>.
     * </p>
     */
    inline int GetSigningAlgorithmType() const { return m_signingAlgorithmType; }
    inline bool SigningAlgorithmTypeHasBeenSet() const { return m_signingAlgorithmTypeHasBeenSet; }
    inline void SetSigningAlgorithmType(int value) { m_signingAlgorithmTypeHasBeenSet = true; m_signingAlgorithmType = value; }
    inline KeySigningKey& WithSigningAlgorithmType(int value) { SetSigningAlgorithmType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string used to represent the delegation signer digest algorithm. This value
     * must follow the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.3">RFC-8624 Section 3.3</a>.
     * </p>
     */
    inline const Aws::String& GetDigestAlgorithmMnemonic() const { return m_digestAlgorithmMnemonic; }
    inline bool DigestAlgorithmMnemonicHasBeenSet() const { return m_digestAlgorithmMnemonicHasBeenSet; }
    template<typename DigestAlgorithmMnemonicT = Aws::String>
    void SetDigestAlgorithmMnemonic(DigestAlgorithmMnemonicT&& value) { m_digestAlgorithmMnemonicHasBeenSet = true; m_digestAlgorithmMnemonic = std::forward<DigestAlgorithmMnemonicT>(value); }
    template<typename DigestAlgorithmMnemonicT = Aws::String>
    KeySigningKey& WithDigestAlgorithmMnemonic(DigestAlgorithmMnemonicT&& value) { SetDigestAlgorithmMnemonic(std::forward<DigestAlgorithmMnemonicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer used to represent the delegation signer digest algorithm. This
     * value must follow the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.3">RFC-8624 Section
     * 3.3</a>.</p>
     */
    inline int GetDigestAlgorithmType() const { return m_digestAlgorithmType; }
    inline bool DigestAlgorithmTypeHasBeenSet() const { return m_digestAlgorithmTypeHasBeenSet; }
    inline void SetDigestAlgorithmType(int value) { m_digestAlgorithmTypeHasBeenSet = true; m_digestAlgorithmType = value; }
    inline KeySigningKey& WithDigestAlgorithmType(int value) { SetDigestAlgorithmType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An integer used to identify the DNSSEC record for the domain name. The
     * process used to calculate the value is described in <a
     * href="https://tools.ietf.org/rfc/rfc4034.txt">RFC-4034 Appendix B</a>.</p>
     */
    inline int GetKeyTag() const { return m_keyTag; }
    inline bool KeyTagHasBeenSet() const { return m_keyTagHasBeenSet; }
    inline void SetKeyTag(int value) { m_keyTagHasBeenSet = true; m_keyTag = value; }
    inline KeySigningKey& WithKeyTag(int value) { SetKeyTag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cryptographic digest of a DNSKEY resource record (RR). DNSKEY records are
     * used to publish the public key that resolvers can use to verify DNSSEC
     * signatures that are used to secure certain kinds of information provided by the
     * DNS system.</p>
     */
    inline const Aws::String& GetDigestValue() const { return m_digestValue; }
    inline bool DigestValueHasBeenSet() const { return m_digestValueHasBeenSet; }
    template<typename DigestValueT = Aws::String>
    void SetDigestValue(DigestValueT&& value) { m_digestValueHasBeenSet = true; m_digestValue = std::forward<DigestValueT>(value); }
    template<typename DigestValueT = Aws::String>
    KeySigningKey& WithDigestValue(DigestValueT&& value) { SetDigestValue(std::forward<DigestValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key, represented as a Base64 encoding, as required by <a
     * href="https://tools.ietf.org/rfc/rfc4034.txt"> RFC-4034 Page 5</a>.</p>
     */
    inline const Aws::String& GetPublicKey() const { return m_publicKey; }
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }
    template<typename PublicKeyT = Aws::String>
    void SetPublicKey(PublicKeyT&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::forward<PublicKeyT>(value); }
    template<typename PublicKeyT = Aws::String>
    KeySigningKey& WithPublicKey(PublicKeyT&& value) { SetPublicKey(std::forward<PublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that represents a delegation signer (DS) record.</p>
     */
    inline const Aws::String& GetDSRecord() const { return m_dSRecord; }
    inline bool DSRecordHasBeenSet() const { return m_dSRecordHasBeenSet; }
    template<typename DSRecordT = Aws::String>
    void SetDSRecord(DSRecordT&& value) { m_dSRecordHasBeenSet = true; m_dSRecord = std::forward<DSRecordT>(value); }
    template<typename DSRecordT = Aws::String>
    KeySigningKey& WithDSRecord(DSRecordT&& value) { SetDSRecord(std::forward<DSRecordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that represents a DNSKEY record.</p>
     */
    inline const Aws::String& GetDNSKEYRecord() const { return m_dNSKEYRecord; }
    inline bool DNSKEYRecordHasBeenSet() const { return m_dNSKEYRecordHasBeenSet; }
    template<typename DNSKEYRecordT = Aws::String>
    void SetDNSKEYRecord(DNSKEYRecordT&& value) { m_dNSKEYRecordHasBeenSet = true; m_dNSKEYRecord = std::forward<DNSKEYRecordT>(value); }
    template<typename DNSKEYRecordT = Aws::String>
    KeySigningKey& WithDNSKEYRecord(DNSKEYRecordT&& value) { SetDNSKEYRecord(std::forward<DNSKEYRecordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that represents the current key-signing key (KSK) status.</p>
     * <p>Status can have one of the following values:</p> <dl> <dt>ACTIVE</dt> <dd>
     * <p>The KSK is being used for signing.</p> </dd> <dt>INACTIVE</dt> <dd> <p>The
     * KSK is not being used for signing.</p> </dd> <dt>DELETING</dt> <dd> <p>The KSK
     * is in the process of being deleted.</p> </dd> <dt>ACTION_NEEDED</dt> <dd>
     * <p>There is a problem with the KSK that requires you to take action to resolve.
     * For example, the customer managed key might have been deleted, or the
     * permissions for the customer managed key might have been changed.</p> </dd>
     * <dt>INTERNAL_FAILURE</dt> <dd> <p>There was an error during a request. Before
     * you can continue to work with DNSSEC signing, including actions that involve
     * this KSK, you must correct the problem. For example, you may need to activate or
     * deactivate the KSK.</p> </dd> </dl>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    KeySigningKey& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message provided for the following key-signing key (KSK) statuses:
     * <code>ACTION_NEEDED</code> or <code>INTERNAL_FAILURE</code>. The status message
     * includes information about what the problem might be and steps that you can take
     * to correct the issue.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    KeySigningKey& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the key-signing key (KSK) was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    KeySigningKey& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the key-signing key (KSK) was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    KeySigningKey& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_kmsArn;
    bool m_kmsArnHasBeenSet = false;

    int m_flag{0};
    bool m_flagHasBeenSet = false;

    Aws::String m_signingAlgorithmMnemonic;
    bool m_signingAlgorithmMnemonicHasBeenSet = false;

    int m_signingAlgorithmType{0};
    bool m_signingAlgorithmTypeHasBeenSet = false;

    Aws::String m_digestAlgorithmMnemonic;
    bool m_digestAlgorithmMnemonicHasBeenSet = false;

    int m_digestAlgorithmType{0};
    bool m_digestAlgorithmTypeHasBeenSet = false;

    int m_keyTag{0};
    bool m_keyTagHasBeenSet = false;

    Aws::String m_digestValue;
    bool m_digestValueHasBeenSet = false;

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet = false;

    Aws::String m_dSRecord;
    bool m_dSRecordHasBeenSet = false;

    Aws::String m_dNSKEYRecord;
    bool m_dNSKEYRecordHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
