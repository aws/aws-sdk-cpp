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
    AWS_MEDIACONVERT_API ColorConversion3DLUTSetting();
    AWS_MEDIACONVERT_API ColorConversion3DLUTSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ColorConversion3DLUTSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the input file S3, HTTP, or HTTPS URL for your 3D LUT .cube file. Note
     * that MediaConvert accepts 3D LUT files up to 8MB in size.
     */
    inline const Aws::String& GetFileInput() const{ return m_fileInput; }

    /**
     * Specify the input file S3, HTTP, or HTTPS URL for your 3D LUT .cube file. Note
     * that MediaConvert accepts 3D LUT files up to 8MB in size.
     */
    inline bool FileInputHasBeenSet() const { return m_fileInputHasBeenSet; }

    /**
     * Specify the input file S3, HTTP, or HTTPS URL for your 3D LUT .cube file. Note
     * that MediaConvert accepts 3D LUT files up to 8MB in size.
     */
    inline void SetFileInput(const Aws::String& value) { m_fileInputHasBeenSet = true; m_fileInput = value; }

    /**
     * Specify the input file S3, HTTP, or HTTPS URL for your 3D LUT .cube file. Note
     * that MediaConvert accepts 3D LUT files up to 8MB in size.
     */
    inline void SetFileInput(Aws::String&& value) { m_fileInputHasBeenSet = true; m_fileInput = std::move(value); }

    /**
     * Specify the input file S3, HTTP, or HTTPS URL for your 3D LUT .cube file. Note
     * that MediaConvert accepts 3D LUT files up to 8MB in size.
     */
    inline void SetFileInput(const char* value) { m_fileInputHasBeenSet = true; m_fileInput.assign(value); }

    /**
     * Specify the input file S3, HTTP, or HTTPS URL for your 3D LUT .cube file. Note
     * that MediaConvert accepts 3D LUT files up to 8MB in size.
     */
    inline ColorConversion3DLUTSetting& WithFileInput(const Aws::String& value) { SetFileInput(value); return *this;}

    /**
     * Specify the input file S3, HTTP, or HTTPS URL for your 3D LUT .cube file. Note
     * that MediaConvert accepts 3D LUT files up to 8MB in size.
     */
    inline ColorConversion3DLUTSetting& WithFileInput(Aws::String&& value) { SetFileInput(std::move(value)); return *this;}

    /**
     * Specify the input file S3, HTTP, or HTTPS URL for your 3D LUT .cube file. Note
     * that MediaConvert accepts 3D LUT files up to 8MB in size.
     */
    inline ColorConversion3DLUTSetting& WithFileInput(const char* value) { SetFileInput(value); return *this;}


    /**
     * Specify which inputs use this 3D LUT, according to their color space.
     */
    inline const ColorSpace& GetInputColorSpace() const{ return m_inputColorSpace; }

    /**
     * Specify which inputs use this 3D LUT, according to their color space.
     */
    inline bool InputColorSpaceHasBeenSet() const { return m_inputColorSpaceHasBeenSet; }

    /**
     * Specify which inputs use this 3D LUT, according to their color space.
     */
    inline void SetInputColorSpace(const ColorSpace& value) { m_inputColorSpaceHasBeenSet = true; m_inputColorSpace = value; }

    /**
     * Specify which inputs use this 3D LUT, according to their color space.
     */
    inline void SetInputColorSpace(ColorSpace&& value) { m_inputColorSpaceHasBeenSet = true; m_inputColorSpace = std::move(value); }

    /**
     * Specify which inputs use this 3D LUT, according to their color space.
     */
    inline ColorConversion3DLUTSetting& WithInputColorSpace(const ColorSpace& value) { SetInputColorSpace(value); return *this;}

    /**
     * Specify which inputs use this 3D LUT, according to their color space.
     */
    inline ColorConversion3DLUTSetting& WithInputColorSpace(ColorSpace&& value) { SetInputColorSpace(std::move(value)); return *this;}


    /**
     * Specify which inputs use this 3D LUT, according to their luminance. To apply
     * this 3D LUT to HDR10 or P3D65 (HDR) inputs with a specific mastering luminance:
     * Enter an integer from 0 to 2147483647, corresponding to the input's Maximum
     * luminance value. To apply this 3D LUT to any input regardless of its luminance:
     * Leave blank, or enter 0.
     */
    inline int GetInputMasteringLuminance() const{ return m_inputMasteringLuminance; }

    /**
     * Specify which inputs use this 3D LUT, according to their luminance. To apply
     * this 3D LUT to HDR10 or P3D65 (HDR) inputs with a specific mastering luminance:
     * Enter an integer from 0 to 2147483647, corresponding to the input's Maximum
     * luminance value. To apply this 3D LUT to any input regardless of its luminance:
     * Leave blank, or enter 0.
     */
    inline bool InputMasteringLuminanceHasBeenSet() const { return m_inputMasteringLuminanceHasBeenSet; }

    /**
     * Specify which inputs use this 3D LUT, according to their luminance. To apply
     * this 3D LUT to HDR10 or P3D65 (HDR) inputs with a specific mastering luminance:
     * Enter an integer from 0 to 2147483647, corresponding to the input's Maximum
     * luminance value. To apply this 3D LUT to any input regardless of its luminance:
     * Leave blank, or enter 0.
     */
    inline void SetInputMasteringLuminance(int value) { m_inputMasteringLuminanceHasBeenSet = true; m_inputMasteringLuminance = value; }

    /**
     * Specify which inputs use this 3D LUT, according to their luminance. To apply
     * this 3D LUT to HDR10 or P3D65 (HDR) inputs with a specific mastering luminance:
     * Enter an integer from 0 to 2147483647, corresponding to the input's Maximum
     * luminance value. To apply this 3D LUT to any input regardless of its luminance:
     * Leave blank, or enter 0.
     */
    inline ColorConversion3DLUTSetting& WithInputMasteringLuminance(int value) { SetInputMasteringLuminance(value); return *this;}


    /**
     * Specify which outputs use this 3D LUT, according to their color space.
     */
    inline const ColorSpace& GetOutputColorSpace() const{ return m_outputColorSpace; }

    /**
     * Specify which outputs use this 3D LUT, according to their color space.
     */
    inline bool OutputColorSpaceHasBeenSet() const { return m_outputColorSpaceHasBeenSet; }

    /**
     * Specify which outputs use this 3D LUT, according to their color space.
     */
    inline void SetOutputColorSpace(const ColorSpace& value) { m_outputColorSpaceHasBeenSet = true; m_outputColorSpace = value; }

    /**
     * Specify which outputs use this 3D LUT, according to their color space.
     */
    inline void SetOutputColorSpace(ColorSpace&& value) { m_outputColorSpaceHasBeenSet = true; m_outputColorSpace = std::move(value); }

    /**
     * Specify which outputs use this 3D LUT, according to their color space.
     */
    inline ColorConversion3DLUTSetting& WithOutputColorSpace(const ColorSpace& value) { SetOutputColorSpace(value); return *this;}

    /**
     * Specify which outputs use this 3D LUT, according to their color space.
     */
    inline ColorConversion3DLUTSetting& WithOutputColorSpace(ColorSpace&& value) { SetOutputColorSpace(std::move(value)); return *this;}


    /**
     * Specify which outputs use this 3D LUT, according to their luminance. To apply
     * this 3D LUT to HDR10 or P3D65 (HDR) outputs with a specific luminance: Enter an
     * integer from 0 to 2147483647, corresponding to the output's luminance. To apply
     * this 3D LUT to any output regardless of its luminance: Leave blank, or enter 0.
     */
    inline int GetOutputMasteringLuminance() const{ return m_outputMasteringLuminance; }

    /**
     * Specify which outputs use this 3D LUT, according to their luminance. To apply
     * this 3D LUT to HDR10 or P3D65 (HDR) outputs with a specific luminance: Enter an
     * integer from 0 to 2147483647, corresponding to the output's luminance. To apply
     * this 3D LUT to any output regardless of its luminance: Leave blank, or enter 0.
     */
    inline bool OutputMasteringLuminanceHasBeenSet() const { return m_outputMasteringLuminanceHasBeenSet; }

    /**
     * Specify which outputs use this 3D LUT, according to their luminance. To apply
     * this 3D LUT to HDR10 or P3D65 (HDR) outputs with a specific luminance: Enter an
     * integer from 0 to 2147483647, corresponding to the output's luminance. To apply
     * this 3D LUT to any output regardless of its luminance: Leave blank, or enter 0.
     */
    inline void SetOutputMasteringLuminance(int value) { m_outputMasteringLuminanceHasBeenSet = true; m_outputMasteringLuminance = value; }

    /**
     * Specify which outputs use this 3D LUT, according to their luminance. To apply
     * this 3D LUT to HDR10 or P3D65 (HDR) outputs with a specific luminance: Enter an
     * integer from 0 to 2147483647, corresponding to the output's luminance. To apply
     * this 3D LUT to any output regardless of its luminance: Leave blank, or enter 0.
     */
    inline ColorConversion3DLUTSetting& WithOutputMasteringLuminance(int value) { SetOutputMasteringLuminance(value); return *this;}

  private:

    Aws::String m_fileInput;
    bool m_fileInputHasBeenSet = false;

    ColorSpace m_inputColorSpace;
    bool m_inputColorSpaceHasBeenSet = false;

    int m_inputMasteringLuminance;
    bool m_inputMasteringLuminanceHasBeenSet = false;

    ColorSpace m_outputColorSpace;
    bool m_outputColorSpaceHasBeenSet = false;

    int m_outputMasteringLuminance;
    bool m_outputMasteringLuminanceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
