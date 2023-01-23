/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/DisableImportFindingsForProductRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisableImportFindingsForProductRequest::DisableImportFindingsForProductRequest() : 
    m_productSubscriptionArnHasBeenSet(false)
{
}

Aws::String DisableImportFindingsForProductRequest::SerializePayload() const
{
  return {};
}




