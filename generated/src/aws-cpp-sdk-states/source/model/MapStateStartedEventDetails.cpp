/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/MapStateStartedEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

MapStateStartedEventDetails::MapStateStartedEventDetails() : 
    m_length(0),
    m_lengthHasBeenSet(false)
{
}

MapStateStartedEventDetails::MapStateStartedEventDetails(JsonView jsonValue) : 
    m_length(0),
    m_lengthHasBeenSet(false)
{
  *this = jsonValue;
}

MapStateStartedEventDetails& MapStateStartedEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("length"))
  {
    m_length = jsonValue.GetInteger("length");

    m_lengthHasBeenSet = true;
  }

  return *this;
}

JsonValue MapStateStartedEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_lengthHasBeenSet)
  {
   payload.WithInteger("length", m_length);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
