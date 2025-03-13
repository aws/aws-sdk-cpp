/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/QueryTemporalRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

QueryTemporalRange::QueryTemporalRange(JsonView jsonValue)
{
  *this = jsonValue;
}

QueryTemporalRange& QueryTemporalRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetObject("Max");
    m_maxHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryTemporalRange::Jsonize() const
{
  JsonValue payload;

  if(m_maxHasBeenSet)
  {
   payload.WithObject("Max", m_max.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
