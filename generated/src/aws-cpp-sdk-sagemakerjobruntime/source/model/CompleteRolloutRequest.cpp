/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemakerjobruntime/model/CompleteRolloutRequest.h>

#include <utility>

using namespace Aws::SagemakerJobRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CompleteRolloutRequest::SerializePayload() const {
  JsonValue payload;

  if (m_trajectoryIdHasBeenSet) {
    payload.WithString("TrajectoryId", m_trajectoryId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", CompletionStatusMapper::GetNameForCompletionStatus(m_status));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CompleteRolloutRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_jobArnHasBeenSet) {
    ss << m_jobArn;
    headers.emplace("x-amzn-sagemaker-job-arn", ss.str());
    ss.str("");
  }

  return headers;
}
