/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>Information about the DNSSEC key.</p> <p>You get this from your DNS provider
   * and then give it to Route 53 (by using <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AssociateDelegationSignerToDomain.html">AssociateDelegationSignerToDomain</a>)
   * to pass it to the registry to establish the chain of trust.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DnssecKey">AWS
   * API Reference</a></p>
   */
  class DnssecKey
  {
  public:
    AWS_ROUTE53DOMAINS_API DnssecKey() = default;
    AWS_ROUTE53DOMAINS_API DnssecKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API DnssecKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of the public key’s cryptographic algorithm according to an <a
     * href="https://www.iana.org/assignments/dns-sec-alg-numbers/dns-sec-alg-numbers.xml">IANA</a>
     * assignment. </p> <p>If Route 53 is your DNS service, set this to 13.</p> <p>For
     * more information about enabling DNSSEC signing, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-configuring-dnssec-enable-signing.html">Enabling
     * DNSSEC signing and establishing a chain of trust</a>.</p>
     */
    inline int GetAlgorithm() const { return m_algorithm; }
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
    inline void SetAlgorithm(int value) { m_algorithmHasBeenSet = true; m_algorithm = value; }
    inline DnssecKey& WithAlgorithm(int value) { SetAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the type of key. It can be either a KSK (key-signing-key, value 257)
     * or ZSK (zone-signing-key, value 256). Using KSK is always encouraged. Only use
     * ZSK if your DNS provider isn't Route 53 and you don’t have KSK available.</p>
     * <p>If you have KSK and ZSK keys, always use KSK to create a delegations signer
     * (DS) record. If you have ZSK keys only – use ZSK to create a DS record.</p>
     */
    inline int GetFlags() const { return m_flags; }
    inline bool FlagsHasBeenSet() const { return m_flagsHasBeenSet; }
    inline void SetFlags(int value) { m_flagsHasBeenSet = true; m_flags = value; }
    inline DnssecKey& WithFlags(int value) { SetFlags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base64-encoded public key part of the key pair that is passed to the
     * registry .</p>
     */
    inline const Aws::String& GetPublicKey() const { return m_publicKey; }
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }
    template<typename PublicKeyT = Aws::String>
    void SetPublicKey(PublicKeyT&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::forward<PublicKeyT>(value); }
    template<typename PublicKeyT = Aws::String>
    DnssecKey& WithPublicKey(PublicKeyT&& value) { SetPublicKey(std::forward<PublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of the DS digest algorithm according to an IANA assignment.</p>
     * <p>For more information, see <a
     * href="https://www.iana.org/assignments/ds-rr-types/ds-rr-types.xhtml">IANA</a>
     * for DNSSEC Delegation Signer (DS) Resource Record (RR) Type Digest Algorithms.
     * </p>
     */
    inline int GetDigestType() const { return m_digestType; }
    inline bool DigestTypeHasBeenSet() const { return m_digestTypeHasBeenSet; }
    inline void SetDigestType(int value) { m_digestTypeHasBeenSet = true; m_digestType = value; }
    inline DnssecKey& WithDigestType(int value) { SetDigestType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The delegation signer digest.</p> <p>Digest is calculated from the public
     * key provided using specified digest algorithm and this digest is the actual
     * value returned from the registry nameservers as the value of DS records. </p>
     */
    inline const Aws::String& GetDigest() const { return m_digest; }
    inline bool DigestHasBeenSet() const { return m_digestHasBeenSet; }
    template<typename DigestT = Aws::String>
    void SetDigest(DigestT&& value) { m_digestHasBeenSet = true; m_digest = std::forward<DigestT>(value); }
    template<typename DigestT = Aws::String>
    DnssecKey& WithDigest(DigestT&& value) { SetDigest(std::forward<DigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A numeric identification of the DNSKEY record referred to by this DS record.
     * </p>
     */
    inline int GetKeyTag() const { return m_keyTag; }
    inline bool KeyTagHasBeenSet() const { return m_keyTagHasBeenSet; }
    inline void SetKeyTag(int value) { m_keyTagHasBeenSet = true; m_keyTag = value; }
    inline DnssecKey& WithKeyTag(int value) { SetKeyTag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An ID assigned to each DS record created by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AssociateDelegationSignerToDomain.html">AssociateDelegationSignerToDomain</a>.
     * </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DnssecKey& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    int m_algorithm{0};
    bool m_algorithmHasBeenSet = false;

    int m_flags{0};
    bool m_flagsHasBeenSet = false;

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet = false;

    int m_digestType{0};
    bool m_digestTypeHasBeenSet = false;

    Aws::String m_digest;
    bool m_digestHasBeenSet = false;

    int m_keyTag{0};
    bool m_keyTagHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
