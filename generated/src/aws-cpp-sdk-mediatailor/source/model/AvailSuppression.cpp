﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AvailSuppression.h>
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

AvailSuppression::AvailSuppression(JsonView jsonValue)
{
  *this = jsonValue;
}

AvailSuppression& AvailSuppression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = ModeMapper::GetModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FillPolicy"))
  {
    m_fillPolicy = FillPolicyMapper::GetFillPolicyForName(jsonValue.GetString("FillPolicy"));
    m_fillPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue AvailSuppression::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", ModeMapper::GetNameForMode(m_mode));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_fillPolicyHasBeenSet)
  {
   payload.WithString("FillPolicy", FillPolicyMapper::GetNameForFillPolicy(m_fillPolicy));
  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
