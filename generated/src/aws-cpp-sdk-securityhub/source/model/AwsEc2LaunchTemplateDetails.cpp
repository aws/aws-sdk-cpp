/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDetails.h>
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

AwsEc2LaunchTemplateDetails::AwsEc2LaunchTemplateDetails() : 
    m_launchTemplateNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_launchTemplateDataHasBeenSet(false),
    m_defaultVersionNumber(0),
    m_defaultVersionNumberHasBeenSet(false),
    m_latestVersionNumber(0),
    m_latestVersionNumberHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDetails::AwsEc2LaunchTemplateDetails(JsonView jsonValue) : 
    m_launchTemplateNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_launchTemplateDataHasBeenSet(false),
    m_defaultVersionNumber(0),
    m_defaultVersionNumberHasBeenSet(false),
    m_latestVersionNumber(0),
    m_latestVersionNumberHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDetails& AwsEc2LaunchTemplateDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LaunchTemplateName"))
  {
    m_launchTemplateName = jsonValue.GetString("LaunchTemplateName");

    m_launchTemplateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchTemplateData"))
  {
    m_launchTemplateData = jsonValue.GetObject("LaunchTemplateData");

    m_launchTemplateDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultVersionNumber"))
  {
    m_defaultVersionNumber = jsonValue.GetInt64("DefaultVersionNumber");

    m_defaultVersionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestVersionNumber"))
  {
    m_latestVersionNumber = jsonValue.GetInt64("LatestVersionNumber");

    m_latestVersionNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDetails::Jsonize() const
{
  JsonValue payload;

  if(m_launchTemplateNameHasBeenSet)
  {
   payload.WithString("LaunchTemplateName", m_launchTemplateName);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_launchTemplateDataHasBeenSet)
  {
   payload.WithObject("LaunchTemplateData", m_launchTemplateData.Jsonize());

  }

  if(m_defaultVersionNumberHasBeenSet)
  {
   payload.WithInt64("DefaultVersionNumber", m_defaultVersionNumber);

  }

  if(m_latestVersionNumberHasBeenSet)
  {
   payload.WithInt64("LatestVersionNumber", m_latestVersionNumber);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
