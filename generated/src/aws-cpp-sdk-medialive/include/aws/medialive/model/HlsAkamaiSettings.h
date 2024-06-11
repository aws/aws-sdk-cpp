/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/HlsAkamaiHttpTransferMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Hls Akamai Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsAkamaiSettings">AWS
   * API Reference</a></p>
   */
  class HlsAkamaiSettings
  {
  public:
    AWS_MEDIALIVE_API HlsAkamaiSettings();
    AWS_MEDIALIVE_API HlsAkamaiSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API HlsAkamaiSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Number of seconds to wait before retrying connection to the CDN if the
     * connection is lost.
     */
    inline int GetConnectionRetryInterval() const{ return m_connectionRetryInterval; }
    inline bool ConnectionRetryIntervalHasBeenSet() const { return m_connectionRetryIntervalHasBeenSet; }
    inline void SetConnectionRetryInterval(int value) { m_connectionRetryIntervalHasBeenSet = true; m_connectionRetryInterval = value; }
    inline HlsAkamaiSettings& WithConnectionRetryInterval(int value) { SetConnectionRetryInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Size in seconds of file cache for streaming outputs.
     */
    inline int GetFilecacheDuration() const{ return m_filecacheDuration; }
    inline bool FilecacheDurationHasBeenSet() const { return m_filecacheDurationHasBeenSet; }
    inline void SetFilecacheDuration(int value) { m_filecacheDurationHasBeenSet = true; m_filecacheDuration = value; }
    inline HlsAkamaiSettings& WithFilecacheDuration(int value) { SetFilecacheDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify whether or not to use chunked transfer encoding to Akamai. User should
     * contact Akamai to enable this feature.
     */
    inline const HlsAkamaiHttpTransferMode& GetHttpTransferMode() const{ return m_httpTransferMode; }
    inline bool HttpTransferModeHasBeenSet() const { return m_httpTransferModeHasBeenSet; }
    inline void SetHttpTransferMode(const HlsAkamaiHttpTransferMode& value) { m_httpTransferModeHasBeenSet = true; m_httpTransferMode = value; }
    inline void SetHttpTransferMode(HlsAkamaiHttpTransferMode&& value) { m_httpTransferModeHasBeenSet = true; m_httpTransferMode = std::move(value); }
    inline HlsAkamaiSettings& WithHttpTransferMode(const HlsAkamaiHttpTransferMode& value) { SetHttpTransferMode(value); return *this;}
    inline HlsAkamaiSettings& WithHttpTransferMode(HlsAkamaiHttpTransferMode&& value) { SetHttpTransferMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Number of retry attempts that will be made before the Live Event is put into an
     * error state. Applies only if the CDN destination URI begins with "s3" or
     * "mediastore". For other URIs, the value is always 3.
     */
    inline int GetNumRetries() const{ return m_numRetries; }
    inline bool NumRetriesHasBeenSet() const { return m_numRetriesHasBeenSet; }
    inline void SetNumRetries(int value) { m_numRetriesHasBeenSet = true; m_numRetries = value; }
    inline HlsAkamaiSettings& WithNumRetries(int value) { SetNumRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * If a streaming output fails, number of seconds to wait until a restart is
     * initiated. A value of 0 means never restart.
     */
    inline int GetRestartDelay() const{ return m_restartDelay; }
    inline bool RestartDelayHasBeenSet() const { return m_restartDelayHasBeenSet; }
    inline void SetRestartDelay(int value) { m_restartDelayHasBeenSet = true; m_restartDelay = value; }
    inline HlsAkamaiSettings& WithRestartDelay(int value) { SetRestartDelay(value); return *this;}
    ///@}

    ///@{
    /**
     * Salt for authenticated Akamai.
     */
    inline const Aws::String& GetSalt() const{ return m_salt; }
    inline bool SaltHasBeenSet() const { return m_saltHasBeenSet; }
    inline void SetSalt(const Aws::String& value) { m_saltHasBeenSet = true; m_salt = value; }
    inline void SetSalt(Aws::String&& value) { m_saltHasBeenSet = true; m_salt = std::move(value); }
    inline void SetSalt(const char* value) { m_saltHasBeenSet = true; m_salt.assign(value); }
    inline HlsAkamaiSettings& WithSalt(const Aws::String& value) { SetSalt(value); return *this;}
    inline HlsAkamaiSettings& WithSalt(Aws::String&& value) { SetSalt(std::move(value)); return *this;}
    inline HlsAkamaiSettings& WithSalt(const char* value) { SetSalt(value); return *this;}
    ///@}

    ///@{
    /**
     * Token parameter for authenticated akamai. If not specified, _gda_ is used.
     */
    inline const Aws::String& GetToken() const{ return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }
    inline HlsAkamaiSettings& WithToken(const Aws::String& value) { SetToken(value); return *this;}
    inline HlsAkamaiSettings& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}
    inline HlsAkamaiSettings& WithToken(const char* value) { SetToken(value); return *this;}
    ///@}
  private:

    int m_connectionRetryInterval;
    bool m_connectionRetryIntervalHasBeenSet = false;

    int m_filecacheDuration;
    bool m_filecacheDurationHasBeenSet = false;

    HlsAkamaiHttpTransferMode m_httpTransferMode;
    bool m_httpTransferModeHasBeenSet = false;

    int m_numRetries;
    bool m_numRetriesHasBeenSet = false;

    int m_restartDelay;
    bool m_restartDelayHasBeenSet = false;

    Aws::String m_salt;
    bool m_saltHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
