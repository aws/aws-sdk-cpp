/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ThemeAlias.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ThemeAlias::ThemeAlias() : 
    m_arnHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_themeVersionNumber(0),
    m_themeVersionNumberHasBeenSet(false)
{
}

ThemeAlias::ThemeAlias(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_themeVersionNumber(0),
    m_themeVersionNumberHasBeenSet(false)
{
  *this = jsonValue;
}

ThemeAlias& ThemeAlias::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AliasName"))
  {
    m_aliasName = jsonValue.GetString("AliasName");

    m_aliasNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThemeVersionNumber"))
  {
    m_themeVersionNumber = jsonValue.GetInt64("ThemeVersionNumber");

    m_themeVersionNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue ThemeAlias::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_aliasNameHasBeenSet)
  {
   payload.WithString("AliasName", m_aliasName);

  }

  if(m_themeVersionNumberHasBeenSet)
  {
   payload.WithInt64("ThemeVersionNumber", m_themeVersionNumber);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
