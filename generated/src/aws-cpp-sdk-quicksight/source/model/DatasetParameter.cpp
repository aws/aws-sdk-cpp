/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DatasetParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DatasetParameter::DatasetParameter() : 
    m_stringDatasetParameterHasBeenSet(false),
    m_decimalDatasetParameterHasBeenSet(false),
    m_integerDatasetParameterHasBeenSet(false),
    m_dateTimeDatasetParameterHasBeenSet(false)
{
}

DatasetParameter::DatasetParameter(JsonView jsonValue) : 
    m_stringDatasetParameterHasBeenSet(false),
    m_decimalDatasetParameterHasBeenSet(false),
    m_integerDatasetParameterHasBeenSet(false),
    m_dateTimeDatasetParameterHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetParameter& DatasetParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StringDatasetParameter"))
  {
    m_stringDatasetParameter = jsonValue.GetObject("StringDatasetParameter");

    m_stringDatasetParameterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DecimalDatasetParameter"))
  {
    m_decimalDatasetParameter = jsonValue.GetObject("DecimalDatasetParameter");

    m_decimalDatasetParameterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegerDatasetParameter"))
  {
    m_integerDatasetParameter = jsonValue.GetObject("IntegerDatasetParameter");

    m_integerDatasetParameterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateTimeDatasetParameter"))
  {
    m_dateTimeDatasetParameter = jsonValue.GetObject("DateTimeDatasetParameter");

    m_dateTimeDatasetParameterHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetParameter::Jsonize() const
{
  JsonValue payload;

  if(m_stringDatasetParameterHasBeenSet)
  {
   payload.WithObject("StringDatasetParameter", m_stringDatasetParameter.Jsonize());

  }

  if(m_decimalDatasetParameterHasBeenSet)
  {
   payload.WithObject("DecimalDatasetParameter", m_decimalDatasetParameter.Jsonize());

  }

  if(m_integerDatasetParameterHasBeenSet)
  {
   payload.WithObject("IntegerDatasetParameter", m_integerDatasetParameter.Jsonize());

  }

  if(m_dateTimeDatasetParameterHasBeenSet)
  {
   payload.WithObject("DateTimeDatasetParameter", m_dateTimeDatasetParameter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
