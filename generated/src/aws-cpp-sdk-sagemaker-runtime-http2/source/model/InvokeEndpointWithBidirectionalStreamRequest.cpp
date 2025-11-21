/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker-runtime-http2/model/InvokeEndpointWithBidirectionalStreamRequest.h>

#include <utility>

using namespace Aws::SageMakerRuntimeHTTP2::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

std::shared_ptr<Aws::IOStream> InvokeEndpointWithBidirectionalStreamRequest::GetBody() const { return m_body; }

Aws::Http::HeaderValueCollection InvokeEndpointWithBidirectionalStreamRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::AMZN_EVENTSTREAM_CONTENT_TYPE);
  Aws::StringStream ss;
  if (m_targetVariantHasBeenSet) {
    ss << m_targetVariant;
    headers.emplace("x-amzn-sagemaker-target-variant", ss.str());
    ss.str("");
  }

  if (m_modelInvocationPathHasBeenSet) {
    ss << m_modelInvocationPath;
    headers.emplace("x-amzn-sagemaker-model-invocation-path", ss.str());
    ss.str("");
  }

  if (m_modelQueryStringHasBeenSet) {
    ss << m_modelQueryString;
    headers.emplace("x-amzn-sagemaker-model-query-string", ss.str());
    ss.str("");
  }

  return headers;
}
