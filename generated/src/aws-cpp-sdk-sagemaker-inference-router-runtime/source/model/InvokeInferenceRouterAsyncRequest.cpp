/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker-inference-router-runtime/model/InvokeInferenceRouterAsyncRequest.h>

#include <utility>

using namespace Aws::SageMakerInferenceRouterRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InvokeInferenceRouterAsyncRequest::SerializePayload() const { return {}; }

Aws::Http::HeaderValueCollection InvokeInferenceRouterAsyncRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_routingTargetNameHasBeenSet) {
    ss << m_routingTargetName;
    headers.emplace("x-amzn-sagemaker-routing-target-name", ss.str());
    ss.str("");
  }

  if (m_contentTypeHasBeenSet) {
    ss << m_contentType;
    headers.emplace("x-amzn-sagemaker-content-type", ss.str());
    ss.str("");
  }

  if (m_acceptHasBeenSet) {
    ss << m_accept;
    headers.emplace("x-amzn-sagemaker-accept", ss.str());
    ss.str("");
  }

  if (m_customAttributesHasBeenSet) {
    ss << m_customAttributes;
    headers.emplace("x-amzn-sagemaker-custom-attributes", ss.str());
    ss.str("");
  }

  if (m_inferenceIdHasBeenSet) {
    ss << m_inferenceId;
    headers.emplace("x-amzn-sagemaker-inference-id", ss.str());
    ss.str("");
  }

  if (m_inputLocationHasBeenSet) {
    ss << m_inputLocation;
    headers.emplace("x-amzn-sagemaker-inputlocation", ss.str());
    ss.str("");
  }

  if (m_s3OutputPathExtensionHasBeenSet) {
    ss << m_s3OutputPathExtension;
    headers.emplace("x-amzn-sagemaker-s3outputpathextension", ss.str());
    ss.str("");
  }

  if (m_filenameHasBeenSet) {
    ss << m_filename;
    headers.emplace("x-amzn-sagemaker-filename", ss.str());
    ss.str("");
  }

  if (m_requestTTLSecondsHasBeenSet) {
    ss << m_requestTTLSeconds;
    headers.emplace("x-amzn-sagemaker-requestttlseconds", ss.str());
    ss.str("");
  }

  if (m_invocationTimeoutSecondsHasBeenSet) {
    ss << m_invocationTimeoutSeconds;
    headers.emplace("x-amzn-sagemaker-invocationtimeoutseconds", ss.str());
    ss.str("");
  }

  return headers;
}
