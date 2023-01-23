/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/NielsenConfiguration.h>
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

NielsenConfiguration::NielsenConfiguration() : 
    m_breakoutCode(0),
    m_breakoutCodeHasBeenSet(false),
    m_distributorIdHasBeenSet(false)
{
}

NielsenConfiguration::NielsenConfiguration(JsonView jsonValue) : 
    m_breakoutCode(0),
    m_breakoutCodeHasBeenSet(false),
    m_distributorIdHasBeenSet(false)
{
  *this = jsonValue;
}

NielsenConfiguration& NielsenConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("breakoutCode"))
  {
    m_breakoutCode = jsonValue.GetInteger("breakoutCode");

    m_breakoutCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("distributorId"))
  {
    m_distributorId = jsonValue.GetString("distributorId");

    m_distributorIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NielsenConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_breakoutCodeHasBeenSet)
  {
   payload.WithInteger("breakoutCode", m_breakoutCode);

  }

  if(m_distributorIdHasBeenSet)
  {
   payload.WithString("distributorId", m_distributorId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
