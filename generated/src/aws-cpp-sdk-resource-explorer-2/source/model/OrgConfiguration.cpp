/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/OrgConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

OrgConfiguration::OrgConfiguration() : 
    m_aWSServiceAccessStatus(AWSServiceAccessStatus::NOT_SET),
    m_aWSServiceAccessStatusHasBeenSet(false),
    m_serviceLinkedRoleHasBeenSet(false)
{
}

OrgConfiguration::OrgConfiguration(JsonView jsonValue) : 
    m_aWSServiceAccessStatus(AWSServiceAccessStatus::NOT_SET),
    m_aWSServiceAccessStatusHasBeenSet(false),
    m_serviceLinkedRoleHasBeenSet(false)
{
  *this = jsonValue;
}

OrgConfiguration& OrgConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AWSServiceAccessStatus"))
  {
    m_aWSServiceAccessStatus = AWSServiceAccessStatusMapper::GetAWSServiceAccessStatusForName(jsonValue.GetString("AWSServiceAccessStatus"));

    m_aWSServiceAccessStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceLinkedRole"))
  {
    m_serviceLinkedRole = jsonValue.GetString("ServiceLinkedRole");

    m_serviceLinkedRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue OrgConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_aWSServiceAccessStatusHasBeenSet)
  {
   payload.WithString("AWSServiceAccessStatus", AWSServiceAccessStatusMapper::GetNameForAWSServiceAccessStatus(m_aWSServiceAccessStatus));
  }

  if(m_serviceLinkedRoleHasBeenSet)
  {
   payload.WithString("ServiceLinkedRole", m_serviceLinkedRole);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
