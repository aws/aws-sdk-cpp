/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsSecretsManagerSecretDetails.h>
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

AwsSecretsManagerSecretDetails::AwsSecretsManagerSecretDetails() : 
    m_rotationRulesHasBeenSet(false),
    m_rotationOccurredWithinFrequency(false),
    m_rotationOccurredWithinFrequencyHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_rotationEnabled(false),
    m_rotationEnabledHasBeenSet(false),
    m_rotationLambdaArnHasBeenSet(false),
    m_deleted(false),
    m_deletedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

AwsSecretsManagerSecretDetails::AwsSecretsManagerSecretDetails(JsonView jsonValue) : 
    m_rotationRulesHasBeenSet(false),
    m_rotationOccurredWithinFrequency(false),
    m_rotationOccurredWithinFrequencyHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_rotationEnabled(false),
    m_rotationEnabledHasBeenSet(false),
    m_rotationLambdaArnHasBeenSet(false),
    m_deleted(false),
    m_deletedHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

AwsSecretsManagerSecretDetails& AwsSecretsManagerSecretDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RotationRules"))
  {
    m_rotationRules = jsonValue.GetObject("RotationRules");

    m_rotationRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RotationOccurredWithinFrequency"))
  {
    m_rotationOccurredWithinFrequency = jsonValue.GetBool("RotationOccurredWithinFrequency");

    m_rotationOccurredWithinFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RotationEnabled"))
  {
    m_rotationEnabled = jsonValue.GetBool("RotationEnabled");

    m_rotationEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RotationLambdaArn"))
  {
    m_rotationLambdaArn = jsonValue.GetString("RotationLambdaArn");

    m_rotationLambdaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Deleted"))
  {
    m_deleted = jsonValue.GetBool("Deleted");

    m_deletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsSecretsManagerSecretDetails::Jsonize() const
{
  JsonValue payload;

  if(m_rotationRulesHasBeenSet)
  {
   payload.WithObject("RotationRules", m_rotationRules.Jsonize());

  }

  if(m_rotationOccurredWithinFrequencyHasBeenSet)
  {
   payload.WithBool("RotationOccurredWithinFrequency", m_rotationOccurredWithinFrequency);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_rotationEnabledHasBeenSet)
  {
   payload.WithBool("RotationEnabled", m_rotationEnabled);

  }

  if(m_rotationLambdaArnHasBeenSet)
  {
   payload.WithString("RotationLambdaArn", m_rotationLambdaArn);

  }

  if(m_deletedHasBeenSet)
  {
   payload.WithBool("Deleted", m_deleted);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
