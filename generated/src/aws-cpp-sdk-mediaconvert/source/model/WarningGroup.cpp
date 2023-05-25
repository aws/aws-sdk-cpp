/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/WarningGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

WarningGroup::WarningGroup() : 
    m_code(0),
    m_codeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

WarningGroup::WarningGroup(JsonView jsonValue) : 
    m_code(0),
    m_codeHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
  *this = jsonValue;
}

WarningGroup& WarningGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetInteger("code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  return *this;
}

JsonValue WarningGroup::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithInteger("code", m_code);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
