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
 * <p>A change to the network attributes of an event actor.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/EventActorChange">AWS
 * API Reference</a></p>
 */
class EventActorChange {
 public:
  AWS_WAFV2_API EventActorChange() = default;
  AWS_WAFV2_API EventActorChange(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API EventActorChange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The time of the change.</p>
   */
  inline const Aws::Utils::DateTime& GetChangeTime() const { return m_changeTime; }
  inline bool ChangeTimeHasBeenSet() const { return m_changeTimeHasBeenSet; }
  template <typename ChangeTimeT = Aws::Utils::DateTime>
  void SetChangeTime(ChangeTimeT&& value) {
    m_changeTimeHasBeenSet = true;
    m_changeTime = std::forward<ChangeTimeT>(value);
  }
  template <typename ChangeTimeT = Aws::Utils::DateTime>
  EventActorChange& WithChangeTime(ChangeTimeT&& value) {
    SetChangeTime(std::forward<ChangeTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client IP address of the event actor after the change.</p>
   */
  inline const Aws::String& GetClientIp() const { return m_clientIp; }
  inline bool ClientIpHasBeenSet() const { return m_clientIpHasBeenSet; }
  template <typename ClientIpT = Aws::String>
  void SetClientIp(ClientIpT&& value) {
    m_clientIpHasBeenSet = true;
    m_clientIp = std::forward<ClientIpT>(value);
  }
  template <typename ClientIpT = Aws::String>
  EventActorChange& WithClientIp(ClientIpT&& value) {
    SetClientIp(std::forward<ClientIpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The TLS fingerprint of the event actor after the change, such as a JA3 or JA4
   * fingerprint.</p>
   */
  inline const Aws::String& GetTlsFingerprint() const { return m_tlsFingerprint; }
  inline bool TlsFingerprintHasBeenSet() const { return m_tlsFingerprintHasBeenSet; }
  template <typename TlsFingerprintT = Aws::String>
  void SetTlsFingerprint(TlsFingerprintT&& value) {
    m_tlsFingerprintHasBeenSet = true;
    m_tlsFingerprint = std::forward<TlsFingerprintT>(value);
  }
  template <typename TlsFingerprintT = Aws::String>
  EventActorChange& WithTlsFingerprint(TlsFingerprintT&& value) {
    SetTlsFingerprint(std::forward<TlsFingerprintT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The autonomous system number (ASN) that is associated with the client IP
   * address after the change.</p>
   */
  inline const Aws::String& GetAsn() const { return m_asn; }
  inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
  template <typename AsnT = Aws::String>
  void SetAsn(AsnT&& value) {
    m_asnHasBeenSet = true;
    m_asn = std::forward<AsnT>(value);
  }
  template <typename AsnT = Aws::String>
  EventActorChange& WithAsn(AsnT&& value) {
    SetAsn(std::forward<AsnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the organization that owns the ASN after the change.</p>
   */
  inline const Aws::String& GetAsnOrganization() const { return m_asnOrganization; }
  inline bool AsnOrganizationHasBeenSet() const { return m_asnOrganizationHasBeenSet; }
  template <typename AsnOrganizationT = Aws::String>
  void SetAsnOrganization(AsnOrganizationT&& value) {
    m_asnOrganizationHasBeenSet = true;
    m_asnOrganization = std::forward<AsnOrganizationT>(value);
  }
  template <typename AsnOrganizationT = Aws::String>
  EventActorChange& WithAsnOrganization(AsnOrganizationT&& value) {
    SetAsnOrganization(std::forward<AsnOrganizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The country of the client IP address after the change.</p>
   */
  inline const Aws::String& GetCountry() const { return m_country; }
  inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
  template <typename CountryT = Aws::String>
  void SetCountry(CountryT&& value) {
    m_countryHasBeenSet = true;
    m_country = std::forward<CountryT>(value);
  }
  template <typename CountryT = Aws::String>
  EventActorChange& WithCountry(CountryT&& value) {
    SetCountry(std::forward<CountryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_changeTime{};

  Aws::String m_clientIp;

  Aws::String m_tlsFingerprint;

  Aws::String m_asn;

  Aws::String m_asnOrganization;

  Aws::String m_country;
  bool m_changeTimeHasBeenSet = false;
  bool m_clientIpHasBeenSet = false;
  bool m_tlsFingerprintHasBeenSet = false;
  bool m_asnHasBeenSet = false;
  bool m_asnOrganizationHasBeenSet = false;
  bool m_countryHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
