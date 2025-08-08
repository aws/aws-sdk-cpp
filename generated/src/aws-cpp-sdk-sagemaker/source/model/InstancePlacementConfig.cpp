/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InstancePlacementConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

InstancePlacementConfig::InstancePlacementConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

InstancePlacementConfig& InstancePlacementConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableMultipleJobs"))
  {
    m_enableMultipleJobs = jsonValue.GetBool("EnableMultipleJobs");
    m_enableMultipleJobsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlacementSpecifications"))
  {
    Aws::Utils::Array<JsonView> placementSpecificationsJsonList = jsonValue.GetArray("PlacementSpecifications");
    for(unsigned placementSpecificationsIndex = 0; placementSpecificationsIndex < placementSpecificationsJsonList.GetLength(); ++placementSpecificationsIndex)
    {
      m_placementSpecifications.push_back(placementSpecificationsJsonList[placementSpecificationsIndex].AsObject());
    }
    m_placementSpecificationsHasBeenSet = true;
  }
  return *this;
}

JsonValue InstancePlacementConfig::Jsonize() const
{
  JsonValue payload;

  if(m_enableMultipleJobsHasBeenSet)
  {
   payload.WithBool("EnableMultipleJobs", m_enableMultipleJobs);

  }

  if(m_placementSpecificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> placementSpecificationsJsonList(m_placementSpecifications.size());
   for(unsigned placementSpecificationsIndex = 0; placementSpecificationsIndex < placementSpecificationsJsonList.GetLength(); ++placementSpecificationsIndex)
   {
     placementSpecificationsJsonList[placementSpecificationsIndex].AsObject(m_placementSpecifications[placementSpecificationsIndex].Jsonize());
   }
   payload.WithArray("PlacementSpecifications", std::move(placementSpecificationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
