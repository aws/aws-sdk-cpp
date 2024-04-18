/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DefaultFilterControlConfiguration.h>
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

DefaultFilterControlConfiguration::DefaultFilterControlConfiguration() : 
    m_titleHasBeenSet(false),
    m_controlOptionsHasBeenSet(false)
{
}

DefaultFilterControlConfiguration::DefaultFilterControlConfiguration(JsonView jsonValue) : 
    m_titleHasBeenSet(false),
    m_controlOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

DefaultFilterControlConfiguration& DefaultFilterControlConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ControlOptions"))
  {
    m_controlOptions = jsonValue.GetObject("ControlOptions");

    m_controlOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue DefaultFilterControlConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_controlOptionsHasBeenSet)
  {
   payload.WithObject("ControlOptions", m_controlOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
