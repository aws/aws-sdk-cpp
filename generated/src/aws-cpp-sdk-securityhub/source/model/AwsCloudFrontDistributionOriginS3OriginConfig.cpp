/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudFrontDistributionOriginS3OriginConfig.h>
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

AwsCloudFrontDistributionOriginS3OriginConfig::AwsCloudFrontDistributionOriginS3OriginConfig() : 
    m_originAccessIdentityHasBeenSet(false)
{
}

AwsCloudFrontDistributionOriginS3OriginConfig::AwsCloudFrontDistributionOriginS3OriginConfig(JsonView jsonValue) : 
    m_originAccessIdentityHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudFrontDistributionOriginS3OriginConfig& AwsCloudFrontDistributionOriginS3OriginConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OriginAccessIdentity"))
  {
    m_originAccessIdentity = jsonValue.GetString("OriginAccessIdentity");

    m_originAccessIdentityHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudFrontDistributionOriginS3OriginConfig::Jsonize() const
{
  JsonValue payload;

  if(m_originAccessIdentityHasBeenSet)
  {
   payload.WithString("OriginAccessIdentity", m_originAccessIdentity);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
