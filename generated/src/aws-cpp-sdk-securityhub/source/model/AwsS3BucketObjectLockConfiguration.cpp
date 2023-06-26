/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketObjectLockConfiguration.h>
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

AwsS3BucketObjectLockConfiguration::AwsS3BucketObjectLockConfiguration() : 
    m_objectLockEnabledHasBeenSet(false),
    m_ruleHasBeenSet(false)
{
}

AwsS3BucketObjectLockConfiguration::AwsS3BucketObjectLockConfiguration(JsonView jsonValue) : 
    m_objectLockEnabledHasBeenSet(false),
    m_ruleHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketObjectLockConfiguration& AwsS3BucketObjectLockConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectLockEnabled"))
  {
    m_objectLockEnabled = jsonValue.GetString("ObjectLockEnabled");

    m_objectLockEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rule"))
  {
    m_rule = jsonValue.GetObject("Rule");

    m_ruleHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketObjectLockConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_objectLockEnabledHasBeenSet)
  {
   payload.WithString("ObjectLockEnabled", m_objectLockEnabled);

  }

  if(m_ruleHasBeenSet)
  {
   payload.WithObject("Rule", m_rule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
