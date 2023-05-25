/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateTemplateAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTemplateAliasRequest::CreateTemplateAliasRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_templateVersionNumber(0),
    m_templateVersionNumberHasBeenSet(false)
{
}

Aws::String CreateTemplateAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateVersionNumberHasBeenSet)
  {
   payload.WithInt64("TemplateVersionNumber", m_templateVersionNumber);

  }

  return payload.View().WriteReadable();
}




