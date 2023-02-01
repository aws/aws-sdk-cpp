/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/Operation.h>
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

Operation::Operation() : 
    m_equationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputType(OutputType::NOT_SET),
    m_outputTypeHasBeenSet(false)
{
}

Operation::Operation(JsonView jsonValue) : 
    m_equationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputType(OutputType::NOT_SET),
    m_outputTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Operation& Operation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Equation"))
  {
    m_equation = jsonValue.GetString("Equation");

    m_equationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputType"))
  {
    m_outputType = OutputTypeMapper::GetOutputTypeForName(jsonValue.GetString("OutputType"));

    m_outputTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Operation::Jsonize() const
{
  JsonValue payload;

  if(m_equationHasBeenSet)
  {
   payload.WithString("Equation", m_equation);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_outputTypeHasBeenSet)
  {
   payload.WithString("OutputType", OutputTypeMapper::GetNameForOutputType(m_outputType));
  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
