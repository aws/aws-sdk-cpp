/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker-inference-router-runtime/model/InvokeInferenceRouterRequest.h>

#include <utility>

using namespace Aws::SageMakerInferenceRouterRuntime::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

Aws::Http::HeaderValueCollection InvokeInferenceRouterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_routingTargetNameHasBeenSet) {
    ss << m_routingTargetName;
    headers.emplace("x-amzn-sagemaker-routing-target-name", ss.str());
    ss.str("");
  }

  if (m_acceptHasBeenSet) {
    ss << m_accept;
    headers.emplace("accept", ss.str());
    ss.str("");
  }

  if (m_inferenceIdHasBeenSet) {
    ss << m_inferenceId;
    headers.emplace("x-amzn-sagemaker-inference-id", ss.str());
    ss.str("");
  }

  if (m_prefixAwareIdHasBeenSet) {
    ss << m_prefixAwareId;
    headers.emplace("x-amzn-sagemaker-prefix-aware-id", ss.str());
    ss.str("");
  }

  if (m_customAttributesHasBeenSet) {
    ss << m_customAttributes;
    headers.emplace("x-amzn-sagemaker-custom-attributes", ss.str());
    ss.str("");
  }

  return headers;
}
