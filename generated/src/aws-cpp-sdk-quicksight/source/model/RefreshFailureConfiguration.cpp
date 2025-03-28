/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RefreshFailureConfiguration.h>
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

RefreshFailureConfiguration::RefreshFailureConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RefreshFailureConfiguration& RefreshFailureConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EmailAlert"))
  {
    m_emailAlert = jsonValue.GetObject("EmailAlert");
    m_emailAlertHasBeenSet = true;
  }
  return *this;
}

JsonValue RefreshFailureConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_emailAlertHasBeenSet)
  {
   payload.WithObject("EmailAlert", m_emailAlert.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
