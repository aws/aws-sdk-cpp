/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/ActiveDirectoryConfiguration.h>
#include <aws/nimble/model/ComputeFarmConfiguration.h>
#include <aws/nimble/model/LicenseServiceConfiguration.h>
#include <aws/nimble/model/SharedFileSystemConfiguration.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>The configuration of the studio component, based on component
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StudioComponentConfiguration">AWS
   * API Reference</a></p>
   */
  class StudioComponentConfiguration
  {
  public:
    AWS_NIMBLESTUDIO_API StudioComponentConfiguration();
    AWS_NIMBLESTUDIO_API StudioComponentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API StudioComponentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for a Directory Service for Microsoft Active Directory
     * studio resource.</p>
     */
    inline const ActiveDirectoryConfiguration& GetActiveDirectoryConfiguration() const{ return m_activeDirectoryConfiguration; }

    /**
     * <p>The configuration for a Directory Service for Microsoft Active Directory
     * studio resource.</p>
     */
    inline bool ActiveDirectoryConfigurationHasBeenSet() const { return m_activeDirectoryConfigurationHasBeenSet; }

    /**
     * <p>The configuration for a Directory Service for Microsoft Active Directory
     * studio resource.</p>
     */
    inline void SetActiveDirectoryConfiguration(const ActiveDirectoryConfiguration& value) { m_activeDirectoryConfigurationHasBeenSet = true; m_activeDirectoryConfiguration = value; }

    /**
     * <p>The configuration for a Directory Service for Microsoft Active Directory
     * studio resource.</p>
     */
    inline void SetActiveDirectoryConfiguration(ActiveDirectoryConfiguration&& value) { m_activeDirectoryConfigurationHasBeenSet = true; m_activeDirectoryConfiguration = std::move(value); }

    /**
     * <p>The configuration for a Directory Service for Microsoft Active Directory
     * studio resource.</p>
     */
    inline StudioComponentConfiguration& WithActiveDirectoryConfiguration(const ActiveDirectoryConfiguration& value) { SetActiveDirectoryConfiguration(value); return *this;}

    /**
     * <p>The configuration for a Directory Service for Microsoft Active Directory
     * studio resource.</p>
     */
    inline StudioComponentConfiguration& WithActiveDirectoryConfiguration(ActiveDirectoryConfiguration&& value) { SetActiveDirectoryConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration for a render farm that is associated with a studio
     * resource.</p>
     */
    inline const ComputeFarmConfiguration& GetComputeFarmConfiguration() const{ return m_computeFarmConfiguration; }

    /**
     * <p>The configuration for a render farm that is associated with a studio
     * resource.</p>
     */
    inline bool ComputeFarmConfigurationHasBeenSet() const { return m_computeFarmConfigurationHasBeenSet; }

    /**
     * <p>The configuration for a render farm that is associated with a studio
     * resource.</p>
     */
    inline void SetComputeFarmConfiguration(const ComputeFarmConfiguration& value) { m_computeFarmConfigurationHasBeenSet = true; m_computeFarmConfiguration = value; }

    /**
     * <p>The configuration for a render farm that is associated with a studio
     * resource.</p>
     */
    inline void SetComputeFarmConfiguration(ComputeFarmConfiguration&& value) { m_computeFarmConfigurationHasBeenSet = true; m_computeFarmConfiguration = std::move(value); }

    /**
     * <p>The configuration for a render farm that is associated with a studio
     * resource.</p>
     */
    inline StudioComponentConfiguration& WithComputeFarmConfiguration(const ComputeFarmConfiguration& value) { SetComputeFarmConfiguration(value); return *this;}

    /**
     * <p>The configuration for a render farm that is associated with a studio
     * resource.</p>
     */
    inline StudioComponentConfiguration& WithComputeFarmConfiguration(ComputeFarmConfiguration&& value) { SetComputeFarmConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration for a license service that is associated with a studio
     * resource.</p>
     */
    inline const LicenseServiceConfiguration& GetLicenseServiceConfiguration() const{ return m_licenseServiceConfiguration; }

    /**
     * <p>The configuration for a license service that is associated with a studio
     * resource.</p>
     */
    inline bool LicenseServiceConfigurationHasBeenSet() const { return m_licenseServiceConfigurationHasBeenSet; }

    /**
     * <p>The configuration for a license service that is associated with a studio
     * resource.</p>
     */
    inline void SetLicenseServiceConfiguration(const LicenseServiceConfiguration& value) { m_licenseServiceConfigurationHasBeenSet = true; m_licenseServiceConfiguration = value; }

    /**
     * <p>The configuration for a license service that is associated with a studio
     * resource.</p>
     */
    inline void SetLicenseServiceConfiguration(LicenseServiceConfiguration&& value) { m_licenseServiceConfigurationHasBeenSet = true; m_licenseServiceConfiguration = std::move(value); }

    /**
     * <p>The configuration for a license service that is associated with a studio
     * resource.</p>
     */
    inline StudioComponentConfiguration& WithLicenseServiceConfiguration(const LicenseServiceConfiguration& value) { SetLicenseServiceConfiguration(value); return *this;}

    /**
     * <p>The configuration for a license service that is associated with a studio
     * resource.</p>
     */
    inline StudioComponentConfiguration& WithLicenseServiceConfiguration(LicenseServiceConfiguration&& value) { SetLicenseServiceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration for a shared file storage system that is associated with a
     * studio resource.</p>
     */
    inline const SharedFileSystemConfiguration& GetSharedFileSystemConfiguration() const{ return m_sharedFileSystemConfiguration; }

    /**
     * <p>The configuration for a shared file storage system that is associated with a
     * studio resource.</p>
     */
    inline bool SharedFileSystemConfigurationHasBeenSet() const { return m_sharedFileSystemConfigurationHasBeenSet; }

    /**
     * <p>The configuration for a shared file storage system that is associated with a
     * studio resource.</p>
     */
    inline void SetSharedFileSystemConfiguration(const SharedFileSystemConfiguration& value) { m_sharedFileSystemConfigurationHasBeenSet = true; m_sharedFileSystemConfiguration = value; }

    /**
     * <p>The configuration for a shared file storage system that is associated with a
     * studio resource.</p>
     */
    inline void SetSharedFileSystemConfiguration(SharedFileSystemConfiguration&& value) { m_sharedFileSystemConfigurationHasBeenSet = true; m_sharedFileSystemConfiguration = std::move(value); }

    /**
     * <p>The configuration for a shared file storage system that is associated with a
     * studio resource.</p>
     */
    inline StudioComponentConfiguration& WithSharedFileSystemConfiguration(const SharedFileSystemConfiguration& value) { SetSharedFileSystemConfiguration(value); return *this;}

    /**
     * <p>The configuration for a shared file storage system that is associated with a
     * studio resource.</p>
     */
    inline StudioComponentConfiguration& WithSharedFileSystemConfiguration(SharedFileSystemConfiguration&& value) { SetSharedFileSystemConfiguration(std::move(value)); return *this;}

  private:

    ActiveDirectoryConfiguration m_activeDirectoryConfiguration;
    bool m_activeDirectoryConfigurationHasBeenSet = false;

    ComputeFarmConfiguration m_computeFarmConfiguration;
    bool m_computeFarmConfigurationHasBeenSet = false;

    LicenseServiceConfiguration m_licenseServiceConfiguration;
    bool m_licenseServiceConfigurationHasBeenSet = false;

    SharedFileSystemConfiguration m_sharedFileSystemConfiguration;
    bool m_sharedFileSystemConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
