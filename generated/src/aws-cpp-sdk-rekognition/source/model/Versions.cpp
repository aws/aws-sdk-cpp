/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/Versions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

Versions::Versions(JsonView jsonValue)
{
  *this = jsonValue;
}

Versions& Versions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Minimum"))
  {
    m_minimum = jsonValue.GetString("Minimum");
    m_minimumHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Maximum"))
  {
    m_maximum = jsonValue.GetString("Maximum");
    m_maximumHasBeenSet = true;
  }
  return *this;
}

JsonValue Versions::Jsonize() const
{
  JsonValue payload;

  if(m_minimumHasBeenSet)
  {
   payload.WithString("Minimum", m_minimum);

  }

  if(m_maximumHasBeenSet)
  {
   payload.WithString("Maximum", m_maximum);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
