/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/MpdAccessibilityCaptionHints.h>
#include <aws/mediaconvert/model/MpdAudioDuration.h>
#include <aws/mediaconvert/model/MpdC2paManifest.h>
#include <aws/mediaconvert/model/MpdCaptionContainerType.h>
#include <aws/mediaconvert/model/MpdKlvMetadata.h>
#include <aws/mediaconvert/model/MpdManifestMetadataSignaling.h>
#include <aws/mediaconvert/model/MpdScte35Esam.h>
#include <aws/mediaconvert/model/MpdScte35Source.h>
#include <aws/mediaconvert/model/MpdTimedMetadata.h>
#include <aws/mediaconvert/model/MpdTimedMetadataBoxVersion.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConvert {
namespace Model {

/**
 * These settings relate to the fragmented MP4 container for the segments in your
 * DASH outputs.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MpdSettings">AWS
 * API Reference</a></p>
 */
class MpdSettings {
 public:
  AWS_MEDIACONVERT_API MpdSettings() = default;
  AWS_MEDIACONVERT_API MpdSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API MpdSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Optional. Choose Include to have MediaConvert mark up your DASH manifest with
   * <Accessibility> elements for embedded 608 captions. This markup isn't generally
   * required, but some video players require it to discover and play embedded 608
   * captions. Keep the default value, Exclude, to leave these elements out. When you
   * enable this setting, this is the markup that MediaConvert includes in your
   * manifest: <Accessibility schemeIdUri="urn:scte:dash:cc:cea-608:2015"
   * value="CC1=eng"/>
   */
  inline MpdAccessibilityCaptionHints GetAccessibilityCaptionHints() const { return m_accessibilityCaptionHints; }
  inline bool AccessibilityCaptionHintsHasBeenSet() const { return m_accessibilityCaptionHintsHasBeenSet; }
  inline void SetAccessibilityCaptionHints(MpdAccessibilityCaptionHints value) {
    m_accessibilityCaptionHintsHasBeenSet = true;
    m_accessibilityCaptionHints = value;
  }
  inline MpdSettings& WithAccessibilityCaptionHints(MpdAccessibilityCaptionHints value) {
    SetAccessibilityCaptionHints(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify this setting only when your output will be consumed by a downstream
   * repackaging workflow that is sensitive to very small duration differences
   * between video and audio. For this situation, choose Match video duration. In all
   * other cases, keep the default value, Default codec duration. When you choose
   * Match video duration, MediaConvert pads the output audio streams with silence or
   * trims them to ensure that the total duration of each audio stream is at least as
   * long as the total duration of the video stream. After padding or trimming, the
   * audio stream duration is no more than one frame longer than the video stream.
   * MediaConvert applies audio padding or trimming only to the end of the last
   * segment of the output. For unsegmented outputs, MediaConvert adds padding only
   * to the end of the file. When you keep the default value, any minor discrepancies
   * between audio and video duration will depend on your output audio codec.
   */
  inline MpdAudioDuration GetAudioDuration() const { return m_audioDuration; }
  inline bool AudioDurationHasBeenSet() const { return m_audioDurationHasBeenSet; }
  inline void SetAudioDuration(MpdAudioDuration value) {
    m_audioDurationHasBeenSet = true;
    m_audioDuration = value;
  }
  inline MpdSettings& WithAudioDuration(MpdAudioDuration value) {
    SetAudioDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * When enabled, a C2PA compliant manifest will be generated, signed and embeded in
   * the output. For more information on C2PA, see
   * https://c2pa.org/specifications/specifications/2.1/index.html
   */
  inline MpdC2paManifest GetC2paManifest() const { return m_c2paManifest; }
  inline bool C2paManifestHasBeenSet() const { return m_c2paManifestHasBeenSet; }
  inline void SetC2paManifest(MpdC2paManifest value) {
    m_c2paManifestHasBeenSet = true;
    m_c2paManifest = value;
  }
  inline MpdSettings& WithC2paManifest(MpdC2paManifest value) {
    SetC2paManifest(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Use this setting only in DASH output groups that include sidecar TTML, IMSC or
   * WEBVTT captions. You specify sidecar captions in a separate output from your
   * audio and video. Choose Raw for captions in a single XML file in a raw
   * container. Choose Fragmented MPEG-4 for captions in XML format contained within
   * fragmented MP4 files. This set of fragmented MP4 files is separate from your
   * video and audio fragmented MP4 files.
   */
  inline MpdCaptionContainerType GetCaptionContainerType() const { return m_captionContainerType; }
  inline bool CaptionContainerTypeHasBeenSet() const { return m_captionContainerTypeHasBeenSet; }
  inline void SetCaptionContainerType(MpdCaptionContainerType value) {
    m_captionContainerTypeHasBeenSet = true;
    m_captionContainerType = value;
  }
  inline MpdSettings& WithCaptionContainerType(MpdCaptionContainerType value) {
    SetCaptionContainerType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the name or ARN of the AWS Secrets Manager secret that contains your
   * C2PA public certificate chain in PEM format. Provide a valid secret name or ARN.
   * Note that your MediaConvert service role must allow access to this secret. The
   * public certificate chain is added to the COSE header (x5chain) for signature
   * validation. Include the signer's certificate and all intermediate certificates.
   * Do not include the root certificate. For details on COSE, see:
   * https://opensource.contentauthenticity.org/docs/manifest/signing-manifests
   */
  inline const Aws::String& GetCertificateSecret() const { return m_certificateSecret; }
  inline bool CertificateSecretHasBeenSet() const { return m_certificateSecretHasBeenSet; }
  template <typename CertificateSecretT = Aws::String>
  void SetCertificateSecret(CertificateSecretT&& value) {
    m_certificateSecretHasBeenSet = true;
    m_certificateSecret = std::forward<CertificateSecretT>(value);
  }
  template <typename CertificateSecretT = Aws::String>
  MpdSettings& WithCertificateSecret(CertificateSecretT&& value) {
    SetCertificateSecret(std::forward<CertificateSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * To include key-length-value metadata in this output: Set KLV metadata insertion
   * to Passthrough. MediaConvert reads KLV metadata present in your input and writes
   * each instance to a separate event message box in the output, according to MISB
   * ST1910.1. To exclude this KLV metadata: Set KLV metadata insertion to None or
   * leave blank.
   */
  inline MpdKlvMetadata GetKlvMetadata() const { return m_klvMetadata; }
  inline bool KlvMetadataHasBeenSet() const { return m_klvMetadataHasBeenSet; }
  inline void SetKlvMetadata(MpdKlvMetadata value) {
    m_klvMetadataHasBeenSet = true;
    m_klvMetadata = value;
  }
  inline MpdSettings& WithKlvMetadata(MpdKlvMetadata value) {
    SetKlvMetadata(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * To add an InbandEventStream element in your output MPD manifest for each type of
   * event message, set Manifest metadata signaling to Enabled. For ID3 event
   * messages, the InbandEventStream element schemeIdUri will be same value that you
   * specify for ID3 metadata scheme ID URI. For SCTE35 event messages, the
   * InbandEventStream element schemeIdUri will be "urn:scte:scte35:2013:bin". To
   * leave these elements out of your output MPD manifest, set Manifest metadata
   * signaling to Disabled. To enable Manifest metadata signaling, you must also set
   * SCTE-35 source to Passthrough, ESAM SCTE-35 to insert, or ID3 metadata to
   * Passthrough.
   */
  inline MpdManifestMetadataSignaling GetManifestMetadataSignaling() const { return m_manifestMetadataSignaling; }
  inline bool ManifestMetadataSignalingHasBeenSet() const { return m_manifestMetadataSignalingHasBeenSet; }
  inline void SetManifestMetadataSignaling(MpdManifestMetadataSignaling value) {
    m_manifestMetadataSignalingHasBeenSet = true;
    m_manifestMetadataSignaling = value;
  }
  inline MpdSettings& WithManifestMetadataSignaling(MpdManifestMetadataSignaling value) {
    SetManifestMetadataSignaling(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
   * to put SCTE-35 markers in this output at the insertion points that you specify
   * in an ESAM XML document. Provide the document in the setting SCC XML.
   */
  inline MpdScte35Esam GetScte35Esam() const { return m_scte35Esam; }
  inline bool Scte35EsamHasBeenSet() const { return m_scte35EsamHasBeenSet; }
  inline void SetScte35Esam(MpdScte35Esam value) {
    m_scte35EsamHasBeenSet = true;
    m_scte35Esam = value;
  }
  inline MpdSettings& WithScte35Esam(MpdScte35Esam value) {
    SetScte35Esam(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Ignore this setting unless you have SCTE-35 markers in your input video file.
   * Choose Passthrough if you want SCTE-35 markers that appear in your input to also
   * appear in this output. Choose None if you don't want those SCTE-35 markers in
   * this output.
   */
  inline MpdScte35Source GetScte35Source() const { return m_scte35Source; }
  inline bool Scte35SourceHasBeenSet() const { return m_scte35SourceHasBeenSet; }
  inline void SetScte35Source(MpdScte35Source value) {
    m_scte35SourceHasBeenSet = true;
    m_scte35Source = value;
  }
  inline MpdSettings& WithScte35Source(MpdScte35Source value) {
    SetScte35Source(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the ID or ARN of the AWS KMS key used to sign the C2PA manifest in your
   * MP4 output. Provide a valid KMS key ARN. Note that your MediaConvert service
   * role must allow access to this key.
   */
  inline const Aws::String& GetSigningKmsKey() const { return m_signingKmsKey; }
  inline bool SigningKmsKeyHasBeenSet() const { return m_signingKmsKeyHasBeenSet; }
  template <typename SigningKmsKeyT = Aws::String>
  void SetSigningKmsKey(SigningKmsKeyT&& value) {
    m_signingKmsKeyHasBeenSet = true;
    m_signingKmsKey = std::forward<SigningKmsKeyT>(value);
  }
  template <typename SigningKmsKeyT = Aws::String>
  MpdSettings& WithSigningKmsKey(SigningKmsKeyT&& value) {
    SetSigningKmsKey(std::forward<SigningKmsKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * To include ID3 metadata in this output: Set ID3 metadata to Passthrough. Specify
   * this ID3 metadata in Custom ID3 metadata inserter. MediaConvert writes each
   * instance of ID3 metadata in a separate Event Message (eMSG) box. To exclude this
   * ID3 metadata: Set ID3 metadata to None or leave blank.
   */
  inline MpdTimedMetadata GetTimedMetadata() const { return m_timedMetadata; }
  inline bool TimedMetadataHasBeenSet() const { return m_timedMetadataHasBeenSet; }
  inline void SetTimedMetadata(MpdTimedMetadata value) {
    m_timedMetadataHasBeenSet = true;
    m_timedMetadata = value;
  }
  inline MpdSettings& WithTimedMetadata(MpdTimedMetadata value) {
    SetTimedMetadata(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the event message box (eMSG) version for ID3 timed metadata in your
   * output.
For more information, see ISO/IEC 23009-1:2022 section 5.10.3.3.3
   * Syntax.
Leave blank to use the default value Version 0.
When you specify Version
   * 1, you must also set ID3 metadata to Passthrough.
   */
  inline MpdTimedMetadataBoxVersion GetTimedMetadataBoxVersion() const { return m_timedMetadataBoxVersion; }
  inline bool TimedMetadataBoxVersionHasBeenSet() const { return m_timedMetadataBoxVersionHasBeenSet; }
  inline void SetTimedMetadataBoxVersion(MpdTimedMetadataBoxVersion value) {
    m_timedMetadataBoxVersionHasBeenSet = true;
    m_timedMetadataBoxVersion = value;
  }
  inline MpdSettings& WithTimedMetadataBoxVersion(MpdTimedMetadataBoxVersion value) {
    SetTimedMetadataBoxVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the event message box (eMSG) scheme ID URI for ID3 timed metadata in
   * your output. For more information, see ISO/IEC 23009-1:2022 section 5.10.3.3.4
   * Semantics. Leave blank to use the default value: https://aomedia.org/emsg/ID3
   * When you specify a value for ID3 metadata scheme ID URI, you must also set ID3
   * metadata to Passthrough.
   */
  inline const Aws::String& GetTimedMetadataSchemeIdUri() const { return m_timedMetadataSchemeIdUri; }
  inline bool TimedMetadataSchemeIdUriHasBeenSet() const { return m_timedMetadataSchemeIdUriHasBeenSet; }
  template <typename TimedMetadataSchemeIdUriT = Aws::String>
  void SetTimedMetadataSchemeIdUri(TimedMetadataSchemeIdUriT&& value) {
    m_timedMetadataSchemeIdUriHasBeenSet = true;
    m_timedMetadataSchemeIdUri = std::forward<TimedMetadataSchemeIdUriT>(value);
  }
  template <typename TimedMetadataSchemeIdUriT = Aws::String>
  MpdSettings& WithTimedMetadataSchemeIdUri(TimedMetadataSchemeIdUriT&& value) {
    SetTimedMetadataSchemeIdUri(std::forward<TimedMetadataSchemeIdUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * Specify the event message box (eMSG) value for ID3 timed metadata in your
   * output. For more information, see ISO/IEC 23009-1:2022 section 5.10.3.3.4
   * Semantics. When you specify a value for ID3 Metadata Value, you must also set
   * ID3 metadata to Passthrough.
   */
  inline const Aws::String& GetTimedMetadataValue() const { return m_timedMetadataValue; }
  inline bool TimedMetadataValueHasBeenSet() const { return m_timedMetadataValueHasBeenSet; }
  template <typename TimedMetadataValueT = Aws::String>
  void SetTimedMetadataValue(TimedMetadataValueT&& value) {
    m_timedMetadataValueHasBeenSet = true;
    m_timedMetadataValue = std::forward<TimedMetadataValueT>(value);
  }
  template <typename TimedMetadataValueT = Aws::String>
  MpdSettings& WithTimedMetadataValue(TimedMetadataValueT&& value) {
    SetTimedMetadataValue(std::forward<TimedMetadataValueT>(value));
    return *this;
  }
  ///@}
 private:
  MpdAccessibilityCaptionHints m_accessibilityCaptionHints{MpdAccessibilityCaptionHints::NOT_SET};

  MpdAudioDuration m_audioDuration{MpdAudioDuration::NOT_SET};

  MpdC2paManifest m_c2paManifest{MpdC2paManifest::NOT_SET};

  MpdCaptionContainerType m_captionContainerType{MpdCaptionContainerType::NOT_SET};

  Aws::String m_certificateSecret;

  MpdKlvMetadata m_klvMetadata{MpdKlvMetadata::NOT_SET};

  MpdManifestMetadataSignaling m_manifestMetadataSignaling{MpdManifestMetadataSignaling::NOT_SET};

  MpdScte35Esam m_scte35Esam{MpdScte35Esam::NOT_SET};

  MpdScte35Source m_scte35Source{MpdScte35Source::NOT_SET};

  Aws::String m_signingKmsKey;

  MpdTimedMetadata m_timedMetadata{MpdTimedMetadata::NOT_SET};

  MpdTimedMetadataBoxVersion m_timedMetadataBoxVersion{MpdTimedMetadataBoxVersion::NOT_SET};

  Aws::String m_timedMetadataSchemeIdUri;

  Aws::String m_timedMetadataValue;
  bool m_accessibilityCaptionHintsHasBeenSet = false;
  bool m_audioDurationHasBeenSet = false;
  bool m_c2paManifestHasBeenSet = false;
  bool m_captionContainerTypeHasBeenSet = false;
  bool m_certificateSecretHasBeenSet = false;
  bool m_klvMetadataHasBeenSet = false;
  bool m_manifestMetadataSignalingHasBeenSet = false;
  bool m_scte35EsamHasBeenSet = false;
  bool m_scte35SourceHasBeenSet = false;
  bool m_signingKmsKeyHasBeenSet = false;
  bool m_timedMetadataHasBeenSet = false;
  bool m_timedMetadataBoxVersionHasBeenSet = false;
  bool m_timedMetadataSchemeIdUriHasBeenSet = false;
  bool m_timedMetadataValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
