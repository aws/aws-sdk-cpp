/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/route53globalresolver/model/DisableDNSViewResult.h>

#include <utility>

using namespace Aws::Route53GlobalResolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisableDNSViewResult::DisableDNSViewResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DisableDNSViewResult& DisableDNSViewResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientToken")) {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dnssecValidation")) {
    m_dnssecValidation = DnsSecValidationTypeMapper::GetDnsSecValidationTypeForName(jsonValue.GetString("dnssecValidation"));
    m_dnssecValidationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ednsClientSubnet")) {
    m_ednsClientSubnet = EdnsClientSubnetTypeMapper::GetEdnsClientSubnetTypeForName(jsonValue.GetString("ednsClientSubnet"));
    m_ednsClientSubnetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firewallRulesFailOpen")) {
    m_firewallRulesFailOpen =
        FirewallRulesFailOpenTypeMapper::GetFirewallRulesFailOpenTypeForName(jsonValue.GetString("firewallRulesFailOpen"));
    m_firewallRulesFailOpenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("globalResolverId")) {
    m_globalResolverId = jsonValue.GetString("globalResolverId");
    m_globalResolverIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ProfileResourceStatusMapper::GetProfileResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
