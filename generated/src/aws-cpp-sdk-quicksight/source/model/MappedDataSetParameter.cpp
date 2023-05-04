/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/MappedDataSetParameter.h>
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

MappedDataSetParameter::MappedDataSetParameter() : 
    m_dataSetIdentifierHasBeenSet(false),
    m_dataSetParameterNameHasBeenSet(false)
{
}

MappedDataSetParameter::MappedDataSetParameter(JsonView jsonValue) : 
    m_dataSetIdentifierHasBeenSet(false),
    m_dataSetParameterNameHasBeenSet(false)
{
  *this = jsonValue;
}

MappedDataSetParameter& MappedDataSetParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetIdentifier"))
  {
    m_dataSetIdentifier = jsonValue.GetString("DataSetIdentifier");

    m_dataSetIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetParameterName"))
  {
    m_dataSetParameterName = jsonValue.GetString("DataSetParameterName");

    m_dataSetParameterNameHasBeenSet = true;
  }

  return *this;
}

JsonValue MappedDataSetParameter::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetIdentifierHasBeenSet)
  {
   payload.WithString("DataSetIdentifier", m_dataSetIdentifier);

  }

  if(m_dataSetParameterNameHasBeenSet)
  {
   payload.WithString("DataSetParameterName", m_dataSetParameterName);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
