/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ThumbnailState.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * The settings for source monitoring.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MonitoringConfig">AWS
   * API Reference</a></p>
   */
  class MonitoringConfig
  {
  public:
    AWS_MEDIACONNECT_API MonitoringConfig();
    AWS_MEDIACONNECT_API MonitoringConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API MonitoringConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The state of thumbnail monitoring.
     */
    inline const ThumbnailState& GetThumbnailState() const{ return m_thumbnailState; }
    inline bool ThumbnailStateHasBeenSet() const { return m_thumbnailStateHasBeenSet; }
    inline void SetThumbnailState(const ThumbnailState& value) { m_thumbnailStateHasBeenSet = true; m_thumbnailState = value; }
    inline void SetThumbnailState(ThumbnailState&& value) { m_thumbnailStateHasBeenSet = true; m_thumbnailState = std::move(value); }
    inline MonitoringConfig& WithThumbnailState(const ThumbnailState& value) { SetThumbnailState(value); return *this;}
    inline MonitoringConfig& WithThumbnailState(ThumbnailState&& value) { SetThumbnailState(std::move(value)); return *this;}
    ///@}
  private:

    ThumbnailState m_thumbnailState;
    bool m_thumbnailStateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
