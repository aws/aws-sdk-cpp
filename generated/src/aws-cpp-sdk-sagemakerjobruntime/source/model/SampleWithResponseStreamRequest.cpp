/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemakerjobruntime/model/SampleWithResponseStreamRequest.h>

#include <utility>

using namespace Aws::SagemakerJobRuntime::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

Aws::Http::HeaderValueCollection SampleWithResponseStreamRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_jobArnHasBeenSet) {
    ss << m_jobArn;
    headers.emplace("x-amzn-sagemaker-job-arn", ss.str());
    ss.str("");
  }

  if (m_trajectoryIdHasBeenSet) {
    ss << m_trajectoryId;
    headers.emplace("x-amzn-sagemaker-trajectory-id", ss.str());
    ss.str("");
  }

  return headers;
}
