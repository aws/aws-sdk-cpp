/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UnifiedStudioSettings.h>
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

UnifiedStudioSettings::UnifiedStudioSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

UnifiedStudioSettings& UnifiedStudioSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StudioWebPortalAccess"))
  {
    m_studioWebPortalAccess = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("StudioWebPortalAccess"));
    m_studioWebPortalAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainAccountId"))
  {
    m_domainAccountId = jsonValue.GetString("DomainAccountId");
    m_domainAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainRegion"))
  {
    m_domainRegion = jsonValue.GetString("DomainRegion");
    m_domainRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProjectId"))
  {
    m_projectId = jsonValue.GetString("ProjectId");
    m_projectIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnvironmentId"))
  {
    m_environmentId = jsonValue.GetString("EnvironmentId");
    m_environmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProjectS3Path"))
  {
    m_projectS3Path = jsonValue.GetString("ProjectS3Path");
    m_projectS3PathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SingleSignOnApplicationArn"))
  {
    m_singleSignOnApplicationArn = jsonValue.GetString("SingleSignOnApplicationArn");
    m_singleSignOnApplicationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue UnifiedStudioSettings::Jsonize() const
{
  JsonValue payload;

  if(m_studioWebPortalAccessHasBeenSet)
  {
   payload.WithString("StudioWebPortalAccess", FeatureStatusMapper::GetNameForFeatureStatus(m_studioWebPortalAccess));
  }

  if(m_domainAccountIdHasBeenSet)
  {
   payload.WithString("DomainAccountId", m_domainAccountId);

  }

  if(m_domainRegionHasBeenSet)
  {
   payload.WithString("DomainRegion", m_domainRegion);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_projectIdHasBeenSet)
  {
   payload.WithString("ProjectId", m_projectId);

  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("EnvironmentId", m_environmentId);

  }

  if(m_projectS3PathHasBeenSet)
  {
   payload.WithString("ProjectS3Path", m_projectS3Path);

  }

  if(m_singleSignOnApplicationArnHasBeenSet)
  {
   payload.WithString("SingleSignOnApplicationArn", m_singleSignOnApplicationArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
