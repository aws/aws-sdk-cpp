/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
   * Hls Basic Put Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsBasicPutSettings">AWS
   * API Reference</a></p>
   */
  class HlsBasicPutSettings
  {
  public:
    AWS_MEDIALIVE_API HlsBasicPutSettings() = default;
    AWS_MEDIALIVE_API HlsBasicPutSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API HlsBasicPutSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Number of seconds to wait before retrying connection to the CDN if the
     * connection is lost.
     */
    inline int GetConnectionRetryInterval() const { return m_connectionRetryInterval; }
    inline bool ConnectionRetryIntervalHasBeenSet() const { return m_connectionRetryIntervalHasBeenSet; }
    inline void SetConnectionRetryInterval(int value) { m_connectionRetryIntervalHasBeenSet = true; m_connectionRetryInterval = value; }
    inline HlsBasicPutSettings& WithConnectionRetryInterval(int value) { SetConnectionRetryInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Size in seconds of file cache for streaming outputs.
     */
    inline int GetFilecacheDuration() const { return m_filecacheDuration; }
    inline bool FilecacheDurationHasBeenSet() const { return m_filecacheDurationHasBeenSet; }
    inline void SetFilecacheDuration(int value) { m_filecacheDurationHasBeenSet = true; m_filecacheDuration = value; }
    inline HlsBasicPutSettings& WithFilecacheDuration(int value) { SetFilecacheDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of retry attempts that will be made before the Live Event is put into an
     * error state. Applies only if the CDN destination URI begins with "s3" or
     * "mediastore". For other URIs, the value is always 3.
     */
    inline int GetNumRetries() const { return m_numRetries; }
    inline bool NumRetriesHasBeenSet() const { return m_numRetriesHasBeenSet; }
    inline void SetNumRetries(int value) { m_numRetriesHasBeenSet = true; m_numRetries = value; }
    inline HlsBasicPutSettings& WithNumRetries(int value) { SetNumRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * If a streaming output fails, number of seconds to wait until a restart is
     * initiated. A value of 0 means never restart.
     */
    inline int GetRestartDelay() const { return m_restartDelay; }
    inline bool RestartDelayHasBeenSet() const { return m_restartDelayHasBeenSet; }
    inline void SetRestartDelay(int value) { m_restartDelayHasBeenSet = true; m_restartDelay = value; }
    inline HlsBasicPutSettings& WithRestartDelay(int value) { SetRestartDelay(value); return *this;}
    ///@}
  private:

    int m_connectionRetryInterval{0};
    bool m_connectionRetryIntervalHasBeenSet = false;

    int m_filecacheDuration{0};
    bool m_filecacheDurationHasBeenSet = false;

    int m_numRetries{0};
    bool m_numRetriesHasBeenSet = false;

    int m_restartDelay{0};
    bool m_restartDelayHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
