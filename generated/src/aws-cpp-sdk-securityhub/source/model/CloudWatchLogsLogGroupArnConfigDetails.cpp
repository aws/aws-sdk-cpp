/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/CloudWatchLogsLogGroupArnConfigDetails.h>
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

CloudWatchLogsLogGroupArnConfigDetails::CloudWatchLogsLogGroupArnConfigDetails() : 
    m_cloudWatchLogsLogGroupArnHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CloudWatchLogsLogGroupArnConfigDetails::CloudWatchLogsLogGroupArnConfigDetails(JsonView jsonValue) : 
    m_cloudWatchLogsLogGroupArnHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLogsLogGroupArnConfigDetails& CloudWatchLogsLogGroupArnConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLogsLogGroupArn"))
  {
    m_cloudWatchLogsLogGroupArn = jsonValue.GetString("CloudWatchLogsLogGroupArn");

    m_cloudWatchLogsLogGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostedZoneId"))
  {
    m_hostedZoneId = jsonValue.GetString("HostedZoneId");

    m_hostedZoneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLogsLogGroupArnConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsLogGroupArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogsLogGroupArn", m_cloudWatchLogsLogGroupArn);

  }

  if(m_hostedZoneIdHasBeenSet)
  {
   payload.WithString("HostedZoneId", m_hostedZoneId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
