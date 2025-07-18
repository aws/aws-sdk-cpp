/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/InputTamsSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

InputTamsSettings::InputTamsSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

InputTamsSettings& InputTamsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authConnectionArn"))
  {
    m_authConnectionArn = jsonValue.GetString("authConnectionArn");
    m_authConnectionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("gapHandling"))
  {
    m_gapHandling = TamsGapHandlingMapper::GetTamsGapHandlingForName(jsonValue.GetString("gapHandling"));
    m_gapHandlingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceId"))
  {
    m_sourceId = jsonValue.GetString("sourceId");
    m_sourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timerange"))
  {
    m_timerange = jsonValue.GetString("timerange");
    m_timerangeHasBeenSet = true;
  }
  return *this;
}

JsonValue InputTamsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_authConnectionArnHasBeenSet)
  {
   payload.WithString("authConnectionArn", m_authConnectionArn);

  }

  if(m_gapHandlingHasBeenSet)
  {
   payload.WithString("gapHandling", TamsGapHandlingMapper::GetNameForTamsGapHandling(m_gapHandling));
  }

  if(m_sourceIdHasBeenSet)
  {
   payload.WithString("sourceId", m_sourceId);

  }

  if(m_timerangeHasBeenSet)
  {
   payload.WithString("timerange", m_timerange);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
