/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3AccessPointDetails.h>
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

AwsS3AccessPointDetails::AwsS3AccessPointDetails() : 
    m_accessPointArnHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_bucketAccountIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_networkOriginHasBeenSet(false),
    m_publicAccessBlockConfigurationHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false)
{
}

AwsS3AccessPointDetails::AwsS3AccessPointDetails(JsonView jsonValue) : 
    m_accessPointArnHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_bucketAccountIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_networkOriginHasBeenSet(false),
    m_publicAccessBlockConfigurationHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3AccessPointDetails& AwsS3AccessPointDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessPointArn"))
  {
    m_accessPointArn = jsonValue.GetString("AccessPointArn");

    m_accessPointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Alias"))
  {
    m_alias = jsonValue.GetString("Alias");

    m_aliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Bucket"))
  {
    m_bucket = jsonValue.GetString("Bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketAccountId"))
  {
    m_bucketAccountId = jsonValue.GetString("BucketAccountId");

    m_bucketAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkOrigin"))
  {
    m_networkOrigin = jsonValue.GetString("NetworkOrigin");

    m_networkOriginHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublicAccessBlockConfiguration"))
  {
    m_publicAccessBlockConfiguration = jsonValue.GetObject("PublicAccessBlockConfiguration");

    m_publicAccessBlockConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("VpcConfiguration");

    m_vpcConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3AccessPointDetails::Jsonize() const
{
  JsonValue payload;

  if(m_accessPointArnHasBeenSet)
  {
   payload.WithString("AccessPointArn", m_accessPointArn);

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("Alias", m_alias);

  }

  if(m_bucketHasBeenSet)
  {
   payload.WithString("Bucket", m_bucket);

  }

  if(m_bucketAccountIdHasBeenSet)
  {
   payload.WithString("BucketAccountId", m_bucketAccountId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_networkOriginHasBeenSet)
  {
   payload.WithString("NetworkOrigin", m_networkOrigin);

  }

  if(m_publicAccessBlockConfigurationHasBeenSet)
  {
   payload.WithObject("PublicAccessBlockConfiguration", m_publicAccessBlockConfiguration.Jsonize());

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("VpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
