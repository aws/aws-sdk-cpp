/**
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

AvailSuppression::AvailSuppression() : 
    m_fillPolicy(FillPolicy::NOT_SET),
    m_fillPolicyHasBeenSet(false),
    m_mode(Mode::NOT_SET),
    m_modeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

AvailSuppression::AvailSuppression(JsonView jsonValue) : 
    m_fillPolicy(FillPolicy::NOT_SET),
    m_fillPolicyHasBeenSet(false),
    m_mode(Mode::NOT_SET),
    m_modeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

AvailSuppression& AvailSuppression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FillPolicy"))
  {
    m_fillPolicy = FillPolicyMapper::GetFillPolicyForName(jsonValue.GetString("FillPolicy"));

    m_fillPolicyHasBeenSet = true;
  }

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

  return *this;
}

JsonValue AvailSuppression::Jsonize() const
{
  JsonValue payload;

  if(m_fillPolicyHasBeenSet)
  {
   payload.WithString("FillPolicy", FillPolicyMapper::GetNameForFillPolicy(m_fillPolicy));
  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", ModeMapper::GetNameForMode(m_mode));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
