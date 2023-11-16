/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ScopeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

ScopeDetails::ScopeDetails() : 
    m_authorizedTargetsHasBeenSet(false),
    m_scopeHasBeenSet(false)
{
}

ScopeDetails::ScopeDetails(JsonView jsonValue) : 
    m_authorizedTargetsHasBeenSet(false),
    m_scopeHasBeenSet(false)
{
  *this = jsonValue;
}

ScopeDetails& ScopeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AuthorizedTargets"))
  {
    Aws::Utils::Array<JsonView> authorizedTargetsJsonList = jsonValue.GetArray("AuthorizedTargets");
    for(unsigned authorizedTargetsIndex = 0; authorizedTargetsIndex < authorizedTargetsJsonList.GetLength(); ++authorizedTargetsIndex)
    {
      m_authorizedTargets.push_back(authorizedTargetsJsonList[authorizedTargetsIndex].AsString());
    }
    m_authorizedTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = jsonValue.GetString("Scope");

    m_scopeHasBeenSet = true;
  }

  return *this;
}

JsonValue ScopeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_authorizedTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authorizedTargetsJsonList(m_authorizedTargets.size());
   for(unsigned authorizedTargetsIndex = 0; authorizedTargetsIndex < authorizedTargetsJsonList.GetLength(); ++authorizedTargetsIndex)
   {
     authorizedTargetsJsonList[authorizedTargetsIndex].AsString(m_authorizedTargets[authorizedTargetsIndex]);
   }
   payload.WithArray("AuthorizedTargets", std::move(authorizedTargetsJsonList));

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", m_scope);

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
