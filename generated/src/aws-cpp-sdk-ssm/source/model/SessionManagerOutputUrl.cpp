/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/SessionManagerOutputUrl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

SessionManagerOutputUrl::SessionManagerOutputUrl() : 
    m_s3OutputUrlHasBeenSet(false),
    m_cloudWatchOutputUrlHasBeenSet(false)
{
}

SessionManagerOutputUrl::SessionManagerOutputUrl(JsonView jsonValue) : 
    m_s3OutputUrlHasBeenSet(false),
    m_cloudWatchOutputUrlHasBeenSet(false)
{
  *this = jsonValue;
}

SessionManagerOutputUrl& SessionManagerOutputUrl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3OutputUrl"))
  {
    m_s3OutputUrl = jsonValue.GetString("S3OutputUrl");

    m_s3OutputUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchOutputUrl"))
  {
    m_cloudWatchOutputUrl = jsonValue.GetString("CloudWatchOutputUrl");

    m_cloudWatchOutputUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionManagerOutputUrl::Jsonize() const
{
  JsonValue payload;

  if(m_s3OutputUrlHasBeenSet)
  {
   payload.WithString("S3OutputUrl", m_s3OutputUrl);

  }

  if(m_cloudWatchOutputUrlHasBeenSet)
  {
   payload.WithString("CloudWatchOutputUrl", m_cloudWatchOutputUrl);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
