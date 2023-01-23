/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Xavc4kIntraVbrProfileClass.h>
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
   * Required when you set (Profile) under
   * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
   * XAVC_4K_INTRA_VBR.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Xavc4kIntraVbrProfileSettings">AWS
   * API Reference</a></p>
   */
  class Xavc4kIntraVbrProfileSettings
  {
  public:
    AWS_MEDIACONVERT_API Xavc4kIntraVbrProfileSettings();
    AWS_MEDIACONVERT_API Xavc4kIntraVbrProfileSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Xavc4kIntraVbrProfileSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the XAVC Intra 4k (VBR) Class to set the bitrate of your output. Outputs
     * of the same class have similar image quality over the operating points that are
     * valid for that class.
     */
    inline const Xavc4kIntraVbrProfileClass& GetXavcClass() const{ return m_xavcClass; }

    /**
     * Specify the XAVC Intra 4k (VBR) Class to set the bitrate of your output. Outputs
     * of the same class have similar image quality over the operating points that are
     * valid for that class.
     */
    inline bool XavcClassHasBeenSet() const { return m_xavcClassHasBeenSet; }

    /**
     * Specify the XAVC Intra 4k (VBR) Class to set the bitrate of your output. Outputs
     * of the same class have similar image quality over the operating points that are
     * valid for that class.
     */
    inline void SetXavcClass(const Xavc4kIntraVbrProfileClass& value) { m_xavcClassHasBeenSet = true; m_xavcClass = value; }

    /**
     * Specify the XAVC Intra 4k (VBR) Class to set the bitrate of your output. Outputs
     * of the same class have similar image quality over the operating points that are
     * valid for that class.
     */
    inline void SetXavcClass(Xavc4kIntraVbrProfileClass&& value) { m_xavcClassHasBeenSet = true; m_xavcClass = std::move(value); }

    /**
     * Specify the XAVC Intra 4k (VBR) Class to set the bitrate of your output. Outputs
     * of the same class have similar image quality over the operating points that are
     * valid for that class.
     */
    inline Xavc4kIntraVbrProfileSettings& WithXavcClass(const Xavc4kIntraVbrProfileClass& value) { SetXavcClass(value); return *this;}

    /**
     * Specify the XAVC Intra 4k (VBR) Class to set the bitrate of your output. Outputs
     * of the same class have similar image quality over the operating points that are
     * valid for that class.
     */
    inline Xavc4kIntraVbrProfileSettings& WithXavcClass(Xavc4kIntraVbrProfileClass&& value) { SetXavcClass(std::move(value)); return *this;}

  private:

    Xavc4kIntraVbrProfileClass m_xavcClass;
    bool m_xavcClassHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
