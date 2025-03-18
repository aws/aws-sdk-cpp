/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/SlurmCustomSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PCS
{
namespace Model
{

SlurmCustomSetting::SlurmCustomSetting(JsonView jsonValue)
{
  *this = jsonValue;
}

SlurmCustomSetting& SlurmCustomSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("parameterName"))
  {
    m_parameterName = jsonValue.GetString("parameterName");
    m_parameterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameterValue"))
  {
    m_parameterValue = jsonValue.GetString("parameterValue");
    m_parameterValueHasBeenSet = true;
  }
  return *this;
}

JsonValue SlurmCustomSetting::Jsonize() const
{
  JsonValue payload;

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("parameterName", m_parameterName);

  }

  if(m_parameterValueHasBeenSet)
  {
   payload.WithString("parameterValue", m_parameterValue);

  }

  return payload;
}

} // namespace Model
} // namespace PCS
} // namespace Aws
