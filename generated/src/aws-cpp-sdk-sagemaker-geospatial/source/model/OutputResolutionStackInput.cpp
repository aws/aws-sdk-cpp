/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/OutputResolutionStackInput.h>
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

OutputResolutionStackInput::OutputResolutionStackInput() : 
    m_predefined(PredefinedResolution::NOT_SET),
    m_predefinedHasBeenSet(false),
    m_userDefinedHasBeenSet(false)
{
}

OutputResolutionStackInput::OutputResolutionStackInput(JsonView jsonValue) : 
    m_predefined(PredefinedResolution::NOT_SET),
    m_predefinedHasBeenSet(false),
    m_userDefinedHasBeenSet(false)
{
  *this = jsonValue;
}

OutputResolutionStackInput& OutputResolutionStackInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Predefined"))
  {
    m_predefined = PredefinedResolutionMapper::GetPredefinedResolutionForName(jsonValue.GetString("Predefined"));

    m_predefinedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserDefined"))
  {
    m_userDefined = jsonValue.GetObject("UserDefined");

    m_userDefinedHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputResolutionStackInput::Jsonize() const
{
  JsonValue payload;

  if(m_predefinedHasBeenSet)
  {
   payload.WithString("Predefined", PredefinedResolutionMapper::GetNameForPredefinedResolution(m_predefined));
  }

  if(m_userDefinedHasBeenSet)
  {
   payload.WithObject("UserDefined", m_userDefined.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
