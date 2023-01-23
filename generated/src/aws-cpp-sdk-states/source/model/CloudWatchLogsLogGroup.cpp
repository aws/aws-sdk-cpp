/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/CloudWatchLogsLogGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
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
  if(jsonValue.ValueExists("logGroupArn"))
  {
    m_logGroupArn = jsonValue.GetString("logGroupArn");

    m_logGroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLogsLogGroup::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupArnHasBeenSet)
  {
   payload.WithString("logGroupArn", m_logGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
