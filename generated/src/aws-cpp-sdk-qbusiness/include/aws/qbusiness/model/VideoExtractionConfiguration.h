/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/VideoExtractionStatus.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Configuration settings for video content extraction and
   * processing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/VideoExtractionConfiguration">AWS
   * API Reference</a></p>
   */
  class VideoExtractionConfiguration
  {
  public:
    AWS_QBUSINESS_API VideoExtractionConfiguration() = default;
    AWS_QBUSINESS_API VideoExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API VideoExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of video extraction (ENABLED or DISABLED) for processing video
     * content from files.</p>
     */
    inline VideoExtractionStatus GetVideoExtractionStatus() const { return m_videoExtractionStatus; }
    inline bool VideoExtractionStatusHasBeenSet() const { return m_videoExtractionStatusHasBeenSet; }
    inline void SetVideoExtractionStatus(VideoExtractionStatus value) { m_videoExtractionStatusHasBeenSet = true; m_videoExtractionStatus = value; }
    inline VideoExtractionConfiguration& WithVideoExtractionStatus(VideoExtractionStatus value) { SetVideoExtractionStatus(value); return *this;}
    ///@}
  private:

    VideoExtractionStatus m_videoExtractionStatus{VideoExtractionStatus::NOT_SET};
    bool m_videoExtractionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
