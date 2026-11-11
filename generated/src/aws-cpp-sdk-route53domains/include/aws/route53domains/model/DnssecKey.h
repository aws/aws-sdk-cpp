/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/route53domains/Route53Domains_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Route53Domains {
namespace Model {

/**
 * <p>Information about the DNSSEC key.</p> <p>You get this from your DNS provider
 * and then give it to Route 53 (by using <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AssociateDelegationSignerToDomain.html">AssociateDelegationSignerToDomain</a>)
 * to pass it to the registry to establish the chain of trust.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DnssecKey">AWS
 * API Reference</a></p>
 */
class DnssecKey {
 public:
  AWS_ROUTE53DOMAINS_API DnssecKey() = default;
  AWS_ROUTE53DOMAINS_API DnssecKey(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ROUTE53DOMAINS_API DnssecKey& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ROUTE53DOMAINS_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The number of the public key’s cryptographic algorithm according to an <a
   * href="https://www.iana.org/assignments/dns-sec-alg-numbers/dns-sec-alg-numbers.xml">IANA</a>
   * assignment. </p> <p>If Route 53 is your DNS service, set this to 13.</p> <p>For
   * more information about enabling DNSSEC signing, see <a
   * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/dns-configuring-dnssec-enable-signing.html">Enabling
   * DNSSEC signing and establishing a chain of trust</a>.</p>
   */
  inline int64_t GetAlgorithm() const { return m_algorithm; }
  inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
  inline void SetAlgorithm(int64_t value) {
    m_algorithmHasBeenSet = true;
    m_algorithm = value;
  }
  inline DnssecKey& WithAlgorithm(int64_t value) {
    SetAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of the DS digest algorithm according to an IANA assignment.</p>
   * <p>For more information, see <a
   * href="https://www.iana.org/assignments/ds-rr-types/ds-rr-types.xhtml">IANA</a>
   * for DNSSEC Delegation Signer (DS) Resource Record (RR) Type Digest Algorithms.
   * </p>
   */
  inline int64_t GetDigestType() const { return m_digestType; }
  inline bool DigestTypeHasBeenSet() const { return m_digestTypeHasBeenSet; }
  inline void SetDigestType(int64_t value) {
    m_digestTypeHasBeenSet = true;
    m_digestType = value;
  }
  inline DnssecKey& WithDigestType(int64_t value) {
    SetDigestType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The delegation signer digest.</p> <p>Digest is calculated from the public
   * key provided using specified digest algorithm and this digest is the actual
   * value returned from the registry nameservers as the value of DS records. </p>
   */
  inline const Aws::String& GetDigest() const { return m_digest; }
  inline bool DigestHasBeenSet() const { return m_digestHasBeenSet; }
  template <typename DigestT = Aws::String>
  void SetDigest(DigestT&& value) {
    m_digestHasBeenSet = true;
    m_digest = std::forward<DigestT>(value);
  }
  template <typename DigestT = Aws::String>
  DnssecKey& WithDigest(DigestT&& value) {
    SetDigest(std::forward<DigestT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A numeric identification of the DNSKEY record referred to by this DS record.
   * </p>
   */
  inline int64_t GetKeyTag() const { return m_keyTag; }
  inline bool KeyTagHasBeenSet() const { return m_keyTagHasBeenSet; }
  inline void SetKeyTag(int64_t value) {
    m_keyTagHasBeenSet = true;
    m_keyTag = value;
  }
  inline DnssecKey& WithKeyTag(int64_t value) {
    SetKeyTag(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> An ID assigned to each DS record created by <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_AssociateDelegationSignerToDomain.html">AssociateDelegationSignerToDomain</a>.
   * </p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DnssecKey& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}
 private:
  int64_t m_algorithm{0};

  int64_t m_digestType{0};

  Aws::String m_digest;

  int64_t m_keyTag{0};

  Aws::String m_id;
  bool m_algorithmHasBeenSet = false;
  bool m_digestTypeHasBeenSet = false;
  bool m_digestHasBeenSet = false;
  bool m_keyTagHasBeenSet = false;
  bool m_idHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Domains
}  // namespace Aws
