/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DockerSettings.h>
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

DockerSettings::DockerSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

DockerSettings& DockerSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableDockerAccess"))
  {
    m_enableDockerAccess = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("EnableDockerAccess"));
    m_enableDockerAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcOnlyTrustedAccounts"))
  {
    Aws::Utils::Array<JsonView> vpcOnlyTrustedAccountsJsonList = jsonValue.GetArray("VpcOnlyTrustedAccounts");
    for(unsigned vpcOnlyTrustedAccountsIndex = 0; vpcOnlyTrustedAccountsIndex < vpcOnlyTrustedAccountsJsonList.GetLength(); ++vpcOnlyTrustedAccountsIndex)
    {
      m_vpcOnlyTrustedAccounts.push_back(vpcOnlyTrustedAccountsJsonList[vpcOnlyTrustedAccountsIndex].AsString());
    }
    m_vpcOnlyTrustedAccountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RootlessDocker"))
  {
    m_rootlessDocker = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("RootlessDocker"));
    m_rootlessDockerHasBeenSet = true;
  }
  return *this;
}

JsonValue DockerSettings::Jsonize() const
{
  JsonValue payload;

  if(m_enableDockerAccessHasBeenSet)
  {
   payload.WithString("EnableDockerAccess", FeatureStatusMapper::GetNameForFeatureStatus(m_enableDockerAccess));
  }

  if(m_vpcOnlyTrustedAccountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcOnlyTrustedAccountsJsonList(m_vpcOnlyTrustedAccounts.size());
   for(unsigned vpcOnlyTrustedAccountsIndex = 0; vpcOnlyTrustedAccountsIndex < vpcOnlyTrustedAccountsJsonList.GetLength(); ++vpcOnlyTrustedAccountsIndex)
   {
     vpcOnlyTrustedAccountsJsonList[vpcOnlyTrustedAccountsIndex].AsString(m_vpcOnlyTrustedAccounts[vpcOnlyTrustedAccountsIndex]);
   }
   payload.WithArray("VpcOnlyTrustedAccounts", std::move(vpcOnlyTrustedAccountsJsonList));

  }

  if(m_rootlessDockerHasBeenSet)
  {
   payload.WithString("RootlessDocker", FeatureStatusMapper::GetNameForFeatureStatus(m_rootlessDocker));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
