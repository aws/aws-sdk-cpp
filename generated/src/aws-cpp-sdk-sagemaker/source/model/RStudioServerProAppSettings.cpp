/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RStudioServerProAppSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

RStudioServerProAppSettings::RStudioServerProAppSettings() : 
    m_accessStatus(RStudioServerProAccessStatus::NOT_SET),
    m_accessStatusHasBeenSet(false),
    m_userGroup(RStudioServerProUserGroup::NOT_SET),
    m_userGroupHasBeenSet(false)
{
}

RStudioServerProAppSettings::RStudioServerProAppSettings(JsonView jsonValue) : 
    m_accessStatus(RStudioServerProAccessStatus::NOT_SET),
    m_accessStatusHasBeenSet(false),
    m_userGroup(RStudioServerProUserGroup::NOT_SET),
    m_userGroupHasBeenSet(false)
{
  *this = jsonValue;
}

RStudioServerProAppSettings& RStudioServerProAppSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessStatus"))
  {
    m_accessStatus = RStudioServerProAccessStatusMapper::GetRStudioServerProAccessStatusForName(jsonValue.GetString("AccessStatus"));

    m_accessStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserGroup"))
  {
    m_userGroup = RStudioServerProUserGroupMapper::GetRStudioServerProUserGroupForName(jsonValue.GetString("UserGroup"));

    m_userGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue RStudioServerProAppSettings::Jsonize() const
{
  JsonValue payload;

  if(m_accessStatusHasBeenSet)
  {
   payload.WithString("AccessStatus", RStudioServerProAccessStatusMapper::GetNameForRStudioServerProAccessStatus(m_accessStatus));
  }

  if(m_userGroupHasBeenSet)
  {
   payload.WithString("UserGroup", RStudioServerProUserGroupMapper::GetNameForRStudioServerProUserGroup(m_userGroup));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
