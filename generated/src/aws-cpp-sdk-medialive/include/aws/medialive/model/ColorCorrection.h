/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ColorSpace.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Property of ColorCorrectionSettings. Used for custom color space conversion. The
   * object identifies one 3D LUT file and specifies the input/output color space
   * combination that the file will be used for.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ColorCorrection">AWS
   * API Reference</a></p>
   */
  class ColorCorrection
  {
  public:
    AWS_MEDIALIVE_API ColorCorrection();
    AWS_MEDIALIVE_API ColorCorrection(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ColorCorrection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The color space of the input.
     */
    inline const ColorSpace& GetInputColorSpace() const{ return m_inputColorSpace; }

    /**
     * The color space of the input.
     */
    inline bool InputColorSpaceHasBeenSet() const { return m_inputColorSpaceHasBeenSet; }

    /**
     * The color space of the input.
     */
    inline void SetInputColorSpace(const ColorSpace& value) { m_inputColorSpaceHasBeenSet = true; m_inputColorSpace = value; }

    /**
     * The color space of the input.
     */
    inline void SetInputColorSpace(ColorSpace&& value) { m_inputColorSpaceHasBeenSet = true; m_inputColorSpace = std::move(value); }

    /**
     * The color space of the input.
     */
    inline ColorCorrection& WithInputColorSpace(const ColorSpace& value) { SetInputColorSpace(value); return *this;}

    /**
     * The color space of the input.
     */
    inline ColorCorrection& WithInputColorSpace(ColorSpace&& value) { SetInputColorSpace(std::move(value)); return *this;}


    /**
     * The color space of the output.
     */
    inline const ColorSpace& GetOutputColorSpace() const{ return m_outputColorSpace; }

    /**
     * The color space of the output.
     */
    inline bool OutputColorSpaceHasBeenSet() const { return m_outputColorSpaceHasBeenSet; }

    /**
     * The color space of the output.
     */
    inline void SetOutputColorSpace(const ColorSpace& value) { m_outputColorSpaceHasBeenSet = true; m_outputColorSpace = value; }

    /**
     * The color space of the output.
     */
    inline void SetOutputColorSpace(ColorSpace&& value) { m_outputColorSpaceHasBeenSet = true; m_outputColorSpace = std::move(value); }

    /**
     * The color space of the output.
     */
    inline ColorCorrection& WithOutputColorSpace(const ColorSpace& value) { SetOutputColorSpace(value); return *this;}

    /**
     * The color space of the output.
     */
    inline ColorCorrection& WithOutputColorSpace(ColorSpace&& value) { SetOutputColorSpace(std::move(value)); return *this;}


    /**
     * The URI of the 3D LUT file. The protocol must be 's3:' or 's3ssl:':.
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * The URI of the 3D LUT file. The protocol must be 's3:' or 's3ssl:':.
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * The URI of the 3D LUT file. The protocol must be 's3:' or 's3ssl:':.
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * The URI of the 3D LUT file. The protocol must be 's3:' or 's3ssl:':.
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * The URI of the 3D LUT file. The protocol must be 's3:' or 's3ssl:':.
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * The URI of the 3D LUT file. The protocol must be 's3:' or 's3ssl:':.
     */
    inline ColorCorrection& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * The URI of the 3D LUT file. The protocol must be 's3:' or 's3ssl:':.
     */
    inline ColorCorrection& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * The URI of the 3D LUT file. The protocol must be 's3:' or 's3ssl:':.
     */
    inline ColorCorrection& WithUri(const char* value) { SetUri(value); return *this;}

  private:

    ColorSpace m_inputColorSpace;
    bool m_inputColorSpaceHasBeenSet = false;

    ColorSpace m_outputColorSpace;
    bool m_outputColorSpaceHasBeenSet = false;

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
