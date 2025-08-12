/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/EffectivePolicyValidationError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

EffectivePolicyValidationError::EffectivePolicyValidationError(JsonView jsonValue)
{
  *this = jsonValue;
}

EffectivePolicyValidationError& EffectivePolicyValidationError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PathToError"))
  {
    m_pathToError = jsonValue.GetString("PathToError");
    m_pathToErrorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContributingPolicies"))
  {
    Aws::Utils::Array<JsonView> contributingPoliciesJsonList = jsonValue.GetArray("ContributingPolicies");
    for(unsigned contributingPoliciesIndex = 0; contributingPoliciesIndex < contributingPoliciesJsonList.GetLength(); ++contributingPoliciesIndex)
    {
      m_contributingPolicies.push_back(contributingPoliciesJsonList[contributingPoliciesIndex].AsString());
    }
    m_contributingPoliciesHasBeenSet = true;
  }
  return *this;
}

JsonValue EffectivePolicyValidationError::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_pathToErrorHasBeenSet)
  {
   payload.WithString("PathToError", m_pathToError);

  }

  if(m_contributingPoliciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contributingPoliciesJsonList(m_contributingPolicies.size());
   for(unsigned contributingPoliciesIndex = 0; contributingPoliciesIndex < contributingPoliciesJsonList.GetLength(); ++contributingPoliciesIndex)
   {
     contributingPoliciesJsonList[contributingPoliciesIndex].AsString(m_contributingPolicies[contributingPoliciesIndex]);
   }
   payload.WithArray("ContributingPolicies", std::move(contributingPoliciesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
