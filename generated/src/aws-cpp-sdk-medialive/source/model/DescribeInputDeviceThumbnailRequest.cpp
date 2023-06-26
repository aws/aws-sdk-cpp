/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeInputDeviceThumbnailRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeInputDeviceThumbnailRequest::DescribeInputDeviceThumbnailRequest() : 
    m_inputDeviceIdHasBeenSet(false),
    m_accept(AcceptHeader::NOT_SET),
    m_acceptHasBeenSet(false)
{
}

Aws::String DescribeInputDeviceThumbnailRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection DescribeInputDeviceThumbnailRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_acceptHasBeenSet)
  {
    headers.emplace("accept", AcceptHeaderMapper::GetNameForAcceptHeader(m_accept));
  }

  return headers;

}




