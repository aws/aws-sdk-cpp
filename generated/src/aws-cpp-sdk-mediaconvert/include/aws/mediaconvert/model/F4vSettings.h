/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/F4vMoovPlacement.h>
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
   * Settings for F4v container<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/F4vSettings">AWS
   * API Reference</a></p>
   */
  class F4vSettings
  {
  public:
    AWS_MEDIACONVERT_API F4vSettings();
    AWS_MEDIACONVERT_API F4vSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API F4vSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * To place the MOOV atom at the beginning of your output, which is useful for
     * progressive downloading: Leave blank or choose Progressive download. To place
     * the MOOV at the end of your output: Choose Normal.
     */
    inline const F4vMoovPlacement& GetMoovPlacement() const{ return m_moovPlacement; }

    /**
     * To place the MOOV atom at the beginning of your output, which is useful for
     * progressive downloading: Leave blank or choose Progressive download. To place
     * the MOOV at the end of your output: Choose Normal.
     */
    inline bool MoovPlacementHasBeenSet() const { return m_moovPlacementHasBeenSet; }

    /**
     * To place the MOOV atom at the beginning of your output, which is useful for
     * progressive downloading: Leave blank or choose Progressive download. To place
     * the MOOV at the end of your output: Choose Normal.
     */
    inline void SetMoovPlacement(const F4vMoovPlacement& value) { m_moovPlacementHasBeenSet = true; m_moovPlacement = value; }

    /**
     * To place the MOOV atom at the beginning of your output, which is useful for
     * progressive downloading: Leave blank or choose Progressive download. To place
     * the MOOV at the end of your output: Choose Normal.
     */
    inline void SetMoovPlacement(F4vMoovPlacement&& value) { m_moovPlacementHasBeenSet = true; m_moovPlacement = std::move(value); }

    /**
     * To place the MOOV atom at the beginning of your output, which is useful for
     * progressive downloading: Leave blank or choose Progressive download. To place
     * the MOOV at the end of your output: Choose Normal.
     */
    inline F4vSettings& WithMoovPlacement(const F4vMoovPlacement& value) { SetMoovPlacement(value); return *this;}

    /**
     * To place the MOOV atom at the beginning of your output, which is useful for
     * progressive downloading: Leave blank or choose Progressive download. To place
     * the MOOV at the end of your output: Choose Normal.
     */
    inline F4vSettings& WithMoovPlacement(F4vMoovPlacement&& value) { SetMoovPlacement(std::move(value)); return *this;}

  private:

    F4vMoovPlacement m_moovPlacement;
    bool m_moovPlacementHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
