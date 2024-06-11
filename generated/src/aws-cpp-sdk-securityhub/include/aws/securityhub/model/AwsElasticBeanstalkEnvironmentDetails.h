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
    AWS_SECURITYHUB_API AwsElasticBeanstalkEnvironmentDetails();
    AWS_SECURITYHUB_API AwsElasticBeanstalkEnvironmentDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticBeanstalkEnvironmentDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the application that is associated with the environment.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline const Aws::String& GetCname() const{ return m_cname; }
    inline bool CnameHasBeenSet() const { return m_cnameHasBeenSet; }
    inline void SetCname(const Aws::String& value) { m_cnameHasBeenSet = true; m_cname = value; }
    inline void SetCname(Aws::String&& value) { m_cnameHasBeenSet = true; m_cname = std::move(value); }
    inline void SetCname(const char* value) { m_cnameHasBeenSet = true; m_cname.assign(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithCname(const Aws::String& value) { SetCname(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithCname(Aws::String&& value) { SetCname(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithCname(const char* value) { SetCname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date for this environment.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when this environment was last modified.</p>
     */
    inline const Aws::String& GetDateUpdated() const{ return m_dateUpdated; }
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }
    inline void SetDateUpdated(const Aws::String& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }
    inline void SetDateUpdated(Aws::String&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::move(value); }
    inline void SetDateUpdated(const char* value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated.assign(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithDateUpdated(const Aws::String& value) { SetDateUpdated(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithDateUpdated(Aws::String&& value) { SetDateUpdated(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithDateUpdated(const char* value) { SetDateUpdated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For load-balanced, autoscaling environments, the URL to the load balancer.
     * For single-instance environments, the IP address of the instance.</p>
     */
    inline const Aws::String& GetEndpointUrl() const{ return m_endpointUrl; }
    inline bool EndpointUrlHasBeenSet() const { return m_endpointUrlHasBeenSet; }
    inline void SetEndpointUrl(const Aws::String& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = value; }
    inline void SetEndpointUrl(Aws::String&& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = std::move(value); }
    inline void SetEndpointUrl(const char* value) { m_endpointUrlHasBeenSet = true; m_endpointUrl.assign(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithEndpointUrl(const Aws::String& value) { SetEndpointUrl(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithEndpointUrl(Aws::String&& value) { SetEndpointUrl(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithEndpointUrl(const char* value) { SetEndpointUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const{ return m_environmentArn; }
    inline bool EnvironmentArnHasBeenSet() const { return m_environmentArnHasBeenSet; }
    inline void SetEnvironmentArn(const Aws::String& value) { m_environmentArnHasBeenSet = true; m_environmentArn = value; }
    inline void SetEnvironmentArn(Aws::String&& value) { m_environmentArnHasBeenSet = true; m_environmentArn = std::move(value); }
    inline void SetEnvironmentArn(const char* value) { m_environmentArnHasBeenSet = true; m_environmentArn.assign(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentArn(const Aws::String& value) { SetEnvironmentArn(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentArn(Aws::String&& value) { SetEnvironmentArn(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentArn(const char* value) { SetEnvironmentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Links to other environments in the same group.</p>
     */
    inline const Aws::Vector<AwsElasticBeanstalkEnvironmentEnvironmentLink>& GetEnvironmentLinks() const{ return m_environmentLinks; }
    inline bool EnvironmentLinksHasBeenSet() const { return m_environmentLinksHasBeenSet; }
    inline void SetEnvironmentLinks(const Aws::Vector<AwsElasticBeanstalkEnvironmentEnvironmentLink>& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks = value; }
    inline void SetEnvironmentLinks(Aws::Vector<AwsElasticBeanstalkEnvironmentEnvironmentLink>&& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks = std::move(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentLinks(const Aws::Vector<AwsElasticBeanstalkEnvironmentEnvironmentLink>& value) { SetEnvironmentLinks(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentLinks(Aws::Vector<AwsElasticBeanstalkEnvironmentEnvironmentLink>&& value) { SetEnvironmentLinks(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& AddEnvironmentLinks(const AwsElasticBeanstalkEnvironmentEnvironmentLink& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks.push_back(value); return *this; }
    inline AwsElasticBeanstalkEnvironmentDetails& AddEnvironmentLinks(AwsElasticBeanstalkEnvironmentEnvironmentLink&& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration setting for the environment.</p>
     */
    inline const Aws::Vector<AwsElasticBeanstalkEnvironmentOptionSetting>& GetOptionSettings() const{ return m_optionSettings; }
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }
    inline void SetOptionSettings(const Aws::Vector<AwsElasticBeanstalkEnvironmentOptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }
    inline void SetOptionSettings(Aws::Vector<AwsElasticBeanstalkEnvironmentOptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::move(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithOptionSettings(const Aws::Vector<AwsElasticBeanstalkEnvironmentOptionSetting>& value) { SetOptionSettings(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithOptionSettings(Aws::Vector<AwsElasticBeanstalkEnvironmentOptionSetting>&& value) { SetOptionSettings(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& AddOptionSettings(const AwsElasticBeanstalkEnvironmentOptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }
    inline AwsElasticBeanstalkEnvironmentDetails& AddOptionSettings(AwsElasticBeanstalkEnvironmentOptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the platform version for the environment.</p>
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }
    inline void SetPlatformArn(const Aws::String& value) { m_platformArnHasBeenSet = true; m_platformArn = value; }
    inline void SetPlatformArn(Aws::String&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::move(value); }
    inline void SetPlatformArn(const char* value) { m_platformArnHasBeenSet = true; m_platformArn.assign(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the solution stack that is deployed with the environment.</p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::move(value); }
    inline void SetSolutionStackName(const char* value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName.assign(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}
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
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tier of the environment.</p>
     */
    inline const AwsElasticBeanstalkEnvironmentTier& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const AwsElasticBeanstalkEnvironmentTier& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(AwsElasticBeanstalkEnvironmentTier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithTier(const AwsElasticBeanstalkEnvironmentTier& value) { SetTier(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithTier(AwsElasticBeanstalkEnvironmentTier&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application version of the environment.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::move(value); }
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }
    inline AwsElasticBeanstalkEnvironmentDetails& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}
    inline AwsElasticBeanstalkEnvironmentDetails& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}
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
