/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIWorkloadInputDataConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIWorkloadInputDataConfig::AIWorkloadInputDataConfig(JsonView jsonValue) { *this = jsonValue; }

AIWorkloadInputDataConfig& AIWorkloadInputDataConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ChannelName")) {
    m_channelName = jsonValue.GetString("ChannelName");
    m_channelNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataSource")) {
    m_dataSource = jsonValue.GetObject("DataSource");
    m_dataSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue AIWorkloadInputDataConfig::Jsonize() const {
  JsonValue payload;

  if (m_channelNameHasBeenSet) {
    payload.WithString("ChannelName", m_channelName);
  }

  if (m_dataSourceHasBeenSet) {
    payload.WithObject("DataSource", m_dataSource.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
