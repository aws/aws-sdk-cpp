/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemakertrainingsessionruntime/model/ForwardBackwardConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {

ForwardBackwardConfig::ForwardBackwardConfig(JsonView jsonValue) { *this = jsonValue; }

ForwardBackwardConfig& ForwardBackwardConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lossFnName")) {
    m_lossFnName = LossFnNameMapper::GetLossFnNameForName(jsonValue.GetString("lossFnName"));
    m_lossFnNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("datumList")) {
    Aws::Utils::Array<JsonView> datumListJsonList = jsonValue.GetArray("datumList");
    for (unsigned datumListIndex = 0; datumListIndex < datumListJsonList.GetLength(); ++datumListIndex) {
      m_datumList.push_back(datumListJsonList[datumListIndex].AsObject());
    }
    m_datumListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lossFnConfig")) {
    m_lossFnConfig = jsonValue.GetObject("lossFnConfig");
    m_lossFnConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ForwardBackwardConfig::Jsonize() const {
  JsonValue payload;

  if (m_lossFnNameHasBeenSet) {
    payload.WithString("lossFnName", LossFnNameMapper::GetNameForLossFnName(m_lossFnName));
  }

  if (m_datumListHasBeenSet) {
    Aws::Utils::Array<JsonValue> datumListJsonList(m_datumList.size());
    for (unsigned datumListIndex = 0; datumListIndex < datumListJsonList.GetLength(); ++datumListIndex) {
      datumListJsonList[datumListIndex].AsObject(m_datumList[datumListIndex].Jsonize());
    }
    payload.WithArray("datumList", std::move(datumListJsonList));
  }

  if (m_lossFnConfigHasBeenSet) {
    if (!m_lossFnConfig.View().IsNull()) {
      payload.WithObject("lossFnConfig", JsonValue(m_lossFnConfig.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
