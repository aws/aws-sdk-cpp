/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/opensearch/model/PluginProperties.h>
#include <aws/opensearch/model/PackageConfiguration.h>
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
   * <p>Details about a package version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/PackageVersionHistory">AWS
   * API Reference</a></p>
   */
  class PackageVersionHistory
  {
  public:
    AWS_OPENSEARCHSERVICE_API PackageVersionHistory();
    AWS_OPENSEARCHSERVICE_API PackageVersionHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API PackageVersionHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The package version.</p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersionHasBeenSet = true; m_packageVersion = value; }
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::move(value); }
    inline void SetPackageVersion(const char* value) { m_packageVersionHasBeenSet = true; m_packageVersion.assign(value); }
    inline PackageVersionHistory& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}
    inline PackageVersionHistory& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}
    inline PackageVersionHistory& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message associated with the package version when it was uploaded.</p>
     */
    inline const Aws::String& GetCommitMessage() const{ return m_commitMessage; }
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
    inline void SetCommitMessage(const Aws::String& value) { m_commitMessageHasBeenSet = true; m_commitMessage = value; }
    inline void SetCommitMessage(Aws::String&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::move(value); }
    inline void SetCommitMessage(const char* value) { m_commitMessageHasBeenSet = true; m_commitMessage.assign(value); }
    inline PackageVersionHistory& WithCommitMessage(const Aws::String& value) { SetCommitMessage(value); return *this;}
    inline PackageVersionHistory& WithCommitMessage(Aws::String&& value) { SetCommitMessage(std::move(value)); return *this;}
    inline PackageVersionHistory& WithCommitMessage(const char* value) { SetCommitMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline PackageVersionHistory& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline PackageVersionHistory& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about plugin properties if the package is a
     * <code>ZIP-PLUGIN</code> package.</p>
     */
    inline const PluginProperties& GetPluginProperties() const{ return m_pluginProperties; }
    inline bool PluginPropertiesHasBeenSet() const { return m_pluginPropertiesHasBeenSet; }
    inline void SetPluginProperties(const PluginProperties& value) { m_pluginPropertiesHasBeenSet = true; m_pluginProperties = value; }
    inline void SetPluginProperties(PluginProperties&& value) { m_pluginPropertiesHasBeenSet = true; m_pluginProperties = std::move(value); }
    inline PackageVersionHistory& WithPluginProperties(const PluginProperties& value) { SetPluginProperties(value); return *this;}
    inline PackageVersionHistory& WithPluginProperties(PluginProperties&& value) { SetPluginProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details for a specific version of a package.</p>
     */
    inline const PackageConfiguration& GetPackageConfiguration() const{ return m_packageConfiguration; }
    inline bool PackageConfigurationHasBeenSet() const { return m_packageConfigurationHasBeenSet; }
    inline void SetPackageConfiguration(const PackageConfiguration& value) { m_packageConfigurationHasBeenSet = true; m_packageConfiguration = value; }
    inline void SetPackageConfiguration(PackageConfiguration&& value) { m_packageConfigurationHasBeenSet = true; m_packageConfiguration = std::move(value); }
    inline PackageVersionHistory& WithPackageConfiguration(const PackageConfiguration& value) { SetPackageConfiguration(value); return *this;}
    inline PackageVersionHistory& WithPackageConfiguration(PackageConfiguration&& value) { SetPackageConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    PluginProperties m_pluginProperties;
    bool m_pluginPropertiesHasBeenSet = false;

    PackageConfiguration m_packageConfiguration;
    bool m_packageConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
