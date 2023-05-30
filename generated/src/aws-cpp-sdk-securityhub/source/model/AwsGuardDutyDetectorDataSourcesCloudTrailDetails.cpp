/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesCloudTrailDetails.h>
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

AwsGuardDutyDetectorDataSourcesCloudTrailDetails::AwsGuardDutyDetectorDataSourcesCloudTrailDetails() : 
    m_statusHasBeenSet(false)
{
}

AwsGuardDutyDetectorDataSourcesCloudTrailDetails::AwsGuardDutyDetectorDataSourcesCloudTrailDetails(JsonView jsonValue) : 
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsGuardDutyDetectorDataSourcesCloudTrailDetails& AwsGuardDutyDetectorDataSourcesCloudTrailDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsGuardDutyDetectorDataSourcesCloudTrailDetails::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
