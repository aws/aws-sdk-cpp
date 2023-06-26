/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAppSyncGraphQlApiUserPoolConfigDetails.h>
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

AwsAppSyncGraphQlApiUserPoolConfigDetails::AwsAppSyncGraphQlApiUserPoolConfigDetails() : 
    m_appIdClientRegexHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_defaultActionHasBeenSet(false),
    m_userPoolIdHasBeenSet(false)
{
}

AwsAppSyncGraphQlApiUserPoolConfigDetails::AwsAppSyncGraphQlApiUserPoolConfigDetails(JsonView jsonValue) : 
    m_appIdClientRegexHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_defaultActionHasBeenSet(false),
    m_userPoolIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAppSyncGraphQlApiUserPoolConfigDetails& AwsAppSyncGraphQlApiUserPoolConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppIdClientRegex"))
  {
    m_appIdClientRegex = jsonValue.GetString("AppIdClientRegex");

    m_appIdClientRegexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRegion"))
  {
    m_awsRegion = jsonValue.GetString("AwsRegion");

    m_awsRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultAction"))
  {
    m_defaultAction = jsonValue.GetString("DefaultAction");

    m_defaultActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserPoolId"))
  {
    m_userPoolId = jsonValue.GetString("UserPoolId");

    m_userPoolIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAppSyncGraphQlApiUserPoolConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_appIdClientRegexHasBeenSet)
  {
   payload.WithString("AppIdClientRegex", m_appIdClientRegex);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("AwsRegion", m_awsRegion);

  }

  if(m_defaultActionHasBeenSet)
  {
   payload.WithString("DefaultAction", m_defaultAction);

  }

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
