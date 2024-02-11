/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/SearchFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

SearchFilter::SearchFilter() : 
    m_valuesHasBeenSet(false),
    m_operator(Operator::NOT_SET),
    m_operatorHasBeenSet(false)
{
}

SearchFilter::SearchFilter(JsonView jsonValue) : 
    m_valuesHasBeenSet(false),
    m_operator(Operator::NOT_SET),
    m_operatorHasBeenSet(false)
{
  *this = jsonValue;
}

SearchFilter& SearchFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsObject());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = OperatorMapper::GetOperatorForName(jsonValue.GetString("operator"));

    m_operatorHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchFilter::Jsonize() const
{
  JsonValue payload;

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsObject(m_values[valuesIndex].Jsonize());
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", OperatorMapper::GetNameForOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
