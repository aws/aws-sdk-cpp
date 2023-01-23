/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LocalNavigationConfiguration.h>
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

LocalNavigationConfiguration::LocalNavigationConfiguration() : 
    m_targetSheetIdHasBeenSet(false)
{
}

LocalNavigationConfiguration::LocalNavigationConfiguration(JsonView jsonValue) : 
    m_targetSheetIdHasBeenSet(false)
{
  *this = jsonValue;
}

LocalNavigationConfiguration& LocalNavigationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetSheetId"))
  {
    m_targetSheetId = jsonValue.GetString("TargetSheetId");

    m_targetSheetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue LocalNavigationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_targetSheetIdHasBeenSet)
  {
   payload.WithString("TargetSheetId", m_targetSheetId);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
