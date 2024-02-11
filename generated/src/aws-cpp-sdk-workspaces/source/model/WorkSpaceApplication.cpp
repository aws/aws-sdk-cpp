/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkSpaceApplication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

WorkSpaceApplication::WorkSpaceApplication() : 
    m_applicationIdHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_licenseType(WorkSpaceApplicationLicenseType::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_state(WorkSpaceApplicationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_supportedComputeTypeNamesHasBeenSet(false),
    m_supportedOperatingSystemNamesHasBeenSet(false)
{
}

WorkSpaceApplication::WorkSpaceApplication(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_licenseType(WorkSpaceApplicationLicenseType::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_state(WorkSpaceApplicationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_supportedComputeTypeNamesHasBeenSet(false),
    m_supportedOperatingSystemNamesHasBeenSet(false)
{
  *this = jsonValue;
}

WorkSpaceApplication& WorkSpaceApplication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Created"))
  {
    m_created = jsonValue.GetDouble("Created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseType"))
  {
    m_licenseType = WorkSpaceApplicationLicenseTypeMapper::GetWorkSpaceApplicationLicenseTypeForName(jsonValue.GetString("LicenseType"));

    m_licenseTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = WorkSpaceApplicationStateMapper::GetWorkSpaceApplicationStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedComputeTypeNames"))
  {
    Aws::Utils::Array<JsonView> supportedComputeTypeNamesJsonList = jsonValue.GetArray("SupportedComputeTypeNames");
    for(unsigned supportedComputeTypeNamesIndex = 0; supportedComputeTypeNamesIndex < supportedComputeTypeNamesJsonList.GetLength(); ++supportedComputeTypeNamesIndex)
    {
      m_supportedComputeTypeNames.push_back(ComputeMapper::GetComputeForName(supportedComputeTypeNamesJsonList[supportedComputeTypeNamesIndex].AsString()));
    }
    m_supportedComputeTypeNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedOperatingSystemNames"))
  {
    Aws::Utils::Array<JsonView> supportedOperatingSystemNamesJsonList = jsonValue.GetArray("SupportedOperatingSystemNames");
    for(unsigned supportedOperatingSystemNamesIndex = 0; supportedOperatingSystemNamesIndex < supportedOperatingSystemNamesJsonList.GetLength(); ++supportedOperatingSystemNamesIndex)
    {
      m_supportedOperatingSystemNames.push_back(OperatingSystemNameMapper::GetOperatingSystemNameForName(supportedOperatingSystemNamesJsonList[supportedOperatingSystemNamesIndex].AsString()));
    }
    m_supportedOperatingSystemNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkSpaceApplication::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("Created", m_created.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_licenseTypeHasBeenSet)
  {
   payload.WithString("LicenseType", WorkSpaceApplicationLicenseTypeMapper::GetNameForWorkSpaceApplicationLicenseType(m_licenseType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", WorkSpaceApplicationStateMapper::GetNameForWorkSpaceApplicationState(m_state));
  }

  if(m_supportedComputeTypeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedComputeTypeNamesJsonList(m_supportedComputeTypeNames.size());
   for(unsigned supportedComputeTypeNamesIndex = 0; supportedComputeTypeNamesIndex < supportedComputeTypeNamesJsonList.GetLength(); ++supportedComputeTypeNamesIndex)
   {
     supportedComputeTypeNamesJsonList[supportedComputeTypeNamesIndex].AsString(ComputeMapper::GetNameForCompute(m_supportedComputeTypeNames[supportedComputeTypeNamesIndex]));
   }
   payload.WithArray("SupportedComputeTypeNames", std::move(supportedComputeTypeNamesJsonList));

  }

  if(m_supportedOperatingSystemNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedOperatingSystemNamesJsonList(m_supportedOperatingSystemNames.size());
   for(unsigned supportedOperatingSystemNamesIndex = 0; supportedOperatingSystemNamesIndex < supportedOperatingSystemNamesJsonList.GetLength(); ++supportedOperatingSystemNamesIndex)
   {
     supportedOperatingSystemNamesJsonList[supportedOperatingSystemNamesIndex].AsString(OperatingSystemNameMapper::GetNameForOperatingSystemName(m_supportedOperatingSystemNames[supportedOperatingSystemNamesIndex]));
   }
   payload.WithArray("SupportedOperatingSystemNames", std::move(supportedOperatingSystemNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
