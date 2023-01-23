/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

HyperParameterSpecification::HyperParameterSpecification() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(ParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_rangeHasBeenSet(false),
    m_isTunable(false),
    m_isTunableHasBeenSet(false),
    m_isRequired(false),
    m_isRequiredHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
}

HyperParameterSpecification::HyperParameterSpecification(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(ParameterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_rangeHasBeenSet(false),
    m_isTunable(false),
    m_isTunableHasBeenSet(false),
    m_isRequired(false),
    m_isRequiredHasBeenSet(false),
    m_defaultValueHasBeenSet(false)
{
  *this = jsonValue;
}

HyperParameterSpecification& HyperParameterSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ParameterTypeMapper::GetParameterTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Range"))
  {
    m_range = jsonValue.GetObject("Range");

    m_rangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsTunable"))
  {
    m_isTunable = jsonValue.GetBool("IsTunable");

    m_isTunableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsRequired"))
  {
    m_isRequired = jsonValue.GetBool("IsRequired");

    m_isRequiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultValue"))
  {
    m_defaultValue = jsonValue.GetString("DefaultValue");

    m_defaultValueHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperParameterSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ParameterTypeMapper::GetNameForParameterType(m_type));
  }

  if(m_rangeHasBeenSet)
  {
   payload.WithObject("Range", m_range.Jsonize());

  }

  if(m_isTunableHasBeenSet)
  {
   payload.WithBool("IsTunable", m_isTunable);

  }

  if(m_isRequiredHasBeenSet)
  {
   payload.WithBool("IsRequired", m_isRequired);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithString("DefaultValue", m_defaultValue);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
