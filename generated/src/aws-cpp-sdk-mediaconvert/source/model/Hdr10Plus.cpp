/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Hdr10Plus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Hdr10Plus::Hdr10Plus() : 
    m_masteringMonitorNits(0),
    m_masteringMonitorNitsHasBeenSet(false),
    m_targetMonitorNits(0),
    m_targetMonitorNitsHasBeenSet(false)
{
}

Hdr10Plus::Hdr10Plus(JsonView jsonValue) : 
    m_masteringMonitorNits(0),
    m_masteringMonitorNitsHasBeenSet(false),
    m_targetMonitorNits(0),
    m_targetMonitorNitsHasBeenSet(false)
{
  *this = jsonValue;
}

Hdr10Plus& Hdr10Plus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("masteringMonitorNits"))
  {
    m_masteringMonitorNits = jsonValue.GetInteger("masteringMonitorNits");

    m_masteringMonitorNitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetMonitorNits"))
  {
    m_targetMonitorNits = jsonValue.GetInteger("targetMonitorNits");

    m_targetMonitorNitsHasBeenSet = true;
  }

  return *this;
}

JsonValue Hdr10Plus::Jsonize() const
{
  JsonValue payload;

  if(m_masteringMonitorNitsHasBeenSet)
  {
   payload.WithInteger("masteringMonitorNits", m_masteringMonitorNits);

  }

  if(m_targetMonitorNitsHasBeenSet)
  {
   payload.WithInteger("targetMonitorNits", m_targetMonitorNits);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
