/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/SegmentDeliveryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

SegmentDeliveryConfiguration::SegmentDeliveryConfiguration() : 
    m_baseUrlHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

SegmentDeliveryConfiguration::SegmentDeliveryConfiguration(JsonView jsonValue) : 
    m_baseUrlHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

SegmentDeliveryConfiguration& SegmentDeliveryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BaseUrl"))
  {
    m_baseUrl = jsonValue.GetString("BaseUrl");

    m_baseUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentDeliveryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_baseUrlHasBeenSet)
  {
   payload.WithString("BaseUrl", m_baseUrl);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
