/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/OutputBand.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

OutputBand::OutputBand() : 
    m_bandNameHasBeenSet(false),
    m_outputDataType(OutputType::NOT_SET),
    m_outputDataTypeHasBeenSet(false)
{
}

OutputBand::OutputBand(JsonView jsonValue) : 
    m_bandNameHasBeenSet(false),
    m_outputDataType(OutputType::NOT_SET),
    m_outputDataTypeHasBeenSet(false)
{
  *this = jsonValue;
}

OutputBand& OutputBand::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BandName"))
  {
    m_bandName = jsonValue.GetString("BandName");

    m_bandNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputDataType"))
  {
    m_outputDataType = OutputTypeMapper::GetOutputTypeForName(jsonValue.GetString("OutputDataType"));

    m_outputDataTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputBand::Jsonize() const
{
  JsonValue payload;

  if(m_bandNameHasBeenSet)
  {
   payload.WithString("BandName", m_bandName);

  }

  if(m_outputDataTypeHasBeenSet)
  {
   payload.WithString("OutputDataType", OutputTypeMapper::GetNameForOutputType(m_outputDataType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
