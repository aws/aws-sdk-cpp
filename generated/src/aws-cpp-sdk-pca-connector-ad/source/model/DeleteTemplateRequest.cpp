/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/DeleteTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PcaConnectorAd::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTemplateRequest::DeleteTemplateRequest() : 
    m_templateArnHasBeenSet(false)
{
}

Aws::String DeleteTemplateRequest::SerializePayload() const
{
  return {};
}




