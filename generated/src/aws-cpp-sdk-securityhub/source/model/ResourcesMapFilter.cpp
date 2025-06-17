/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ResourcesMapFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ResourcesMapFilter::ResourcesMapFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourcesMapFilter& ResourcesMapFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = ResourcesMapFieldMapper::GetResourcesMapFieldForName(jsonValue.GetString("FieldName"));
    m_fieldNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Filter"))
  {
    m_filter = jsonValue.GetObject("Filter");
    m_filterHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourcesMapFilter::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("FieldName", ResourcesMapFieldMapper::GetNameForResourcesMapField(m_fieldName));
  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
