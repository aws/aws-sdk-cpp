/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sso-admin/model/NetworkConfigurationInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SSOAdmin {
namespace Model {

NetworkConfigurationInfo::NetworkConfigurationInfo(JsonView jsonValue) { *this = jsonValue; }

NetworkConfigurationInfo& NetworkConfigurationInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VpceAccessRequired")) {
    m_vpceAccessRequired = jsonValue.GetBool("VpceAccessRequired");
    m_vpceAccessRequiredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RestrictSourceVpcs")) {
    Aws::Utils::Array<JsonView> restrictSourceVpcsJsonList = jsonValue.GetArray("RestrictSourceVpcs");
    for (unsigned restrictSourceVpcsIndex = 0; restrictSourceVpcsIndex < restrictSourceVpcsJsonList.GetLength();
         ++restrictSourceVpcsIndex) {
      m_restrictSourceVpcs.push_back(restrictSourceVpcsJsonList[restrictSourceVpcsIndex].AsString());
    }
    m_restrictSourceVpcsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllowSourceIps")) {
    Aws::Utils::Array<JsonView> allowSourceIpsJsonList = jsonValue.GetArray("AllowSourceIps");
    for (unsigned allowSourceIpsIndex = 0; allowSourceIpsIndex < allowSourceIpsJsonList.GetLength(); ++allowSourceIpsIndex) {
      m_allowSourceIps.push_back(allowSourceIpsJsonList[allowSourceIpsIndex].AsString());
    }
    m_allowSourceIpsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExcludeApplicationArns")) {
    Aws::Utils::Array<JsonView> excludeApplicationArnsJsonList = jsonValue.GetArray("ExcludeApplicationArns");
    for (unsigned excludeApplicationArnsIndex = 0; excludeApplicationArnsIndex < excludeApplicationArnsJsonList.GetLength();
         ++excludeApplicationArnsIndex) {
      m_excludeApplicationArns.push_back(excludeApplicationArnsJsonList[excludeApplicationArnsIndex].AsString());
    }
    m_excludeApplicationArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkConfigurationInfo::Jsonize() const {
  JsonValue payload;

  if (m_vpceAccessRequiredHasBeenSet) {
    payload.WithBool("VpceAccessRequired", m_vpceAccessRequired);
  }

  if (m_restrictSourceVpcsHasBeenSet) {
    Aws::Utils::Array<JsonValue> restrictSourceVpcsJsonList(m_restrictSourceVpcs.size());
    for (unsigned restrictSourceVpcsIndex = 0; restrictSourceVpcsIndex < restrictSourceVpcsJsonList.GetLength();
         ++restrictSourceVpcsIndex) {
      restrictSourceVpcsJsonList[restrictSourceVpcsIndex].AsString(m_restrictSourceVpcs[restrictSourceVpcsIndex]);
    }
    payload.WithArray("RestrictSourceVpcs", std::move(restrictSourceVpcsJsonList));
  }

  if (m_allowSourceIpsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowSourceIpsJsonList(m_allowSourceIps.size());
    for (unsigned allowSourceIpsIndex = 0; allowSourceIpsIndex < allowSourceIpsJsonList.GetLength(); ++allowSourceIpsIndex) {
      allowSourceIpsJsonList[allowSourceIpsIndex].AsString(m_allowSourceIps[allowSourceIpsIndex]);
    }
    payload.WithArray("AllowSourceIps", std::move(allowSourceIpsJsonList));
  }

  if (m_excludeApplicationArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> excludeApplicationArnsJsonList(m_excludeApplicationArns.size());
    for (unsigned excludeApplicationArnsIndex = 0; excludeApplicationArnsIndex < excludeApplicationArnsJsonList.GetLength();
         ++excludeApplicationArnsIndex) {
      excludeApplicationArnsJsonList[excludeApplicationArnsIndex].AsString(m_excludeApplicationArns[excludeApplicationArnsIndex]);
    }
    payload.WithArray("ExcludeApplicationArns", std::move(excludeApplicationArnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SSOAdmin
}  // namespace Aws
