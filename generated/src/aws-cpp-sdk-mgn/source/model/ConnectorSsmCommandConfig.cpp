/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ConnectorSsmCommandConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

ConnectorSsmCommandConfig::ConnectorSsmCommandConfig() : 
    m_cloudWatchLogGroupNameHasBeenSet(false),
    m_cloudWatchOutputEnabled(false),
    m_cloudWatchOutputEnabledHasBeenSet(false),
    m_outputS3BucketNameHasBeenSet(false),
    m_s3OutputEnabled(false),
    m_s3OutputEnabledHasBeenSet(false)
{
}

ConnectorSsmCommandConfig::ConnectorSsmCommandConfig(JsonView jsonValue) : 
    m_cloudWatchLogGroupNameHasBeenSet(false),
    m_cloudWatchOutputEnabled(false),
    m_cloudWatchOutputEnabledHasBeenSet(false),
    m_outputS3BucketNameHasBeenSet(false),
    m_s3OutputEnabled(false),
    m_s3OutputEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorSsmCommandConfig& ConnectorSsmCommandConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudWatchLogGroupName"))
  {
    m_cloudWatchLogGroupName = jsonValue.GetString("cloudWatchLogGroupName");

    m_cloudWatchLogGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cloudWatchOutputEnabled"))
  {
    m_cloudWatchOutputEnabled = jsonValue.GetBool("cloudWatchOutputEnabled");

    m_cloudWatchOutputEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputS3BucketName"))
  {
    m_outputS3BucketName = jsonValue.GetString("outputS3BucketName");

    m_outputS3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3OutputEnabled"))
  {
    m_s3OutputEnabled = jsonValue.GetBool("s3OutputEnabled");

    m_s3OutputEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectorSsmCommandConfig::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogGroupNameHasBeenSet)
  {
   payload.WithString("cloudWatchLogGroupName", m_cloudWatchLogGroupName);

  }

  if(m_cloudWatchOutputEnabledHasBeenSet)
  {
   payload.WithBool("cloudWatchOutputEnabled", m_cloudWatchOutputEnabled);

  }

  if(m_outputS3BucketNameHasBeenSet)
  {
   payload.WithString("outputS3BucketName", m_outputS3BucketName);

  }

  if(m_s3OutputEnabledHasBeenSet)
  {
   payload.WithBool("s3OutputEnabled", m_s3OutputEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
