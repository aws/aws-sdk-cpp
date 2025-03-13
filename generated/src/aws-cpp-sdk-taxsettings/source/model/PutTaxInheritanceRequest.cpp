/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/PutTaxInheritanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TaxSettings::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutTaxInheritanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_heritageStatusHasBeenSet)
  {
   payload.WithString("heritageStatus", HeritageStatusMapper::GetNameForHeritageStatus(m_heritageStatus));
  }

  return payload.View().WriteReadable();
}




