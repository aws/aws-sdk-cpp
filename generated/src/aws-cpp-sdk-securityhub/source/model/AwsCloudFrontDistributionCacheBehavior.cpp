/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudFrontDistributionCacheBehavior.h>
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

AwsCloudFrontDistributionCacheBehavior::AwsCloudFrontDistributionCacheBehavior() : 
    m_viewerProtocolPolicyHasBeenSet(false)
{
}

AwsCloudFrontDistributionCacheBehavior::AwsCloudFrontDistributionCacheBehavior(JsonView jsonValue) : 
    m_viewerProtocolPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudFrontDistributionCacheBehavior& AwsCloudFrontDistributionCacheBehavior::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ViewerProtocolPolicy"))
  {
    m_viewerProtocolPolicy = jsonValue.GetString("ViewerProtocolPolicy");

    m_viewerProtocolPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudFrontDistributionCacheBehavior::Jsonize() const
{
  JsonValue payload;

  if(m_viewerProtocolPolicyHasBeenSet)
  {
   payload.WithString("ViewerProtocolPolicy", m_viewerProtocolPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
