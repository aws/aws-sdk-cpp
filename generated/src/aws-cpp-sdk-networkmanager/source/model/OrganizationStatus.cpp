/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/OrganizationStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

OrganizationStatus::OrganizationStatus() : 
    m_organizationIdHasBeenSet(false),
    m_organizationAwsServiceAccessStatusHasBeenSet(false),
    m_sLRDeploymentStatusHasBeenSet(false),
    m_accountStatusListHasBeenSet(false)
{
}

OrganizationStatus::OrganizationStatus(JsonView jsonValue) : 
    m_organizationIdHasBeenSet(false),
    m_organizationAwsServiceAccessStatusHasBeenSet(false),
    m_sLRDeploymentStatusHasBeenSet(false),
    m_accountStatusListHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationStatus& OrganizationStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OrganizationId"))
  {
    m_organizationId = jsonValue.GetString("OrganizationId");

    m_organizationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationAwsServiceAccessStatus"))
  {
    m_organizationAwsServiceAccessStatus = jsonValue.GetString("OrganizationAwsServiceAccessStatus");

    m_organizationAwsServiceAccessStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SLRDeploymentStatus"))
  {
    m_sLRDeploymentStatus = jsonValue.GetString("SLRDeploymentStatus");

    m_sLRDeploymentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountStatusList"))
  {
    Aws::Utils::Array<JsonView> accountStatusListJsonList = jsonValue.GetArray("AccountStatusList");
    for(unsigned accountStatusListIndex = 0; accountStatusListIndex < accountStatusListJsonList.GetLength(); ++accountStatusListIndex)
    {
      m_accountStatusList.push_back(accountStatusListJsonList[accountStatusListIndex].AsObject());
    }
    m_accountStatusListHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationStatus::Jsonize() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_organizationAwsServiceAccessStatusHasBeenSet)
  {
   payload.WithString("OrganizationAwsServiceAccessStatus", m_organizationAwsServiceAccessStatus);

  }

  if(m_sLRDeploymentStatusHasBeenSet)
  {
   payload.WithString("SLRDeploymentStatus", m_sLRDeploymentStatus);

  }

  if(m_accountStatusListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountStatusListJsonList(m_accountStatusList.size());
   for(unsigned accountStatusListIndex = 0; accountStatusListIndex < accountStatusListJsonList.GetLength(); ++accountStatusListIndex)
   {
     accountStatusListJsonList[accountStatusListIndex].AsObject(m_accountStatusList[accountStatusListIndex].Jsonize());
   }
   payload.WithArray("AccountStatusList", std::move(accountStatusListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
