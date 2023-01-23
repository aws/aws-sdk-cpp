/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/TargetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

TargetConfiguration::TargetConfiguration() : 
    m_timestreamConfigurationHasBeenSet(false)
{
}

TargetConfiguration::TargetConfiguration(JsonView jsonValue) : 
    m_timestreamConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

TargetConfiguration& TargetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimestreamConfiguration"))
  {
    m_timestreamConfiguration = jsonValue.GetObject("TimestreamConfiguration");

    m_timestreamConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_timestreamConfigurationHasBeenSet)
  {
   payload.WithObject("TimestreamConfiguration", m_timestreamConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
