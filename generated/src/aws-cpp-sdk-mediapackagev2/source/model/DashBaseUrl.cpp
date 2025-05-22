/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DashBaseUrl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

DashBaseUrl::DashBaseUrl(JsonView jsonValue)
{
  *this = jsonValue;
}

DashBaseUrl& DashBaseUrl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceLocation"))
  {
    m_serviceLocation = jsonValue.GetString("ServiceLocation");
    m_serviceLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DvbPriority"))
  {
    m_dvbPriority = jsonValue.GetInteger("DvbPriority");
    m_dvbPriorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DvbWeight"))
  {
    m_dvbWeight = jsonValue.GetInteger("DvbWeight");
    m_dvbWeightHasBeenSet = true;
  }
  return *this;
}

JsonValue DashBaseUrl::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_serviceLocationHasBeenSet)
  {
   payload.WithString("ServiceLocation", m_serviceLocation);

  }

  if(m_dvbPriorityHasBeenSet)
  {
   payload.WithInteger("DvbPriority", m_dvbPriority);

  }

  if(m_dvbWeightHasBeenSet)
  {
   payload.WithInteger("DvbWeight", m_dvbWeight);

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
