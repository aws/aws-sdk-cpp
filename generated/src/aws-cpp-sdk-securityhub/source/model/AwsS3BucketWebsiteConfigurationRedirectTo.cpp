/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketWebsiteConfigurationRedirectTo.h>
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

AwsS3BucketWebsiteConfigurationRedirectTo::AwsS3BucketWebsiteConfigurationRedirectTo() : 
    m_hostnameHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

AwsS3BucketWebsiteConfigurationRedirectTo::AwsS3BucketWebsiteConfigurationRedirectTo(JsonView jsonValue) : 
    m_hostnameHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketWebsiteConfigurationRedirectTo& AwsS3BucketWebsiteConfigurationRedirectTo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Hostname"))
  {
    m_hostname = jsonValue.GetString("Hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetString("Protocol");

    m_protocolHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketWebsiteConfigurationRedirectTo::Jsonize() const
{
  JsonValue payload;

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("Hostname", m_hostname);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", m_protocol);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
