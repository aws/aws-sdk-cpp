/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-runtime/model/InvokeEndpointResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMakerRuntime::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

InvokeEndpointResult::InvokeEndpointResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

InvokeEndpointResult& InvokeEndpointResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_body = result.TakeOwnershipOfPayload();
  m_bodyHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
    m_contentTypeHasBeenSet = true;
  }

  const auto& invokedProductionVariantIter = headers.find("x-amzn-invoked-production-variant");
  if(invokedProductionVariantIter != headers.end())
  {
    m_invokedProductionVariant = invokedProductionVariantIter->second;
    m_invokedProductionVariantHasBeenSet = true;
  }

  const auto& customAttributesIter = headers.find("x-amzn-sagemaker-custom-attributes");
  if(customAttributesIter != headers.end())
  {
    m_customAttributes = customAttributesIter->second;
    m_customAttributesHasBeenSet = true;
  }

  const auto& newSessionIdIter = headers.find("x-amzn-sagemaker-new-session-id");
  if(newSessionIdIter != headers.end())
  {
    m_newSessionId = newSessionIdIter->second;
    m_newSessionIdHasBeenSet = true;
  }

  const auto& closedSessionIdIter = headers.find("x-amzn-sagemaker-closed-session-id");
  if(closedSessionIdIter != headers.end())
  {
    m_closedSessionId = closedSessionIdIter->second;
    m_closedSessionIdHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

   return *this;
}
