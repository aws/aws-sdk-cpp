/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/DeleteSupplementalTaxRegistrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TaxSettings::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteSupplementalTaxRegistrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authorityIdHasBeenSet)
  {
   payload.WithString("authorityId", m_authorityId);

  }

  return payload.View().WriteReadable();
}




