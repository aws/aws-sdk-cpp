/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/BatchIsAuthorizedOutputItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

BatchIsAuthorizedOutputItem::BatchIsAuthorizedOutputItem() : 
    m_requestHasBeenSet(false),
    m_decision(Decision::NOT_SET),
    m_decisionHasBeenSet(false),
    m_determiningPoliciesHasBeenSet(false),
    m_errorsHasBeenSet(false)
{
}

BatchIsAuthorizedOutputItem::BatchIsAuthorizedOutputItem(JsonView jsonValue) : 
    m_requestHasBeenSet(false),
    m_decision(Decision::NOT_SET),
    m_decisionHasBeenSet(false),
    m_determiningPoliciesHasBeenSet(false),
    m_errorsHasBeenSet(false)
{
  *this = jsonValue;
}

BatchIsAuthorizedOutputItem& BatchIsAuthorizedOutputItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("request"))
  {
    m_request = jsonValue.GetObject("request");

    m_requestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decision"))
  {
    m_decision = DecisionMapper::GetDecisionForName(jsonValue.GetString("decision"));

    m_decisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("determiningPolicies"))
  {
    Aws::Utils::Array<JsonView> determiningPoliciesJsonList = jsonValue.GetArray("determiningPolicies");
    for(unsigned determiningPoliciesIndex = 0; determiningPoliciesIndex < determiningPoliciesJsonList.GetLength(); ++determiningPoliciesIndex)
    {
      m_determiningPolicies.push_back(determiningPoliciesJsonList[determiningPoliciesIndex].AsObject());
    }
    m_determiningPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchIsAuthorizedOutputItem::Jsonize() const
{
  JsonValue payload;

  if(m_requestHasBeenSet)
  {
   payload.WithObject("request", m_request.Jsonize());

  }

  if(m_decisionHasBeenSet)
  {
   payload.WithString("decision", DecisionMapper::GetNameForDecision(m_decision));
  }

  if(m_determiningPoliciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> determiningPoliciesJsonList(m_determiningPolicies.size());
   for(unsigned determiningPoliciesIndex = 0; determiningPoliciesIndex < determiningPoliciesJsonList.GetLength(); ++determiningPoliciesIndex)
   {
     determiningPoliciesJsonList[determiningPoliciesIndex].AsObject(m_determiningPolicies[determiningPoliciesIndex].Jsonize());
   }
   payload.WithArray("determiningPolicies", std::move(determiningPoliciesJsonList));

  }

  if(m_errorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorsJsonList(m_errors.size());
   for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
   {
     errorsJsonList[errorsIndex].AsObject(m_errors[errorsIndex].Jsonize());
   }
   payload.WithArray("errors", std::move(errorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
