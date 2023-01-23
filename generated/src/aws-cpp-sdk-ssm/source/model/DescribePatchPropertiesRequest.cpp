﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribePatchPropertiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePatchPropertiesRequest::DescribePatchPropertiesRequest() : 
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_property(PatchProperty::NOT_SET),
    m_propertyHasBeenSet(false),
    m_patchSet(PatchSet::NOT_SET),
    m_patchSetHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribePatchPropertiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("OperatingSystem", OperatingSystemMapper::GetNameForOperatingSystem(m_operatingSystem));
  }

  if(m_propertyHasBeenSet)
  {
   payload.WithString("Property", PatchPropertyMapper::GetNameForPatchProperty(m_property));
  }

  if(m_patchSetHasBeenSet)
  {
   payload.WithString("PatchSet", PatchSetMapper::GetNameForPatchSet(m_patchSet));
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribePatchPropertiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DescribePatchProperties"));
  return headers;

}




