/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DescribeAppVersionAppComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAppVersionAppComponentRequest::DescribeAppVersionAppComponentRequest() : 
    m_appArnHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

Aws::String DescribeAppVersionAppComponentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_appVersionHasBeenSet)
  {
   payload.WithString("appVersion", m_appVersion);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  return payload.View().WriteReadable();
}




