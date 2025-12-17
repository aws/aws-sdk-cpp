/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/test-new-service-sdk-testing/model/PublishFoosRequest.h>

#include <utility>

using namespace Aws::TestNewServiceSDKTesting::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

std::shared_ptr<Aws::IOStream> PublishFoosRequest::GetBody() const { return m_messages; }

Aws::Http::HeaderValueCollection PublishFoosRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TestNewServiceSDKTesting.PublishFoos"));
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::AMZN_EVENTSTREAM_CONTENT_TYPE);
  return headers;
}
