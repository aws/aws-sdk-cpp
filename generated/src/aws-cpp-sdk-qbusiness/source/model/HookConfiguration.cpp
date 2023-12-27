/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/HookConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

HookConfiguration::HookConfiguration() : 
    m_invocationConditionHasBeenSet(false),
    m_lambdaArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false)
{
}

HookConfiguration::HookConfiguration(JsonView jsonValue) : 
    m_invocationConditionHasBeenSet(false),
    m_lambdaArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false)
{
  *this = jsonValue;
}

HookConfiguration& HookConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("invocationCondition"))
  {
    m_invocationCondition = jsonValue.GetObject("invocationCondition");

    m_invocationConditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaArn"))
  {
    m_lambdaArn = jsonValue.GetString("lambdaArn");

    m_lambdaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("s3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  return *this;
}

JsonValue HookConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_invocationConditionHasBeenSet)
  {
   payload.WithObject("invocationCondition", m_invocationCondition.Jsonize());

  }

  if(m_lambdaArnHasBeenSet)
  {
   payload.WithString("lambdaArn", m_lambdaArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("s3BucketName", m_s3BucketName);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
