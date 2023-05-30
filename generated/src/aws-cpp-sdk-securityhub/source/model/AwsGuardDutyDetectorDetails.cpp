/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsGuardDutyDetectorDetails.h>
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

AwsGuardDutyDetectorDetails::AwsGuardDutyDetectorDetails() : 
    m_dataSourcesHasBeenSet(false),
    m_featuresHasBeenSet(false),
    m_findingPublishingFrequencyHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AwsGuardDutyDetectorDetails::AwsGuardDutyDetectorDetails(JsonView jsonValue) : 
    m_dataSourcesHasBeenSet(false),
    m_featuresHasBeenSet(false),
    m_findingPublishingFrequencyHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsGuardDutyDetectorDetails& AwsGuardDutyDetectorDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSources"))
  {
    m_dataSources = jsonValue.GetObject("DataSources");

    m_dataSourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Features"))
  {
    Aws::Utils::Array<JsonView> featuresJsonList = jsonValue.GetArray("Features");
    for(unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex)
    {
      m_features.push_back(featuresJsonList[featuresIndex].AsObject());
    }
    m_featuresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindingPublishingFrequency"))
  {
    m_findingPublishingFrequency = jsonValue.GetString("FindingPublishingFrequency");

    m_findingPublishingFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceRole"))
  {
    m_serviceRole = jsonValue.GetString("ServiceRole");

    m_serviceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsGuardDutyDetectorDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourcesHasBeenSet)
  {
   payload.WithObject("DataSources", m_dataSources.Jsonize());

  }

  if(m_featuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featuresJsonList(m_features.size());
   for(unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex)
   {
     featuresJsonList[featuresIndex].AsObject(m_features[featuresIndex].Jsonize());
   }
   payload.WithArray("Features", std::move(featuresJsonList));

  }

  if(m_findingPublishingFrequencyHasBeenSet)
  {
   payload.WithString("FindingPublishingFrequency", m_findingPublishingFrequency);

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("ServiceRole", m_serviceRole);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
