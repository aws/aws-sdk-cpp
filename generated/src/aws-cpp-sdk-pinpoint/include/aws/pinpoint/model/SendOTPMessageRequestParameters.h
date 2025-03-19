/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Send OTP message request parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SendOTPMessageRequestParameters">AWS
   * API Reference</a></p>
   */
  class SendOTPMessageRequestParameters
  {
  public:
    AWS_PINPOINT_API SendOTPMessageRequestParameters() = default;
    AWS_PINPOINT_API SendOTPMessageRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SendOTPMessageRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attempts allowed to validate an OTP.</p>
     */
    inline int GetAllowedAttempts() const { return m_allowedAttempts; }
    inline bool AllowedAttemptsHasBeenSet() const { return m_allowedAttemptsHasBeenSet; }
    inline void SetAllowedAttempts(int value) { m_allowedAttemptsHasBeenSet = true; m_allowedAttempts = value; }
    inline SendOTPMessageRequestParameters& WithAllowedAttempts(int value) { SetAllowedAttempts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The brand name that will be substituted into the OTP message body. Should be
     * owned by calling AWS account.</p>
     */
    inline const Aws::String& GetBrandName() const { return m_brandName; }
    inline bool BrandNameHasBeenSet() const { return m_brandNameHasBeenSet; }
    template<typename BrandNameT = Aws::String>
    void SetBrandName(BrandNameT&& value) { m_brandNameHasBeenSet = true; m_brandName = std::forward<BrandNameT>(value); }
    template<typename BrandNameT = Aws::String>
    SendOTPMessageRequestParameters& WithBrandName(BrandNameT&& value) { SetBrandName(std::forward<BrandNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Channel type for the OTP message. Supported values: [SMS].</p>
     */
    inline const Aws::String& GetChannel() const { return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    template<typename ChannelT = Aws::String>
    void SetChannel(ChannelT&& value) { m_channelHasBeenSet = true; m_channel = std::forward<ChannelT>(value); }
    template<typename ChannelT = Aws::String>
    SendOTPMessageRequestParameters& WithChannel(ChannelT&& value) { SetChannel(std::forward<ChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of characters in the generated OTP.</p>
     */
    inline int GetCodeLength() const { return m_codeLength; }
    inline bool CodeLengthHasBeenSet() const { return m_codeLengthHasBeenSet; }
    inline void SetCodeLength(int value) { m_codeLengthHasBeenSet = true; m_codeLength = value; }
    inline SendOTPMessageRequestParameters& WithCodeLength(int value) { SetCodeLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination identity to send OTP to.</p>
     */
    inline const Aws::String& GetDestinationIdentity() const { return m_destinationIdentity; }
    inline bool DestinationIdentityHasBeenSet() const { return m_destinationIdentityHasBeenSet; }
    template<typename DestinationIdentityT = Aws::String>
    void SetDestinationIdentity(DestinationIdentityT&& value) { m_destinationIdentityHasBeenSet = true; m_destinationIdentity = std::forward<DestinationIdentityT>(value); }
    template<typename DestinationIdentityT = Aws::String>
    SendOTPMessageRequestParameters& WithDestinationIdentity(DestinationIdentityT&& value) { SetDestinationIdentity(std::forward<DestinationIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique Entity ID received from DLT after entity registration is
     * approved.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    SendOTPMessageRequestParameters& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language to be used for the outgoing message body containing the OTP.</p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    SendOTPMessageRequestParameters& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origination identity used to send OTP from.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const { return m_originationIdentity; }
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }
    template<typename OriginationIdentityT = Aws::String>
    void SetOriginationIdentity(OriginationIdentityT&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::forward<OriginationIdentityT>(value); }
    template<typename OriginationIdentityT = Aws::String>
    SendOTPMessageRequestParameters& WithOriginationIdentity(OriginationIdentityT&& value) { SetOriginationIdentity(std::forward<OriginationIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Developer-specified reference identifier. Required to match during OTP
     * verification.</p>
     */
    inline const Aws::String& GetReferenceId() const { return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    template<typename ReferenceIdT = Aws::String>
    void SetReferenceId(ReferenceIdT&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::forward<ReferenceIdT>(value); }
    template<typename ReferenceIdT = Aws::String>
    SendOTPMessageRequestParameters& WithReferenceId(ReferenceIdT&& value) { SetReferenceId(std::forward<ReferenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique Template ID received from DLT after entity registration is
     * approved.</p>
     */
    inline const Aws::String& GetTemplateId() const { return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    template<typename TemplateIdT = Aws::String>
    void SetTemplateId(TemplateIdT&& value) { m_templateIdHasBeenSet = true; m_templateId = std::forward<TemplateIdT>(value); }
    template<typename TemplateIdT = Aws::String>
    SendOTPMessageRequestParameters& WithTemplateId(TemplateIdT&& value) { SetTemplateId(std::forward<TemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in minutes before the OTP is no longer valid.</p>
     */
    inline int GetValidityPeriod() const { return m_validityPeriod; }
    inline bool ValidityPeriodHasBeenSet() const { return m_validityPeriodHasBeenSet; }
    inline void SetValidityPeriod(int value) { m_validityPeriodHasBeenSet = true; m_validityPeriod = value; }
    inline SendOTPMessageRequestParameters& WithValidityPeriod(int value) { SetValidityPeriod(value); return *this;}
    ///@}
  private:

    int m_allowedAttempts{0};
    bool m_allowedAttemptsHasBeenSet = false;

    Aws::String m_brandName;
    bool m_brandNameHasBeenSet = false;

    Aws::String m_channel;
    bool m_channelHasBeenSet = false;

    int m_codeLength{0};
    bool m_codeLengthHasBeenSet = false;

    Aws::String m_destinationIdentity;
    bool m_destinationIdentityHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_originationIdentity;
    bool m_originationIdentityHasBeenSet = false;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    int m_validityPeriod{0};
    bool m_validityPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
