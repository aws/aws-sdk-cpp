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


    /**
     * <p>The name of the application that is associated with the environment.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application that is associated with the environment.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application that is associated with the environment.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application that is associated with the environment.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application that is associated with the environment.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application that is associated with the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application that is associated with the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application that is associated with the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline const Aws::String& GetCname() const{ return m_cname; }

    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline bool CnameHasBeenSet() const { return m_cnameHasBeenSet; }

    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline void SetCname(const Aws::String& value) { m_cnameHasBeenSet = true; m_cname = value; }

    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline void SetCname(Aws::String&& value) { m_cnameHasBeenSet = true; m_cname = std::move(value); }

    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline void SetCname(const char* value) { m_cnameHasBeenSet = true; m_cname.assign(value); }

    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithCname(const Aws::String& value) { SetCname(value); return *this;}

    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithCname(Aws::String&& value) { SetCname(std::move(value)); return *this;}

    /**
     * <p>The URL to the CNAME for this environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithCname(const char* value) { SetCname(value); return *this;}


    /**
     * <p>The creation date for this environment.</p>
     */
    inline const Aws::String& GetDateCreated() const{ return m_dateCreated; }

    /**
     * <p>The creation date for this environment.</p>
     */
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }

    /**
     * <p>The creation date for this environment.</p>
     */
    inline void SetDateCreated(const Aws::String& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }

    /**
     * <p>The creation date for this environment.</p>
     */
    inline void SetDateCreated(Aws::String&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }

    /**
     * <p>The creation date for this environment.</p>
     */
    inline void SetDateCreated(const char* value) { m_dateCreatedHasBeenSet = true; m_dateCreated.assign(value); }

    /**
     * <p>The creation date for this environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithDateCreated(const Aws::String& value) { SetDateCreated(value); return *this;}

    /**
     * <p>The creation date for this environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithDateCreated(Aws::String&& value) { SetDateCreated(std::move(value)); return *this;}

    /**
     * <p>The creation date for this environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithDateCreated(const char* value) { SetDateCreated(value); return *this;}


    /**
     * <p>The date when this environment was last modified.</p>
     */
    inline const Aws::String& GetDateUpdated() const{ return m_dateUpdated; }

    /**
     * <p>The date when this environment was last modified.</p>
     */
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }

    /**
     * <p>The date when this environment was last modified.</p>
     */
    inline void SetDateUpdated(const Aws::String& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = value; }

    /**
     * <p>The date when this environment was last modified.</p>
     */
    inline void SetDateUpdated(Aws::String&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::move(value); }

    /**
     * <p>The date when this environment was last modified.</p>
     */
    inline void SetDateUpdated(const char* value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated.assign(value); }

    /**
     * <p>The date when this environment was last modified.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithDateUpdated(const Aws::String& value) { SetDateUpdated(value); return *this;}

    /**
     * <p>The date when this environment was last modified.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithDateUpdated(Aws::String&& value) { SetDateUpdated(std::move(value)); return *this;}

    /**
     * <p>The date when this environment was last modified.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithDateUpdated(const char* value) { SetDateUpdated(value); return *this;}


    /**
     * <p>A description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the environment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>For load-balanced, autoscaling environments, the URL to the load balancer.
     * For single-instance environments, the IP address of the instance.</p>
     */
    inline const Aws::String& GetEndpointUrl() const{ return m_endpointUrl; }

    /**
     * <p>For load-balanced, autoscaling environments, the URL to the load balancer.
     * For single-instance environments, the IP address of the instance.</p>
     */
    inline bool EndpointUrlHasBeenSet() const { return m_endpointUrlHasBeenSet; }

    /**
     * <p>For load-balanced, autoscaling environments, the URL to the load balancer.
     * For single-instance environments, the IP address of the instance.</p>
     */
    inline void SetEndpointUrl(const Aws::String& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = value; }

    /**
     * <p>For load-balanced, autoscaling environments, the URL to the load balancer.
     * For single-instance environments, the IP address of the instance.</p>
     */
    inline void SetEndpointUrl(Aws::String&& value) { m_endpointUrlHasBeenSet = true; m_endpointUrl = std::move(value); }

    /**
     * <p>For load-balanced, autoscaling environments, the URL to the load balancer.
     * For single-instance environments, the IP address of the instance.</p>
     */
    inline void SetEndpointUrl(const char* value) { m_endpointUrlHasBeenSet = true; m_endpointUrl.assign(value); }

    /**
     * <p>For load-balanced, autoscaling environments, the URL to the load balancer.
     * For single-instance environments, the IP address of the instance.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithEndpointUrl(const Aws::String& value) { SetEndpointUrl(value); return *this;}

    /**
     * <p>For load-balanced, autoscaling environments, the URL to the load balancer.
     * For single-instance environments, the IP address of the instance.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithEndpointUrl(Aws::String&& value) { SetEndpointUrl(std::move(value)); return *this;}

    /**
     * <p>For load-balanced, autoscaling environments, the URL to the load balancer.
     * For single-instance environments, the IP address of the instance.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithEndpointUrl(const char* value) { SetEndpointUrl(value); return *this;}


    /**
     * <p>The ARN of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const{ return m_environmentArn; }

    /**
     * <p>The ARN of the environment.</p>
     */
    inline bool EnvironmentArnHasBeenSet() const { return m_environmentArnHasBeenSet; }

    /**
     * <p>The ARN of the environment.</p>
     */
    inline void SetEnvironmentArn(const Aws::String& value) { m_environmentArnHasBeenSet = true; m_environmentArn = value; }

    /**
     * <p>The ARN of the environment.</p>
     */
    inline void SetEnvironmentArn(Aws::String&& value) { m_environmentArnHasBeenSet = true; m_environmentArn = std::move(value); }

    /**
     * <p>The ARN of the environment.</p>
     */
    inline void SetEnvironmentArn(const char* value) { m_environmentArnHasBeenSet = true; m_environmentArn.assign(value); }

    /**
     * <p>The ARN of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentArn(const Aws::String& value) { SetEnvironmentArn(value); return *this;}

    /**
     * <p>The ARN of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentArn(Aws::String&& value) { SetEnvironmentArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentArn(const char* value) { SetEnvironmentArn(value); return *this;}


    /**
     * <p>The identifier of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The identifier of the environment.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The identifier of the environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The identifier of the environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The identifier of the environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The identifier of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The identifier of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>Links to other environments in the same group.</p>
     */
    inline const Aws::Vector<AwsElasticBeanstalkEnvironmentEnvironmentLink>& GetEnvironmentLinks() const{ return m_environmentLinks; }

    /**
     * <p>Links to other environments in the same group.</p>
     */
    inline bool EnvironmentLinksHasBeenSet() const { return m_environmentLinksHasBeenSet; }

    /**
     * <p>Links to other environments in the same group.</p>
     */
    inline void SetEnvironmentLinks(const Aws::Vector<AwsElasticBeanstalkEnvironmentEnvironmentLink>& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks = value; }

    /**
     * <p>Links to other environments in the same group.</p>
     */
    inline void SetEnvironmentLinks(Aws::Vector<AwsElasticBeanstalkEnvironmentEnvironmentLink>&& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks = std::move(value); }

    /**
     * <p>Links to other environments in the same group.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentLinks(const Aws::Vector<AwsElasticBeanstalkEnvironmentEnvironmentLink>& value) { SetEnvironmentLinks(value); return *this;}

    /**
     * <p>Links to other environments in the same group.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentLinks(Aws::Vector<AwsElasticBeanstalkEnvironmentEnvironmentLink>&& value) { SetEnvironmentLinks(std::move(value)); return *this;}

    /**
     * <p>Links to other environments in the same group.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& AddEnvironmentLinks(const AwsElasticBeanstalkEnvironmentEnvironmentLink& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks.push_back(value); return *this; }

    /**
     * <p>Links to other environments in the same group.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& AddEnvironmentLinks(AwsElasticBeanstalkEnvironmentEnvironmentLink&& value) { m_environmentLinksHasBeenSet = true; m_environmentLinks.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the environment.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The configuration setting for the environment.</p>
     */
    inline const Aws::Vector<AwsElasticBeanstalkEnvironmentOptionSetting>& GetOptionSettings() const{ return m_optionSettings; }

    /**
     * <p>The configuration setting for the environment.</p>
     */
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }

    /**
     * <p>The configuration setting for the environment.</p>
     */
    inline void SetOptionSettings(const Aws::Vector<AwsElasticBeanstalkEnvironmentOptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }

    /**
     * <p>The configuration setting for the environment.</p>
     */
    inline void SetOptionSettings(Aws::Vector<AwsElasticBeanstalkEnvironmentOptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::move(value); }

    /**
     * <p>The configuration setting for the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithOptionSettings(const Aws::Vector<AwsElasticBeanstalkEnvironmentOptionSetting>& value) { SetOptionSettings(value); return *this;}

    /**
     * <p>The configuration setting for the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithOptionSettings(Aws::Vector<AwsElasticBeanstalkEnvironmentOptionSetting>&& value) { SetOptionSettings(std::move(value)); return *this;}

    /**
     * <p>The configuration setting for the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& AddOptionSettings(const AwsElasticBeanstalkEnvironmentOptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }

    /**
     * <p>The configuration setting for the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& AddOptionSettings(AwsElasticBeanstalkEnvironmentOptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the platform version for the environment.</p>
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }

    /**
     * <p>The ARN of the platform version for the environment.</p>
     */
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }

    /**
     * <p>The ARN of the platform version for the environment.</p>
     */
    inline void SetPlatformArn(const Aws::String& value) { m_platformArnHasBeenSet = true; m_platformArn = value; }

    /**
     * <p>The ARN of the platform version for the environment.</p>
     */
    inline void SetPlatformArn(Aws::String&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::move(value); }

    /**
     * <p>The ARN of the platform version for the environment.</p>
     */
    inline void SetPlatformArn(const char* value) { m_platformArnHasBeenSet = true; m_platformArn.assign(value); }

    /**
     * <p>The ARN of the platform version for the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}

    /**
     * <p>The ARN of the platform version for the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the platform version for the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}


    /**
     * <p>The name of the solution stack that is deployed with the environment.</p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }

    /**
     * <p>The name of the solution stack that is deployed with the environment.</p>
     */
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }

    /**
     * <p>The name of the solution stack that is deployed with the environment.</p>
     */
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }

    /**
     * <p>The name of the solution stack that is deployed with the environment.</p>
     */
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::move(value); }

    /**
     * <p>The name of the solution stack that is deployed with the environment.</p>
     */
    inline void SetSolutionStackName(const char* value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName.assign(value); }

    /**
     * <p>The name of the solution stack that is deployed with the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}

    /**
     * <p>The name of the solution stack that is deployed with the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the solution stack that is deployed with the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}


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

    /**
     * <p>The current operational status of the environment. Valid values are as
     * follows:</p> <ul> <li> <p> <code>Aborting</code> </p> </li> <li> <p>
     * <code>Launching</code> </p> </li> <li> <p> <code>LinkingFrom</code> </p> </li>
     * <li> <p> <code>LinkingTo</code> </p> </li> <li> <p> <code>Ready</code> </p>
     * </li> <li> <p> <code>Terminated</code> </p> </li> <li> <p>
     * <code>Terminating</code> </p> </li> <li> <p> <code>Updating</code> </p> </li>
     * </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current operational status of the environment. Valid values are as
     * follows:</p> <ul> <li> <p> <code>Aborting</code> </p> </li> <li> <p>
     * <code>Launching</code> </p> </li> <li> <p> <code>LinkingFrom</code> </p> </li>
     * <li> <p> <code>LinkingTo</code> </p> </li> <li> <p> <code>Ready</code> </p>
     * </li> <li> <p> <code>Terminated</code> </p> </li> <li> <p>
     * <code>Terminating</code> </p> </li> <li> <p> <code>Updating</code> </p> </li>
     * </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current operational status of the environment. Valid values are as
     * follows:</p> <ul> <li> <p> <code>Aborting</code> </p> </li> <li> <p>
     * <code>Launching</code> </p> </li> <li> <p> <code>LinkingFrom</code> </p> </li>
     * <li> <p> <code>LinkingTo</code> </p> </li> <li> <p> <code>Ready</code> </p>
     * </li> <li> <p> <code>Terminated</code> </p> </li> <li> <p>
     * <code>Terminating</code> </p> </li> <li> <p> <code>Updating</code> </p> </li>
     * </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current operational status of the environment. Valid values are as
     * follows:</p> <ul> <li> <p> <code>Aborting</code> </p> </li> <li> <p>
     * <code>Launching</code> </p> </li> <li> <p> <code>LinkingFrom</code> </p> </li>
     * <li> <p> <code>LinkingTo</code> </p> </li> <li> <p> <code>Ready</code> </p>
     * </li> <li> <p> <code>Terminated</code> </p> </li> <li> <p>
     * <code>Terminating</code> </p> </li> <li> <p> <code>Updating</code> </p> </li>
     * </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The current operational status of the environment. Valid values are as
     * follows:</p> <ul> <li> <p> <code>Aborting</code> </p> </li> <li> <p>
     * <code>Launching</code> </p> </li> <li> <p> <code>LinkingFrom</code> </p> </li>
     * <li> <p> <code>LinkingTo</code> </p> </li> <li> <p> <code>Ready</code> </p>
     * </li> <li> <p> <code>Terminated</code> </p> </li> <li> <p>
     * <code>Terminating</code> </p> </li> <li> <p> <code>Updating</code> </p> </li>
     * </ul>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The current operational status of the environment. Valid values are as
     * follows:</p> <ul> <li> <p> <code>Aborting</code> </p> </li> <li> <p>
     * <code>Launching</code> </p> </li> <li> <p> <code>LinkingFrom</code> </p> </li>
     * <li> <p> <code>LinkingTo</code> </p> </li> <li> <p> <code>Ready</code> </p>
     * </li> <li> <p> <code>Terminated</code> </p> </li> <li> <p>
     * <code>Terminating</code> </p> </li> <li> <p> <code>Updating</code> </p> </li>
     * </ul>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The current operational status of the environment. Valid values are as
     * follows:</p> <ul> <li> <p> <code>Aborting</code> </p> </li> <li> <p>
     * <code>Launching</code> </p> </li> <li> <p> <code>LinkingFrom</code> </p> </li>
     * <li> <p> <code>LinkingTo</code> </p> </li> <li> <p> <code>Ready</code> </p>
     * </li> <li> <p> <code>Terminated</code> </p> </li> <li> <p>
     * <code>Terminating</code> </p> </li> <li> <p> <code>Updating</code> </p> </li>
     * </ul>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The tier of the environment.</p>
     */
    inline const AwsElasticBeanstalkEnvironmentTier& GetTier() const{ return m_tier; }

    /**
     * <p>The tier of the environment.</p>
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * <p>The tier of the environment.</p>
     */
    inline void SetTier(const AwsElasticBeanstalkEnvironmentTier& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>The tier of the environment.</p>
     */
    inline void SetTier(AwsElasticBeanstalkEnvironmentTier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * <p>The tier of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithTier(const AwsElasticBeanstalkEnvironmentTier& value) { SetTier(value); return *this;}

    /**
     * <p>The tier of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithTier(AwsElasticBeanstalkEnvironmentTier&& value) { SetTier(std::move(value)); return *this;}


    /**
     * <p>The application version of the environment.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /**
     * <p>The application version of the environment.</p>
     */
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }

    /**
     * <p>The application version of the environment.</p>
     */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>The application version of the environment.</p>
     */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::move(value); }

    /**
     * <p>The application version of the environment.</p>
     */
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }

    /**
     * <p>The application version of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>The application version of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}

    /**
     * <p>The application version of the environment.</p>
     */
    inline AwsElasticBeanstalkEnvironmentDetails& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}

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
