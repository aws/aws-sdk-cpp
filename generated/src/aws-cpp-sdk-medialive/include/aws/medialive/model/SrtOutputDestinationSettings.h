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
    AWS_MEDIALIVE_API SrtOutputDestinationSettings() = default;
    AWS_MEDIALIVE_API SrtOutputDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API SrtOutputDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Arn used to extract the password from Secrets Manager
     */
    inline const Aws::String& GetEncryptionPassphraseSecretArn() const { return m_encryptionPassphraseSecretArn; }
    inline bool EncryptionPassphraseSecretArnHasBeenSet() const { return m_encryptionPassphraseSecretArnHasBeenSet; }
    template<typename EncryptionPassphraseSecretArnT = Aws::String>
    void SetEncryptionPassphraseSecretArn(EncryptionPassphraseSecretArnT&& value) { m_encryptionPassphraseSecretArnHasBeenSet = true; m_encryptionPassphraseSecretArn = std::forward<EncryptionPassphraseSecretArnT>(value); }
    template<typename EncryptionPassphraseSecretArnT = Aws::String>
    SrtOutputDestinationSettings& WithEncryptionPassphraseSecretArn(EncryptionPassphraseSecretArnT&& value) { SetEncryptionPassphraseSecretArn(std::forward<EncryptionPassphraseSecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Stream id for SRT destinations (URLs of type srt://)
     */
    inline const Aws::String& GetStreamId() const { return m_streamId; }
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }
    template<typename StreamIdT = Aws::String>
    void SetStreamId(StreamIdT&& value) { m_streamIdHasBeenSet = true; m_streamId = std::forward<StreamIdT>(value); }
    template<typename StreamIdT = Aws::String>
    SrtOutputDestinationSettings& WithStreamId(StreamIdT&& value) { SetStreamId(std::forward<StreamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A URL specifying a destination
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    SrtOutputDestinationSettings& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
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
