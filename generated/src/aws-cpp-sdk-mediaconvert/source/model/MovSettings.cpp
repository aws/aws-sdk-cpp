/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MovSettings.h>
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

MovSettings::MovSettings() : 
    m_clapAtom(MovClapAtom::NOT_SET),
    m_clapAtomHasBeenSet(false),
    m_cslgAtom(MovCslgAtom::NOT_SET),
    m_cslgAtomHasBeenSet(false),
    m_mpeg2FourCCControl(MovMpeg2FourCCControl::NOT_SET),
    m_mpeg2FourCCControlHasBeenSet(false),
    m_paddingControl(MovPaddingControl::NOT_SET),
    m_paddingControlHasBeenSet(false),
    m_reference(MovReference::NOT_SET),
    m_referenceHasBeenSet(false)
{
}

MovSettings::MovSettings(JsonView jsonValue) : 
    m_clapAtom(MovClapAtom::NOT_SET),
    m_clapAtomHasBeenSet(false),
    m_cslgAtom(MovCslgAtom::NOT_SET),
    m_cslgAtomHasBeenSet(false),
    m_mpeg2FourCCControl(MovMpeg2FourCCControl::NOT_SET),
    m_mpeg2FourCCControlHasBeenSet(false),
    m_paddingControl(MovPaddingControl::NOT_SET),
    m_paddingControlHasBeenSet(false),
    m_reference(MovReference::NOT_SET),
    m_referenceHasBeenSet(false)
{
  *this = jsonValue;
}

MovSettings& MovSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clapAtom"))
  {
    m_clapAtom = MovClapAtomMapper::GetMovClapAtomForName(jsonValue.GetString("clapAtom"));

    m_clapAtomHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cslgAtom"))
  {
    m_cslgAtom = MovCslgAtomMapper::GetMovCslgAtomForName(jsonValue.GetString("cslgAtom"));

    m_cslgAtomHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mpeg2FourCCControl"))
  {
    m_mpeg2FourCCControl = MovMpeg2FourCCControlMapper::GetMovMpeg2FourCCControlForName(jsonValue.GetString("mpeg2FourCCControl"));

    m_mpeg2FourCCControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("paddingControl"))
  {
    m_paddingControl = MovPaddingControlMapper::GetMovPaddingControlForName(jsonValue.GetString("paddingControl"));

    m_paddingControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reference"))
  {
    m_reference = MovReferenceMapper::GetMovReferenceForName(jsonValue.GetString("reference"));

    m_referenceHasBeenSet = true;
  }

  return *this;
}

JsonValue MovSettings::Jsonize() const
{
  JsonValue payload;

  if(m_clapAtomHasBeenSet)
  {
   payload.WithString("clapAtom", MovClapAtomMapper::GetNameForMovClapAtom(m_clapAtom));
  }

  if(m_cslgAtomHasBeenSet)
  {
   payload.WithString("cslgAtom", MovCslgAtomMapper::GetNameForMovCslgAtom(m_cslgAtom));
  }

  if(m_mpeg2FourCCControlHasBeenSet)
  {
   payload.WithString("mpeg2FourCCControl", MovMpeg2FourCCControlMapper::GetNameForMovMpeg2FourCCControl(m_mpeg2FourCCControl));
  }

  if(m_paddingControlHasBeenSet)
  {
   payload.WithString("paddingControl", MovPaddingControlMapper::GetNameForMovPaddingControl(m_paddingControl));
  }

  if(m_referenceHasBeenSet)
  {
   payload.WithString("reference", MovReferenceMapper::GetNameForMovReference(m_reference));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
