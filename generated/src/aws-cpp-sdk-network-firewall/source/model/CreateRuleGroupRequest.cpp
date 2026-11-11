/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/CreateRuleGroupRequest.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateRuleGroupRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_ruleGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_ruleGroupHasBeenSet) {
    mapSize++;
  }
  if (m_firewallRuleGroupHasBeenSet) {
    mapSize++;
  }
  if (m_ipsRuleGroupHasBeenSet) {
    mapSize++;
  }
  if (m_rulesHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_capacityHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_dryRunHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_sourceMetadataHasBeenSet) {
    mapSize++;
  }
  if (m_analyzeRuleGroupHasBeenSet) {
    mapSize++;
  }
  if (m_summaryConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ruleGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ruleGroupName.c_str()));
  }

  if (m_ruleGroupHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleGroup"));
    m_ruleGroup.CborEncode(encoder);
  }

  if (m_firewallRuleGroupHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallRuleGroup"));
    m_firewallRuleGroup.CborEncode(encoder);
  }

  if (m_ipsRuleGroupHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IpsRuleGroup"));
    m_ipsRuleGroup.CborEncode(encoder);
  }

  if (m_rulesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Rules"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_rules.c_str()));
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RuleGroupTypeMapper::GetNameForRuleGroupType(m_type).c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_capacityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Capacity"));
    (m_capacity >= 0) ? encoder.WriteUInt(m_capacity) : encoder.WriteNegInt(m_capacity);
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_dryRunHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DryRun"));
    encoder.WriteBool(m_dryRun);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EncryptionConfiguration"));
    m_encryptionConfiguration.CborEncode(encoder);
  }

  if (m_sourceMetadataHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourceMetadata"));
    m_sourceMetadata.CborEncode(encoder);
  }

  if (m_analyzeRuleGroupHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AnalyzeRuleGroup"));
    encoder.WriteBool(m_analyzeRuleGroup);
  }

  if (m_summaryConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SummaryConfiguration"));
    m_summaryConfiguration.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateRuleGroupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
