/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/EoCloudCoverInput.h>
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

EoCloudCoverInput::EoCloudCoverInput() : 
    m_lowerBound(0.0),
    m_lowerBoundHasBeenSet(false),
    m_upperBound(0.0),
    m_upperBoundHasBeenSet(false)
{
}

EoCloudCoverInput::EoCloudCoverInput(JsonView jsonValue) : 
    m_lowerBound(0.0),
    m_lowerBoundHasBeenSet(false),
    m_upperBound(0.0),
    m_upperBoundHasBeenSet(false)
{
  *this = jsonValue;
}

EoCloudCoverInput& EoCloudCoverInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LowerBound"))
  {
    m_lowerBound = jsonValue.GetDouble("LowerBound");

    m_lowerBoundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpperBound"))
  {
    m_upperBound = jsonValue.GetDouble("UpperBound");

    m_upperBoundHasBeenSet = true;
  }

  return *this;
}

JsonValue EoCloudCoverInput::Jsonize() const
{
  JsonValue payload;

  if(m_lowerBoundHasBeenSet)
  {
   payload.WithDouble("LowerBound", m_lowerBound);

  }

  if(m_upperBoundHasBeenSet)
  {
   payload.WithDouble("UpperBound", m_upperBound);

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
