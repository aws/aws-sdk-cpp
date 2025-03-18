/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/Sort.h>
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

Sort::Sort(JsonView jsonValue)
{
  *this = jsonValue;
}

Sort& Sort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ascending"))
  {
    m_ascending = jsonValue.GetBool("ascending");
    m_ascendingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("field"))
  {
    m_field = jsonValue.GetString("field");
    m_fieldHasBeenSet = true;
  }
  return *this;
}

JsonValue Sort::Jsonize() const
{
  JsonValue payload;

  if(m_ascendingHasBeenSet)
  {
   payload.WithBool("ascending", m_ascending);

  }

  if(m_fieldHasBeenSet)
  {
   payload.WithString("field", m_field);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
