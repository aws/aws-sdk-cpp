/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryCodeOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

CanaryCodeOutput::CanaryCodeOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

CanaryCodeOutput& CanaryCodeOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceLocationArn"))
  {
    m_sourceLocationArn = jsonValue.GetString("SourceLocationArn");
    m_sourceLocationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Handler"))
  {
    m_handler = jsonValue.GetString("Handler");
    m_handlerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Dependencies"))
  {
    Aws::Utils::Array<JsonView> dependenciesJsonList = jsonValue.GetArray("Dependencies");
    for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
    {
      m_dependencies.push_back(dependenciesJsonList[dependenciesIndex].AsObject());
    }
    m_dependenciesHasBeenSet = true;
  }
  return *this;
}

JsonValue CanaryCodeOutput::Jsonize() const
{
  JsonValue payload;

  if(m_sourceLocationArnHasBeenSet)
  {
   payload.WithString("SourceLocationArn", m_sourceLocationArn);

  }

  if(m_handlerHasBeenSet)
  {
   payload.WithString("Handler", m_handler);

  }

  if(m_dependenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependenciesJsonList(m_dependencies.size());
   for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
   {
     dependenciesJsonList[dependenciesIndex].AsObject(m_dependencies[dependenciesIndex].Jsonize());
   }
   payload.WithArray("Dependencies", std::move(dependenciesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
