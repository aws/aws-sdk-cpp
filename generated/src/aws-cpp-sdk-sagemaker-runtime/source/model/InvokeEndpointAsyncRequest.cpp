/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-runtime/model/InvokeEndpointAsyncRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMakerRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

InvokeEndpointAsyncRequest::InvokeEndpointAsyncRequest() : 
    m_endpointNameHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_acceptHasBeenSet(false),
    m_customAttributesHasBeenSet(false),
    m_inferenceIdHasBeenSet(false),
    m_inputLocationHasBeenSet(false),
    m_requestTTLSeconds(0),
    m_requestTTLSecondsHasBeenSet(false),
    m_invocationTimeoutSeconds(0),
    m_invocationTimeoutSecondsHasBeenSet(false)
{
}

Aws::String InvokeEndpointAsyncRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection InvokeEndpointAsyncRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_contentTypeHasBeenSet)
  {
    ss << m_contentType;
    headers.emplace("x-amzn-sagemaker-content-type",  ss.str());
    ss.str("");
  }

  if(m_acceptHasBeenSet)
  {
    ss << m_accept;
    headers.emplace("x-amzn-sagemaker-accept",  ss.str());
    ss.str("");
  }

  if(m_customAttributesHasBeenSet)
  {
    ss << m_customAttributes;
    headers.emplace("x-amzn-sagemaker-custom-attributes",  ss.str());
    ss.str("");
  }

  if(m_inferenceIdHasBeenSet)
  {
    ss << m_inferenceId;
    headers.emplace("x-amzn-sagemaker-inference-id",  ss.str());
    ss.str("");
  }

  if(m_inputLocationHasBeenSet)
  {
    ss << m_inputLocation;
    headers.emplace("x-amzn-sagemaker-inputlocation",  ss.str());
    ss.str("");
  }

  if(m_requestTTLSecondsHasBeenSet)
  {
    ss << m_requestTTLSeconds;
    headers.emplace("x-amzn-sagemaker-requestttlseconds",  ss.str());
    ss.str("");
  }

  if(m_invocationTimeoutSecondsHasBeenSet)
  {
    ss << m_invocationTimeoutSeconds;
    headers.emplace("x-amzn-sagemaker-invocationtimeoutseconds",  ss.str());
    ss.str("");
  }

  return headers;

}




