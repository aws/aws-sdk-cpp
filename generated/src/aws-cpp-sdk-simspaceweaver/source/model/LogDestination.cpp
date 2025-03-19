/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/LogDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{

LogDestination::LogDestination(JsonView jsonValue)
{
  *this = jsonValue;
}

LogDestination& LogDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLogsLogGroup"))
  {
    m_cloudWatchLogsLogGroup = jsonValue.GetObject("CloudWatchLogsLogGroup");
    m_cloudWatchLogsLogGroupHasBeenSet = true;
  }
  return *this;
}

JsonValue LogDestination::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsLogGroupHasBeenSet)
  {
   payload.WithObject("CloudWatchLogsLogGroup", m_cloudWatchLogsLogGroup.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
