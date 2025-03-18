/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/PluginTypeMetadataSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

PluginTypeMetadataSummary::PluginTypeMetadataSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

PluginTypeMetadataSummary& PluginTypeMetadataSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = PluginTypeMapper::GetPluginTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("category"))
  {
    m_category = PluginTypeCategoryMapper::GetPluginTypeCategoryForName(jsonValue.GetString("category"));
    m_categoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue PluginTypeMetadataSummary::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", PluginTypeMapper::GetNameForPluginType(m_type));
  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", PluginTypeCategoryMapper::GetNameForPluginTypeCategory(m_category));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
