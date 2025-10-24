/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/model/ModuleParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RTBFabric
{
namespace Model
{

ModuleParameters::ModuleParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

ModuleParameters& ModuleParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("noBid"))
  {
    m_noBid = jsonValue.GetObject("noBid");
    m_noBidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("openRtbAttribute"))
  {
    m_openRtbAttribute = jsonValue.GetObject("openRtbAttribute");
    m_openRtbAttributeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rateLimiter"))
  {
    m_rateLimiter = jsonValue.GetObject("rateLimiter");
    m_rateLimiterHasBeenSet = true;
  }
  return *this;
}

JsonValue ModuleParameters::Jsonize() const
{
  JsonValue payload;

  if(m_noBidHasBeenSet)
  {
   payload.WithObject("noBid", m_noBid.Jsonize());

  }

  if(m_openRtbAttributeHasBeenSet)
  {
   payload.WithObject("openRtbAttribute", m_openRtbAttribute.Jsonize());

  }

  if(m_rateLimiterHasBeenSet)
  {
   payload.WithObject("rateLimiter", m_rateLimiter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
