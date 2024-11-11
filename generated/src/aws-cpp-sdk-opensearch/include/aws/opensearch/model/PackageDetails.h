/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/PackageType.h>
#include <aws/opensearch/model/PackageStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/opensearch/model/ErrorDetails.h>
#include <aws/opensearch/model/PluginProperties.h>
#include <aws/opensearch/model/PackageConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/PackageVendingOptions.h>
#include <aws/opensearch/model/PackageEncryptionOptions.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Basic information about a package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/PackageDetails">AWS
   * API Reference</a></p>
   */
  class PackageDetails
  {
  public:
    AWS_OPENSEARCHSERVICE_API PackageDetails();
    AWS_OPENSEARCHSERVICE_API PackageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API PackageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the package.</p>
     */
    inline const Aws::String& GetPackageID() const{ return m_packageID; }
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }
    inline void SetPackageID(const Aws::String& value) { m_packageIDHasBeenSet = true; m_packageID = value; }
    inline void SetPackageID(Aws::String&& value) { m_packageIDHasBeenSet = true; m_packageID = std::move(value); }
    inline void SetPackageID(const char* value) { m_packageIDHasBeenSet = true; m_packageID.assign(value); }
    inline PackageDetails& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}
    inline PackageDetails& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}
    inline PackageDetails& WithPackageID(const char* value) { SetPackageID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-specified name of the package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }
    inline PackageDetails& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}
    inline PackageDetails& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}
    inline PackageDetails& WithPackageName(const char* value) { SetPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of package.</p>
     */
    inline const PackageType& GetPackageType() const{ return m_packageType; }
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }
    inline void SetPackageType(const PackageType& value) { m_packageTypeHasBeenSet = true; m_packageType = value; }
    inline void SetPackageType(PackageType&& value) { m_packageTypeHasBeenSet = true; m_packageType = std::move(value); }
    inline PackageDetails& WithPackageType(const PackageType& value) { SetPackageType(value); return *this;}
    inline PackageDetails& WithPackageType(PackageType&& value) { SetPackageType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-specified description of the package.</p>
     */
    inline const Aws::String& GetPackageDescription() const{ return m_packageDescription; }
    inline bool PackageDescriptionHasBeenSet() const { return m_packageDescriptionHasBeenSet; }
    inline void SetPackageDescription(const Aws::String& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = value; }
    inline void SetPackageDescription(Aws::String&& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = std::move(value); }
    inline void SetPackageDescription(const char* value) { m_packageDescriptionHasBeenSet = true; m_packageDescription.assign(value); }
    inline PackageDetails& WithPackageDescription(const Aws::String& value) { SetPackageDescription(value); return *this;}
    inline PackageDetails& WithPackageDescription(Aws::String&& value) { SetPackageDescription(std::move(value)); return *this;}
    inline PackageDetails& WithPackageDescription(const char* value) { SetPackageDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the package. The available options are
     * <code>AVAILABLE</code>, <code>COPYING</code>, <code>COPY_FAILED</code>,
     * <code>VALIDATNG</code>, <code>VALIDATION_FAILED</code>, <code>DELETING</code>,
     * and <code>DELETE_FAILED</code>.</p>
     */
    inline const PackageStatus& GetPackageStatus() const{ return m_packageStatus; }
    inline bool PackageStatusHasBeenSet() const { return m_packageStatusHasBeenSet; }
    inline void SetPackageStatus(const PackageStatus& value) { m_packageStatusHasBeenSet = true; m_packageStatus = value; }
    inline void SetPackageStatus(PackageStatus&& value) { m_packageStatusHasBeenSet = true; m_packageStatus = std::move(value); }
    inline PackageDetails& WithPackageStatus(const PackageStatus& value) { SetPackageStatus(value); return *this;}
    inline PackageDetails& WithPackageStatus(PackageStatus&& value) { SetPackageStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline PackageDetails& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline PackageDetails& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the package was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline PackageDetails& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline PackageDetails& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package version.</p>
     */
    inline const Aws::String& GetAvailablePackageVersion() const{ return m_availablePackageVersion; }
    inline bool AvailablePackageVersionHasBeenSet() const { return m_availablePackageVersionHasBeenSet; }
    inline void SetAvailablePackageVersion(const Aws::String& value) { m_availablePackageVersionHasBeenSet = true; m_availablePackageVersion = value; }
    inline void SetAvailablePackageVersion(Aws::String&& value) { m_availablePackageVersionHasBeenSet = true; m_availablePackageVersion = std::move(value); }
    inline void SetAvailablePackageVersion(const char* value) { m_availablePackageVersionHasBeenSet = true; m_availablePackageVersion.assign(value); }
    inline PackageDetails& WithAvailablePackageVersion(const Aws::String& value) { SetAvailablePackageVersion(value); return *this;}
    inline PackageDetails& WithAvailablePackageVersion(Aws::String&& value) { SetAvailablePackageVersion(std::move(value)); return *this;}
    inline PackageDetails& WithAvailablePackageVersion(const char* value) { SetAvailablePackageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline const ErrorDetails& GetErrorDetails() const{ return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    inline void SetErrorDetails(const ErrorDetails& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }
    inline void SetErrorDetails(ErrorDetails&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }
    inline PackageDetails& WithErrorDetails(const ErrorDetails& value) { SetErrorDetails(value); return *this;}
    inline PackageDetails& WithErrorDetails(ErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline PackageDetails& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline PackageDetails& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline PackageDetails& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the package is a <code>ZIP-PLUGIN</code> package, additional information
     * about plugin properties.</p>
     */
    inline const PluginProperties& GetAvailablePluginProperties() const{ return m_availablePluginProperties; }
    inline bool AvailablePluginPropertiesHasBeenSet() const { return m_availablePluginPropertiesHasBeenSet; }
    inline void SetAvailablePluginProperties(const PluginProperties& value) { m_availablePluginPropertiesHasBeenSet = true; m_availablePluginProperties = value; }
    inline void SetAvailablePluginProperties(PluginProperties&& value) { m_availablePluginPropertiesHasBeenSet = true; m_availablePluginProperties = std::move(value); }
    inline PackageDetails& WithAvailablePluginProperties(const PluginProperties& value) { SetAvailablePluginProperties(value); return *this;}
    inline PackageDetails& WithAvailablePluginProperties(PluginProperties&& value) { SetAvailablePluginProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This represents the available configuration parameters for the package.</p>
     */
    inline const PackageConfiguration& GetAvailablePackageConfiguration() const{ return m_availablePackageConfiguration; }
    inline bool AvailablePackageConfigurationHasBeenSet() const { return m_availablePackageConfigurationHasBeenSet; }
    inline void SetAvailablePackageConfiguration(const PackageConfiguration& value) { m_availablePackageConfigurationHasBeenSet = true; m_availablePackageConfiguration = value; }
    inline void SetAvailablePackageConfiguration(PackageConfiguration&& value) { m_availablePackageConfigurationHasBeenSet = true; m_availablePackageConfiguration = std::move(value); }
    inline PackageDetails& WithAvailablePackageConfiguration(const PackageConfiguration& value) { SetAvailablePackageConfiguration(value); return *this;}
    inline PackageDetails& WithAvailablePackageConfiguration(PackageConfiguration&& value) { SetAvailablePackageConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of users who are allowed to view and associate the package. This
     * field is only visible to the owner of a package.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowListedUserList() const{ return m_allowListedUserList; }
    inline bool AllowListedUserListHasBeenSet() const { return m_allowListedUserListHasBeenSet; }
    inline void SetAllowListedUserList(const Aws::Vector<Aws::String>& value) { m_allowListedUserListHasBeenSet = true; m_allowListedUserList = value; }
    inline void SetAllowListedUserList(Aws::Vector<Aws::String>&& value) { m_allowListedUserListHasBeenSet = true; m_allowListedUserList = std::move(value); }
    inline PackageDetails& WithAllowListedUserList(const Aws::Vector<Aws::String>& value) { SetAllowListedUserList(value); return *this;}
    inline PackageDetails& WithAllowListedUserList(Aws::Vector<Aws::String>&& value) { SetAllowListedUserList(std::move(value)); return *this;}
    inline PackageDetails& AddAllowListedUserList(const Aws::String& value) { m_allowListedUserListHasBeenSet = true; m_allowListedUserList.push_back(value); return *this; }
    inline PackageDetails& AddAllowListedUserList(Aws::String&& value) { m_allowListedUserListHasBeenSet = true; m_allowListedUserList.push_back(std::move(value)); return *this; }
    inline PackageDetails& AddAllowListedUserList(const char* value) { m_allowListedUserListHasBeenSet = true; m_allowListedUserList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The owner of the package who is allowed to create/update a package and add
     * users to the package scope.</p>
     */
    inline const Aws::String& GetPackageOwner() const{ return m_packageOwner; }
    inline bool PackageOwnerHasBeenSet() const { return m_packageOwnerHasBeenSet; }
    inline void SetPackageOwner(const Aws::String& value) { m_packageOwnerHasBeenSet = true; m_packageOwner = value; }
    inline void SetPackageOwner(Aws::String&& value) { m_packageOwnerHasBeenSet = true; m_packageOwner = std::move(value); }
    inline void SetPackageOwner(const char* value) { m_packageOwnerHasBeenSet = true; m_packageOwner.assign(value); }
    inline PackageDetails& WithPackageOwner(const Aws::String& value) { SetPackageOwner(value); return *this;}
    inline PackageDetails& WithPackageOwner(Aws::String&& value) { SetPackageOwner(std::move(value)); return *this;}
    inline PackageDetails& WithPackageOwner(const char* value) { SetPackageOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Package Vending Options for a package.</p>
     */
    inline const PackageVendingOptions& GetPackageVendingOptions() const{ return m_packageVendingOptions; }
    inline bool PackageVendingOptionsHasBeenSet() const { return m_packageVendingOptionsHasBeenSet; }
    inline void SetPackageVendingOptions(const PackageVendingOptions& value) { m_packageVendingOptionsHasBeenSet = true; m_packageVendingOptions = value; }
    inline void SetPackageVendingOptions(PackageVendingOptions&& value) { m_packageVendingOptionsHasBeenSet = true; m_packageVendingOptions = std::move(value); }
    inline PackageDetails& WithPackageVendingOptions(const PackageVendingOptions& value) { SetPackageVendingOptions(value); return *this;}
    inline PackageDetails& WithPackageVendingOptions(PackageVendingOptions&& value) { SetPackageVendingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Package Encryption Options for a package.</p>
     */
    inline const PackageEncryptionOptions& GetPackageEncryptionOptions() const{ return m_packageEncryptionOptions; }
    inline bool PackageEncryptionOptionsHasBeenSet() const { return m_packageEncryptionOptionsHasBeenSet; }
    inline void SetPackageEncryptionOptions(const PackageEncryptionOptions& value) { m_packageEncryptionOptionsHasBeenSet = true; m_packageEncryptionOptions = value; }
    inline void SetPackageEncryptionOptions(PackageEncryptionOptions&& value) { m_packageEncryptionOptionsHasBeenSet = true; m_packageEncryptionOptions = std::move(value); }
    inline PackageDetails& WithPackageEncryptionOptions(const PackageEncryptionOptions& value) { SetPackageEncryptionOptions(value); return *this;}
    inline PackageDetails& WithPackageEncryptionOptions(PackageEncryptionOptions&& value) { SetPackageEncryptionOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    PackageType m_packageType;
    bool m_packageTypeHasBeenSet = false;

    Aws::String m_packageDescription;
    bool m_packageDescriptionHasBeenSet = false;

    PackageStatus m_packageStatus;
    bool m_packageStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_availablePackageVersion;
    bool m_availablePackageVersionHasBeenSet = false;

    ErrorDetails m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    PluginProperties m_availablePluginProperties;
    bool m_availablePluginPropertiesHasBeenSet = false;

    PackageConfiguration m_availablePackageConfiguration;
    bool m_availablePackageConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowListedUserList;
    bool m_allowListedUserListHasBeenSet = false;

    Aws::String m_packageOwner;
    bool m_packageOwnerHasBeenSet = false;

    PackageVendingOptions m_packageVendingOptions;
    bool m_packageVendingOptionsHasBeenSet = false;

    PackageEncryptionOptions m_packageEncryptionOptions;
    bool m_packageEncryptionOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
