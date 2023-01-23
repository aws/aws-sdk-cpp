/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

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
   * <p>Dash manifest configuration parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DashPlaylistSettings">AWS
   * API Reference</a></p>
   */
  class DashPlaylistSettings
  {
  public:
    AWS_MEDIATAILOR_API DashPlaylistSettings();
    AWS_MEDIATAILOR_API DashPlaylistSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API DashPlaylistSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total duration (in seconds) of each manifest. Minimum value:
     * <code>30</code> seconds. Maximum value: <code>3600</code> seconds.</p>
     */
    inline int GetManifestWindowSeconds() const{ return m_manifestWindowSeconds; }

    /**
     * <p>The total duration (in seconds) of each manifest. Minimum value:
     * <code>30</code> seconds. Maximum value: <code>3600</code> seconds.</p>
     */
    inline bool ManifestWindowSecondsHasBeenSet() const { return m_manifestWindowSecondsHasBeenSet; }

    /**
     * <p>The total duration (in seconds) of each manifest. Minimum value:
     * <code>30</code> seconds. Maximum value: <code>3600</code> seconds.</p>
     */
    inline void SetManifestWindowSeconds(int value) { m_manifestWindowSecondsHasBeenSet = true; m_manifestWindowSeconds = value; }

    /**
     * <p>The total duration (in seconds) of each manifest. Minimum value:
     * <code>30</code> seconds. Maximum value: <code>3600</code> seconds.</p>
     */
    inline DashPlaylistSettings& WithManifestWindowSeconds(int value) { SetManifestWindowSeconds(value); return *this;}


    /**
     * <p>Minimum amount of content (measured in seconds) that a player must keep
     * available in the buffer. Minimum value: <code>2</code> seconds. Maximum value:
     * <code>60</code> seconds.</p>
     */
    inline int GetMinBufferTimeSeconds() const{ return m_minBufferTimeSeconds; }

    /**
     * <p>Minimum amount of content (measured in seconds) that a player must keep
     * available in the buffer. Minimum value: <code>2</code> seconds. Maximum value:
     * <code>60</code> seconds.</p>
     */
    inline bool MinBufferTimeSecondsHasBeenSet() const { return m_minBufferTimeSecondsHasBeenSet; }

    /**
     * <p>Minimum amount of content (measured in seconds) that a player must keep
     * available in the buffer. Minimum value: <code>2</code> seconds. Maximum value:
     * <code>60</code> seconds.</p>
     */
    inline void SetMinBufferTimeSeconds(int value) { m_minBufferTimeSecondsHasBeenSet = true; m_minBufferTimeSeconds = value; }

    /**
     * <p>Minimum amount of content (measured in seconds) that a player must keep
     * available in the buffer. Minimum value: <code>2</code> seconds. Maximum value:
     * <code>60</code> seconds.</p>
     */
    inline DashPlaylistSettings& WithMinBufferTimeSeconds(int value) { SetMinBufferTimeSeconds(value); return *this;}


    /**
     * <p>Minimum amount of time (in seconds) that the player should wait before
     * requesting updates to the manifest. Minimum value: <code>2</code> seconds.
     * Maximum value: <code>60</code> seconds.</p>
     */
    inline int GetMinUpdatePeriodSeconds() const{ return m_minUpdatePeriodSeconds; }

    /**
     * <p>Minimum amount of time (in seconds) that the player should wait before
     * requesting updates to the manifest. Minimum value: <code>2</code> seconds.
     * Maximum value: <code>60</code> seconds.</p>
     */
    inline bool MinUpdatePeriodSecondsHasBeenSet() const { return m_minUpdatePeriodSecondsHasBeenSet; }

    /**
     * <p>Minimum amount of time (in seconds) that the player should wait before
     * requesting updates to the manifest. Minimum value: <code>2</code> seconds.
     * Maximum value: <code>60</code> seconds.</p>
     */
    inline void SetMinUpdatePeriodSeconds(int value) { m_minUpdatePeriodSecondsHasBeenSet = true; m_minUpdatePeriodSeconds = value; }

    /**
     * <p>Minimum amount of time (in seconds) that the player should wait before
     * requesting updates to the manifest. Minimum value: <code>2</code> seconds.
     * Maximum value: <code>60</code> seconds.</p>
     */
    inline DashPlaylistSettings& WithMinUpdatePeriodSeconds(int value) { SetMinUpdatePeriodSeconds(value); return *this;}


    /**
     * <p>Amount of time (in seconds) that the player should be from the live point at
     * the end of the manifest. Minimum value: <code>2</code> seconds. Maximum value:
     * <code>60</code> seconds.</p>
     */
    inline int GetSuggestedPresentationDelaySeconds() const{ return m_suggestedPresentationDelaySeconds; }

    /**
     * <p>Amount of time (in seconds) that the player should be from the live point at
     * the end of the manifest. Minimum value: <code>2</code> seconds. Maximum value:
     * <code>60</code> seconds.</p>
     */
    inline bool SuggestedPresentationDelaySecondsHasBeenSet() const { return m_suggestedPresentationDelaySecondsHasBeenSet; }

    /**
     * <p>Amount of time (in seconds) that the player should be from the live point at
     * the end of the manifest. Minimum value: <code>2</code> seconds. Maximum value:
     * <code>60</code> seconds.</p>
     */
    inline void SetSuggestedPresentationDelaySeconds(int value) { m_suggestedPresentationDelaySecondsHasBeenSet = true; m_suggestedPresentationDelaySeconds = value; }

    /**
     * <p>Amount of time (in seconds) that the player should be from the live point at
     * the end of the manifest. Minimum value: <code>2</code> seconds. Maximum value:
     * <code>60</code> seconds.</p>
     */
    inline DashPlaylistSettings& WithSuggestedPresentationDelaySeconds(int value) { SetSuggestedPresentationDelaySeconds(value); return *this;}

  private:

    int m_manifestWindowSeconds;
    bool m_manifestWindowSecondsHasBeenSet = false;

    int m_minBufferTimeSeconds;
    bool m_minBufferTimeSecondsHasBeenSet = false;

    int m_minUpdatePeriodSeconds;
    bool m_minUpdatePeriodSecondsHasBeenSet = false;

    int m_suggestedPresentationDelaySeconds;
    bool m_suggestedPresentationDelaySecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
