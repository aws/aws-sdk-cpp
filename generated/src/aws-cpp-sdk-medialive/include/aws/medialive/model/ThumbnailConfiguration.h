/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ThumbnailState.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Thumbnail Configuration<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ThumbnailConfiguration">AWS
   * API Reference</a></p>
   */
  class ThumbnailConfiguration
  {
  public:
    AWS_MEDIALIVE_API ThumbnailConfiguration();
    AWS_MEDIALIVE_API ThumbnailConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ThumbnailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Enables the thumbnail feature. The feature generates thumbnails of the incoming
     * video in each pipeline in the channel. AUTO turns the feature on, DISABLE turns
     * the feature off.
     */
    inline const ThumbnailState& GetState() const{ return m_state; }

    /**
     * Enables the thumbnail feature. The feature generates thumbnails of the incoming
     * video in each pipeline in the channel. AUTO turns the feature on, DISABLE turns
     * the feature off.
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * Enables the thumbnail feature. The feature generates thumbnails of the incoming
     * video in each pipeline in the channel. AUTO turns the feature on, DISABLE turns
     * the feature off.
     */
    inline void SetState(const ThumbnailState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * Enables the thumbnail feature. The feature generates thumbnails of the incoming
     * video in each pipeline in the channel. AUTO turns the feature on, DISABLE turns
     * the feature off.
     */
    inline void SetState(ThumbnailState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * Enables the thumbnail feature. The feature generates thumbnails of the incoming
     * video in each pipeline in the channel. AUTO turns the feature on, DISABLE turns
     * the feature off.
     */
    inline ThumbnailConfiguration& WithState(const ThumbnailState& value) { SetState(value); return *this;}

    /**
     * Enables the thumbnail feature. The feature generates thumbnails of the incoming
     * video in each pipeline in the channel. AUTO turns the feature on, DISABLE turns
     * the feature off.
     */
    inline ThumbnailConfiguration& WithState(ThumbnailState&& value) { SetState(std::move(value)); return *this;}

  private:

    ThumbnailState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
