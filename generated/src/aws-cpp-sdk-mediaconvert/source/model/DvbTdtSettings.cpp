/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DvbTdtSettings.h>
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

DvbTdtSettings::DvbTdtSettings() : 
    m_tdtInterval(0),
    m_tdtIntervalHasBeenSet(false)
{
}

DvbTdtSettings::DvbTdtSettings(JsonView jsonValue) : 
    m_tdtInterval(0),
    m_tdtIntervalHasBeenSet(false)
{
  *this = jsonValue;
}

DvbTdtSettings& DvbTdtSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tdtInterval"))
  {
    m_tdtInterval = jsonValue.GetInteger("tdtInterval");

    m_tdtIntervalHasBeenSet = true;
  }

  return *this;
}

JsonValue DvbTdtSettings::Jsonize() const
{
  JsonValue payload;

  if(m_tdtIntervalHasBeenSet)
  {
   payload.WithInteger("tdtInterval", m_tdtInterval);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
