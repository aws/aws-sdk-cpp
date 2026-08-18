/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/PrivateConnectivityConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {

PrivateConnectivityConfig::PrivateConnectivityConfig(JsonView jsonValue) { *this = jsonValue; }

PrivateConnectivityConfig& PrivateConnectivityConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RoleArn")) {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrivateConnectivityStatus")) {
    m_privateConnectivityStatus =
        PrivateConnectivityStatusMapper::GetPrivateConnectivityStatusForName(jsonValue.GetString("PrivateConnectivityStatus"));
    m_privateConnectivityStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VpcInformationList")) {
    Aws::Utils::Array<JsonView> vpcInformationListJsonList = jsonValue.GetArray("VpcInformationList");
    for (unsigned vpcInformationListIndex = 0; vpcInformationListIndex < vpcInformationListJsonList.GetLength();
         ++vpcInformationListIndex) {
      m_vpcInformationList.push_back(vpcInformationListJsonList[vpcInformationListIndex].AsObject());
    }
    m_vpcInformationListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProvisioningRoleArn")) {
    m_provisioningRoleArn = jsonValue.GetString("ProvisioningRoleArn");
    m_provisioningRoleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivateConnectivityConfig::Jsonize() const {
  JsonValue payload;

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_privateConnectivityStatusHasBeenSet) {
    payload.WithString("PrivateConnectivityStatus",
                       PrivateConnectivityStatusMapper::GetNameForPrivateConnectivityStatus(m_privateConnectivityStatus));
  }

  if (m_vpcInformationListHasBeenSet) {
    Aws::Utils::Array<JsonValue> vpcInformationListJsonList(m_vpcInformationList.size());
    for (unsigned vpcInformationListIndex = 0; vpcInformationListIndex < vpcInformationListJsonList.GetLength();
         ++vpcInformationListIndex) {
      vpcInformationListJsonList[vpcInformationListIndex].AsObject(m_vpcInformationList[vpcInformationListIndex].Jsonize());
    }
    payload.WithArray("VpcInformationList", std::move(vpcInformationListJsonList));
  }

  if (m_provisioningRoleArnHasBeenSet) {
    payload.WithString("ProvisioningRoleArn", m_provisioningRoleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
