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
    AWS_OPENSEARCHSERVICE_API PackageConfiguration();
    AWS_OPENSEARCHSERVICE_API PackageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API PackageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The license requirements for the package.</p>
     */
    inline const RequirementLevel& GetLicenseRequirement() const{ return m_licenseRequirement; }
    inline bool LicenseRequirementHasBeenSet() const { return m_licenseRequirementHasBeenSet; }
    inline void SetLicenseRequirement(const RequirementLevel& value) { m_licenseRequirementHasBeenSet = true; m_licenseRequirement = value; }
    inline void SetLicenseRequirement(RequirementLevel&& value) { m_licenseRequirementHasBeenSet = true; m_licenseRequirement = std::move(value); }
    inline PackageConfiguration& WithLicenseRequirement(const RequirementLevel& value) { SetLicenseRequirement(value); return *this;}
    inline PackageConfiguration& WithLicenseRequirement(RequirementLevel&& value) { SetLicenseRequirement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relative file path for the license associated with the package.</p>
     */
    inline const Aws::String& GetLicenseFilepath() const{ return m_licenseFilepath; }
    inline bool LicenseFilepathHasBeenSet() const { return m_licenseFilepathHasBeenSet; }
    inline void SetLicenseFilepath(const Aws::String& value) { m_licenseFilepathHasBeenSet = true; m_licenseFilepath = value; }
    inline void SetLicenseFilepath(Aws::String&& value) { m_licenseFilepathHasBeenSet = true; m_licenseFilepath = std::move(value); }
    inline void SetLicenseFilepath(const char* value) { m_licenseFilepathHasBeenSet = true; m_licenseFilepath.assign(value); }
    inline PackageConfiguration& WithLicenseFilepath(const Aws::String& value) { SetLicenseFilepath(value); return *this;}
    inline PackageConfiguration& WithLicenseFilepath(Aws::String&& value) { SetLicenseFilepath(std::move(value)); return *this;}
    inline PackageConfiguration& WithLicenseFilepath(const char* value) { SetLicenseFilepath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration requirements for the package.</p>
     */
    inline const RequirementLevel& GetConfigurationRequirement() const{ return m_configurationRequirement; }
    inline bool ConfigurationRequirementHasBeenSet() const { return m_configurationRequirementHasBeenSet; }
    inline void SetConfigurationRequirement(const RequirementLevel& value) { m_configurationRequirementHasBeenSet = true; m_configurationRequirement = value; }
    inline void SetConfigurationRequirement(RequirementLevel&& value) { m_configurationRequirementHasBeenSet = true; m_configurationRequirement = std::move(value); }
    inline PackageConfiguration& WithConfigurationRequirement(const RequirementLevel& value) { SetConfigurationRequirement(value); return *this;}
    inline PackageConfiguration& WithConfigurationRequirement(RequirementLevel&& value) { SetConfigurationRequirement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This indicates whether a B/G deployment is required for updating the
     * configuration that the plugin is prerequisite for.</p>
     */
    inline bool GetRequiresRestartForConfigurationUpdate() const{ return m_requiresRestartForConfigurationUpdate; }
    inline bool RequiresRestartForConfigurationUpdateHasBeenSet() const { return m_requiresRestartForConfigurationUpdateHasBeenSet; }
    inline void SetRequiresRestartForConfigurationUpdate(bool value) { m_requiresRestartForConfigurationUpdateHasBeenSet = true; m_requiresRestartForConfigurationUpdate = value; }
    inline PackageConfiguration& WithRequiresRestartForConfigurationUpdate(bool value) { SetRequiresRestartForConfigurationUpdate(value); return *this;}
    ///@}
  private:

    RequirementLevel m_licenseRequirement;
    bool m_licenseRequirementHasBeenSet = false;

    Aws::String m_licenseFilepath;
    bool m_licenseFilepathHasBeenSet = false;

    RequirementLevel m_configurationRequirement;
    bool m_configurationRequirementHasBeenSet = false;

    bool m_requiresRestartForConfigurationUpdate;
    bool m_requiresRestartForConfigurationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
