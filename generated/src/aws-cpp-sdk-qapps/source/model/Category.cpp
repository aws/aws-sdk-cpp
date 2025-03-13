/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/Category.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QApps
{
namespace Model
{

Category::Category(JsonView jsonValue)
{
  *this = jsonValue;
}

Category& Category::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("color"))
  {
    m_color = jsonValue.GetString("color");
    m_colorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("appCount"))
  {
    m_appCount = jsonValue.GetInteger("appCount");
    m_appCountHasBeenSet = true;
  }
  return *this;
}

JsonValue Category::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_colorHasBeenSet)
  {
   payload.WithString("color", m_color);

  }

  if(m_appCountHasBeenSet)
  {
   payload.WithInteger("appCount", m_appCount);

  }

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
