/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputLossBehavior.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputLossBehavior::InputLossBehavior() : 
    m_blackFrameMsec(0),
    m_blackFrameMsecHasBeenSet(false),
    m_inputLossImageColorHasBeenSet(false),
    m_inputLossImageSlateHasBeenSet(false),
    m_inputLossImageType(InputLossImageType::NOT_SET),
    m_inputLossImageTypeHasBeenSet(false),
    m_repeatFrameMsec(0),
    m_repeatFrameMsecHasBeenSet(false)
{
}

InputLossBehavior::InputLossBehavior(JsonView jsonValue) : 
    m_blackFrameMsec(0),
    m_blackFrameMsecHasBeenSet(false),
    m_inputLossImageColorHasBeenSet(false),
    m_inputLossImageSlateHasBeenSet(false),
    m_inputLossImageType(InputLossImageType::NOT_SET),
    m_inputLossImageTypeHasBeenSet(false),
    m_repeatFrameMsec(0),
    m_repeatFrameMsecHasBeenSet(false)
{
  *this = jsonValue;
}

InputLossBehavior& InputLossBehavior::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blackFrameMsec"))
  {
    m_blackFrameMsec = jsonValue.GetInteger("blackFrameMsec");

    m_blackFrameMsecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputLossImageColor"))
  {
    m_inputLossImageColor = jsonValue.GetString("inputLossImageColor");

    m_inputLossImageColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputLossImageSlate"))
  {
    m_inputLossImageSlate = jsonValue.GetObject("inputLossImageSlate");

    m_inputLossImageSlateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputLossImageType"))
  {
    m_inputLossImageType = InputLossImageTypeMapper::GetInputLossImageTypeForName(jsonValue.GetString("inputLossImageType"));

    m_inputLossImageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repeatFrameMsec"))
  {
    m_repeatFrameMsec = jsonValue.GetInteger("repeatFrameMsec");

    m_repeatFrameMsecHasBeenSet = true;
  }

  return *this;
}

JsonValue InputLossBehavior::Jsonize() const
{
  JsonValue payload;

  if(m_blackFrameMsecHasBeenSet)
  {
   payload.WithInteger("blackFrameMsec", m_blackFrameMsec);

  }

  if(m_inputLossImageColorHasBeenSet)
  {
   payload.WithString("inputLossImageColor", m_inputLossImageColor);

  }

  if(m_inputLossImageSlateHasBeenSet)
  {
   payload.WithObject("inputLossImageSlate", m_inputLossImageSlate.Jsonize());

  }

  if(m_inputLossImageTypeHasBeenSet)
  {
   payload.WithString("inputLossImageType", InputLossImageTypeMapper::GetNameForInputLossImageType(m_inputLossImageType));
  }

  if(m_repeatFrameMsecHasBeenSet)
  {
   payload.WithInteger("repeatFrameMsec", m_repeatFrameMsec);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
