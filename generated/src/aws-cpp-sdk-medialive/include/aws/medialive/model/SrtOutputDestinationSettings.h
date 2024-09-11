/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
   * Placeholder documentation for SrtOutputDestinationSettings<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/SrtOutputDestinationSettings">AWS
   * API Reference</a></p>
   */
  class SrtOutputDestinationSettings
  {
  public:
    AWS_MEDIALIVE_API SrtOutputDestinationSettings();
    AWS_MEDIALIVE_API SrtOutputDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API SrtOutputDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Arn used to extract the password from Secrets Manager
     */
    inline const Aws::String& GetEncryptionPassphraseSecretArn() const{ return m_encryptionPassphraseSecretArn; }
    inline bool EncryptionPassphraseSecretArnHasBeenSet() const { return m_encryptionPassphraseSecretArnHasBeenSet; }
    inline void SetEncryptionPassphraseSecretArn(const Aws::String& value) { m_encryptionPassphraseSecretArnHasBeenSet = true; m_encryptionPassphraseSecretArn = value; }
    inline void SetEncryptionPassphraseSecretArn(Aws::String&& value) { m_encryptionPassphraseSecretArnHasBeenSet = true; m_encryptionPassphraseSecretArn = std::move(value); }
    inline void SetEncryptionPassphraseSecretArn(const char* value) { m_encryptionPassphraseSecretArnHasBeenSet = true; m_encryptionPassphraseSecretArn.assign(value); }
    inline SrtOutputDestinationSettings& WithEncryptionPassphraseSecretArn(const Aws::String& value) { SetEncryptionPassphraseSecretArn(value); return *this;}
    inline SrtOutputDestinationSettings& WithEncryptionPassphraseSecretArn(Aws::String&& value) { SetEncryptionPassphraseSecretArn(std::move(value)); return *this;}
    inline SrtOutputDestinationSettings& WithEncryptionPassphraseSecretArn(const char* value) { SetEncryptionPassphraseSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * Stream id for SRT destinations (URLs of type srt://)
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }
    inline SrtOutputDestinationSettings& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}
    inline SrtOutputDestinationSettings& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}
    inline SrtOutputDestinationSettings& WithStreamId(const char* value) { SetStreamId(value); return *this;}
    ///@}

    ///@{
    /**
     * A URL specifying a destination
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline SrtOutputDestinationSettings& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline SrtOutputDestinationSettings& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline SrtOutputDestinationSettings& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_encryptionPassphraseSecretArn;
    bool m_encryptionPassphraseSecretArnHasBeenSet = false;

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
