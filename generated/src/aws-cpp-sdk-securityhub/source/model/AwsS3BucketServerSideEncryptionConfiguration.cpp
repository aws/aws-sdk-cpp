/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketServerSideEncryptionConfiguration.h>
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

AwsS3BucketServerSideEncryptionConfiguration::AwsS3BucketServerSideEncryptionConfiguration() : 
    m_rulesHasBeenSet(false)
{
}

AwsS3BucketServerSideEncryptionConfiguration::AwsS3BucketServerSideEncryptionConfiguration(JsonView jsonValue) : 
    m_rulesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketServerSideEncryptionConfiguration& AwsS3BucketServerSideEncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketServerSideEncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("Rules", std::move(rulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
