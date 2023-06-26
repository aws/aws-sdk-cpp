/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElasticBeanstalkEnvironmentDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsElasticBeanstalkEnvironmentDetails::AwsElasticBeanstalkEnvironmentDetails() : 
    m_applicationNameHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_endpointUrlHasBeenSet(false),
    m_environmentArnHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_environmentLinksHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_optionSettingsHasBeenSet(false),
    m_platformArnHasBeenSet(false),
    m_solutionStackNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tierHasBeenSet(false),
    m_versionLabelHasBeenSet(false)
{
}

AwsElasticBeanstalkEnvironmentDetails::AwsElasticBeanstalkEnvironmentDetails(JsonView jsonValue) : 
    m_applicationNameHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_endpointUrlHasBeenSet(false),
    m_environmentArnHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_environmentLinksHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_optionSettingsHasBeenSet(false),
    m_platformArnHasBeenSet(false),
    m_solutionStackNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tierHasBeenSet(false),
    m_versionLabelHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElasticBeanstalkEnvironmentDetails& AwsElasticBeanstalkEnvironmentDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationName"))
  {
    m_applicationName = jsonValue.GetString("ApplicationName");

    m_applicationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cname"))
  {
    m_cname = jsonValue.GetString("Cname");

    m_cnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateCreated"))
  {
    m_dateCreated = jsonValue.GetString("DateCreated");

    m_dateCreatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateUpdated"))
  {
    m_dateUpdated = jsonValue.GetString("DateUpdated");

    m_dateUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointUrl"))
  {
    m_endpointUrl = jsonValue.GetString("EndpointUrl");

    m_endpointUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentArn"))
  {
    m_environmentArn = jsonValue.GetString("EnvironmentArn");

    m_environmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentId"))
  {
    m_environmentId = jsonValue.GetString("EnvironmentId");

    m_environmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentLinks"))
  {
    Aws::Utils::Array<JsonView> environmentLinksJsonList = jsonValue.GetArray("EnvironmentLinks");
    for(unsigned environmentLinksIndex = 0; environmentLinksIndex < environmentLinksJsonList.GetLength(); ++environmentLinksIndex)
    {
      m_environmentLinks.push_back(environmentLinksJsonList[environmentLinksIndex].AsObject());
    }
    m_environmentLinksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentName"))
  {
    m_environmentName = jsonValue.GetString("EnvironmentName");

    m_environmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OptionSettings"))
  {
    Aws::Utils::Array<JsonView> optionSettingsJsonList = jsonValue.GetArray("OptionSettings");
    for(unsigned optionSettingsIndex = 0; optionSettingsIndex < optionSettingsJsonList.GetLength(); ++optionSettingsIndex)
    {
      m_optionSettings.push_back(optionSettingsJsonList[optionSettingsIndex].AsObject());
    }
    m_optionSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformArn"))
  {
    m_platformArn = jsonValue.GetString("PlatformArn");

    m_platformArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SolutionStackName"))
  {
    m_solutionStackName = jsonValue.GetString("SolutionStackName");

    m_solutionStackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tier"))
  {
    m_tier = jsonValue.GetObject("Tier");

    m_tierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionLabel"))
  {
    m_versionLabel = jsonValue.GetString("VersionLabel");

    m_versionLabelHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElasticBeanstalkEnvironmentDetails::Jsonize() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("ApplicationName", m_applicationName);

  }

  if(m_cnameHasBeenSet)
  {
   payload.WithString("Cname", m_cname);

  }

  if(m_dateCreatedHasBeenSet)
  {
   payload.WithString("DateCreated", m_dateCreated);

  }

  if(m_dateUpdatedHasBeenSet)
  {
   payload.WithString("DateUpdated", m_dateUpdated);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_endpointUrlHasBeenSet)
  {
   payload.WithString("EndpointUrl", m_endpointUrl);

  }

  if(m_environmentArnHasBeenSet)
  {
   payload.WithString("EnvironmentArn", m_environmentArn);

  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("EnvironmentId", m_environmentId);

  }

  if(m_environmentLinksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentLinksJsonList(m_environmentLinks.size());
   for(unsigned environmentLinksIndex = 0; environmentLinksIndex < environmentLinksJsonList.GetLength(); ++environmentLinksIndex)
   {
     environmentLinksJsonList[environmentLinksIndex].AsObject(m_environmentLinks[environmentLinksIndex].Jsonize());
   }
   payload.WithArray("EnvironmentLinks", std::move(environmentLinksJsonList));

  }

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("EnvironmentName", m_environmentName);

  }

  if(m_optionSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionSettingsJsonList(m_optionSettings.size());
   for(unsigned optionSettingsIndex = 0; optionSettingsIndex < optionSettingsJsonList.GetLength(); ++optionSettingsIndex)
   {
     optionSettingsJsonList[optionSettingsIndex].AsObject(m_optionSettings[optionSettingsIndex].Jsonize());
   }
   payload.WithArray("OptionSettings", std::move(optionSettingsJsonList));

  }

  if(m_platformArnHasBeenSet)
  {
   payload.WithString("PlatformArn", m_platformArn);

  }

  if(m_solutionStackNameHasBeenSet)
  {
   payload.WithString("SolutionStackName", m_solutionStackName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_tierHasBeenSet)
  {
   payload.WithObject("Tier", m_tier.Jsonize());

  }

  if(m_versionLabelHasBeenSet)
  {
   payload.WithString("VersionLabel", m_versionLabel);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
