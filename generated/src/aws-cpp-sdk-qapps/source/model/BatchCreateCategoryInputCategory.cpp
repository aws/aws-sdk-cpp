/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/BatchCreateCategoryInputCategory.h>
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

BatchCreateCategoryInputCategory::BatchCreateCategoryInputCategory(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchCreateCategoryInputCategory& BatchCreateCategoryInputCategory::operator =(JsonView jsonValue)
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
  return *this;
}

JsonValue BatchCreateCategoryInputCategory::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace QApps
} // namespace Aws
