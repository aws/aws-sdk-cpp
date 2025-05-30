﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/FieldToMatch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

FieldToMatch::FieldToMatch(JsonView jsonValue)
{
  *this = jsonValue;
}

FieldToMatch& FieldToMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = MatchFieldTypeMapper::GetMatchFieldTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Data"))
  {
    m_data = jsonValue.GetString("Data");
    m_dataHasBeenSet = true;
  }
  return *this;
}

JsonValue FieldToMatch::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", MatchFieldTypeMapper::GetNameForMatchFieldType(m_type));
  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("Data", m_data);

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws
