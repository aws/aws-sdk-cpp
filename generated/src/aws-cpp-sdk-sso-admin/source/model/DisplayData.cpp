/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/DisplayData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

DisplayData::DisplayData() : 
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_iconUrlHasBeenSet(false)
{
}

DisplayData::DisplayData(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_iconUrlHasBeenSet(false)
{
  *this = jsonValue;
}

DisplayData& DisplayData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IconUrl"))
  {
    m_iconUrl = jsonValue.GetString("IconUrl");

    m_iconUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue DisplayData::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_iconUrlHasBeenSet)
  {
   payload.WithString("IconUrl", m_iconUrl);

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
