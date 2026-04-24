/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/VpcConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

VpcConfig::VpcConfig(JsonView jsonValue) { *this = jsonValue; }

VpcConfig& VpcConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("vpcArn")) {
    m_vpcArn = jsonValue.GetString("vpcArn");
    m_vpcArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroupArns")) {
    Aws::Utils::Array<JsonView> securityGroupArnsJsonList = jsonValue.GetArray("securityGroupArns");
    for (unsigned securityGroupArnsIndex = 0; securityGroupArnsIndex < securityGroupArnsJsonList.GetLength(); ++securityGroupArnsIndex) {
      m_securityGroupArns.push_back(securityGroupArnsJsonList[securityGroupArnsIndex].AsString());
    }
    m_securityGroupArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnetArns")) {
    Aws::Utils::Array<JsonView> subnetArnsJsonList = jsonValue.GetArray("subnetArns");
    for (unsigned subnetArnsIndex = 0; subnetArnsIndex < subnetArnsJsonList.GetLength(); ++subnetArnsIndex) {
      m_subnetArns.push_back(subnetArnsJsonList[subnetArnsIndex].AsString());
    }
    m_subnetArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue VpcConfig::Jsonize() const {
  JsonValue payload;

  if (m_vpcArnHasBeenSet) {
    payload.WithString("vpcArn", m_vpcArn);
  }

  if (m_securityGroupArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityGroupArnsJsonList(m_securityGroupArns.size());
    for (unsigned securityGroupArnsIndex = 0; securityGroupArnsIndex < securityGroupArnsJsonList.GetLength(); ++securityGroupArnsIndex) {
      securityGroupArnsJsonList[securityGroupArnsIndex].AsString(m_securityGroupArns[securityGroupArnsIndex]);
    }
    payload.WithArray("securityGroupArns", std::move(securityGroupArnsJsonList));
  }

  if (m_subnetArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetArnsJsonList(m_subnetArns.size());
    for (unsigned subnetArnsIndex = 0; subnetArnsIndex < subnetArnsJsonList.GetLength(); ++subnetArnsIndex) {
      subnetArnsJsonList[subnetArnsIndex].AsString(m_subnetArns[subnetArnsIndex]);
    }
    payload.WithArray("subnetArns", std::move(subnetArnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
