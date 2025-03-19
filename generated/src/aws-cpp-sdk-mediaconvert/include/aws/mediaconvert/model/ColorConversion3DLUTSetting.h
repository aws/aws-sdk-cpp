/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/ColorSpace.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Custom 3D lut settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ColorConversion3DLUTSetting">AWS
   * API Reference</a></p>
   */
  class ColorConversion3DLUTSetting
  {
  public:
    AWS_MEDIACONVERT_API ColorConversion3DLUTSetting() = default;
    AWS_MEDIACONVERT_API ColorConversion3DLUTSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ColorConversion3DLUTSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the input file S3, HTTP, or HTTPS URL for your 3D LUT .cube file. Note
     * that MediaConvert accepts 3D LUT files up to 8MB in size.
     */
    inline const Aws::String& GetFileInput() const { return m_fileInput; }
    inline bool FileInputHasBeenSet() const { return m_fileInputHasBeenSet; }
    template<typename FileInputT = Aws::String>
    void SetFileInput(FileInputT&& value) { m_fileInputHasBeenSet = true; m_fileInput = std::forward<FileInputT>(value); }
    template<typename FileInputT = Aws::String>
    ColorConversion3DLUTSetting& WithFileInput(FileInputT&& value) { SetFileInput(std::forward<FileInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify which inputs use this 3D LUT, according to their color space.
     */
    inline ColorSpace GetInputColorSpace() const { return m_inputColorSpace; }
    inline bool InputColorSpaceHasBeenSet() const { return m_inputColorSpaceHasBeenSet; }
    inline void SetInputColorSpace(ColorSpace value) { m_inputColorSpaceHasBeenSet = true; m_inputColorSpace = value; }
    inline ColorConversion3DLUTSetting& WithInputColorSpace(ColorSpace value) { SetInputColorSpace(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify which inputs use this 3D LUT, according to their luminance. To apply
     * this 3D LUT to HDR10 or P3D65 (HDR) inputs with a specific mastering luminance:
     * Enter an integer from 0 to 2147483647, corresponding to the input's Maximum
     * luminance value. To apply this 3D LUT to any input regardless of its luminance:
     * Leave blank, or enter 0.
     */
    inline int GetInputMasteringLuminance() const { return m_inputMasteringLuminance; }
    inline bool InputMasteringLuminanceHasBeenSet() const { return m_inputMasteringLuminanceHasBeenSet; }
    inline void SetInputMasteringLuminance(int value) { m_inputMasteringLuminanceHasBeenSet = true; m_inputMasteringLuminance = value; }
    inline ColorConversion3DLUTSetting& WithInputMasteringLuminance(int value) { SetInputMasteringLuminance(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify which outputs use this 3D LUT, according to their color space.
     */
    inline ColorSpace GetOutputColorSpace() const { return m_outputColorSpace; }
    inline bool OutputColorSpaceHasBeenSet() const { return m_outputColorSpaceHasBeenSet; }
    inline void SetOutputColorSpace(ColorSpace value) { m_outputColorSpaceHasBeenSet = true; m_outputColorSpace = value; }
    inline ColorConversion3DLUTSetting& WithOutputColorSpace(ColorSpace value) { SetOutputColorSpace(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify which outputs use this 3D LUT, according to their luminance. To apply
     * this 3D LUT to HDR10 or P3D65 (HDR) outputs with a specific luminance: Enter an
     * integer from 0 to 2147483647, corresponding to the output's luminance. To apply
     * this 3D LUT to any output regardless of its luminance: Leave blank, or enter 0.
     */
    inline int GetOutputMasteringLuminance() const { return m_outputMasteringLuminance; }
    inline bool OutputMasteringLuminanceHasBeenSet() const { return m_outputMasteringLuminanceHasBeenSet; }
    inline void SetOutputMasteringLuminance(int value) { m_outputMasteringLuminanceHasBeenSet = true; m_outputMasteringLuminance = value; }
    inline ColorConversion3DLUTSetting& WithOutputMasteringLuminance(int value) { SetOutputMasteringLuminance(value); return *this;}
    ///@}
  private:

    Aws::String m_fileInput;
    bool m_fileInputHasBeenSet = false;

    ColorSpace m_inputColorSpace{ColorSpace::NOT_SET};
    bool m_inputColorSpaceHasBeenSet = false;

    int m_inputMasteringLuminance{0};
    bool m_inputMasteringLuminanceHasBeenSet = false;

    ColorSpace m_outputColorSpace{ColorSpace::NOT_SET};
    bool m_outputColorSpaceHasBeenSet = false;

    int m_outputMasteringLuminance{0};
    bool m_outputMasteringLuminanceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
