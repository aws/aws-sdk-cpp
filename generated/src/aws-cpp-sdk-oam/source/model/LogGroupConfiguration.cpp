/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/oam/model/LogGroupConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OAM
{
namespace Model
{

LogGroupConfiguration::LogGroupConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

LogGroupConfiguration& LogGroupConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Filter"))
  {
    m_filter = jsonValue.GetString("Filter");
    m_filterHasBeenSet = true;
  }
  return *this;
}

JsonValue LogGroupConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_filterHasBeenSet)
  {
   payload.WithString("Filter", m_filter);

  }

  return payload;
}

} // namespace Model
} // namespace OAM
} // namespace Aws
