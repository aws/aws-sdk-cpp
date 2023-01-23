/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NullValueFormatConfiguration.h>
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

NullValueFormatConfiguration::NullValueFormatConfiguration() : 
    m_nullStringHasBeenSet(false)
{
}

NullValueFormatConfiguration::NullValueFormatConfiguration(JsonView jsonValue) : 
    m_nullStringHasBeenSet(false)
{
  *this = jsonValue;
}

NullValueFormatConfiguration& NullValueFormatConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NullString"))
  {
    m_nullString = jsonValue.GetString("NullString");

    m_nullStringHasBeenSet = true;
  }

  return *this;
}

JsonValue NullValueFormatConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nullStringHasBeenSet)
  {
   payload.WithString("NullString", m_nullString);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
