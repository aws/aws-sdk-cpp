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


    /**
     * <p>The unique identifier of the package.</p>
     */
    inline const Aws::String& GetPackageID() const{ return m_packageID; }

    /**
     * <p>The unique identifier of the package.</p>
     */
    inline bool PackageIDHasBeenSet() const { return m_packageIDHasBeenSet; }

    /**
     * <p>The unique identifier of the package.</p>
     */
    inline void SetPackageID(const Aws::String& value) { m_packageIDHasBeenSet = true; m_packageID = value; }

    /**
     * <p>The unique identifier of the package.</p>
     */
    inline void SetPackageID(Aws::String&& value) { m_packageIDHasBeenSet = true; m_packageID = std::move(value); }

    /**
     * <p>The unique identifier of the package.</p>
     */
    inline void SetPackageID(const char* value) { m_packageIDHasBeenSet = true; m_packageID.assign(value); }

    /**
     * <p>The unique identifier of the package.</p>
     */
    inline PackageDetails& WithPackageID(const Aws::String& value) { SetPackageID(value); return *this;}

    /**
     * <p>The unique identifier of the package.</p>
     */
    inline PackageDetails& WithPackageID(Aws::String&& value) { SetPackageID(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the package.</p>
     */
    inline PackageDetails& WithPackageID(const char* value) { SetPackageID(value); return *this;}


    /**
     * <p>The user-specified name of the package.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }

    /**
     * <p>The user-specified name of the package.</p>
     */
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }

    /**
     * <p>The user-specified name of the package.</p>
     */
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }

    /**
     * <p>The user-specified name of the package.</p>
     */
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }

    /**
     * <p>The user-specified name of the package.</p>
     */
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }

    /**
     * <p>The user-specified name of the package.</p>
     */
    inline PackageDetails& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>The user-specified name of the package.</p>
     */
    inline PackageDetails& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>The user-specified name of the package.</p>
     */
    inline PackageDetails& WithPackageName(const char* value) { SetPackageName(value); return *this;}


    /**
     * <p>The type of package.</p>
     */
    inline const PackageType& GetPackageType() const{ return m_packageType; }

    /**
     * <p>The type of package.</p>
     */
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }

    /**
     * <p>The type of package.</p>
     */
    inline void SetPackageType(const PackageType& value) { m_packageTypeHasBeenSet = true; m_packageType = value; }

    /**
     * <p>The type of package.</p>
     */
    inline void SetPackageType(PackageType&& value) { m_packageTypeHasBeenSet = true; m_packageType = std::move(value); }

    /**
     * <p>The type of package.</p>
     */
    inline PackageDetails& WithPackageType(const PackageType& value) { SetPackageType(value); return *this;}

    /**
     * <p>The type of package.</p>
     */
    inline PackageDetails& WithPackageType(PackageType&& value) { SetPackageType(std::move(value)); return *this;}


    /**
     * <p>User-specified description of the package.</p>
     */
    inline const Aws::String& GetPackageDescription() const{ return m_packageDescription; }

    /**
     * <p>User-specified description of the package.</p>
     */
    inline bool PackageDescriptionHasBeenSet() const { return m_packageDescriptionHasBeenSet; }

    /**
     * <p>User-specified description of the package.</p>
     */
    inline void SetPackageDescription(const Aws::String& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = value; }

    /**
     * <p>User-specified description of the package.</p>
     */
    inline void SetPackageDescription(Aws::String&& value) { m_packageDescriptionHasBeenSet = true; m_packageDescription = std::move(value); }

    /**
     * <p>User-specified description of the package.</p>
     */
    inline void SetPackageDescription(const char* value) { m_packageDescriptionHasBeenSet = true; m_packageDescription.assign(value); }

    /**
     * <p>User-specified description of the package.</p>
     */
    inline PackageDetails& WithPackageDescription(const Aws::String& value) { SetPackageDescription(value); return *this;}

    /**
     * <p>User-specified description of the package.</p>
     */
    inline PackageDetails& WithPackageDescription(Aws::String&& value) { SetPackageDescription(std::move(value)); return *this;}

    /**
     * <p>User-specified description of the package.</p>
     */
    inline PackageDetails& WithPackageDescription(const char* value) { SetPackageDescription(value); return *this;}


    /**
     * <p>The current status of the package. The available options are
     * <code>AVAILABLE</code>, <code>COPYING</code>, <code>COPY_FAILED</code>,
     * <code>VALIDATNG</code>, <code>VALIDATION_FAILED</code>, <code>DELETING</code>,
     * and <code>DELETE_FAILED</code>.</p>
     */
    inline const PackageStatus& GetPackageStatus() const{ return m_packageStatus; }

    /**
     * <p>The current status of the package. The available options are
     * <code>AVAILABLE</code>, <code>COPYING</code>, <code>COPY_FAILED</code>,
     * <code>VALIDATNG</code>, <code>VALIDATION_FAILED</code>, <code>DELETING</code>,
     * and <code>DELETE_FAILED</code>.</p>
     */
    inline bool PackageStatusHasBeenSet() const { return m_packageStatusHasBeenSet; }

    /**
     * <p>The current status of the package. The available options are
     * <code>AVAILABLE</code>, <code>COPYING</code>, <code>COPY_FAILED</code>,
     * <code>VALIDATNG</code>, <code>VALIDATION_FAILED</code>, <code>DELETING</code>,
     * and <code>DELETE_FAILED</code>.</p>
     */
    inline void SetPackageStatus(const PackageStatus& value) { m_packageStatusHasBeenSet = true; m_packageStatus = value; }

    /**
     * <p>The current status of the package. The available options are
     * <code>AVAILABLE</code>, <code>COPYING</code>, <code>COPY_FAILED</code>,
     * <code>VALIDATNG</code>, <code>VALIDATION_FAILED</code>, <code>DELETING</code>,
     * and <code>DELETE_FAILED</code>.</p>
     */
    inline void SetPackageStatus(PackageStatus&& value) { m_packageStatusHasBeenSet = true; m_packageStatus = std::move(value); }

    /**
     * <p>The current status of the package. The available options are
     * <code>AVAILABLE</code>, <code>COPYING</code>, <code>COPY_FAILED</code>,
     * <code>VALIDATNG</code>, <code>VALIDATION_FAILED</code>, <code>DELETING</code>,
     * and <code>DELETE_FAILED</code>.</p>
     */
    inline PackageDetails& WithPackageStatus(const PackageStatus& value) { SetPackageStatus(value); return *this;}

    /**
     * <p>The current status of the package. The available options are
     * <code>AVAILABLE</code>, <code>COPYING</code>, <code>COPY_FAILED</code>,
     * <code>VALIDATNG</code>, <code>VALIDATION_FAILED</code>, <code>DELETING</code>,
     * and <code>DELETE_FAILED</code>.</p>
     */
    inline PackageDetails& WithPackageStatus(PackageStatus&& value) { SetPackageStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the package was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the package was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the package was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the package was created.</p>
     */
    inline PackageDetails& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the package was created.</p>
     */
    inline PackageDetails& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Date and time when the package was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>Date and time when the package was last updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>Date and time when the package was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>Date and time when the package was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>Date and time when the package was last updated.</p>
     */
    inline PackageDetails& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>Date and time when the package was last updated.</p>
     */
    inline PackageDetails& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The package version.</p>
     */
    inline const Aws::String& GetAvailablePackageVersion() const{ return m_availablePackageVersion; }

    /**
     * <p>The package version.</p>
     */
    inline bool AvailablePackageVersionHasBeenSet() const { return m_availablePackageVersionHasBeenSet; }

    /**
     * <p>The package version.</p>
     */
    inline void SetAvailablePackageVersion(const Aws::String& value) { m_availablePackageVersionHasBeenSet = true; m_availablePackageVersion = value; }

    /**
     * <p>The package version.</p>
     */
    inline void SetAvailablePackageVersion(Aws::String&& value) { m_availablePackageVersionHasBeenSet = true; m_availablePackageVersion = std::move(value); }

    /**
     * <p>The package version.</p>
     */
    inline void SetAvailablePackageVersion(const char* value) { m_availablePackageVersionHasBeenSet = true; m_availablePackageVersion.assign(value); }

    /**
     * <p>The package version.</p>
     */
    inline PackageDetails& WithAvailablePackageVersion(const Aws::String& value) { SetAvailablePackageVersion(value); return *this;}

    /**
     * <p>The package version.</p>
     */
    inline PackageDetails& WithAvailablePackageVersion(Aws::String&& value) { SetAvailablePackageVersion(std::move(value)); return *this;}

    /**
     * <p>The package version.</p>
     */
    inline PackageDetails& WithAvailablePackageVersion(const char* value) { SetAvailablePackageVersion(value); return *this;}


    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline const ErrorDetails& GetErrorDetails() const{ return m_errorDetails; }

    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }

    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline void SetErrorDetails(const ErrorDetails& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }

    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline void SetErrorDetails(ErrorDetails&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }

    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline PackageDetails& WithErrorDetails(const ErrorDetails& value) { SetErrorDetails(value); return *this;}

    /**
     * <p>Additional information if the package is in an error state. Null
     * otherwise.</p>
     */
    inline PackageDetails& WithErrorDetails(ErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}


    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline PackageDetails& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline PackageDetails& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Version of OpenSearch or Elasticsearch, in the format Elasticsearch_X.Y or
     * OpenSearch_X.Y. Defaults to the latest version of OpenSearch.</p>
     */
    inline PackageDetails& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>If the package is a <code>ZIP-PLUGIN</code> package, additional information
     * about plugin properties.</p>
     */
    inline const PluginProperties& GetAvailablePluginProperties() const{ return m_availablePluginProperties; }

    /**
     * <p>If the package is a <code>ZIP-PLUGIN</code> package, additional information
     * about plugin properties.</p>
     */
    inline bool AvailablePluginPropertiesHasBeenSet() const { return m_availablePluginPropertiesHasBeenSet; }

    /**
     * <p>If the package is a <code>ZIP-PLUGIN</code> package, additional information
     * about plugin properties.</p>
     */
    inline void SetAvailablePluginProperties(const PluginProperties& value) { m_availablePluginPropertiesHasBeenSet = true; m_availablePluginProperties = value; }

    /**
     * <p>If the package is a <code>ZIP-PLUGIN</code> package, additional information
     * about plugin properties.</p>
     */
    inline void SetAvailablePluginProperties(PluginProperties&& value) { m_availablePluginPropertiesHasBeenSet = true; m_availablePluginProperties = std::move(value); }

    /**
     * <p>If the package is a <code>ZIP-PLUGIN</code> package, additional information
     * about plugin properties.</p>
     */
    inline PackageDetails& WithAvailablePluginProperties(const PluginProperties& value) { SetAvailablePluginProperties(value); return *this;}

    /**
     * <p>If the package is a <code>ZIP-PLUGIN</code> package, additional information
     * about plugin properties.</p>
     */
    inline PackageDetails& WithAvailablePluginProperties(PluginProperties&& value) { SetAvailablePluginProperties(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
