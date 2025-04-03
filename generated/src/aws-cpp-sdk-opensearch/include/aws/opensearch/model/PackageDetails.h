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
    AWS_OPENSEARCHSERVICE_API PackageDetails() = default;
    AWS_OPENSEARCHSERVICE_API PackageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API PackageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the package.</p>
     */
    inline const Aws::String& GetPackageID() const { return m_packageID; }
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }
    template<typename PackageIDT = Aws::String>
    void SetPackageID(PackageIDT&& value) { m_packageIDHasBeenSet = true; m_packageID = std::forward<PackageIDT>(value); }
    template<typename PackageIDT = Aws::String>
    PackageDetails& WithPackageID(PackageIDT&& value) { SetPackageID(std::forward<PackageIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-specified name of the package.</p>
     */
    inline const Aws::String& GetPackageName() const { return m_packageName; }
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }
    template<typename PackageNameT = Aws::String>
    void SetPackageName(PackageNameT&& value) { m_packageNameHasBeenSet = true; m_packageName = std::forward<PackageNameT>(value); }
    template<typename PackageNameT = Aws::String>
    PackageDetails& WithPackageName(PackageNameT&& value) { SetPackageName(std::forward<PackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of package.</p>
     */
    inline PackageType GetPackageType() const { return m_packageType; }
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }
    inline void SetPackageType(PackageType value) { m_packageTypeHasBeenSet = true; m_packageType = value; }
    inline PackageDetails& WithPackageType(PackageType value) { SetPackageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-specified description of the package.</p>
     */
    inline const Aws::String& GetPackageDescription() const { return m_packageDescription; }
    inline bool PackageDescriptionHasBeenSet() const { return m_packageDescriptionHasBeenSet; }
    template<typename PackageDescriptionT = Aws::String>
    void SetPackageDescription(PackageDescriptionT&& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = std::forward<PackageDescriptionT>(value); }
    template<typename PackageDescriptionT = Aws::String>
    PackageDetails& WithPackageDescription(PackageDescriptionT&& value) { SetPackageDescription(std::forward<PackageDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the package. The available options are
     * <code>AVAILABLE</code>, <code>COPYING</code>, <code>COPY_FAILED</code>,
     * <code>VALIDATNG</code>, <code>VALIDATION_FAILED</code>, <code>DELETING</code>,
     * and <code>DELETE_FAILED</code>.</p>
     */
    inline PackageStatus GetPackageStatus() const { return m_packageStatus; }
    inline bool PackageStatusHasBeenSet() const { return m_packageStatusHasBeenSet; }
    inline void SetPackageStatus(PackageStatus value) { m_packageStatusHasBeenSet = true; m_packageStatus = value; }
    inline PackageDetails& WithPackageStatus(PackageStatus value) { SetPackageStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    PackageDetails& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the package was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    PackageDetails& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package version.</p>
     */
    inline const Aws::String& GetAvailablePackageVersion() const { return m_availablePackageVersion; }
    inline bool AvailablePackageVersionHasBeenSet() const { return m_availablePackageVersionHasBeenSet; }
    template<typename AvailablePackageVersionT = Aws::String>
    void SetAvailablePackageVersion(AvailablePackageVersionT&& value) { m_availablePackageVersionHasBeenSet = true; m_availablePackageVersion = std::forward<AvailablePackageVersionT>(value); }
    template<typename AvailablePackageVersionT = Aws::String>
    PackageDetails& WithAvailablePackageVersion(AvailablePackageVersionT&& value) { SetAvailablePackageVersion(std::forward<AvailablePackageVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline const ErrorDetails& GetErrorDetails() const { return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    template<typename ErrorDetailsT = ErrorDetails>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = ErrorDetails>
    PackageDetails& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    PackageDetails& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the package is a <code>ZIP-PLUGIN</code> package, additional information
     * about plugin properties.</p>
     */
    inline const PluginProperties& GetAvailablePluginProperties() const { return m_availablePluginProperties; }
    inline bool AvailablePluginPropertiesHasBeenSet() const { return m_availablePluginPropertiesHasBeenSet; }
    template<typename AvailablePluginPropertiesT = PluginProperties>
    void SetAvailablePluginProperties(AvailablePluginPropertiesT&& value) { m_availablePluginPropertiesHasBeenSet = true; m_availablePluginProperties = std::forward<AvailablePluginPropertiesT>(value); }
    template<typename AvailablePluginPropertiesT = PluginProperties>
    PackageDetails& WithAvailablePluginProperties(AvailablePluginPropertiesT&& value) { SetAvailablePluginProperties(std::forward<AvailablePluginPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This represents the available configuration parameters for the package.</p>
     */
    inline const PackageConfiguration& GetAvailablePackageConfiguration() const { return m_availablePackageConfiguration; }
    inline bool AvailablePackageConfigurationHasBeenSet() const { return m_availablePackageConfigurationHasBeenSet; }
    template<typename AvailablePackageConfigurationT = PackageConfiguration>
    void SetAvailablePackageConfiguration(AvailablePackageConfigurationT&& value) { m_availablePackageConfigurationHasBeenSet = true; m_availablePackageConfiguration = std::forward<AvailablePackageConfigurationT>(value); }
    template<typename AvailablePackageConfigurationT = PackageConfiguration>
    PackageDetails& WithAvailablePackageConfiguration(AvailablePackageConfigurationT&& value) { SetAvailablePackageConfiguration(std::forward<AvailablePackageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of users who are allowed to view and associate the package. This
     * field is only visible to the owner of a package.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowListedUserList() const { return m_allowListedUserList; }
    inline bool AllowListedUserListHasBeenSet() const { return m_allowListedUserListHasBeenSet; }
    template<typename AllowListedUserListT = Aws::Vector<Aws::String>>
    void SetAllowListedUserList(AllowListedUserListT&& value) { m_allowListedUserListHasBeenSet = true; m_allowListedUserList = std::forward<AllowListedUserListT>(value); }
    template<typename AllowListedUserListT = Aws::Vector<Aws::String>>
    PackageDetails& WithAllowListedUserList(AllowListedUserListT&& value) { SetAllowListedUserList(std::forward<AllowListedUserListT>(value)); return *this;}
    template<typename AllowListedUserListT = Aws::String>
    PackageDetails& AddAllowListedUserList(AllowListedUserListT&& value) { m_allowListedUserListHasBeenSet = true; m_allowListedUserList.emplace_back(std::forward<AllowListedUserListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The owner of the package who is allowed to create and update a package and
     * add users to the package scope.</p>
     */
    inline const Aws::String& GetPackageOwner() const { return m_packageOwner; }
    inline bool PackageOwnerHasBeenSet() const { return m_packageOwnerHasBeenSet; }
    template<typename PackageOwnerT = Aws::String>
    void SetPackageOwner(PackageOwnerT&& value) { m_packageOwnerHasBeenSet = true; m_packageOwner = std::forward<PackageOwnerT>(value); }
    template<typename PackageOwnerT = Aws::String>
    PackageDetails& WithPackageOwner(PackageOwnerT&& value) { SetPackageOwner(std::forward<PackageOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Package Vending Options for a package.</p>
     */
    inline const PackageVendingOptions& GetPackageVendingOptions() const { return m_packageVendingOptions; }
    inline bool PackageVendingOptionsHasBeenSet() const { return m_packageVendingOptionsHasBeenSet; }
    template<typename PackageVendingOptionsT = PackageVendingOptions>
    void SetPackageVendingOptions(PackageVendingOptionsT&& value) { m_packageVendingOptionsHasBeenSet = true; m_packageVendingOptions = std::forward<PackageVendingOptionsT>(value); }
    template<typename PackageVendingOptionsT = PackageVendingOptions>
    PackageDetails& WithPackageVendingOptions(PackageVendingOptionsT&& value) { SetPackageVendingOptions(std::forward<PackageVendingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Encryption options for a package.</p>
     */
    inline const PackageEncryptionOptions& GetPackageEncryptionOptions() const { return m_packageEncryptionOptions; }
    inline bool PackageEncryptionOptionsHasBeenSet() const { return m_packageEncryptionOptionsHasBeenSet; }
    template<typename PackageEncryptionOptionsT = PackageEncryptionOptions>
    void SetPackageEncryptionOptions(PackageEncryptionOptionsT&& value) { m_packageEncryptionOptionsHasBeenSet = true; m_packageEncryptionOptions = std::forward<PackageEncryptionOptionsT>(value); }
    template<typename PackageEncryptionOptionsT = PackageEncryptionOptions>
    PackageDetails& WithPackageEncryptionOptions(PackageEncryptionOptionsT&& value) { SetPackageEncryptionOptions(std::forward<PackageEncryptionOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageID;
    bool m_packageIDHasBeenSet = false;

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    PackageType m_packageType{PackageType::NOT_SET};
    bool m_packageTypeHasBeenSet = false;

    Aws::String m_packageDescription;
    bool m_packageDescriptionHasBeenSet = false;

    PackageStatus m_packageStatus{PackageStatus::NOT_SET};
    bool m_packageStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
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
