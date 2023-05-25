/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/ListSolFunctionPackageInfo.h>
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

ListSolFunctionPackageInfo::ListSolFunctionPackageInfo() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_onboardingState(OnboardingState::NOT_SET),
    m_onboardingStateHasBeenSet(false),
    m_operationalState(OperationalState::NOT_SET),
    m_operationalStateHasBeenSet(false),
    m_usageState(UsageState::NOT_SET),
    m_usageStateHasBeenSet(false),
    m_vnfProductNameHasBeenSet(false),
    m_vnfProviderHasBeenSet(false),
    m_vnfdIdHasBeenSet(false),
    m_vnfdVersionHasBeenSet(false)
{
}

ListSolFunctionPackageInfo::ListSolFunctionPackageInfo(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_onboardingState(OnboardingState::NOT_SET),
    m_onboardingStateHasBeenSet(false),
    m_operationalState(OperationalState::NOT_SET),
    m_operationalStateHasBeenSet(false),
    m_usageState(UsageState::NOT_SET),
    m_usageStateHasBeenSet(false),
    m_vnfProductNameHasBeenSet(false),
    m_vnfProviderHasBeenSet(false),
    m_vnfdIdHasBeenSet(false),
    m_vnfdVersionHasBeenSet(false)
{
  *this = jsonValue;
}

ListSolFunctionPackageInfo& ListSolFunctionPackageInfo::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("onboardingState"))
  {
    m_onboardingState = OnboardingStateMapper::GetOnboardingStateForName(jsonValue.GetString("onboardingState"));

    m_onboardingStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operationalState"))
  {
    m_operationalState = OperationalStateMapper::GetOperationalStateForName(jsonValue.GetString("operationalState"));

    m_operationalStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("usageState"))
  {
    m_usageState = UsageStateMapper::GetUsageStateForName(jsonValue.GetString("usageState"));

    m_usageStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vnfProductName"))
  {
    m_vnfProductName = jsonValue.GetString("vnfProductName");

    m_vnfProductNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vnfProvider"))
  {
    m_vnfProvider = jsonValue.GetString("vnfProvider");

    m_vnfProviderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vnfdId"))
  {
    m_vnfdId = jsonValue.GetString("vnfdId");

    m_vnfdIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vnfdVersion"))
  {
    m_vnfdVersion = jsonValue.GetString("vnfdVersion");

    m_vnfdVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue ListSolFunctionPackageInfo::Jsonize() const
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

  if(m_onboardingStateHasBeenSet)
  {
   payload.WithString("onboardingState", OnboardingStateMapper::GetNameForOnboardingState(m_onboardingState));
  }

  if(m_operationalStateHasBeenSet)
  {
   payload.WithString("operationalState", OperationalStateMapper::GetNameForOperationalState(m_operationalState));
  }

  if(m_usageStateHasBeenSet)
  {
   payload.WithString("usageState", UsageStateMapper::GetNameForUsageState(m_usageState));
  }

  if(m_vnfProductNameHasBeenSet)
  {
   payload.WithString("vnfProductName", m_vnfProductName);

  }

  if(m_vnfProviderHasBeenSet)
  {
   payload.WithString("vnfProvider", m_vnfProvider);

  }

  if(m_vnfdIdHasBeenSet)
  {
   payload.WithString("vnfdId", m_vnfdId);

  }

  if(m_vnfdVersionHasBeenSet)
  {
   payload.WithString("vnfdVersion", m_vnfdVersion);

  }

  return payload;
}

} // namespace Model
} // namespace tnb
} // namespace Aws
