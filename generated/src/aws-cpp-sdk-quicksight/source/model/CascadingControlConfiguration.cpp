/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CascadingControlConfiguration.h>
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

CascadingControlConfiguration::CascadingControlConfiguration() : 
    m_sourceControlsHasBeenSet(false)
{
}

CascadingControlConfiguration::CascadingControlConfiguration(JsonView jsonValue) : 
    m_sourceControlsHasBeenSet(false)
{
  *this = jsonValue;
}

CascadingControlConfiguration& CascadingControlConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceControls"))
  {
    Aws::Utils::Array<JsonView> sourceControlsJsonList = jsonValue.GetArray("SourceControls");
    for(unsigned sourceControlsIndex = 0; sourceControlsIndex < sourceControlsJsonList.GetLength(); ++sourceControlsIndex)
    {
      m_sourceControls.push_back(sourceControlsJsonList[sourceControlsIndex].AsObject());
    }
    m_sourceControlsHasBeenSet = true;
  }

  return *this;
}

JsonValue CascadingControlConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sourceControlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceControlsJsonList(m_sourceControls.size());
   for(unsigned sourceControlsIndex = 0; sourceControlsIndex < sourceControlsJsonList.GetLength(); ++sourceControlsIndex)
   {
     sourceControlsJsonList[sourceControlsIndex].AsObject(m_sourceControls[sourceControlsIndex].Jsonize());
   }
   payload.WithArray("SourceControls", std::move(sourceControlsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
