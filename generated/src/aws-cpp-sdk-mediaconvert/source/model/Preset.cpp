/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Preset.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Preset::Preset() : 
    m_arnHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Preset::Preset(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Preset& Preset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("category"))
  {
    m_category = jsonValue.GetString("category");

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("lastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("settings"))
  {
    m_settings = jsonValue.GetObject("settings");

    m_settingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Preset::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", m_category);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("lastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("settings", m_settings.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TypeMapper::GetNameForType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
