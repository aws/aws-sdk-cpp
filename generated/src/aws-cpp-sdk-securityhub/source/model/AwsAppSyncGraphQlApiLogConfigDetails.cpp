/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAppSyncGraphQlApiLogConfigDetails.h>
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

AwsAppSyncGraphQlApiLogConfigDetails::AwsAppSyncGraphQlApiLogConfigDetails() : 
    m_cloudWatchLogsRoleArnHasBeenSet(false),
    m_excludeVerboseContent(false),
    m_excludeVerboseContentHasBeenSet(false),
    m_fieldLogLevelHasBeenSet(false)
{
}

AwsAppSyncGraphQlApiLogConfigDetails::AwsAppSyncGraphQlApiLogConfigDetails(JsonView jsonValue) : 
    m_cloudWatchLogsRoleArnHasBeenSet(false),
    m_excludeVerboseContent(false),
    m_excludeVerboseContentHasBeenSet(false),
    m_fieldLogLevelHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAppSyncGraphQlApiLogConfigDetails& AwsAppSyncGraphQlApiLogConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudWatchLogsRoleArn"))
  {
    m_cloudWatchLogsRoleArn = jsonValue.GetString("CloudWatchLogsRoleArn");

    m_cloudWatchLogsRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeVerboseContent"))
  {
    m_excludeVerboseContent = jsonValue.GetBool("ExcludeVerboseContent");

    m_excludeVerboseContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldLogLevel"))
  {
    m_fieldLogLevel = jsonValue.GetString("FieldLogLevel");

    m_fieldLogLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAppSyncGraphQlApiLogConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogsRoleArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogsRoleArn", m_cloudWatchLogsRoleArn);

  }

  if(m_excludeVerboseContentHasBeenSet)
  {
   payload.WithBool("ExcludeVerboseContent", m_excludeVerboseContent);

  }

  if(m_fieldLogLevelHasBeenSet)
  {
   payload.WithString("FieldLogLevel", m_fieldLogLevel);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
