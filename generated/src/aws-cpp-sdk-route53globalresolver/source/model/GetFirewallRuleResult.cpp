/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/route53globalresolver/model/GetFirewallRuleResult.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFirewallRuleResult::GetFirewallRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetFirewallRuleResult& GetFirewallRuleResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("action")) {
    m_action = FirewallRuleActionMapper::GetFirewallRuleActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blockOverrideDnsType")) {
    m_blockOverrideDnsType =
        BlockOverrideDnsQueryTypeMapper::GetBlockOverrideDnsQueryTypeForName(jsonValue.GetString("blockOverrideDnsType"));
    m_blockOverrideDnsTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blockOverrideDomain")) {
    m_blockOverrideDomain = jsonValue.GetString("blockOverrideDomain");
    m_blockOverrideDomainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blockOverrideTtl")) {
    m_blockOverrideTtl = jsonValue.GetInteger("blockOverrideTtl");
    m_blockOverrideTtlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blockResponse")) {
    m_blockResponse = FirewallBlockResponseMapper::GetFirewallBlockResponseForName(jsonValue.GetString("blockResponse"));
    m_blockResponseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidenceThreshold")) {
    m_confidenceThreshold = ConfidenceThresholdMapper::GetConfidenceThresholdForName(jsonValue.GetString("confidenceThreshold"));
    m_confidenceThresholdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dnsAdvancedProtection")) {
    m_dnsAdvancedProtection = DnsAdvancedProtectionMapper::GetDnsAdvancedProtectionForName(jsonValue.GetString("dnsAdvancedProtection"));
    m_dnsAdvancedProtectionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firewallDomainListId")) {
    m_firewallDomainListId = jsonValue.GetString("firewallDomainListId");
    m_firewallDomainListIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("priority")) {
    m_priority = jsonValue.GetInt64("priority");
    m_priorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dnsViewId")) {
    m_dnsViewId = jsonValue.GetString("dnsViewId");
    m_dnsViewIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queryType")) {
    m_queryType = jsonValue.GetString("queryType");
    m_queryTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = CRResourceStatusMapper::GetCRResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
