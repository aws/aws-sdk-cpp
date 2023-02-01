/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/CloudWatchLogsLogGroup.h>
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

CloudWatchLogsLogGroup::CloudWatchLogsLogGroup() : 
    m_logGroupArnHasBeenSet(false)
{
}

CloudWatchLogsLogGroup::CloudWatchLogsLogGroup(JsonView jsonValue) : 
    m_logGroupArnHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLogsLogGroup& CloudWatchLogsLogGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogGroupArn"))
  {
    m_logGroupArn = jsonValue.GetString("LogGroupArn");

    m_logGroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLogsLogGroup::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupArnHasBeenSet)
  {
   payload.WithString("LogGroupArn", m_logGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
