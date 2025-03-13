/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ColumnInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-query/model/Type.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

ColumnInfo::ColumnInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

ColumnInfo& ColumnInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = Aws::MakeShared<Type>("ColumnInfo", jsonValue.GetObject("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue ColumnInfo::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithObject("Type", m_type->Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
