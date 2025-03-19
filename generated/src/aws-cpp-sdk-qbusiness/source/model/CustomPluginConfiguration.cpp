/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CustomPluginConfiguration.h>
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

CustomPluginConfiguration::CustomPluginConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomPluginConfiguration& CustomPluginConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("apiSchemaType"))
  {
    m_apiSchemaType = APISchemaTypeMapper::GetAPISchemaTypeForName(jsonValue.GetString("apiSchemaType"));
    m_apiSchemaTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("apiSchema"))
  {
    m_apiSchema = jsonValue.GetObject("apiSchema");
    m_apiSchemaHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomPluginConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_apiSchemaTypeHasBeenSet)
  {
   payload.WithString("apiSchemaType", APISchemaTypeMapper::GetNameForAPISchemaType(m_apiSchemaType));
  }

  if(m_apiSchemaHasBeenSet)
  {
   payload.WithObject("apiSchema", m_apiSchema.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
