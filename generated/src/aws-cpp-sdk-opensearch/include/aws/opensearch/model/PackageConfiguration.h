/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/RequirementLevel.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> The configuration parameters for a package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/PackageConfiguration">AWS
   * API Reference</a></p>
   */
  class PackageConfiguration
  {
  public:
    AWS_OPENSEARCHSERVICE_API PackageConfiguration() = default;
    AWS_OPENSEARCHSERVICE_API PackageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API PackageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The license requirements for the package.</p>
     */
    inline RequirementLevel GetLicenseRequirement() const { return m_licenseRequirement; }
    inline bool LicenseRequirementHasBeenSet() const { return m_licenseRequirementHasBeenSet; }
    inline void SetLicenseRequirement(RequirementLevel value) { m_licenseRequirementHasBeenSet = true; m_licenseRequirement = value; }
    inline PackageConfiguration& WithLicenseRequirement(RequirementLevel value) { SetLicenseRequirement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative file path for the license associated with the package.</p>
     */
    inline const Aws::String& GetLicenseFilepath() const { return m_licenseFilepath; }
    inline bool LicenseFilepathHasBeenSet() const { return m_licenseFilepathHasBeenSet; }
    template<typename LicenseFilepathT = Aws::String>
    void SetLicenseFilepath(LicenseFilepathT&& value) { m_licenseFilepathHasBeenSet = true; m_licenseFilepath = std::forward<LicenseFilepathT>(value); }
    template<typename LicenseFilepathT = Aws::String>
    PackageConfiguration& WithLicenseFilepath(LicenseFilepathT&& value) { SetLicenseFilepath(std::forward<LicenseFilepathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration requirements for the package.</p>
     */
    inline RequirementLevel GetConfigurationRequirement() const { return m_configurationRequirement; }
    inline bool ConfigurationRequirementHasBeenSet() const { return m_configurationRequirementHasBeenSet; }
    inline void SetConfigurationRequirement(RequirementLevel value) { m_configurationRequirementHasBeenSet = true; m_configurationRequirement = value; }
    inline PackageConfiguration& WithConfigurationRequirement(RequirementLevel value) { SetConfigurationRequirement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This indicates whether a B/G deployment is required for updating the
     * configuration that the plugin is prerequisite for.</p>
     */
    inline bool GetRequiresRestartForConfigurationUpdate() const { return m_requiresRestartForConfigurationUpdate; }
    inline bool RequiresRestartForConfigurationUpdateHasBeenSet() const { return m_requiresRestartForConfigurationUpdateHasBeenSet; }
    inline void SetRequiresRestartForConfigurationUpdate(bool value) { m_requiresRestartForConfigurationUpdateHasBeenSet = true; m_requiresRestartForConfigurationUpdate = value; }
    inline PackageConfiguration& WithRequiresRestartForConfigurationUpdate(bool value) { SetRequiresRestartForConfigurationUpdate(value); return *this;}
    ///@}
  private:

    RequirementLevel m_licenseRequirement{RequirementLevel::NOT_SET};
    bool m_licenseRequirementHasBeenSet = false;

    Aws::String m_licenseFilepath;
    bool m_licenseFilepathHasBeenSet = false;

    RequirementLevel m_configurationRequirement{RequirementLevel::NOT_SET};
    bool m_configurationRequirementHasBeenSet = false;

    bool m_requiresRestartForConfigurationUpdate{false};
    bool m_requiresRestartForConfigurationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
