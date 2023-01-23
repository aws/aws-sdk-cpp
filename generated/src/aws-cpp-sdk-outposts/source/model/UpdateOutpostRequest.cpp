/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/UpdateOutpostRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateOutpostRequest::UpdateOutpostRequest() : 
    m_outpostIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_supportedHardwareType(SupportedHardwareType::NOT_SET),
    m_supportedHardwareTypeHasBeenSet(false)
{
}

Aws::String UpdateOutpostRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_supportedHardwareTypeHasBeenSet)
  {
   payload.WithString("SupportedHardwareType", SupportedHardwareTypeMapper::GetNameForSupportedHardwareType(m_supportedHardwareType));
  }

  return payload.View().WriteReadable();
}




