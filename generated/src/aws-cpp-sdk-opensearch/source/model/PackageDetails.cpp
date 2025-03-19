/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/PackageDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

PackageDetails::PackageDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

PackageDetails& PackageDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PackageID"))
  {
    m_packageID = jsonValue.GetString("PackageID");
    m_packageIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageName"))
  {
    m_packageName = jsonValue.GetString("PackageName");
    m_packageNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageType"))
  {
    m_packageType = PackageTypeMapper::GetPackageTypeForName(jsonValue.GetString("PackageType"));
    m_packageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageDescription"))
  {
    m_packageDescription = jsonValue.GetString("PackageDescription");
    m_packageDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageStatus"))
  {
    m_packageStatus = PackageStatusMapper::GetPackageStatusForName(jsonValue.GetString("PackageStatus"));
    m_packageStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailablePackageVersion"))
  {
    m_availablePackageVersion = jsonValue.GetString("AvailablePackageVersion");
    m_availablePackageVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorDetails"))
  {
    m_errorDetails = jsonValue.GetObject("ErrorDetails");
    m_errorDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");
    m_engineVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailablePluginProperties"))
  {
    m_availablePluginProperties = jsonValue.GetObject("AvailablePluginProperties");
    m_availablePluginPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AvailablePackageConfiguration"))
  {
    m_availablePackageConfiguration = jsonValue.GetObject("AvailablePackageConfiguration");
    m_availablePackageConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AllowListedUserList"))
  {
    Aws::Utils::Array<JsonView> allowListedUserListJsonList = jsonValue.GetArray("AllowListedUserList");
    for(unsigned allowListedUserListIndex = 0; allowListedUserListIndex < allowListedUserListJsonList.GetLength(); ++allowListedUserListIndex)
    {
      m_allowListedUserList.push_back(allowListedUserListJsonList[allowListedUserListIndex].AsString());
    }
    m_allowListedUserListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageOwner"))
  {
    m_packageOwner = jsonValue.GetString("PackageOwner");
    m_packageOwnerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageVendingOptions"))
  {
    m_packageVendingOptions = jsonValue.GetObject("PackageVendingOptions");
    m_packageVendingOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageEncryptionOptions"))
  {
    m_packageEncryptionOptions = jsonValue.GetObject("PackageEncryptionOptions");
    m_packageEncryptionOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue PackageDetails::Jsonize() const
{
  JsonValue payload;

  if(m_packageIDHasBeenSet)
  {
   payload.WithString("PackageID", m_packageID);

  }

  if(m_packageNameHasBeenSet)
  {
   payload.WithString("PackageName", m_packageName);

  }

  if(m_packageTypeHasBeenSet)
  {
   payload.WithString("PackageType", PackageTypeMapper::GetNameForPackageType(m_packageType));
  }

  if(m_packageDescriptionHasBeenSet)
  {
   payload.WithString("PackageDescription", m_packageDescription);

  }

  if(m_packageStatusHasBeenSet)
  {
   payload.WithString("PackageStatus", PackageStatusMapper::GetNameForPackageStatus(m_packageStatus));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_availablePackageVersionHasBeenSet)
  {
   payload.WithString("AvailablePackageVersion", m_availablePackageVersion);

  }

  if(m_errorDetailsHasBeenSet)
  {
   payload.WithObject("ErrorDetails", m_errorDetails.Jsonize());

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_availablePluginPropertiesHasBeenSet)
  {
   payload.WithObject("AvailablePluginProperties", m_availablePluginProperties.Jsonize());

  }

  if(m_availablePackageConfigurationHasBeenSet)
  {
   payload.WithObject("AvailablePackageConfiguration", m_availablePackageConfiguration.Jsonize());

  }

  if(m_allowListedUserListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowListedUserListJsonList(m_allowListedUserList.size());
   for(unsigned allowListedUserListIndex = 0; allowListedUserListIndex < allowListedUserListJsonList.GetLength(); ++allowListedUserListIndex)
   {
     allowListedUserListJsonList[allowListedUserListIndex].AsString(m_allowListedUserList[allowListedUserListIndex]);
   }
   payload.WithArray("AllowListedUserList", std::move(allowListedUserListJsonList));

  }

  if(m_packageOwnerHasBeenSet)
  {
   payload.WithString("PackageOwner", m_packageOwner);

  }

  if(m_packageVendingOptionsHasBeenSet)
  {
   payload.WithObject("PackageVendingOptions", m_packageVendingOptions.Jsonize());

  }

  if(m_packageEncryptionOptionsHasBeenSet)
  {
   payload.WithObject("PackageEncryptionOptions", m_packageEncryptionOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
