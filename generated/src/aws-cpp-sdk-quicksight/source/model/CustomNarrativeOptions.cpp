/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CustomNarrativeOptions.h>
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

CustomNarrativeOptions::CustomNarrativeOptions() : 
    m_narrativeHasBeenSet(false)
{
}

CustomNarrativeOptions::CustomNarrativeOptions(JsonView jsonValue) : 
    m_narrativeHasBeenSet(false)
{
  *this = jsonValue;
}

CustomNarrativeOptions& CustomNarrativeOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Narrative"))
  {
    m_narrative = jsonValue.GetString("Narrative");

    m_narrativeHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomNarrativeOptions::Jsonize() const
{
  JsonValue payload;

  if(m_narrativeHasBeenSet)
  {
   payload.WithString("Narrative", m_narrative);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
