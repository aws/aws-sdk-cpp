/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketWebsiteConfigurationRoutingRuleRedirect.h>
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

AwsS3BucketWebsiteConfigurationRoutingRuleRedirect::AwsS3BucketWebsiteConfigurationRoutingRuleRedirect() : 
    m_hostnameHasBeenSet(false),
    m_httpRedirectCodeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_replaceKeyPrefixWithHasBeenSet(false),
    m_replaceKeyWithHasBeenSet(false)
{
}

AwsS3BucketWebsiteConfigurationRoutingRuleRedirect::AwsS3BucketWebsiteConfigurationRoutingRuleRedirect(JsonView jsonValue) : 
    m_hostnameHasBeenSet(false),
    m_httpRedirectCodeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_replaceKeyPrefixWithHasBeenSet(false),
    m_replaceKeyWithHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketWebsiteConfigurationRoutingRuleRedirect& AwsS3BucketWebsiteConfigurationRoutingRuleRedirect::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Hostname"))
  {
    m_hostname = jsonValue.GetString("Hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpRedirectCode"))
  {
    m_httpRedirectCode = jsonValue.GetString("HttpRedirectCode");

    m_httpRedirectCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetString("Protocol");

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplaceKeyPrefixWith"))
  {
    m_replaceKeyPrefixWith = jsonValue.GetString("ReplaceKeyPrefixWith");

    m_replaceKeyPrefixWithHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplaceKeyWith"))
  {
    m_replaceKeyWith = jsonValue.GetString("ReplaceKeyWith");

    m_replaceKeyWithHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketWebsiteConfigurationRoutingRuleRedirect::Jsonize() const
{
  JsonValue payload;

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("Hostname", m_hostname);

  }

  if(m_httpRedirectCodeHasBeenSet)
  {
   payload.WithString("HttpRedirectCode", m_httpRedirectCode);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", m_protocol);

  }

  if(m_replaceKeyPrefixWithHasBeenSet)
  {
   payload.WithString("ReplaceKeyPrefixWith", m_replaceKeyPrefixWith);

  }

  if(m_replaceKeyWithHasBeenSet)
  {
   payload.WithString("ReplaceKeyWith", m_replaceKeyWith);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
