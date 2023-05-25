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
   * Contains details about the output's video stream<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoDetail">AWS
   * API Reference</a></p>
   */
  class VideoDetail
  {
  public:
    AWS_MEDIACONVERT_API VideoDetail();
    AWS_MEDIACONVERT_API VideoDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API VideoDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Height in pixels for the output
     */
    inline int GetHeightInPx() const{ return m_heightInPx; }

    /**
     * Height in pixels for the output
     */
    inline bool HeightInPxHasBeenSet() const { return m_heightInPxHasBeenSet; }

    /**
     * Height in pixels for the output
     */
    inline void SetHeightInPx(int value) { m_heightInPxHasBeenSet = true; m_heightInPx = value; }

    /**
     * Height in pixels for the output
     */
    inline VideoDetail& WithHeightInPx(int value) { SetHeightInPx(value); return *this;}


    /**
     * Width in pixels for the output
     */
    inline int GetWidthInPx() const{ return m_widthInPx; }

    /**
     * Width in pixels for the output
     */
    inline bool WidthInPxHasBeenSet() const { return m_widthInPxHasBeenSet; }

    /**
     * Width in pixels for the output
     */
    inline void SetWidthInPx(int value) { m_widthInPxHasBeenSet = true; m_widthInPx = value; }

    /**
     * Width in pixels for the output
     */
    inline VideoDetail& WithWidthInPx(int value) { SetWidthInPx(value); return *this;}

  private:

    int m_heightInPx;
    bool m_heightInPxHasBeenSet = false;

    int m_widthInPx;
    bool m_widthInPxHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
