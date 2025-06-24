/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/OcsfDateFilter.h>
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

OcsfDateFilter::OcsfDateFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

OcsfDateFilter& OcsfDateFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = OcsfDateFieldMapper::GetOcsfDateFieldForName(jsonValue.GetString("FieldName"));
    m_fieldNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Filter"))
  {
    m_filter = jsonValue.GetObject("Filter");
    m_filterHasBeenSet = true;
  }
  return *this;
}

JsonValue OcsfDateFilter::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("FieldName", OcsfDateFieldMapper::GetNameForOcsfDateField(m_fieldName));
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
