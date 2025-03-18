/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/Field.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

Field::Field(JsonView jsonValue)
{
  *this = jsonValue;
}

Field& Field::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("aggregation"))
  {
    m_aggregation = FieldAggregationTypeMapper::GetFieldAggregationTypeForName(jsonValue.GetString("aggregation"));
    m_aggregationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue Field::Jsonize() const
{
  JsonValue payload;

  if(m_aggregationHasBeenSet)
  {
   payload.WithString("aggregation", FieldAggregationTypeMapper::GetNameForFieldAggregationType(m_aggregation));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
