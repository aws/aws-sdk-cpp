/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ColorConversion3DLUTSetting.h>
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

ColorConversion3DLUTSetting::ColorConversion3DLUTSetting() : 
    m_fileInputHasBeenSet(false),
    m_inputColorSpace(ColorSpace::NOT_SET),
    m_inputColorSpaceHasBeenSet(false),
    m_inputMasteringLuminance(0),
    m_inputMasteringLuminanceHasBeenSet(false),
    m_outputColorSpace(ColorSpace::NOT_SET),
    m_outputColorSpaceHasBeenSet(false),
    m_outputMasteringLuminance(0),
    m_outputMasteringLuminanceHasBeenSet(false)
{
}

ColorConversion3DLUTSetting::ColorConversion3DLUTSetting(JsonView jsonValue) : 
    m_fileInputHasBeenSet(false),
    m_inputColorSpace(ColorSpace::NOT_SET),
    m_inputColorSpaceHasBeenSet(false),
    m_inputMasteringLuminance(0),
    m_inputMasteringLuminanceHasBeenSet(false),
    m_outputColorSpace(ColorSpace::NOT_SET),
    m_outputColorSpaceHasBeenSet(false),
    m_outputMasteringLuminance(0),
    m_outputMasteringLuminanceHasBeenSet(false)
{
  *this = jsonValue;
}

ColorConversion3DLUTSetting& ColorConversion3DLUTSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileInput"))
  {
    m_fileInput = jsonValue.GetString("fileInput");

    m_fileInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputColorSpace"))
  {
    m_inputColorSpace = ColorSpaceMapper::GetColorSpaceForName(jsonValue.GetString("inputColorSpace"));

    m_inputColorSpaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputMasteringLuminance"))
  {
    m_inputMasteringLuminance = jsonValue.GetInteger("inputMasteringLuminance");

    m_inputMasteringLuminanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputColorSpace"))
  {
    m_outputColorSpace = ColorSpaceMapper::GetColorSpaceForName(jsonValue.GetString("outputColorSpace"));

    m_outputColorSpaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputMasteringLuminance"))
  {
    m_outputMasteringLuminance = jsonValue.GetInteger("outputMasteringLuminance");

    m_outputMasteringLuminanceHasBeenSet = true;
  }

  return *this;
}

JsonValue ColorConversion3DLUTSetting::Jsonize() const
{
  JsonValue payload;

  if(m_fileInputHasBeenSet)
  {
   payload.WithString("fileInput", m_fileInput);

  }

  if(m_inputColorSpaceHasBeenSet)
  {
   payload.WithString("inputColorSpace", ColorSpaceMapper::GetNameForColorSpace(m_inputColorSpace));
  }

  if(m_inputMasteringLuminanceHasBeenSet)
  {
   payload.WithInteger("inputMasteringLuminance", m_inputMasteringLuminance);

  }

  if(m_outputColorSpaceHasBeenSet)
  {
   payload.WithString("outputColorSpace", ColorSpaceMapper::GetNameForColorSpace(m_outputColorSpace));
  }

  if(m_outputMasteringLuminanceHasBeenSet)
  {
   payload.WithInteger("outputMasteringLuminance", m_outputMasteringLuminance);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
