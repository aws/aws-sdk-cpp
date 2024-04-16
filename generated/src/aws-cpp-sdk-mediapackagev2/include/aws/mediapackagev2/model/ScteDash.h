/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/AdMarkerDash.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The SCTE configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/ScteDash">AWS
   * API Reference</a></p>
   */
  class ScteDash
  {
  public:
    AWS_MEDIAPACKAGEV2_API ScteDash();
    AWS_MEDIAPACKAGEV2_API ScteDash(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API ScteDash& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Choose how ad markers are included in the packaged content. If you include ad
     * markers in the content stream in your upstream encoders, then you need to inform
     * MediaPackage what to do with the ad markers in the output.</p> <p>Value
     * description:</p> <ul> <li> <p> <code>Binary</code> - The SCTE-35 marker is
     * expressed as a hex-string (Base64 string) rather than full XML.</p> </li> <li>
     * <p> <code>XML</code> - The SCTE marker is expressed fully in XML.</p> </li>
     * </ul>
     */
    inline const AdMarkerDash& GetAdMarkerDash() const{ return m_adMarkerDash; }

    /**
     * <p>Choose how ad markers are included in the packaged content. If you include ad
     * markers in the content stream in your upstream encoders, then you need to inform
     * MediaPackage what to do with the ad markers in the output.</p> <p>Value
     * description:</p> <ul> <li> <p> <code>Binary</code> - The SCTE-35 marker is
     * expressed as a hex-string (Base64 string) rather than full XML.</p> </li> <li>
     * <p> <code>XML</code> - The SCTE marker is expressed fully in XML.</p> </li>
     * </ul>
     */
    inline bool AdMarkerDashHasBeenSet() const { return m_adMarkerDashHasBeenSet; }

    /**
     * <p>Choose how ad markers are included in the packaged content. If you include ad
     * markers in the content stream in your upstream encoders, then you need to inform
     * MediaPackage what to do with the ad markers in the output.</p> <p>Value
     * description:</p> <ul> <li> <p> <code>Binary</code> - The SCTE-35 marker is
     * expressed as a hex-string (Base64 string) rather than full XML.</p> </li> <li>
     * <p> <code>XML</code> - The SCTE marker is expressed fully in XML.</p> </li>
     * </ul>
     */
    inline void SetAdMarkerDash(const AdMarkerDash& value) { m_adMarkerDashHasBeenSet = true; m_adMarkerDash = value; }

    /**
     * <p>Choose how ad markers are included in the packaged content. If you include ad
     * markers in the content stream in your upstream encoders, then you need to inform
     * MediaPackage what to do with the ad markers in the output.</p> <p>Value
     * description:</p> <ul> <li> <p> <code>Binary</code> - The SCTE-35 marker is
     * expressed as a hex-string (Base64 string) rather than full XML.</p> </li> <li>
     * <p> <code>XML</code> - The SCTE marker is expressed fully in XML.</p> </li>
     * </ul>
     */
    inline void SetAdMarkerDash(AdMarkerDash&& value) { m_adMarkerDashHasBeenSet = true; m_adMarkerDash = std::move(value); }

    /**
     * <p>Choose how ad markers are included in the packaged content. If you include ad
     * markers in the content stream in your upstream encoders, then you need to inform
     * MediaPackage what to do with the ad markers in the output.</p> <p>Value
     * description:</p> <ul> <li> <p> <code>Binary</code> - The SCTE-35 marker is
     * expressed as a hex-string (Base64 string) rather than full XML.</p> </li> <li>
     * <p> <code>XML</code> - The SCTE marker is expressed fully in XML.</p> </li>
     * </ul>
     */
    inline ScteDash& WithAdMarkerDash(const AdMarkerDash& value) { SetAdMarkerDash(value); return *this;}

    /**
     * <p>Choose how ad markers are included in the packaged content. If you include ad
     * markers in the content stream in your upstream encoders, then you need to inform
     * MediaPackage what to do with the ad markers in the output.</p> <p>Value
     * description:</p> <ul> <li> <p> <code>Binary</code> - The SCTE-35 marker is
     * expressed as a hex-string (Base64 string) rather than full XML.</p> </li> <li>
     * <p> <code>XML</code> - The SCTE marker is expressed fully in XML.</p> </li>
     * </ul>
     */
    inline ScteDash& WithAdMarkerDash(AdMarkerDash&& value) { SetAdMarkerDash(std::move(value)); return *this;}

  private:

    AdMarkerDash m_adMarkerDash;
    bool m_adMarkerDashHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
