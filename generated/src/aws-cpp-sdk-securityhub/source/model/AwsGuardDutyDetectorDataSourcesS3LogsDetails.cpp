/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsGuardDutyDetectorDataSourcesS3LogsDetails.h>
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

AwsGuardDutyDetectorDataSourcesS3LogsDetails::AwsGuardDutyDetectorDataSourcesS3LogsDetails() : 
    m_statusHasBeenSet(false)
{
}

AwsGuardDutyDetectorDataSourcesS3LogsDetails::AwsGuardDutyDetectorDataSourcesS3LogsDetails(JsonView jsonValue) : 
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsGuardDutyDetectorDataSourcesS3LogsDetails& AwsGuardDutyDetectorDataSourcesS3LogsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsGuardDutyDetectorDataSourcesS3LogsDetails::Jsonize() const
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
