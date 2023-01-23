/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/CdnConfiguration.h>
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

CdnConfiguration::CdnConfiguration() : 
    m_adSegmentUrlPrefixHasBeenSet(false),
    m_contentSegmentUrlPrefixHasBeenSet(false)
{
}

CdnConfiguration::CdnConfiguration(JsonView jsonValue) : 
    m_adSegmentUrlPrefixHasBeenSet(false),
    m_contentSegmentUrlPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

CdnConfiguration& CdnConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdSegmentUrlPrefix"))
  {
    m_adSegmentUrlPrefix = jsonValue.GetString("AdSegmentUrlPrefix");

    m_adSegmentUrlPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentSegmentUrlPrefix"))
  {
    m_contentSegmentUrlPrefix = jsonValue.GetString("ContentSegmentUrlPrefix");

    m_contentSegmentUrlPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue CdnConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_adSegmentUrlPrefixHasBeenSet)
  {
   payload.WithString("AdSegmentUrlPrefix", m_adSegmentUrlPrefix);

  }

  if(m_contentSegmentUrlPrefixHasBeenSet)
  {
   payload.WithString("ContentSegmentUrlPrefix", m_contentSegmentUrlPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
