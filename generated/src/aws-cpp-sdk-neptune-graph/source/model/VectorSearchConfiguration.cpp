/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/VectorSearchConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

VectorSearchConfiguration::VectorSearchConfiguration() : 
    m_dimension(0),
    m_dimensionHasBeenSet(false)
{
}

VectorSearchConfiguration::VectorSearchConfiguration(JsonView jsonValue) : 
    m_dimension(0),
    m_dimensionHasBeenSet(false)
{
  *this = jsonValue;
}

VectorSearchConfiguration& VectorSearchConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dimension"))
  {
    m_dimension = jsonValue.GetInteger("dimension");

    m_dimensionHasBeenSet = true;
  }

  return *this;
}

JsonValue VectorSearchConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionHasBeenSet)
  {
   payload.WithInteger("dimension", m_dimension);

  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
