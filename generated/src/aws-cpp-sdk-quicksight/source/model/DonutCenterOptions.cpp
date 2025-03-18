/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DonutCenterOptions.h>
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

DonutCenterOptions::DonutCenterOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

DonutCenterOptions& DonutCenterOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LabelVisibility"))
  {
    m_labelVisibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("LabelVisibility"));
    m_labelVisibilityHasBeenSet = true;
  }
  return *this;
}

JsonValue DonutCenterOptions::Jsonize() const
{
  JsonValue payload;

  if(m_labelVisibilityHasBeenSet)
  {
   payload.WithString("LabelVisibility", VisibilityMapper::GetNameForVisibility(m_labelVisibility));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
