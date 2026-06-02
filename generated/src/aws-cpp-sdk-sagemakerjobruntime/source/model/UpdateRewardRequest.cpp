/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemakerjobruntime/model/UpdateRewardRequest.h>

#include <utility>

using namespace Aws::SagemakerJobRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRewardRequest::SerializePayload() const {
  JsonValue payload;

  if (m_trajectoryIdHasBeenSet) {
    payload.WithString("TrajectoryId", m_trajectoryId);
  }

  if (m_rewardsHasBeenSet) {
    Aws::Utils::Array<JsonValue> rewardsJsonList(m_rewards.size());
    for (unsigned rewardsIndex = 0; rewardsIndex < rewardsJsonList.GetLength(); ++rewardsIndex) {
      rewardsJsonList[rewardsIndex].AsDouble(m_rewards[rewardsIndex]);
    }
    payload.WithArray("Rewards", std::move(rewardsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRewardRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_jobArnHasBeenSet) {
    ss << m_jobArn;
    headers.emplace("x-amzn-sagemaker-job-arn", ss.str());
    ss.str("");
  }

  return headers;
}
