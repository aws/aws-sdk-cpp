﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudFrontDistributionOriginItem.h>
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

AwsCloudFrontDistributionOriginItem::AwsCloudFrontDistributionOriginItem(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsCloudFrontDistributionOriginItem& AwsCloudFrontDistributionOriginItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OriginPath"))
  {
    m_originPath = jsonValue.GetString("OriginPath");
    m_originPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3OriginConfig"))
  {
    m_s3OriginConfig = jsonValue.GetObject("S3OriginConfig");
    m_s3OriginConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomOriginConfig"))
  {
    m_customOriginConfig = jsonValue.GetObject("CustomOriginConfig");
    m_customOriginConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsCloudFrontDistributionOriginItem::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_originPathHasBeenSet)
  {
   payload.WithString("OriginPath", m_originPath);

  }

  if(m_s3OriginConfigHasBeenSet)
  {
   payload.WithObject("S3OriginConfig", m_s3OriginConfig.Jsonize());

  }

  if(m_customOriginConfigHasBeenSet)
  {
   payload.WithObject("CustomOriginConfig", m_customOriginConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
