/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/ComputeFarmConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

ComputeFarmConfiguration::ComputeFarmConfiguration() : 
    m_activeDirectoryUserHasBeenSet(false),
    m_endpointHasBeenSet(false)
{
}

ComputeFarmConfiguration::ComputeFarmConfiguration(JsonView jsonValue) : 
    m_activeDirectoryUserHasBeenSet(false),
    m_endpointHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeFarmConfiguration& ComputeFarmConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeDirectoryUser"))
  {
    m_activeDirectoryUser = jsonValue.GetString("activeDirectoryUser");

    m_activeDirectoryUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputeFarmConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_activeDirectoryUserHasBeenSet)
  {
   payload.WithString("activeDirectoryUser", m_activeDirectoryUser);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
