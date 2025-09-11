/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CustomConnectionParameters.h>
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

CustomConnectionParameters::CustomConnectionParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomConnectionParameters& CustomConnectionParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionType"))
  {
    m_connectionType = jsonValue.GetString("ConnectionType");
    m_connectionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomConnectionParameters::Jsonize() const
{
  JsonValue payload;

  if(m_connectionTypeHasBeenSet)
  {
   payload.WithString("ConnectionType", m_connectionType);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
