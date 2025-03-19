/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsElasticBeanstalkEnvironmentTier.h>
#include <aws/securityhub/model/AwsElasticBeanstalkEnvironmentEnvironmentLink.h>
#include <aws/securityhub/model/AwsElasticBeanstalkEnvironmentOptionSetting.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains details about an Elastic Beanstalk environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElasticBeanstalkEnvironmentDetails">AWS
   * API Reference</a></p>
   */
  class AwsElasticBeanstalkEnvironmentDetails
  {
  public:
    AWS_SECURITYHUB_API AwsElasticBeanstalkEnvironmentDetails() = default;
    AWS_SECURITYHUB_API AwsElasticBeanstalkEnvironmentDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticBeanstalkEnvironmentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the application that is associated with the environment.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    AwsElasticBeanstalkEnvironmentDetails& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline const Aws::String& GetCname() const { return m_cname; }
    inline bool CnameHasBeenSet() const { return m_cnameHasBeenSet; }
    template<typename CnameT = Aws::String>
    void SetCname(CnameT&& value) { m_cnameHasBeenSet = true; m_cname = std::forward<CnameT>(value); }
    template<typename CnameT = Aws::String>
    AwsElasticBeanstalkEnvironmentDetails& WithCname(CnameT&& value) { SetCname(std::forward<CnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date for this environment.</p>
     */
    inline const Aws::String& GetDateCreated() const { return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    template<typename DateCreatedT = Aws::String>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::String>
    AwsElasticBeanstalkEnvironmentDetails& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when this environment was last modified.</p>
     */
    inline const Aws::String& GetDateUpdated() const { return m_dateUpdated; }
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }
    template<typename DateUpdatedT = Aws::String>
    void SetDateUpdated(DateUpdatedT&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::forward<DateUpdatedT>(value); }
    template<typename DateUpdatedT = Aws::String>
    AwsElasticBeanstalkEnvironmentDetails& WithDateUpdated(DateUpdatedT&& value) { SetDateUpdated(std::forward<DateUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsElasticBeanstalkEnvironmentDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For load-balanced, autoscaling environments, the URL to the load balancer.
     * For single-instance environments, the IP address of the instance.</p>
     */
    inline const Aws::String& GetEndpointUrl() const { return m_endpointUrl; }
    inline bool EndpointUrlHasBeenSet() const { return m_endpointUrlHasBeenSet; }
    template<typename EndpointUrlT = Aws::String>
    void SetEndpointUrl(EndpointUrlT&& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = std::forward<EndpointUrlT>(value); }
    template<typename EndpointUrlT = Aws::String>
    AwsElasticBeanstalkEnvironmentDetails& WithEndpointUrl(EndpointUrlT&& value) { SetEndpointUrl(std::forward<EndpointUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const { return m_environmentArn; }
    inline bool EnvironmentArnHasBeenSet() const { return m_environmentArnHasBeenSet; }
    template<typename EnvironmentArnT = Aws::String>
    void SetEnvironmentArn(EnvironmentArnT&& value) { m_environmentArnHasBeenSet = true; m_environmentArn = std::forward<EnvironmentArnT>(value); }
    template<typename EnvironmentArnT = Aws::String>
    AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentArn(EnvironmentArnT&& value) { SetEnvironmentArn(std::forward<EnvironmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Links to other environments in the same group.</p>
     */
    inline const Aws::Vector<AwsElasticBeanstalkEnvironmentEnvironmentLink>& GetEnvironmentLinks() const { return m_environmentLinks; }
    inline bool EnvironmentLinksHasBeenSet() const { return m_environmentLinksHasBeenSet; }
    template<typename EnvironmentLinksT = Aws::Vector<AwsElasticBeanstalkEnvironmentEnvironmentLink>>
    void SetEnvironmentLinks(EnvironmentLinksT&& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks = std::forward<EnvironmentLinksT>(value); }
    template<typename EnvironmentLinksT = Aws::Vector<AwsElasticBeanstalkEnvironmentEnvironmentLink>>
    AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentLinks(EnvironmentLinksT&& value) { SetEnvironmentLinks(std::forward<EnvironmentLinksT>(value)); return *this;}
    template<typename EnvironmentLinksT = AwsElasticBeanstalkEnvironmentEnvironmentLink>
    AwsElasticBeanstalkEnvironmentDetails& AddEnvironmentLinks(EnvironmentLinksT&& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks.emplace_back(std::forward<EnvironmentLinksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration setting for the environment.</p>
     */
    inline const Aws::Vector<AwsElasticBeanstalkEnvironmentOptionSetting>& GetOptionSettings() const { return m_optionSettings; }
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }
    template<typename OptionSettingsT = Aws::Vector<AwsElasticBeanstalkEnvironmentOptionSetting>>
    void SetOptionSettings(OptionSettingsT&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::forward<OptionSettingsT>(value); }
    template<typename OptionSettingsT = Aws::Vector<AwsElasticBeanstalkEnvironmentOptionSetting>>
    AwsElasticBeanstalkEnvironmentDetails& WithOptionSettings(OptionSettingsT&& value) { SetOptionSettings(std::forward<OptionSettingsT>(value)); return *this;}
    template<typename OptionSettingsT = AwsElasticBeanstalkEnvironmentOptionSetting>
    AwsElasticBeanstalkEnvironmentDetails& AddOptionSettings(OptionSettingsT&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.emplace_back(std::forward<OptionSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the platform version for the environment.</p>
     */
    inline const Aws::String& GetPlatformArn() const { return m_platformArn; }
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }
    template<typename PlatformArnT = Aws::String>
    void SetPlatformArn(PlatformArnT&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::forward<PlatformArnT>(value); }
    template<typename PlatformArnT = Aws::String>
    AwsElasticBeanstalkEnvironmentDetails& WithPlatformArn(PlatformArnT&& value) { SetPlatformArn(std::forward<PlatformArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the solution stack that is deployed with the environment.</p>
     */
    inline const Aws::String& GetSolutionStackName() const { return m_solutionStackName; }
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }
    template<typename SolutionStackNameT = Aws::String>
    void SetSolutionStackName(SolutionStackNameT&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::forward<SolutionStackNameT>(value); }
    template<typename SolutionStackNameT = Aws::String>
    AwsElasticBeanstalkEnvironmentDetails& WithSolutionStackName(SolutionStackNameT&& value) { SetSolutionStackName(std::forward<SolutionStackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current operational status of the environment. Valid values are as
     * follows:</p> <ul> <li> <p> <code>Aborting</code> </p> </li> <li> <p>
     * <code>Launching</code> </p> </li> <li> <p> <code>LinkingFrom</code> </p> </li>
     * <li> <p> <code>LinkingTo</code> </p> </li> <li> <p> <code>Ready</code> </p>
     * </li> <li> <p> <code>Terminated</code> </p> </li> <li> <p>
     * <code>Terminating</code> </p> </li> <li> <p> <code>Updating</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsElasticBeanstalkEnvironmentDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tier of the environment.</p>
     */
    inline const AwsElasticBeanstalkEnvironmentTier& GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    template<typename TierT = AwsElasticBeanstalkEnvironmentTier>
    void SetTier(TierT&& value) { m_tierHasBeenSet = true; m_tier = std::forward<TierT>(value); }
    template<typename TierT = AwsElasticBeanstalkEnvironmentTier>
    AwsElasticBeanstalkEnvironmentDetails& WithTier(TierT&& value) { SetTier(std::forward<TierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application version of the environment.</p>
     */
    inline const Aws::String& GetVersionLabel() const { return m_versionLabel; }
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }
    template<typename VersionLabelT = Aws::String>
    void SetVersionLabel(VersionLabelT&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::forward<VersionLabelT>(value); }
    template<typename VersionLabelT = Aws::String>
    AwsElasticBeanstalkEnvironmentDetails& WithVersionLabel(VersionLabelT&& value) { SetVersionLabel(std::forward<VersionLabelT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_cname;
    bool m_cnameHasBeenSet = false;

    Aws::String m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::String m_dateUpdated;
    bool m_dateUpdatedHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_endpointUrl;
    bool m_endpointUrlHasBeenSet = false;

    Aws::String m_environmentArn;
    bool m_environmentArnHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::Vector<AwsElasticBeanstalkEnvironmentEnvironmentLink> m_environmentLinks;
    bool m_environmentLinksHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::Vector<AwsElasticBeanstalkEnvironmentOptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet = false;

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet = false;

    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    AwsElasticBeanstalkEnvironmentTier m_tier;
    bool m_tierHasBeenSet = false;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
