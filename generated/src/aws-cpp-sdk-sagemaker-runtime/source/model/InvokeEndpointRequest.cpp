/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-runtime/model/InvokeEndpointRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMakerRuntime::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

InvokeEndpointRequest::InvokeEndpointRequest() : 
    m_endpointNameHasBeenSet(false),
    m_acceptHasBeenSet(false),
    m_customAttributesHasBeenSet(false),
    m_targetModelHasBeenSet(false),
    m_targetVariantHasBeenSet(false),
    m_targetContainerHostnameHasBeenSet(false),
    m_inferenceIdHasBeenSet(false),
    m_enableExplanationsHasBeenSet(false)
{
}



Aws::Http::HeaderValueCollection InvokeEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_acceptHasBeenSet)
  {
    ss << m_accept;
    headers.emplace("accept",  ss.str());
    ss.str("");
  }

  if(m_customAttributesHasBeenSet)
  {
    ss << m_customAttributes;
    headers.emplace("x-amzn-sagemaker-custom-attributes",  ss.str());
    ss.str("");
  }

  if(m_targetModelHasBeenSet)
  {
    ss << m_targetModel;
    headers.emplace("x-amzn-sagemaker-target-model",  ss.str());
    ss.str("");
  }

  if(m_targetVariantHasBeenSet)
  {
    ss << m_targetVariant;
    headers.emplace("x-amzn-sagemaker-target-variant",  ss.str());
    ss.str("");
  }

  if(m_targetContainerHostnameHasBeenSet)
  {
    ss << m_targetContainerHostname;
    headers.emplace("x-amzn-sagemaker-target-container-hostname",  ss.str());
    ss.str("");
  }

  if(m_inferenceIdHasBeenSet)
  {
    ss << m_inferenceId;
    headers.emplace("x-amzn-sagemaker-inference-id",  ss.str());
    ss.str("");
  }

  if(m_enableExplanationsHasBeenSet)
  {
    ss << m_enableExplanations;
    headers.emplace("x-amzn-sagemaker-enable-explanations",  ss.str());
    ss.str("");
  }

  return headers;

}
