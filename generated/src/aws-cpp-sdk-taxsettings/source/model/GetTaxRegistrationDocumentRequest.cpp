/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/GetTaxRegistrationDocumentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TaxSettings::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetTaxRegistrationDocumentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationS3LocationHasBeenSet)
  {
   payload.WithObject("destinationS3Location", m_destinationS3Location.Jsonize());

  }

  if(m_taxDocumentMetadataHasBeenSet)
  {
   payload.WithObject("taxDocumentMetadata", m_taxDocumentMetadata.Jsonize());

  }

  return payload.View().WriteReadable();
}




