/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CaptureMode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies data Model Monitor will capture.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CaptureOption">AWS
   * API Reference</a></p>
   */
  class CaptureOption
  {
  public:
    AWS_SAGEMAKER_API CaptureOption() = default;
    AWS_SAGEMAKER_API CaptureOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CaptureOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the boundary of data to capture.</p>
     */
    inline CaptureMode GetCaptureMode() const { return m_captureMode; }
    inline bool CaptureModeHasBeenSet() const { return m_captureModeHasBeenSet; }
    inline void SetCaptureMode(CaptureMode value) { m_captureModeHasBeenSet = true; m_captureMode = value; }
    inline CaptureOption& WithCaptureMode(CaptureMode value) { SetCaptureMode(value); return *this;}
    ///@}
  private:

    CaptureMode m_captureMode{CaptureMode::NOT_SET};
    bool m_captureModeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
