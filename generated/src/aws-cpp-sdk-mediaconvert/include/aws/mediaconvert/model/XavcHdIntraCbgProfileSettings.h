/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/XavcHdIntraCbgProfileClass.h>
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
   * Required when you set Profile to the value XAVC_HD_INTRA_CBG.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/XavcHdIntraCbgProfileSettings">AWS
   * API Reference</a></p>
   */
  class XavcHdIntraCbgProfileSettings
  {
  public:
    AWS_MEDIACONVERT_API XavcHdIntraCbgProfileSettings() = default;
    AWS_MEDIACONVERT_API XavcHdIntraCbgProfileSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API XavcHdIntraCbgProfileSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the XAVC Intra HD (CBG) Class to set the bitrate of your output. Outputs
     * of the same class have similar image quality over the operating points that are
     * valid for that class.
     */
    inline XavcHdIntraCbgProfileClass GetXavcClass() const { return m_xavcClass; }
    inline bool XavcClassHasBeenSet() const { return m_xavcClassHasBeenSet; }
    inline void SetXavcClass(XavcHdIntraCbgProfileClass value) { m_xavcClassHasBeenSet = true; m_xavcClass = value; }
    inline XavcHdIntraCbgProfileSettings& WithXavcClass(XavcHdIntraCbgProfileClass value) { SetXavcClass(value); return *this;}
    ///@}
  private:

    XavcHdIntraCbgProfileClass m_xavcClass{XavcHdIntraCbgProfileClass::NOT_SET};
    bool m_xavcClassHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
