/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/SsmParameterStoreParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

SsmParameterStoreParameter::SsmParameterStoreParameter() : 
    m_parameterNameHasBeenSet(false),
    m_parameterType(SsmParameterStoreParameterType::NOT_SET),
    m_parameterTypeHasBeenSet(false)
{
}

SsmParameterStoreParameter::SsmParameterStoreParameter(JsonView jsonValue) : 
    m_parameterNameHasBeenSet(false),
    m_parameterType(SsmParameterStoreParameterType::NOT_SET),
    m_parameterTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SsmParameterStoreParameter& SsmParameterStoreParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("parameterName"))
  {
    m_parameterName = jsonValue.GetString("parameterName");

    m_parameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameterType"))
  {
    m_parameterType = SsmParameterStoreParameterTypeMapper::GetSsmParameterStoreParameterTypeForName(jsonValue.GetString("parameterType"));

    m_parameterTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SsmParameterStoreParameter::Jsonize() const
{
  JsonValue payload;

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("parameterName", m_parameterName);

  }

  if(m_parameterTypeHasBeenSet)
  {
   payload.WithString("parameterType", SsmParameterStoreParameterTypeMapper::GetNameForSsmParameterStoreParameterType(m_parameterType));
  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
