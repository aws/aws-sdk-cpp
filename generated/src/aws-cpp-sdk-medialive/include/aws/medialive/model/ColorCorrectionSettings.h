/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/ColorCorrection.h>
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
   * Property of encoderSettings. Controls color conversion when you are using 3D LUT
   * files to perform color conversion on video.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ColorCorrectionSettings">AWS
   * API Reference</a></p>
   */
  class ColorCorrectionSettings
  {
  public:
    AWS_MEDIALIVE_API ColorCorrectionSettings();
    AWS_MEDIALIVE_API ColorCorrectionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ColorCorrectionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * An array of colorCorrections that applies when you are using 3D LUT files to
     * perform color conversion on video. Each colorCorrection contains one 3D LUT file
     * (that defines the color mapping for converting an input color space to an output
     * color space), and the input/output combination that this 3D LUT file applies to.
     * MediaLive reads the color space in the input metadata, determines the color
     * space that you have specified for the output, and finds and uses the LUT file
     * that applies to this combination.
     */
    inline const Aws::Vector<ColorCorrection>& GetGlobalColorCorrections() const{ return m_globalColorCorrections; }

    /**
     * An array of colorCorrections that applies when you are using 3D LUT files to
     * perform color conversion on video. Each colorCorrection contains one 3D LUT file
     * (that defines the color mapping for converting an input color space to an output
     * color space), and the input/output combination that this 3D LUT file applies to.
     * MediaLive reads the color space in the input metadata, determines the color
     * space that you have specified for the output, and finds and uses the LUT file
     * that applies to this combination.
     */
    inline bool GlobalColorCorrectionsHasBeenSet() const { return m_globalColorCorrectionsHasBeenSet; }

    /**
     * An array of colorCorrections that applies when you are using 3D LUT files to
     * perform color conversion on video. Each colorCorrection contains one 3D LUT file
     * (that defines the color mapping for converting an input color space to an output
     * color space), and the input/output combination that this 3D LUT file applies to.
     * MediaLive reads the color space in the input metadata, determines the color
     * space that you have specified for the output, and finds and uses the LUT file
     * that applies to this combination.
     */
    inline void SetGlobalColorCorrections(const Aws::Vector<ColorCorrection>& value) { m_globalColorCorrectionsHasBeenSet = true; m_globalColorCorrections = value; }

    /**
     * An array of colorCorrections that applies when you are using 3D LUT files to
     * perform color conversion on video. Each colorCorrection contains one 3D LUT file
     * (that defines the color mapping for converting an input color space to an output
     * color space), and the input/output combination that this 3D LUT file applies to.
     * MediaLive reads the color space in the input metadata, determines the color
     * space that you have specified for the output, and finds and uses the LUT file
     * that applies to this combination.
     */
    inline void SetGlobalColorCorrections(Aws::Vector<ColorCorrection>&& value) { m_globalColorCorrectionsHasBeenSet = true; m_globalColorCorrections = std::move(value); }

    /**
     * An array of colorCorrections that applies when you are using 3D LUT files to
     * perform color conversion on video. Each colorCorrection contains one 3D LUT file
     * (that defines the color mapping for converting an input color space to an output
     * color space), and the input/output combination that this 3D LUT file applies to.
     * MediaLive reads the color space in the input metadata, determines the color
     * space that you have specified for the output, and finds and uses the LUT file
     * that applies to this combination.
     */
    inline ColorCorrectionSettings& WithGlobalColorCorrections(const Aws::Vector<ColorCorrection>& value) { SetGlobalColorCorrections(value); return *this;}

    /**
     * An array of colorCorrections that applies when you are using 3D LUT files to
     * perform color conversion on video. Each colorCorrection contains one 3D LUT file
     * (that defines the color mapping for converting an input color space to an output
     * color space), and the input/output combination that this 3D LUT file applies to.
     * MediaLive reads the color space in the input metadata, determines the color
     * space that you have specified for the output, and finds and uses the LUT file
     * that applies to this combination.
     */
    inline ColorCorrectionSettings& WithGlobalColorCorrections(Aws::Vector<ColorCorrection>&& value) { SetGlobalColorCorrections(std::move(value)); return *this;}

    /**
     * An array of colorCorrections that applies when you are using 3D LUT files to
     * perform color conversion on video. Each colorCorrection contains one 3D LUT file
     * (that defines the color mapping for converting an input color space to an output
     * color space), and the input/output combination that this 3D LUT file applies to.
     * MediaLive reads the color space in the input metadata, determines the color
     * space that you have specified for the output, and finds and uses the LUT file
     * that applies to this combination.
     */
    inline ColorCorrectionSettings& AddGlobalColorCorrections(const ColorCorrection& value) { m_globalColorCorrectionsHasBeenSet = true; m_globalColorCorrections.push_back(value); return *this; }

    /**
     * An array of colorCorrections that applies when you are using 3D LUT files to
     * perform color conversion on video. Each colorCorrection contains one 3D LUT file
     * (that defines the color mapping for converting an input color space to an output
     * color space), and the input/output combination that this 3D LUT file applies to.
     * MediaLive reads the color space in the input metadata, determines the color
     * space that you have specified for the output, and finds and uses the LUT file
     * that applies to this combination.
     */
    inline ColorCorrectionSettings& AddGlobalColorCorrections(ColorCorrection&& value) { m_globalColorCorrectionsHasBeenSet = true; m_globalColorCorrections.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ColorCorrection> m_globalColorCorrections;
    bool m_globalColorCorrectionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
