/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/PutTaxRegistrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TaxSettings::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutTaxRegistrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_taxRegistrationEntryHasBeenSet)
  {
   payload.WithObject("taxRegistrationEntry", m_taxRegistrationEntry.Jsonize());

  }

  return payload.View().WriteReadable();
}




