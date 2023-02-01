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
    AWS_ROUTE53DOMAINS_API DnssecKey();
    AWS_ROUTE53DOMAINS_API DnssecKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API DnssecKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of the public key’s cryptographic algorithm according to an <a
     * href="https://www.iana.org/assignments/dns-sec-alg-numbers/dns-sec-alg-numbers.xml">IANA</a>
     * assignment. </p> <p>If Route 53 is your DNS service, set this to 13.</p> <p>For
     * more information about enabling DNSSEC signing, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-configuring-dnssec-enable-signing.html">Enabling
     * DNSSEC signing and establishing a chain of trust</a>.</p>
     */
    inline int GetAlgorithm() const{ return m_algorithm; }

    /**
     * <p>The number of the public key’s cryptographic algorithm according to an <a
     * href="https://www.iana.org/assignments/dns-sec-alg-numbers/dns-sec-alg-numbers.xml">IANA</a>
     * assignment. </p> <p>If Route 53 is your DNS service, set this to 13.</p> <p>For
     * more information about enabling DNSSEC signing, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-configuring-dnssec-enable-signing.html">Enabling
     * DNSSEC signing and establishing a chain of trust</a>.</p>
     */
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }

    /**
     * <p>The number of the public key’s cryptographic algorithm according to an <a
     * href="https://www.iana.org/assignments/dns-sec-alg-numbers/dns-sec-alg-numbers.xml">IANA</a>
     * assignment. </p> <p>If Route 53 is your DNS service, set this to 13.</p> <p>For
     * more information about enabling DNSSEC signing, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-configuring-dnssec-enable-signing.html">Enabling
     * DNSSEC signing and establishing a chain of trust</a>.</p>
     */
    inline void SetAlgorithm(int value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    /**
     * <p>The number of the public key’s cryptographic algorithm according to an <a
     * href="https://www.iana.org/assignments/dns-sec-alg-numbers/dns-sec-alg-numbers.xml">IANA</a>
     * assignment. </p> <p>If Route 53 is your DNS service, set this to 13.</p> <p>For
     * more information about enabling DNSSEC signing, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-configuring-dnssec-enable-signing.html">Enabling
     * DNSSEC signing and establishing a chain of trust</a>.</p>
     */
    inline DnssecKey& WithAlgorithm(int value) { SetAlgorithm(value); return *this;}


    /**
     * <p>Defines the type of key. It can be either a KSK (key-signing-key, value 257)
     * or ZSK (zone-signing-key, value 256). Using KSK is always encouraged. Only use
     * ZSK if your DNS provider isn't Route 53 and you don’t have KSK available.</p>
     * <p>If you have KSK and ZSK keys, always use KSK to create a delegations signer
     * (DS) record. If you have ZSK keys only – use ZSK to create a DS record.</p>
     */
    inline int GetFlags() const{ return m_flags; }

    /**
     * <p>Defines the type of key. It can be either a KSK (key-signing-key, value 257)
     * or ZSK (zone-signing-key, value 256). Using KSK is always encouraged. Only use
     * ZSK if your DNS provider isn't Route 53 and you don’t have KSK available.</p>
     * <p>If you have KSK and ZSK keys, always use KSK to create a delegations signer
     * (DS) record. If you have ZSK keys only – use ZSK to create a DS record.</p>
     */
    inline bool FlagsHasBeenSet() const { return m_flagsHasBeenSet; }

    /**
     * <p>Defines the type of key. It can be either a KSK (key-signing-key, value 257)
     * or ZSK (zone-signing-key, value 256). Using KSK is always encouraged. Only use
     * ZSK if your DNS provider isn't Route 53 and you don’t have KSK available.</p>
     * <p>If you have KSK and ZSK keys, always use KSK to create a delegations signer
     * (DS) record. If you have ZSK keys only – use ZSK to create a DS record.</p>
     */
    inline void SetFlags(int value) { m_flagsHasBeenSet = true; m_flags = value; }

    /**
     * <p>Defines the type of key. It can be either a KSK (key-signing-key, value 257)
     * or ZSK (zone-signing-key, value 256). Using KSK is always encouraged. Only use
     * ZSK if your DNS provider isn't Route 53 and you don’t have KSK available.</p>
     * <p>If you have KSK and ZSK keys, always use KSK to create a delegations signer
     * (DS) record. If you have ZSK keys only – use ZSK to create a DS record.</p>
     */
    inline DnssecKey& WithFlags(int value) { SetFlags(value); return *this;}


    /**
     * <p>The base64-encoded public key part of the key pair that is passed to the
     * registry .</p>
     */
    inline const Aws::String& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p>The base64-encoded public key part of the key pair that is passed to the
     * registry .</p>
     */
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }

    /**
     * <p>The base64-encoded public key part of the key pair that is passed to the
     * registry .</p>
     */
    inline void SetPublicKey(const Aws::String& value) { m_publicKeyHasBeenSet = true; m_publicKey = value; }

    /**
     * <p>The base64-encoded public key part of the key pair that is passed to the
     * registry .</p>
     */
    inline void SetPublicKey(Aws::String&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::move(value); }

    /**
     * <p>The base64-encoded public key part of the key pair that is passed to the
     * registry .</p>
     */
    inline void SetPublicKey(const char* value) { m_publicKeyHasBeenSet = true; m_publicKey.assign(value); }

    /**
     * <p>The base64-encoded public key part of the key pair that is passed to the
     * registry .</p>
     */
    inline DnssecKey& WithPublicKey(const Aws::String& value) { SetPublicKey(value); return *this;}

    /**
     * <p>The base64-encoded public key part of the key pair that is passed to the
     * registry .</p>
     */
    inline DnssecKey& WithPublicKey(Aws::String&& value) { SetPublicKey(std::move(value)); return *this;}

    /**
     * <p>The base64-encoded public key part of the key pair that is passed to the
     * registry .</p>
     */
    inline DnssecKey& WithPublicKey(const char* value) { SetPublicKey(value); return *this;}


    /**
     * <p> The number of the DS digest algorithm according to an IANA assignment.</p>
     * <p>For more information, see <a
     * href="https://www.iana.org/assignments/ds-rr-types/ds-rr-types.xhtml">IANA</a>
     * for DNSSEC Delegation Signer (DS) Resource Record (RR) Type Digest Algorithms.
     * </p>
     */
    inline int GetDigestType() const{ return m_digestType; }

    /**
     * <p> The number of the DS digest algorithm according to an IANA assignment.</p>
     * <p>For more information, see <a
     * href="https://www.iana.org/assignments/ds-rr-types/ds-rr-types.xhtml">IANA</a>
     * for DNSSEC Delegation Signer (DS) Resource Record (RR) Type Digest Algorithms.
     * </p>
     */
    inline bool DigestTypeHasBeenSet() const { return m_digestTypeHasBeenSet; }

    /**
     * <p> The number of the DS digest algorithm according to an IANA assignment.</p>
     * <p>For more information, see <a
     * href="https://www.iana.org/assignments/ds-rr-types/ds-rr-types.xhtml">IANA</a>
     * for DNSSEC Delegation Signer (DS) Resource Record (RR) Type Digest Algorithms.
     * </p>
     */
    inline void SetDigestType(int value) { m_digestTypeHasBeenSet = true; m_digestType = value; }

    /**
     * <p> The number of the DS digest algorithm according to an IANA assignment.</p>
     * <p>For more information, see <a
     * href="https://www.iana.org/assignments/ds-rr-types/ds-rr-types.xhtml">IANA</a>
     * for DNSSEC Delegation Signer (DS) Resource Record (RR) Type Digest Algorithms.
     * </p>
     */
    inline DnssecKey& WithDigestType(int value) { SetDigestType(value); return *this;}


    /**
     * <p> The delegation signer digest.</p> <p>Digest is calculated from the public
     * key provided using specified digest algorithm and this digest is the actual
     * value returned from the registry nameservers as the value of DS records. </p>
     */
    inline const Aws::String& GetDigest() const{ return m_digest; }

    /**
     * <p> The delegation signer digest.</p> <p>Digest is calculated from the public
     * key provided using specified digest algorithm and this digest is the actual
     * value returned from the registry nameservers as the value of DS records. </p>
     */
    inline bool DigestHasBeenSet() const { return m_digestHasBeenSet; }

    /**
     * <p> The delegation signer digest.</p> <p>Digest is calculated from the public
     * key provided using specified digest algorithm and this digest is the actual
     * value returned from the registry nameservers as the value of DS records. </p>
     */
    inline void SetDigest(const Aws::String& value) { m_digestHasBeenSet = true; m_digest = value; }

    /**
     * <p> The delegation signer digest.</p> <p>Digest is calculated from the public
     * key provided using specified digest algorithm and this digest is the actual
     * value returned from the registry nameservers as the value of DS records. </p>
     */
    inline void SetDigest(Aws::String&& value) { m_digestHasBeenSet = true; m_digest = std::move(value); }

    /**
     * <p> The delegation signer digest.</p> <p>Digest is calculated from the public
     * key provided using specified digest algorithm and this digest is the actual
     * value returned from the registry nameservers as the value of DS records. </p>
     */
    inline void SetDigest(const char* value) { m_digestHasBeenSet = true; m_digest.assign(value); }

    /**
     * <p> The delegation signer digest.</p> <p>Digest is calculated from the public
     * key provided using specified digest algorithm and this digest is the actual
     * value returned from the registry nameservers as the value of DS records. </p>
     */
    inline DnssecKey& WithDigest(const Aws::String& value) { SetDigest(value); return *this;}

    /**
     * <p> The delegation signer digest.</p> <p>Digest is calculated from the public
     * key provided using specified digest algorithm and this digest is the actual
     * value returned from the registry nameservers as the value of DS records. </p>
     */
    inline DnssecKey& WithDigest(Aws::String&& value) { SetDigest(std::move(value)); return *this;}

    /**
     * <p> The delegation signer digest.</p> <p>Digest is calculated from the public
     * key provided using specified digest algorithm and this digest is the actual
     * value returned from the registry nameservers as the value of DS records. </p>
     */
    inline DnssecKey& WithDigest(const char* value) { SetDigest(value); return *this;}


    /**
     * <p> A numeric identification of the DNSKEY record referred to by this DS record.
     * </p>
     */
    inline int GetKeyTag() const{ return m_keyTag; }

    /**
     * <p> A numeric identification of the DNSKEY record referred to by this DS record.
     * </p>
     */
    inline bool KeyTagHasBeenSet() const { return m_keyTagHasBeenSet; }

    /**
     * <p> A numeric identification of the DNSKEY record referred to by this DS record.
     * </p>
     */
    inline void SetKeyTag(int value) { m_keyTagHasBeenSet = true; m_keyTag = value; }

    /**
     * <p> A numeric identification of the DNSKEY record referred to by this DS record.
     * </p>
     */
    inline DnssecKey& WithKeyTag(int value) { SetKeyTag(value); return *this;}


    /**
     * <p> An ID assigned to each DS record created by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AssociateDelegationSignerToDomain.html">AssociateDelegationSignerToDomain</a>.
     * </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> An ID assigned to each DS record created by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AssociateDelegationSignerToDomain.html">AssociateDelegationSignerToDomain</a>.
     * </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> An ID assigned to each DS record created by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AssociateDelegationSignerToDomain.html">AssociateDelegationSignerToDomain</a>.
     * </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> An ID assigned to each DS record created by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AssociateDelegationSignerToDomain.html">AssociateDelegationSignerToDomain</a>.
     * </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> An ID assigned to each DS record created by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AssociateDelegationSignerToDomain.html">AssociateDelegationSignerToDomain</a>.
     * </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> An ID assigned to each DS record created by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AssociateDelegationSignerToDomain.html">AssociateDelegationSignerToDomain</a>.
     * </p>
     */
    inline DnssecKey& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> An ID assigned to each DS record created by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AssociateDelegationSignerToDomain.html">AssociateDelegationSignerToDomain</a>.
     * </p>
     */
    inline DnssecKey& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> An ID assigned to each DS record created by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AssociateDelegationSignerToDomain.html">AssociateDelegationSignerToDomain</a>.
     * </p>
     */
    inline DnssecKey& WithId(const char* value) { SetId(value); return *this;}

  private:

    int m_algorithm;
    bool m_algorithmHasBeenSet = false;

    int m_flags;
    bool m_flagsHasBeenSet = false;

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet = false;

    int m_digestType;
    bool m_digestTypeHasBeenSet = false;

    Aws::String m_digest;
    bool m_digestHasBeenSet = false;

    int m_keyTag;
    bool m_keyTagHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
