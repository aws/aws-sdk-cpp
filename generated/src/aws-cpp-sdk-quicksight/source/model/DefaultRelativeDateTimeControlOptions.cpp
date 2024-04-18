/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DefaultRelativeDateTimeControlOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DefaultRelativeDateTimeControlOptions::DefaultRelativeDateTimeControlOptions() : 
    m_displayOptionsHasBeenSet(false)
{
}

DefaultRelativeDateTimeControlOptions::DefaultRelativeDateTimeControlOptions(JsonView jsonValue) : 
    m_displayOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultRelativeDateTimeControlOptions& DefaultRelativeDateTimeControlOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DisplayOptions"))
  {
    m_displayOptions = jsonValue.GetObject("DisplayOptions");

    m_displayOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultRelativeDateTimeControlOptions::Jsonize() const
{
  JsonValue payload;

  if(m_displayOptionsHasBeenSet)
  {
   payload.WithObject("DisplayOptions", m_displayOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
