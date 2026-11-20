/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/EventActorChange.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

EventActorChange::EventActorChange(JsonView jsonValue) { *this = jsonValue; }

EventActorChange& EventActorChange::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ChangeTime")) {
    m_changeTime = jsonValue.GetDouble("ChangeTime");
    m_changeTimeHasBeenSet = true;
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
  return *this;
}

JsonValue EventActorChange::Jsonize() const {
  JsonValue payload;

  if (m_changeTimeHasBeenSet) {
    payload.WithDouble("ChangeTime", m_changeTime.SecondsWithMSPrecision());
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

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
