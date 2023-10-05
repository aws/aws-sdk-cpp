/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRoute53QueryLoggingConfigDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRoute53QueryLoggingConfigDetails::AwsRoute53QueryLoggingConfigDetails() : 
    m_cloudWatchLogsLogGroupArnHasBeenSet(false)
{
}

AwsRoute53QueryLoggingConfigDetails::AwsRoute53QueryLoggingConfigDetails(JsonView jsonValue) : 
    m_cloudWatchLogsLogGroupArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRoute53QueryLoggingConfigDetails& AwsRoute53QueryLoggingConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLogsLogGroupArn"))
  {
    m_cloudWatchLogsLogGroupArn = jsonValue.GetObject("CloudWatchLogsLogGroupArn");

    m_cloudWatchLogsLogGroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRoute53QueryLoggingConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsLogGroupArnHasBeenSet)
  {
   payload.WithObject("CloudWatchLogsLogGroupArn", m_cloudWatchLogsLogGroupArn.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
