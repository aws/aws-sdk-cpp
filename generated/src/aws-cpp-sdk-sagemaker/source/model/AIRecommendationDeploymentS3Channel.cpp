/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIRecommendationDeploymentS3Channel.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIRecommendationDeploymentS3Channel::AIRecommendationDeploymentS3Channel(JsonView jsonValue) { *this = jsonValue; }

AIRecommendationDeploymentS3Channel& AIRecommendationDeploymentS3Channel::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ChannelName")) {
    m_channelName = jsonValue.GetString("ChannelName");
    m_channelNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Uri")) {
    m_uri = jsonValue.GetString("Uri");
    m_uriHasBeenSet = true;
  }
  return *this;
}

JsonValue AIRecommendationDeploymentS3Channel::Jsonize() const {
  JsonValue payload;

  if (m_channelNameHasBeenSet) {
    payload.WithString("ChannelName", m_channelName);
  }

  if (m_uriHasBeenSet) {
    payload.WithString("Uri", m_uri);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
