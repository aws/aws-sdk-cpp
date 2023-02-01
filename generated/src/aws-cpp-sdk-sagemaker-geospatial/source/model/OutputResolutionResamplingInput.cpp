/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/OutputResolutionResamplingInput.h>
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

OutputResolutionResamplingInput::OutputResolutionResamplingInput() : 
    m_userDefinedHasBeenSet(false)
{
}

OutputResolutionResamplingInput::OutputResolutionResamplingInput(JsonView jsonValue) : 
    m_userDefinedHasBeenSet(false)
{
  *this = jsonValue;
}

OutputResolutionResamplingInput& OutputResolutionResamplingInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserDefined"))
  {
    m_userDefined = jsonValue.GetObject("UserDefined");

    m_userDefinedHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputResolutionResamplingInput::Jsonize() const
{
  JsonValue payload;

  if(m_userDefinedHasBeenSet)
  {
   payload.WithObject("UserDefined", m_userDefined.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
