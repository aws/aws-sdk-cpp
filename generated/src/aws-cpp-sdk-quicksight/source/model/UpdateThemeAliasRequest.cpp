/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateThemeAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateThemeAliasRequest::UpdateThemeAliasRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_themeIdHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_themeVersionNumber(0),
    m_themeVersionNumberHasBeenSet(false)
{
}

Aws::String UpdateThemeAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_themeVersionNumberHasBeenSet)
  {
   payload.WithInt64("ThemeVersionNumber", m_themeVersionNumber);

  }

  return payload.View().WriteReadable();
}




