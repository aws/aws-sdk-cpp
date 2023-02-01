/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/AdMarkerPassthrough.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The configuration for manifest processing rules. Manifest processing rules
   * enable customization of the personalized manifests created by
   * MediaTailor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ManifestProcessingRules">AWS
   * API Reference</a></p>
   */
  class ManifestProcessingRules
  {
  public:
    AWS_MEDIATAILOR_API ManifestProcessingRules();
    AWS_MEDIATAILOR_API ManifestProcessingRules(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API ManifestProcessingRules& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For HLS, when set to <code>true</code>, MediaTailor passes through
     * <code>EXT-X-CUE-IN</code>, <code>EXT-X-CUE-OUT</code>, and
     * <code>EXT-X-SPLICEPOINT-SCTE35</code> ad markers from the origin manifest to the
     * MediaTailor personalized manifest.</p> <p>No logic is applied to these ad
     * markers. For example, if <code>EXT-X-CUE-OUT</code> has a value of
     * <code>60</code>, but no ads are filled for that ad break, MediaTailor will not
     * set the value to <code>0</code>.</p>
     */
    inline const AdMarkerPassthrough& GetAdMarkerPassthrough() const{ return m_adMarkerPassthrough; }

    /**
     * <p>For HLS, when set to <code>true</code>, MediaTailor passes through
     * <code>EXT-X-CUE-IN</code>, <code>EXT-X-CUE-OUT</code>, and
     * <code>EXT-X-SPLICEPOINT-SCTE35</code> ad markers from the origin manifest to the
     * MediaTailor personalized manifest.</p> <p>No logic is applied to these ad
     * markers. For example, if <code>EXT-X-CUE-OUT</code> has a value of
     * <code>60</code>, but no ads are filled for that ad break, MediaTailor will not
     * set the value to <code>0</code>.</p>
     */
    inline bool AdMarkerPassthroughHasBeenSet() const { return m_adMarkerPassthroughHasBeenSet; }

    /**
     * <p>For HLS, when set to <code>true</code>, MediaTailor passes through
     * <code>EXT-X-CUE-IN</code>, <code>EXT-X-CUE-OUT</code>, and
     * <code>EXT-X-SPLICEPOINT-SCTE35</code> ad markers from the origin manifest to the
     * MediaTailor personalized manifest.</p> <p>No logic is applied to these ad
     * markers. For example, if <code>EXT-X-CUE-OUT</code> has a value of
     * <code>60</code>, but no ads are filled for that ad break, MediaTailor will not
     * set the value to <code>0</code>.</p>
     */
    inline void SetAdMarkerPassthrough(const AdMarkerPassthrough& value) { m_adMarkerPassthroughHasBeenSet = true; m_adMarkerPassthrough = value; }

    /**
     * <p>For HLS, when set to <code>true</code>, MediaTailor passes through
     * <code>EXT-X-CUE-IN</code>, <code>EXT-X-CUE-OUT</code>, and
     * <code>EXT-X-SPLICEPOINT-SCTE35</code> ad markers from the origin manifest to the
     * MediaTailor personalized manifest.</p> <p>No logic is applied to these ad
     * markers. For example, if <code>EXT-X-CUE-OUT</code> has a value of
     * <code>60</code>, but no ads are filled for that ad break, MediaTailor will not
     * set the value to <code>0</code>.</p>
     */
    inline void SetAdMarkerPassthrough(AdMarkerPassthrough&& value) { m_adMarkerPassthroughHasBeenSet = true; m_adMarkerPassthrough = std::move(value); }

    /**
     * <p>For HLS, when set to <code>true</code>, MediaTailor passes through
     * <code>EXT-X-CUE-IN</code>, <code>EXT-X-CUE-OUT</code>, and
     * <code>EXT-X-SPLICEPOINT-SCTE35</code> ad markers from the origin manifest to the
     * MediaTailor personalized manifest.</p> <p>No logic is applied to these ad
     * markers. For example, if <code>EXT-X-CUE-OUT</code> has a value of
     * <code>60</code>, but no ads are filled for that ad break, MediaTailor will not
     * set the value to <code>0</code>.</p>
     */
    inline ManifestProcessingRules& WithAdMarkerPassthrough(const AdMarkerPassthrough& value) { SetAdMarkerPassthrough(value); return *this;}

    /**
     * <p>For HLS, when set to <code>true</code>, MediaTailor passes through
     * <code>EXT-X-CUE-IN</code>, <code>EXT-X-CUE-OUT</code>, and
     * <code>EXT-X-SPLICEPOINT-SCTE35</code> ad markers from the origin manifest to the
     * MediaTailor personalized manifest.</p> <p>No logic is applied to these ad
     * markers. For example, if <code>EXT-X-CUE-OUT</code> has a value of
     * <code>60</code>, but no ads are filled for that ad break, MediaTailor will not
     * set the value to <code>0</code>.</p>
     */
    inline ManifestProcessingRules& WithAdMarkerPassthrough(AdMarkerPassthrough&& value) { SetAdMarkerPassthrough(std::move(value)); return *this;}

  private:

    AdMarkerPassthrough m_adMarkerPassthrough;
    bool m_adMarkerPassthroughHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
