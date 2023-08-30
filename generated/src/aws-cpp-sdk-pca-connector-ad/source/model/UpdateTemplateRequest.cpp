/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/UpdateTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PcaConnectorAd::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTemplateRequest::UpdateTemplateRequest() : 
    m_definitionHasBeenSet(false),
    m_reenrollAllCertificateHolders(false),
    m_reenrollAllCertificateHoldersHasBeenSet(false),
    m_templateArnHasBeenSet(false)
{
}

Aws::String UpdateTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("Definition", m_definition.Jsonize());

  }

  if(m_reenrollAllCertificateHoldersHasBeenSet)
  {
   payload.WithBool("ReenrollAllCertificateHolders", m_reenrollAllCertificateHolders);

  }

  return payload.View().WriteReadable();
}




