/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DateAxisOptions.h>
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

DateAxisOptions::DateAxisOptions() : 
    m_missingDateVisibility(Visibility::NOT_SET),
    m_missingDateVisibilityHasBeenSet(false)
{
}

DateAxisOptions::DateAxisOptions(JsonView jsonValue) : 
    m_missingDateVisibility(Visibility::NOT_SET),
    m_missingDateVisibilityHasBeenSet(false)
{
  *this = jsonValue;
}

DateAxisOptions& DateAxisOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MissingDateVisibility"))
  {
    m_missingDateVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("MissingDateVisibility"));

    m_missingDateVisibilityHasBeenSet = true;
  }

  return *this;
}

JsonValue DateAxisOptions::Jsonize() const
{
  JsonValue payload;

  if(m_missingDateVisibilityHasBeenSet)
  {
   payload.WithString("MissingDateVisibility", VisibilityMapper::GetNameForVisibility(m_missingDateVisibility));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
