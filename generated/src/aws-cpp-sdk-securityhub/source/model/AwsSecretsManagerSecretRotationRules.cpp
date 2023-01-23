/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsSecretsManagerSecretRotationRules.h>
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

AwsSecretsManagerSecretRotationRules::AwsSecretsManagerSecretRotationRules() : 
    m_automaticallyAfterDays(0),
    m_automaticallyAfterDaysHasBeenSet(false)
{
}

AwsSecretsManagerSecretRotationRules::AwsSecretsManagerSecretRotationRules(JsonView jsonValue) : 
    m_automaticallyAfterDays(0),
    m_automaticallyAfterDaysHasBeenSet(false)
{
  *this = jsonValue;
}

AwsSecretsManagerSecretRotationRules& AwsSecretsManagerSecretRotationRules::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutomaticallyAfterDays"))
  {
    m_automaticallyAfterDays = jsonValue.GetInteger("AutomaticallyAfterDays");

    m_automaticallyAfterDaysHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsSecretsManagerSecretRotationRules::Jsonize() const
{
  JsonValue payload;

  if(m_automaticallyAfterDaysHasBeenSet)
  {
   payload.WithInteger("AutomaticallyAfterDays", m_automaticallyAfterDays);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
