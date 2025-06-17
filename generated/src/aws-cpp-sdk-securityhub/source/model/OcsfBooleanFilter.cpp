/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/OcsfBooleanFilter.h>
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

OcsfBooleanFilter::OcsfBooleanFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

OcsfBooleanFilter& OcsfBooleanFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = OcsfBooleanFieldMapper::GetOcsfBooleanFieldForName(jsonValue.GetString("FieldName"));
    m_fieldNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Filter"))
  {
    m_filter = jsonValue.GetObject("Filter");
    m_filterHasBeenSet = true;
  }
  return *this;
}

JsonValue OcsfBooleanFilter::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("FieldName", OcsfBooleanFieldMapper::GetNameForOcsfBooleanField(m_fieldName));
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
