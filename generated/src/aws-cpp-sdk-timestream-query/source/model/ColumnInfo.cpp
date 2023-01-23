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

ColumnInfo::ColumnInfo() : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

ColumnInfo::ColumnInfo(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

const Type& ColumnInfo::GetType() const{ return *m_type; }
bool ColumnInfo::TypeHasBeenSet() const { return m_typeHasBeenSet; }
void ColumnInfo::SetType(const Type& value) { m_typeHasBeenSet = true; m_type = Aws::MakeShared<Type>("ColumnInfo", value); }
void ColumnInfo::SetType(Type&& value) { m_typeHasBeenSet = true; m_type = Aws::MakeShared<Type>("ColumnInfo", std::move(value)); }
ColumnInfo& ColumnInfo::WithType(const Type& value) { SetType(value); return *this;}
ColumnInfo& ColumnInfo::WithType(Type&& value) { SetType(std::move(value)); return *this;}

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
