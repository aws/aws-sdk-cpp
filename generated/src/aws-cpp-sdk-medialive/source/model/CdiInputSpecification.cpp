/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CdiInputSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

CdiInputSpecification::CdiInputSpecification() : 
    m_resolution(CdiInputResolution::NOT_SET),
    m_resolutionHasBeenSet(false)
{
}

CdiInputSpecification::CdiInputSpecification(JsonView jsonValue) : 
    m_resolution(CdiInputResolution::NOT_SET),
    m_resolutionHasBeenSet(false)
{
  *this = jsonValue;
}

CdiInputSpecification& CdiInputSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resolution"))
  {
    m_resolution = CdiInputResolutionMapper::GetCdiInputResolutionForName(jsonValue.GetString("resolution"));

    m_resolutionHasBeenSet = true;
  }

  return *this;
}

JsonValue CdiInputSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_resolutionHasBeenSet)
  {
   payload.WithString("resolution", CdiInputResolutionMapper::GetNameForCdiInputResolution(m_resolution));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
