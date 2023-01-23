/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/IcmpTypeCode.h>
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

IcmpTypeCode::IcmpTypeCode() : 
    m_code(0),
    m_codeHasBeenSet(false),
    m_type(0),
    m_typeHasBeenSet(false)
{
}

IcmpTypeCode::IcmpTypeCode(JsonView jsonValue) : 
    m_code(0),
    m_codeHasBeenSet(false),
    m_type(0),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

IcmpTypeCode& IcmpTypeCode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetInteger("Code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetInteger("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue IcmpTypeCode::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithInteger("Code", m_code);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithInteger("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
