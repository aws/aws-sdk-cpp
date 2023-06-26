/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RStudioServerProDomainSettings.h>
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

RStudioServerProDomainSettings::RStudioServerProDomainSettings() : 
    m_domainExecutionRoleArnHasBeenSet(false),
    m_rStudioConnectUrlHasBeenSet(false),
    m_rStudioPackageManagerUrlHasBeenSet(false),
    m_defaultResourceSpecHasBeenSet(false)
{
}

RStudioServerProDomainSettings::RStudioServerProDomainSettings(JsonView jsonValue) : 
    m_domainExecutionRoleArnHasBeenSet(false),
    m_rStudioConnectUrlHasBeenSet(false),
    m_rStudioPackageManagerUrlHasBeenSet(false),
    m_defaultResourceSpecHasBeenSet(false)
{
  *this = jsonValue;
}

RStudioServerProDomainSettings& RStudioServerProDomainSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainExecutionRoleArn"))
  {
    m_domainExecutionRoleArn = jsonValue.GetString("DomainExecutionRoleArn");

    m_domainExecutionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RStudioConnectUrl"))
  {
    m_rStudioConnectUrl = jsonValue.GetString("RStudioConnectUrl");

    m_rStudioConnectUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RStudioPackageManagerUrl"))
  {
    m_rStudioPackageManagerUrl = jsonValue.GetString("RStudioPackageManagerUrl");

    m_rStudioPackageManagerUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultResourceSpec"))
  {
    m_defaultResourceSpec = jsonValue.GetObject("DefaultResourceSpec");

    m_defaultResourceSpecHasBeenSet = true;
  }

  return *this;
}

JsonValue RStudioServerProDomainSettings::Jsonize() const
{
  JsonValue payload;

  if(m_domainExecutionRoleArnHasBeenSet)
  {
   payload.WithString("DomainExecutionRoleArn", m_domainExecutionRoleArn);

  }

  if(m_rStudioConnectUrlHasBeenSet)
  {
   payload.WithString("RStudioConnectUrl", m_rStudioConnectUrl);

  }

  if(m_rStudioPackageManagerUrlHasBeenSet)
  {
   payload.WithString("RStudioPackageManagerUrl", m_rStudioPackageManagerUrl);

  }

  if(m_defaultResourceSpecHasBeenSet)
  {
   payload.WithObject("DefaultResourceSpec", m_defaultResourceSpec.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
