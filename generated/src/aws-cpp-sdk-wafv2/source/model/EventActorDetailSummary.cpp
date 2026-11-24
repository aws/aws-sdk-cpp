/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/EventActorDetailSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

EventActorDetailSummary::EventActorDetailSummary(JsonView jsonValue) { *this = jsonValue; }

EventActorDetailSummary& EventActorDetailSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EventActorId")) {
    m_eventActorId = jsonValue.GetString("EventActorId");
    m_eventActorIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientIp")) {
    m_clientIp = jsonValue.GetString("ClientIp");
    m_clientIpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TlsFingerprint")) {
    m_tlsFingerprint = jsonValue.GetString("TlsFingerprint");
    m_tlsFingerprintHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Asn")) {
    m_asn = jsonValue.GetString("Asn");
    m_asnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AsnOrganization")) {
    m_asnOrganization = jsonValue.GetString("AsnOrganization");
    m_asnOrganizationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Country")) {
    m_country = jsonValue.GetString("Country");
    m_countryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AuthFingerprint")) {
    m_authFingerprint = jsonValue.GetString("AuthFingerprint");
    m_authFingerprintHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue EventActorDetailSummary::Jsonize() const {
  JsonValue payload;

  if (m_eventActorIdHasBeenSet) {
    payload.WithString("EventActorId", m_eventActorId);
  }

  if (m_clientIpHasBeenSet) {
    payload.WithString("ClientIp", m_clientIp);
  }

  if (m_tlsFingerprintHasBeenSet) {
    payload.WithString("TlsFingerprint", m_tlsFingerprint);
  }

  if (m_asnHasBeenSet) {
    payload.WithString("Asn", m_asn);
  }

  if (m_asnOrganizationHasBeenSet) {
    payload.WithString("AsnOrganization", m_asnOrganization);
  }

  if (m_countryHasBeenSet) {
    payload.WithString("Country", m_country);
  }

  if (m_authFingerprintHasBeenSet) {
    payload.WithString("AuthFingerprint", m_authFingerprint);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
