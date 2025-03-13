/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Use these settings only when you use Kantar watermarking. Specify the values
   * that MediaConvert uses to generate and place Kantar watermarks in your output
   * audio. These settings apply to every output in your job. In addition to
   * specifying these values, you also need to store your Kantar credentials in AWS
   * Secrets Manager. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/kantar-watermarking.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/KantarWatermarkSettings">AWS
   * API Reference</a></p>
   */
  class KantarWatermarkSettings
  {
  public:
    AWS_MEDIACONVERT_API KantarWatermarkSettings() = default;
    AWS_MEDIACONVERT_API KantarWatermarkSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API KantarWatermarkSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Provide an audio channel name from your Kantar audio license.
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    KantarWatermarkSettings& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify a unique identifier for Kantar to use for this piece of content.
     */
    inline const Aws::String& GetContentReference() const { return m_contentReference; }
    inline bool ContentReferenceHasBeenSet() const { return m_contentReferenceHasBeenSet; }
    template<typename ContentReferenceT = Aws::String>
    void SetContentReference(ContentReferenceT&& value) { m_contentReferenceHasBeenSet = true; m_contentReference = std::forward<ContentReferenceT>(value); }
    template<typename ContentReferenceT = Aws::String>
    KantarWatermarkSettings& WithContentReference(ContentReferenceT&& value) { SetContentReference(std::forward<ContentReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Provide the name of the AWS Secrets Manager secret where your Kantar credentials
     * are stored. Note that your MediaConvert service role must provide access to this
     * secret. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/granting-permissions-for-mediaconvert-to-access-secrets-manager-secret.html.
     * For instructions on creating a secret, see
     * https://docs.aws.amazon.com/secretsmanager/latest/userguide/tutorials_basic.html,
     * in the AWS Secrets Manager User Guide.
     */
    inline const Aws::String& GetCredentialsSecretName() const { return m_credentialsSecretName; }
    inline bool CredentialsSecretNameHasBeenSet() const { return m_credentialsSecretNameHasBeenSet; }
    template<typename CredentialsSecretNameT = Aws::String>
    void SetCredentialsSecretName(CredentialsSecretNameT&& value) { m_credentialsSecretNameHasBeenSet = true; m_credentialsSecretName = std::forward<CredentialsSecretNameT>(value); }
    template<typename CredentialsSecretNameT = Aws::String>
    KantarWatermarkSettings& WithCredentialsSecretName(CredentialsSecretNameT&& value) { SetCredentialsSecretName(std::forward<CredentialsSecretNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Specify an offset, in whole seconds, from the start of your output and
     * the beginning of the watermarking. When you don't specify an offset, Kantar
     * defaults to zero.
     */
    inline double GetFileOffset() const { return m_fileOffset; }
    inline bool FileOffsetHasBeenSet() const { return m_fileOffsetHasBeenSet; }
    inline void SetFileOffset(double value) { m_fileOffsetHasBeenSet = true; m_fileOffset = value; }
    inline KantarWatermarkSettings& WithFileOffset(double value) { SetFileOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * Provide your Kantar license ID number. You should get this number from Kantar.
     */
    inline int GetKantarLicenseId() const { return m_kantarLicenseId; }
    inline bool KantarLicenseIdHasBeenSet() const { return m_kantarLicenseIdHasBeenSet; }
    inline void SetKantarLicenseId(int value) { m_kantarLicenseIdHasBeenSet = true; m_kantarLicenseId = value; }
    inline KantarWatermarkSettings& WithKantarLicenseId(int value) { SetKantarLicenseId(value); return *this;}
    ///@}

    ///@{
    /**
     * Provide the HTTPS endpoint to the Kantar server. You should get this endpoint
     * from Kantar.
     */
    inline const Aws::String& GetKantarServerUrl() const { return m_kantarServerUrl; }
    inline bool KantarServerUrlHasBeenSet() const { return m_kantarServerUrlHasBeenSet; }
    template<typename KantarServerUrlT = Aws::String>
    void SetKantarServerUrl(KantarServerUrlT&& value) { m_kantarServerUrlHasBeenSet = true; m_kantarServerUrl = std::forward<KantarServerUrlT>(value); }
    template<typename KantarServerUrlT = Aws::String>
    KantarWatermarkSettings& WithKantarServerUrl(KantarServerUrlT&& value) { SetKantarServerUrl(std::forward<KantarServerUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional. Specify the Amazon S3 bucket where you want MediaConvert to store your
     * Kantar watermark XML logs. When you don't specify a bucket, MediaConvert doesn't
     * save these logs. Note that your MediaConvert service role must provide access to
     * this location. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html
     */
    inline const Aws::String& GetLogDestination() const { return m_logDestination; }
    inline bool LogDestinationHasBeenSet() const { return m_logDestinationHasBeenSet; }
    template<typename LogDestinationT = Aws::String>
    void SetLogDestination(LogDestinationT&& value) { m_logDestinationHasBeenSet = true; m_logDestination = std::forward<LogDestinationT>(value); }
    template<typename LogDestinationT = Aws::String>
    KantarWatermarkSettings& WithLogDestination(LogDestinationT&& value) { SetLogDestination(std::forward<LogDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * You can optionally use this field to specify the first timestamp that Kantar
     * embeds during watermarking. Kantar suggests that you be very cautious when using
     * this Kantar feature, and that you use it only on channels that are managed
     * specifically for use with this feature by your Audience Measurement Operator.
     * For more information about this feature, contact Kantar technical support.
     */
    inline const Aws::String& GetMetadata3() const { return m_metadata3; }
    inline bool Metadata3HasBeenSet() const { return m_metadata3HasBeenSet; }
    template<typename Metadata3T = Aws::String>
    void SetMetadata3(Metadata3T&& value) { m_metadata3HasBeenSet = true; m_metadata3 = std::forward<Metadata3T>(value); }
    template<typename Metadata3T = Aws::String>
    KantarWatermarkSettings& WithMetadata3(Metadata3T&& value) { SetMetadata3(std::forward<Metadata3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline const Aws::String& GetMetadata4() const { return m_metadata4; }
    inline bool Metadata4HasBeenSet() const { return m_metadata4HasBeenSet; }
    template<typename Metadata4T = Aws::String>
    void SetMetadata4(Metadata4T&& value) { m_metadata4HasBeenSet = true; m_metadata4 = std::forward<Metadata4T>(value); }
    template<typename Metadata4T = Aws::String>
    KantarWatermarkSettings& WithMetadata4(Metadata4T&& value) { SetMetadata4(std::forward<Metadata4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline const Aws::String& GetMetadata5() const { return m_metadata5; }
    inline bool Metadata5HasBeenSet() const { return m_metadata5HasBeenSet; }
    template<typename Metadata5T = Aws::String>
    void SetMetadata5(Metadata5T&& value) { m_metadata5HasBeenSet = true; m_metadata5 = std::forward<Metadata5T>(value); }
    template<typename Metadata5T = Aws::String>
    KantarWatermarkSettings& WithMetadata5(Metadata5T&& value) { SetMetadata5(std::forward<Metadata5T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline const Aws::String& GetMetadata6() const { return m_metadata6; }
    inline bool Metadata6HasBeenSet() const { return m_metadata6HasBeenSet; }
    template<typename Metadata6T = Aws::String>
    void SetMetadata6(Metadata6T&& value) { m_metadata6HasBeenSet = true; m_metadata6 = std::forward<Metadata6T>(value); }
    template<typename Metadata6T = Aws::String>
    KantarWatermarkSettings& WithMetadata6(Metadata6T&& value) { SetMetadata6(std::forward<Metadata6T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline const Aws::String& GetMetadata7() const { return m_metadata7; }
    inline bool Metadata7HasBeenSet() const { return m_metadata7HasBeenSet; }
    template<typename Metadata7T = Aws::String>
    void SetMetadata7(Metadata7T&& value) { m_metadata7HasBeenSet = true; m_metadata7 = std::forward<Metadata7T>(value); }
    template<typename Metadata7T = Aws::String>
    KantarWatermarkSettings& WithMetadata7(Metadata7T&& value) { SetMetadata7(std::forward<Metadata7T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Additional metadata that MediaConvert sends to Kantar. Maximum length is 50
     * characters.
     */
    inline const Aws::String& GetMetadata8() const { return m_metadata8; }
    inline bool Metadata8HasBeenSet() const { return m_metadata8HasBeenSet; }
    template<typename Metadata8T = Aws::String>
    void SetMetadata8(Metadata8T&& value) { m_metadata8HasBeenSet = true; m_metadata8 = std::forward<Metadata8T>(value); }
    template<typename Metadata8T = Aws::String>
    KantarWatermarkSettings& WithMetadata8(Metadata8T&& value) { SetMetadata8(std::forward<Metadata8T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_contentReference;
    bool m_contentReferenceHasBeenSet = false;

    Aws::String m_credentialsSecretName;
    bool m_credentialsSecretNameHasBeenSet = false;

    double m_fileOffset{0.0};
    bool m_fileOffsetHasBeenSet = false;

    int m_kantarLicenseId{0};
    bool m_kantarLicenseIdHasBeenSet = false;

    Aws::String m_kantarServerUrl;
    bool m_kantarServerUrlHasBeenSet = false;

    Aws::String m_logDestination;
    bool m_logDestinationHasBeenSet = false;

    Aws::String m_metadata3;
    bool m_metadata3HasBeenSet = false;

    Aws::String m_metadata4;
    bool m_metadata4HasBeenSet = false;

    Aws::String m_metadata5;
    bool m_metadata5HasBeenSet = false;

    Aws::String m_metadata6;
    bool m_metadata6HasBeenSet = false;

    Aws::String m_metadata7;
    bool m_metadata7HasBeenSet = false;

    Aws::String m_metadata8;
    bool m_metadata8HasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
