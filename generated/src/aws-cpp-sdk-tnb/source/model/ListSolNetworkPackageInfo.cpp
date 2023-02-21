/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/ListSolNetworkPackageInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace tnb
{
namespace Model
{

ListSolNetworkPackageInfo::ListSolNetworkPackageInfo() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_nsdDesignerHasBeenSet(false),
    m_nsdIdHasBeenSet(false),
    m_nsdInvariantIdHasBeenSet(false),
    m_nsdNameHasBeenSet(false),
    m_nsdOnboardingState(NsdOnboardingState::NOT_SET),
    m_nsdOnboardingStateHasBeenSet(false),
    m_nsdOperationalState(NsdOperationalState::NOT_SET),
    m_nsdOperationalStateHasBeenSet(false),
    m_nsdUsageState(NsdUsageState::NOT_SET),
    m_nsdUsageStateHasBeenSet(false),
    m_nsdVersionHasBeenSet(false),
    m_vnfPkgIdsHasBeenSet(false)
{
}

ListSolNetworkPackageInfo::ListSolNetworkPackageInfo(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_nsdDesignerHasBeenSet(false),
    m_nsdIdHasBeenSet(false),
    m_nsdInvariantIdHasBeenSet(false),
    m_nsdNameHasBeenSet(false),
    m_nsdOnboardingState(NsdOnboardingState::NOT_SET),
    m_nsdOnboardingStateHasBeenSet(false),
    m_nsdOperationalState(NsdOperationalState::NOT_SET),
    m_nsdOperationalStateHasBeenSet(false),
    m_nsdUsageState(NsdUsageState::NOT_SET),
    m_nsdUsageStateHasBeenSet(false),
    m_nsdVersionHasBeenSet(false),
    m_vnfPkgIdsHasBeenSet(false)
{
  *this = jsonValue;
}

ListSolNetworkPackageInfo& ListSolNetworkPackageInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nsdDesigner"))
  {
    m_nsdDesigner = jsonValue.GetString("nsdDesigner");

    m_nsdDesignerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nsdId"))
  {
    m_nsdId = jsonValue.GetString("nsdId");

    m_nsdIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nsdInvariantId"))
  {
    m_nsdInvariantId = jsonValue.GetString("nsdInvariantId");

    m_nsdInvariantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nsdName"))
  {
    m_nsdName = jsonValue.GetString("nsdName");

    m_nsdNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nsdOnboardingState"))
  {
    m_nsdOnboardingState = NsdOnboardingStateMapper::GetNsdOnboardingStateForName(jsonValue.GetString("nsdOnboardingState"));

    m_nsdOnboardingStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nsdOperationalState"))
  {
    m_nsdOperationalState = NsdOperationalStateMapper::GetNsdOperationalStateForName(jsonValue.GetString("nsdOperationalState"));

    m_nsdOperationalStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nsdUsageState"))
  {
    m_nsdUsageState = NsdUsageStateMapper::GetNsdUsageStateForName(jsonValue.GetString("nsdUsageState"));

    m_nsdUsageStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nsdVersion"))
  {
    m_nsdVersion = jsonValue.GetString("nsdVersion");

    m_nsdVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vnfPkgIds"))
  {
    Aws::Utils::Array<JsonView> vnfPkgIdsJsonList = jsonValue.GetArray("vnfPkgIds");
    for(unsigned vnfPkgIdsIndex = 0; vnfPkgIdsIndex < vnfPkgIdsJsonList.GetLength(); ++vnfPkgIdsIndex)
    {
      m_vnfPkgIds.push_back(vnfPkgIdsJsonList[vnfPkgIdsIndex].AsString());
    }
    m_vnfPkgIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue ListSolNetworkPackageInfo::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  if(m_nsdDesignerHasBeenSet)
  {
   payload.WithString("nsdDesigner", m_nsdDesigner);

  }

  if(m_nsdIdHasBeenSet)
  {
   payload.WithString("nsdId", m_nsdId);

  }

  if(m_nsdInvariantIdHasBeenSet)
  {
   payload.WithString("nsdInvariantId", m_nsdInvariantId);

  }

  if(m_nsdNameHasBeenSet)
  {
   payload.WithString("nsdName", m_nsdName);

  }

  if(m_nsdOnboardingStateHasBeenSet)
  {
   payload.WithString("nsdOnboardingState", NsdOnboardingStateMapper::GetNameForNsdOnboardingState(m_nsdOnboardingState));
  }

  if(m_nsdOperationalStateHasBeenSet)
  {
   payload.WithString("nsdOperationalState", NsdOperationalStateMapper::GetNameForNsdOperationalState(m_nsdOperationalState));
  }

  if(m_nsdUsageStateHasBeenSet)
  {
   payload.WithString("nsdUsageState", NsdUsageStateMapper::GetNameForNsdUsageState(m_nsdUsageState));
  }

  if(m_nsdVersionHasBeenSet)
  {
   payload.WithString("nsdVersion", m_nsdVersion);

  }

  if(m_vnfPkgIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vnfPkgIdsJsonList(m_vnfPkgIds.size());
   for(unsigned vnfPkgIdsIndex = 0; vnfPkgIdsIndex < vnfPkgIdsJsonList.GetLength(); ++vnfPkgIdsIndex)
   {
     vnfPkgIdsJsonList[vnfPkgIdsIndex].AsString(m_vnfPkgIds[vnfPkgIdsIndex]);
   }
   payload.WithArray("vnfPkgIds", std::move(vnfPkgIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
