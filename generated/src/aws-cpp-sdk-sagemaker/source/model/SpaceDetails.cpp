﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SpaceDetails.h>
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

SpaceDetails::SpaceDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

SpaceDetails& SpaceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpaceName"))
  {
    m_spaceName = jsonValue.GetString("SpaceName");
    m_spaceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SpaceStatusMapper::GetSpaceStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpaceSettingsSummary"))
  {
    m_spaceSettingsSummary = jsonValue.GetObject("SpaceSettingsSummary");
    m_spaceSettingsSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpaceSharingSettingsSummary"))
  {
    m_spaceSharingSettingsSummary = jsonValue.GetObject("SpaceSharingSettingsSummary");
    m_spaceSharingSettingsSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OwnershipSettingsSummary"))
  {
    m_ownershipSettingsSummary = jsonValue.GetObject("OwnershipSettingsSummary");
    m_ownershipSettingsSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpaceDisplayName"))
  {
    m_spaceDisplayName = jsonValue.GetString("SpaceDisplayName");
    m_spaceDisplayNameHasBeenSet = true;
  }
  return *this;
}

JsonValue SpaceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_spaceNameHasBeenSet)
  {
   payload.WithString("SpaceName", m_spaceName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SpaceStatusMapper::GetNameForSpaceStatus(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_spaceSettingsSummaryHasBeenSet)
  {
   payload.WithObject("SpaceSettingsSummary", m_spaceSettingsSummary.Jsonize());

  }

  if(m_spaceSharingSettingsSummaryHasBeenSet)
  {
   payload.WithObject("SpaceSharingSettingsSummary", m_spaceSharingSettingsSummary.Jsonize());

  }

  if(m_ownershipSettingsSummaryHasBeenSet)
  {
   payload.WithObject("OwnershipSettingsSummary", m_ownershipSettingsSummary.Jsonize());

  }

  if(m_spaceDisplayNameHasBeenSet)
  {
   payload.WithString("SpaceDisplayName", m_spaceDisplayName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
