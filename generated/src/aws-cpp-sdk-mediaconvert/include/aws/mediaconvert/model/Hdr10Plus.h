/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
   * Setting for HDR10+ metadata insertion<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Hdr10Plus">AWS
   * API Reference</a></p>
   */
  class Hdr10Plus
  {
  public:
    AWS_MEDIACONVERT_API Hdr10Plus();
    AWS_MEDIACONVERT_API Hdr10Plus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Hdr10Plus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the HDR10+ mastering display normalized peak luminance, in nits. This is
     * the normalized actual peak luminance of the mastering display, as defined by ST
     * 2094-40.
     */
    inline int GetMasteringMonitorNits() const{ return m_masteringMonitorNits; }

    /**
     * Specify the HDR10+ mastering display normalized peak luminance, in nits. This is
     * the normalized actual peak luminance of the mastering display, as defined by ST
     * 2094-40.
     */
    inline bool MasteringMonitorNitsHasBeenSet() const { return m_masteringMonitorNitsHasBeenSet; }

    /**
     * Specify the HDR10+ mastering display normalized peak luminance, in nits. This is
     * the normalized actual peak luminance of the mastering display, as defined by ST
     * 2094-40.
     */
    inline void SetMasteringMonitorNits(int value) { m_masteringMonitorNitsHasBeenSet = true; m_masteringMonitorNits = value; }

    /**
     * Specify the HDR10+ mastering display normalized peak luminance, in nits. This is
     * the normalized actual peak luminance of the mastering display, as defined by ST
     * 2094-40.
     */
    inline Hdr10Plus& WithMasteringMonitorNits(int value) { SetMasteringMonitorNits(value); return *this;}


    /**
     * Specify the HDR10+ target display nominal peak luminance, in nits. This is the
     * nominal maximum luminance of the target display as defined by ST 2094-40.
     */
    inline int GetTargetMonitorNits() const{ return m_targetMonitorNits; }

    /**
     * Specify the HDR10+ target display nominal peak luminance, in nits. This is the
     * nominal maximum luminance of the target display as defined by ST 2094-40.
     */
    inline bool TargetMonitorNitsHasBeenSet() const { return m_targetMonitorNitsHasBeenSet; }

    /**
     * Specify the HDR10+ target display nominal peak luminance, in nits. This is the
     * nominal maximum luminance of the target display as defined by ST 2094-40.
     */
    inline void SetTargetMonitorNits(int value) { m_targetMonitorNitsHasBeenSet = true; m_targetMonitorNits = value; }

    /**
     * Specify the HDR10+ target display nominal peak luminance, in nits. This is the
     * nominal maximum luminance of the target display as defined by ST 2094-40.
     */
    inline Hdr10Plus& WithTargetMonitorNits(int value) { SetTargetMonitorNits(value); return *this;}

  private:

    int m_masteringMonitorNits;
    bool m_masteringMonitorNitsHasBeenSet = false;

    int m_targetMonitorNits;
    bool m_targetMonitorNitsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
