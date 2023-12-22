/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

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
namespace MediaConnect
{
namespace Model
{

  /**
   * The frame resolution used by the video stream.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/FrameResolution">AWS
   * API Reference</a></p>
   */
  class FrameResolution
  {
  public:
    AWS_MEDIACONNECT_API FrameResolution();
    AWS_MEDIACONNECT_API FrameResolution(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API FrameResolution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The number of pixels in the height of the video frame.
     */
    inline int GetFrameHeight() const{ return m_frameHeight; }

    /**
     * The number of pixels in the height of the video frame.
     */
    inline bool FrameHeightHasBeenSet() const { return m_frameHeightHasBeenSet; }

    /**
     * The number of pixels in the height of the video frame.
     */
    inline void SetFrameHeight(int value) { m_frameHeightHasBeenSet = true; m_frameHeight = value; }

    /**
     * The number of pixels in the height of the video frame.
     */
    inline FrameResolution& WithFrameHeight(int value) { SetFrameHeight(value); return *this;}


    /**
     * The number of pixels in the width of the video frame.
     */
    inline int GetFrameWidth() const{ return m_frameWidth; }

    /**
     * The number of pixels in the width of the video frame.
     */
    inline bool FrameWidthHasBeenSet() const { return m_frameWidthHasBeenSet; }

    /**
     * The number of pixels in the width of the video frame.
     */
    inline void SetFrameWidth(int value) { m_frameWidthHasBeenSet = true; m_frameWidth = value; }

    /**
     * The number of pixels in the width of the video frame.
     */
    inline FrameResolution& WithFrameWidth(int value) { SetFrameWidth(value); return *this;}

  private:

    int m_frameHeight;
    bool m_frameHeightHasBeenSet = false;

    int m_frameWidth;
    bool m_frameWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
