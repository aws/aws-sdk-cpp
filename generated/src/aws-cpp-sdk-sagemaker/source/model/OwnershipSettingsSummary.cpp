/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OwnershipSettingsSummary.h>
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

OwnershipSettingsSummary::OwnershipSettingsSummary() : 
    m_ownerUserProfileNameHasBeenSet(false)
{
}

OwnershipSettingsSummary::OwnershipSettingsSummary(JsonView jsonValue) : 
    m_ownerUserProfileNameHasBeenSet(false)
{
  *this = jsonValue;
}

OwnershipSettingsSummary& OwnershipSettingsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OwnerUserProfileName"))
  {
    m_ownerUserProfileName = jsonValue.GetString("OwnerUserProfileName");

    m_ownerUserProfileNameHasBeenSet = true;
  }

  return *this;
}

JsonValue OwnershipSettingsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_ownerUserProfileNameHasBeenSet)
  {
   payload.WithString("OwnerUserProfileName", m_ownerUserProfileName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
