/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DeleteThemeAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteThemeAliasRequest::DeleteThemeAliasRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_themeIdHasBeenSet(false),
    m_aliasNameHasBeenSet(false)
{
}

Aws::String DeleteThemeAliasRequest::SerializePayload() const
{
  return {};
}




