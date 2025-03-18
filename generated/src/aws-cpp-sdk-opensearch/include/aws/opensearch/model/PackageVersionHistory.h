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
    AWS_OPENSEARCHSERVICE_API PackageVersionHistory() = default;
    AWS_OPENSEARCHSERVICE_API PackageVersionHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API PackageVersionHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The package version.</p>
     */
    inline const Aws::String& GetPackageVersion() const { return m_packageVersion; }
    inline bool PackageVersionHasBeenSet() const { return m_packageVersionHasBeenSet; }
    template<typename PackageVersionT = Aws::String>
    void SetPackageVersion(PackageVersionT&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::forward<PackageVersionT>(value); }
    template<typename PackageVersionT = Aws::String>
    PackageVersionHistory& WithPackageVersion(PackageVersionT&& value) { SetPackageVersion(std::forward<PackageVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message associated with the package version when it was uploaded.</p>
     */
    inline const Aws::String& GetCommitMessage() const { return m_commitMessage; }
    inline bool CommitMessageHasBeenSet() const { return m_commitMessageHasBeenSet; }
    template<typename CommitMessageT = Aws::String>
    void SetCommitMessage(CommitMessageT&& value) { m_commitMessageHasBeenSet = true; m_commitMessage = std::forward<CommitMessageT>(value); }
    template<typename CommitMessageT = Aws::String>
    PackageVersionHistory& WithCommitMessage(CommitMessageT&& value) { SetCommitMessage(std::forward<CommitMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    PackageVersionHistory& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about plugin properties if the package is a
     * <code>ZIP-PLUGIN</code> package.</p>
     */
    inline const PluginProperties& GetPluginProperties() const { return m_pluginProperties; }
    inline bool PluginPropertiesHasBeenSet() const { return m_pluginPropertiesHasBeenSet; }
    template<typename PluginPropertiesT = PluginProperties>
    void SetPluginProperties(PluginPropertiesT&& value) { m_pluginPropertiesHasBeenSet = true; m_pluginProperties = std::forward<PluginPropertiesT>(value); }
    template<typename PluginPropertiesT = PluginProperties>
    PackageVersionHistory& WithPluginProperties(PluginPropertiesT&& value) { SetPluginProperties(std::forward<PluginPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details for a specific version of a package.</p>
     */
    inline const PackageConfiguration& GetPackageConfiguration() const { return m_packageConfiguration; }
    inline bool PackageConfigurationHasBeenSet() const { return m_packageConfigurationHasBeenSet; }
    template<typename PackageConfigurationT = PackageConfiguration>
    void SetPackageConfiguration(PackageConfigurationT&& value) { m_packageConfigurationHasBeenSet = true; m_packageConfiguration = std::forward<PackageConfigurationT>(value); }
    template<typename PackageConfigurationT = PackageConfiguration>
    PackageVersionHistory& WithPackageConfiguration(PackageConfigurationT&& value) { SetPackageConfiguration(std::forward<PackageConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;

    Aws::String m_commitMessage;
    bool m_commitMessageHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    PluginProperties m_pluginProperties;
    bool m_pluginPropertiesHasBeenSet = false;

    PackageConfiguration m_packageConfiguration;
    bool m_packageConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
