/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ServiceNowParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ServiceNowParameters::ServiceNowParameters() : 
    m_siteBaseUrlHasBeenSet(false)
{
}

ServiceNowParameters::ServiceNowParameters(JsonView jsonValue) : 
    m_siteBaseUrlHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceNowParameters& ServiceNowParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SiteBaseUrl"))
  {
    m_siteBaseUrl = jsonValue.GetString("SiteBaseUrl");

    m_siteBaseUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceNowParameters::Jsonize() const
{
  JsonValue payload;

  if(m_siteBaseUrlHasBeenSet)
  {
   payload.WithString("SiteBaseUrl", m_siteBaseUrl);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
