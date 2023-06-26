/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DescribeEndpointsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEndpointsRequest::DescribeEndpointsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_mode(DescribeEndpointsMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeEndpointsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", DescribeEndpointsModeMapper::GetNameForDescribeEndpointsMode(m_mode));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




