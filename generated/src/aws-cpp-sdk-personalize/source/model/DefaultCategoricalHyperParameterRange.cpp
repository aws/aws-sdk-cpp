/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DefaultCategoricalHyperParameterRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

DefaultCategoricalHyperParameterRange::DefaultCategoricalHyperParameterRange() : 
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_isTunable(false),
    m_isTunableHasBeenSet(false)
{
}

DefaultCategoricalHyperParameterRange::DefaultCategoricalHyperParameterRange(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_isTunable(false),
    m_isTunableHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultCategoricalHyperParameterRange& DefaultCategoricalHyperParameterRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isTunable"))
  {
    m_isTunable = jsonValue.GetBool("isTunable");

    m_isTunableHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultCategoricalHyperParameterRange::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  if(m_isTunableHasBeenSet)
  {
   payload.WithBool("isTunable", m_isTunable);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
