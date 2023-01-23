/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NielsenConfiguration.h>
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

NielsenConfiguration::NielsenConfiguration() : 
    m_distributorIdHasBeenSet(false),
    m_nielsenPcmToId3Tagging(NielsenPcmToId3TaggingState::NOT_SET),
    m_nielsenPcmToId3TaggingHasBeenSet(false)
{
}

NielsenConfiguration::NielsenConfiguration(JsonView jsonValue) : 
    m_distributorIdHasBeenSet(false),
    m_nielsenPcmToId3Tagging(NielsenPcmToId3TaggingState::NOT_SET),
    m_nielsenPcmToId3TaggingHasBeenSet(false)
{
  *this = jsonValue;
}

NielsenConfiguration& NielsenConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("distributorId"))
  {
    m_distributorId = jsonValue.GetString("distributorId");

    m_distributorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nielsenPcmToId3Tagging"))
  {
    m_nielsenPcmToId3Tagging = NielsenPcmToId3TaggingStateMapper::GetNielsenPcmToId3TaggingStateForName(jsonValue.GetString("nielsenPcmToId3Tagging"));

    m_nielsenPcmToId3TaggingHasBeenSet = true;
  }

  return *this;
}

JsonValue NielsenConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_distributorIdHasBeenSet)
  {
   payload.WithString("distributorId", m_distributorId);

  }

  if(m_nielsenPcmToId3TaggingHasBeenSet)
  {
   payload.WithString("nielsenPcmToId3Tagging", NielsenPcmToId3TaggingStateMapper::GetNameForNielsenPcmToId3TaggingState(m_nielsenPcmToId3Tagging));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
