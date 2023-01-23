/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketBucketVersioningConfiguration.h>
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

AwsS3BucketBucketVersioningConfiguration::AwsS3BucketBucketVersioningConfiguration() : 
    m_isMfaDeleteEnabled(false),
    m_isMfaDeleteEnabledHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsS3BucketBucketVersioningConfiguration::AwsS3BucketBucketVersioningConfiguration(JsonView jsonValue) : 
    m_isMfaDeleteEnabled(false),
    m_isMfaDeleteEnabledHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketBucketVersioningConfiguration& AwsS3BucketBucketVersioningConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IsMfaDeleteEnabled"))
  {
    m_isMfaDeleteEnabled = jsonValue.GetBool("IsMfaDeleteEnabled");

    m_isMfaDeleteEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketBucketVersioningConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_isMfaDeleteEnabledHasBeenSet)
  {
   payload.WithBool("IsMfaDeleteEnabled", m_isMfaDeleteEnabled);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
