/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/MembershipAccountsConfigurationsUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

MembershipAccountsConfigurationsUpdate::MembershipAccountsConfigurationsUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

MembershipAccountsConfigurationsUpdate& MembershipAccountsConfigurationsUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("coverEntireOrganization"))
  {
    m_coverEntireOrganization = jsonValue.GetBool("coverEntireOrganization");
    m_coverEntireOrganizationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("organizationalUnitsToAdd"))
  {
    Aws::Utils::Array<JsonView> organizationalUnitsToAddJsonList = jsonValue.GetArray("organizationalUnitsToAdd");
    for(unsigned organizationalUnitsToAddIndex = 0; organizationalUnitsToAddIndex < organizationalUnitsToAddJsonList.GetLength(); ++organizationalUnitsToAddIndex)
    {
      m_organizationalUnitsToAdd.push_back(organizationalUnitsToAddJsonList[organizationalUnitsToAddIndex].AsString());
    }
    m_organizationalUnitsToAddHasBeenSet = true;
  }
  if(jsonValue.ValueExists("organizationalUnitsToRemove"))
  {
    Aws::Utils::Array<JsonView> organizationalUnitsToRemoveJsonList = jsonValue.GetArray("organizationalUnitsToRemove");
    for(unsigned organizationalUnitsToRemoveIndex = 0; organizationalUnitsToRemoveIndex < organizationalUnitsToRemoveJsonList.GetLength(); ++organizationalUnitsToRemoveIndex)
    {
      m_organizationalUnitsToRemove.push_back(organizationalUnitsToRemoveJsonList[organizationalUnitsToRemoveIndex].AsString());
    }
    m_organizationalUnitsToRemoveHasBeenSet = true;
  }
  return *this;
}

JsonValue MembershipAccountsConfigurationsUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_coverEntireOrganizationHasBeenSet)
  {
   payload.WithBool("coverEntireOrganization", m_coverEntireOrganization);

  }

  if(m_organizationalUnitsToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationalUnitsToAddJsonList(m_organizationalUnitsToAdd.size());
   for(unsigned organizationalUnitsToAddIndex = 0; organizationalUnitsToAddIndex < organizationalUnitsToAddJsonList.GetLength(); ++organizationalUnitsToAddIndex)
   {
     organizationalUnitsToAddJsonList[organizationalUnitsToAddIndex].AsString(m_organizationalUnitsToAdd[organizationalUnitsToAddIndex]);
   }
   payload.WithArray("organizationalUnitsToAdd", std::move(organizationalUnitsToAddJsonList));

  }

  if(m_organizationalUnitsToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationalUnitsToRemoveJsonList(m_organizationalUnitsToRemove.size());
   for(unsigned organizationalUnitsToRemoveIndex = 0; organizationalUnitsToRemoveIndex < organizationalUnitsToRemoveJsonList.GetLength(); ++organizationalUnitsToRemoveIndex)
   {
     organizationalUnitsToRemoveJsonList[organizationalUnitsToRemoveIndex].AsString(m_organizationalUnitsToRemove[organizationalUnitsToRemoveIndex]);
   }
   payload.WithArray("organizationalUnitsToRemove", std::move(organizationalUnitsToRemoveJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
