/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PropertyNameSuggestion.h>
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

PropertyNameSuggestion::PropertyNameSuggestion() : 
    m_propertyNameHasBeenSet(false)
{
}

PropertyNameSuggestion::PropertyNameSuggestion(JsonView jsonValue) : 
    m_propertyNameHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyNameSuggestion& PropertyNameSuggestion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PropertyName"))
  {
    m_propertyName = jsonValue.GetString("PropertyName");

    m_propertyNameHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyNameSuggestion::Jsonize() const
{
  JsonValue payload;

  if(m_propertyNameHasBeenSet)
  {
   payload.WithString("PropertyName", m_propertyName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
