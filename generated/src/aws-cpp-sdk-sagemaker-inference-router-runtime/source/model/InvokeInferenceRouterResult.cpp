/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker-inference-router-runtime/model/InvokeInferenceRouterResult.h>

#include <utility>

using namespace Aws::SageMakerInferenceRouterRuntime::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

InvokeInferenceRouterResult::InvokeInferenceRouterResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) {
  *this = std::move(result);
}

InvokeInferenceRouterResult& InvokeInferenceRouterResult::operator=(Aws::AmazonWebServiceResult<ResponseStream>&& result) {
  m_HttpResponseCode = result.GetResponseCode();
  m_body = result.TakeOwnershipOfPayload();
  m_bodyHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentTypeIter = headers.find("content-type");
  if (contentTypeIter != headers.end()) {
    m_contentType = contentTypeIter->second;
    m_contentTypeHasBeenSet = true;
  }

  const auto& invokedRoutedResourceArnIter = headers.find("x-amzn-sagemaker-invoked-routed-resource-arn");
  if (invokedRoutedResourceArnIter != headers.end()) {
    m_invokedRoutedResourceArn = invokedRoutedResourceArnIter->second;
    m_invokedRoutedResourceArnHasBeenSet = true;
  }

  const auto& routingReasonIter = headers.find("x-amzn-sagemaker-invoked-routing-reason");
  if (routingReasonIter != headers.end()) {
    m_routingReason = routingReasonIter->second;
    m_routingReasonHasBeenSet = true;
  }

  const auto& invokedProductionVariantIter = headers.find("x-amzn-invoked-production-variant");
  if (invokedProductionVariantIter != headers.end()) {
    m_invokedProductionVariant = invokedProductionVariantIter->second;
    m_invokedProductionVariantHasBeenSet = true;
  }

  const auto& customAttributesIter = headers.find("x-amzn-sagemaker-custom-attributes");
  if (customAttributesIter != headers.end()) {
    m_customAttributes = customAttributesIter->second;
    m_customAttributesHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
