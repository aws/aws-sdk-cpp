/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketServerSideEncryptionRule.h>
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

AwsS3BucketServerSideEncryptionRule::AwsS3BucketServerSideEncryptionRule() : 
    m_applyServerSideEncryptionByDefaultHasBeenSet(false)
{
}

AwsS3BucketServerSideEncryptionRule::AwsS3BucketServerSideEncryptionRule(JsonView jsonValue) : 
    m_applyServerSideEncryptionByDefaultHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketServerSideEncryptionRule& AwsS3BucketServerSideEncryptionRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplyServerSideEncryptionByDefault"))
  {
    m_applyServerSideEncryptionByDefault = jsonValue.GetObject("ApplyServerSideEncryptionByDefault");

    m_applyServerSideEncryptionByDefaultHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketServerSideEncryptionRule::Jsonize() const
{
  JsonValue payload;

  if(m_applyServerSideEncryptionByDefaultHasBeenSet)
  {
   payload.WithObject("ApplyServerSideEncryptionByDefault", m_applyServerSideEncryptionByDefault.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
