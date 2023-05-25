/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Xavc4kIntraCbgProfileClass.h>
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
   * XAVC_4K_INTRA_CBG.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Xavc4kIntraCbgProfileSettings">AWS
   * API Reference</a></p>
   */
  class Xavc4kIntraCbgProfileSettings
  {
  public:
    AWS_MEDIACONVERT_API Xavc4kIntraCbgProfileSettings();
    AWS_MEDIACONVERT_API Xavc4kIntraCbgProfileSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Xavc4kIntraCbgProfileSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the XAVC Intra 4k (CBG) Class to set the bitrate of your output. Outputs
     * of the same class have similar image quality over the operating points that are
     * valid for that class.
     */
    inline const Xavc4kIntraCbgProfileClass& GetXavcClass() const{ return m_xavcClass; }

    /**
     * Specify the XAVC Intra 4k (CBG) Class to set the bitrate of your output. Outputs
     * of the same class have similar image quality over the operating points that are
     * valid for that class.
     */
    inline bool XavcClassHasBeenSet() const { return m_xavcClassHasBeenSet; }

    /**
     * Specify the XAVC Intra 4k (CBG) Class to set the bitrate of your output. Outputs
     * of the same class have similar image quality over the operating points that are
     * valid for that class.
     */
    inline void SetXavcClass(const Xavc4kIntraCbgProfileClass& value) { m_xavcClassHasBeenSet = true; m_xavcClass = value; }

    /**
     * Specify the XAVC Intra 4k (CBG) Class to set the bitrate of your output. Outputs
     * of the same class have similar image quality over the operating points that are
     * valid for that class.
     */
    inline void SetXavcClass(Xavc4kIntraCbgProfileClass&& value) { m_xavcClassHasBeenSet = true; m_xavcClass = std::move(value); }

    /**
     * Specify the XAVC Intra 4k (CBG) Class to set the bitrate of your output. Outputs
     * of the same class have similar image quality over the operating points that are
     * valid for that class.
     */
    inline Xavc4kIntraCbgProfileSettings& WithXavcClass(const Xavc4kIntraCbgProfileClass& value) { SetXavcClass(value); return *this;}

    /**
     * Specify the XAVC Intra 4k (CBG) Class to set the bitrate of your output. Outputs
     * of the same class have similar image quality over the operating points that are
     * valid for that class.
     */
    inline Xavc4kIntraCbgProfileSettings& WithXavcClass(Xavc4kIntraCbgProfileClass&& value) { SetXavcClass(std::move(value)); return *this;}

  private:

    Xavc4kIntraCbgProfileClass m_xavcClass;
    bool m_xavcClassHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
