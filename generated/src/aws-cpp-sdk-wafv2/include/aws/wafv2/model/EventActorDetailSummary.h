/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>The latest observed attributes of an event actor.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/EventActorDetailSummary">AWS
 * API Reference</a></p>
 */
class EventActorDetailSummary {
 public:
  AWS_WAFV2_API EventActorDetailSummary() = default;
  AWS_WAFV2_API EventActorDetailSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API EventActorDetailSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the event actor.</p>
   */
  inline const Aws::String& GetEventActorId() const { return m_eventActorId; }
  inline bool EventActorIdHasBeenSet() const { return m_eventActorIdHasBeenSet; }
  template <typename EventActorIdT = Aws::String>
  void SetEventActorId(EventActorIdT&& value) {
    m_eventActorIdHasBeenSet = true;
    m_eventActorId = std::forward<EventActorIdT>(value);
  }
  template <typename EventActorIdT = Aws::String>
  EventActorDetailSummary& WithEventActorId(EventActorIdT&& value) {
    SetEventActorId(std::forward<EventActorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client IP address of the event actor.</p>
   */
  inline const Aws::String& GetClientIp() const { return m_clientIp; }
  inline bool ClientIpHasBeenSet() const { return m_clientIpHasBeenSet; }
  template <typename ClientIpT = Aws::String>
  void SetClientIp(ClientIpT&& value) {
    m_clientIpHasBeenSet = true;
    m_clientIp = std::forward<ClientIpT>(value);
  }
  template <typename ClientIpT = Aws::String>
  EventActorDetailSummary& WithClientIp(ClientIpT&& value) {
    SetClientIp(std::forward<ClientIpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The TLS fingerprint of the event actor, such as a JA3 or JA4 fingerprint.</p>
   */
  inline const Aws::String& GetTlsFingerprint() const { return m_tlsFingerprint; }
  inline bool TlsFingerprintHasBeenSet() const { return m_tlsFingerprintHasBeenSet; }
  template <typename TlsFingerprintT = Aws::String>
  void SetTlsFingerprint(TlsFingerprintT&& value) {
    m_tlsFingerprintHasBeenSet = true;
    m_tlsFingerprint = std::forward<TlsFingerprintT>(value);
  }
  template <typename TlsFingerprintT = Aws::String>
  EventActorDetailSummary& WithTlsFingerprint(TlsFingerprintT&& value) {
    SetTlsFingerprint(std::forward<TlsFingerprintT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The autonomous system number (ASN) that is associated with the client IP
   * address of the event actor.</p>
   */
  inline const Aws::String& GetAsn() const { return m_asn; }
  inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
  template <typename AsnT = Aws::String>
  void SetAsn(AsnT&& value) {
    m_asnHasBeenSet = true;
    m_asn = std::forward<AsnT>(value);
  }
  template <typename AsnT = Aws::String>
  EventActorDetailSummary& WithAsn(AsnT&& value) {
    SetAsn(std::forward<AsnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the organization that owns the ASN. For example,
   * <code>AMAZON-02</code>.</p>
   */
  inline const Aws::String& GetAsnOrganization() const { return m_asnOrganization; }
  inline bool AsnOrganizationHasBeenSet() const { return m_asnOrganizationHasBeenSet; }
  template <typename AsnOrganizationT = Aws::String>
  void SetAsnOrganization(AsnOrganizationT&& value) {
    m_asnOrganizationHasBeenSet = true;
    m_asnOrganization = std::forward<AsnOrganizationT>(value);
  }
  template <typename AsnOrganizationT = Aws::String>
  EventActorDetailSummary& WithAsnOrganization(AsnOrganizationT&& value) {
    SetAsnOrganization(std::forward<AsnOrganizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The country of the client IP address of the event actor.</p>
   */
  inline const Aws::String& GetCountry() const { return m_country; }
  inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
  template <typename CountryT = Aws::String>
  void SetCountry(CountryT&& value) {
    m_countryHasBeenSet = true;
    m_country = std::forward<CountryT>(value);
  }
  template <typename CountryT = Aws::String>
  EventActorDetailSummary& WithCountry(CountryT&& value) {
    SetCountry(std::forward<CountryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A hash of the authentication credentials that the client of the event actor
   * provides in the request. These can include a JSON Web Token (JWT), a JSON Web
   * Encryption (JWE) token, an Amazon Web Services Signature Version 4 (SigV4)
   * signature, or basic authentication credentials. You can use the fingerprint to
   * match the same client across events and in your WAF logs.</p>
   */
  inline const Aws::String& GetAuthFingerprint() const { return m_authFingerprint; }
  inline bool AuthFingerprintHasBeenSet() const { return m_authFingerprintHasBeenSet; }
  template <typename AuthFingerprintT = Aws::String>
  void SetAuthFingerprint(AuthFingerprintT&& value) {
    m_authFingerprintHasBeenSet = true;
    m_authFingerprint = std::forward<AuthFingerprintT>(value);
  }
  template <typename AuthFingerprintT = Aws::String>
  EventActorDetailSummary& WithAuthFingerprint(AuthFingerprintT&& value) {
    SetAuthFingerprint(std::forward<AuthFingerprintT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when WAF first observed the event actor.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  EventActorDetailSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventActorId;

  Aws::String m_clientIp;

  Aws::String m_tlsFingerprint;

  Aws::String m_asn;

  Aws::String m_asnOrganization;

  Aws::String m_country;

  Aws::String m_authFingerprint;

  Aws::Utils::DateTime m_createdAt{};
  bool m_eventActorIdHasBeenSet = false;
  bool m_clientIpHasBeenSet = false;
  bool m_tlsFingerprintHasBeenSet = false;
  bool m_asnHasBeenSet = false;
  bool m_asnOrganizationHasBeenSet = false;
  bool m_countryHasBeenSet = false;
  bool m_authFingerprintHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
