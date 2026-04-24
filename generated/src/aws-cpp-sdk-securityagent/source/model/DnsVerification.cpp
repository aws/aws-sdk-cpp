/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/DnsVerification.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

DnsVerification::DnsVerification(JsonView jsonValue) { *this = jsonValue; }

DnsVerification& DnsVerification::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("token")) {
    m_token = jsonValue.GetString("token");
    m_tokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dnsRecordName")) {
    m_dnsRecordName = jsonValue.GetString("dnsRecordName");
    m_dnsRecordNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dnsRecordType")) {
    m_dnsRecordType = DNSRecordTypeMapper::GetDNSRecordTypeForName(jsonValue.GetString("dnsRecordType"));
    m_dnsRecordTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DnsVerification::Jsonize() const {
  JsonValue payload;

  if (m_tokenHasBeenSet) {
    payload.WithString("token", m_token);
  }

  if (m_dnsRecordNameHasBeenSet) {
    payload.WithString("dnsRecordName", m_dnsRecordName);
  }

  if (m_dnsRecordTypeHasBeenSet) {
    payload.WithString("dnsRecordType", DNSRecordTypeMapper::GetNameForDNSRecordType(m_dnsRecordType));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
