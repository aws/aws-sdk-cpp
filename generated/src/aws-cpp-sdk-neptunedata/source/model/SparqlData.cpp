/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/SparqlData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace neptunedata
{
namespace Model
{

SparqlData::SparqlData() : 
    m_stmtHasBeenSet(false)
{
}

SparqlData::SparqlData(JsonView jsonValue) : 
    m_stmtHasBeenSet(false)
{
  *this = jsonValue;
}

SparqlData& SparqlData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stmt"))
  {
    m_stmt = jsonValue.GetString("stmt");

    m_stmtHasBeenSet = true;
  }

  return *this;
}

JsonValue SparqlData::Jsonize() const
{
  JsonValue payload;

  if(m_stmtHasBeenSet)
  {
   payload.WithString("stmt", m_stmt);

  }

  return payload;
}

} // namespace Model
} // namespace neptunedata
} // namespace Aws
