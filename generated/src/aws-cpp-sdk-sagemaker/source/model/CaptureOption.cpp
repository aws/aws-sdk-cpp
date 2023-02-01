/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CaptureOption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

CaptureOption::CaptureOption() : 
    m_captureMode(CaptureMode::NOT_SET),
    m_captureModeHasBeenSet(false)
{
}

CaptureOption::CaptureOption(JsonView jsonValue) : 
    m_captureMode(CaptureMode::NOT_SET),
    m_captureModeHasBeenSet(false)
{
  *this = jsonValue;
}

CaptureOption& CaptureOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CaptureMode"))
  {
    m_captureMode = CaptureModeMapper::GetCaptureModeForName(jsonValue.GetString("CaptureMode"));

    m_captureModeHasBeenSet = true;
  }

  return *this;
}

JsonValue CaptureOption::Jsonize() const
{
  JsonValue payload;

  if(m_captureModeHasBeenSet)
  {
   payload.WithString("CaptureMode", CaptureModeMapper::GetNameForCaptureMode(m_captureMode));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
