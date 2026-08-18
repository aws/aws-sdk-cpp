/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/CreatePrivateConnectivityConfigRequest.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreatePrivateConnectivityConfigRequest::SerializePayload() const {
  JsonValue payload;

  if (m_vpcInformationListHasBeenSet) {
    Aws::Utils::Array<JsonValue> vpcInformationListJsonList(m_vpcInformationList.size());
    for (unsigned vpcInformationListIndex = 0; vpcInformationListIndex < vpcInformationListJsonList.GetLength();
         ++vpcInformationListIndex) {
      vpcInformationListJsonList[vpcInformationListIndex].AsObject(m_vpcInformationList[vpcInformationListIndex].Jsonize());
    }
    payload.WithArray("VpcInformationList", std::move(vpcInformationListJsonList));
  }

  return payload.View().WriteReadable();
}
