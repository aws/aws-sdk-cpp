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
    AWS_PINPOINT_API SendOTPMessageRequestParameters();
    AWS_PINPOINT_API SendOTPMessageRequestParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SendOTPMessageRequestParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attempts allowed to validate an OTP.</p>
     */
    inline int GetAllowedAttempts() const{ return m_allowedAttempts; }

    /**
     * <p>The attempts allowed to validate an OTP.</p>
     */
    inline bool AllowedAttemptsHasBeenSet() const { return m_allowedAttemptsHasBeenSet; }

    /**
     * <p>The attempts allowed to validate an OTP.</p>
     */
    inline void SetAllowedAttempts(int value) { m_allowedAttemptsHasBeenSet = true; m_allowedAttempts = value; }

    /**
     * <p>The attempts allowed to validate an OTP.</p>
     */
    inline SendOTPMessageRequestParameters& WithAllowedAttempts(int value) { SetAllowedAttempts(value); return *this;}


    /**
     * <p>The brand name that will be substituted into the OTP message body. Should be
     * owned by calling AWS account.</p>
     */
    inline const Aws::String& GetBrandName() const{ return m_brandName; }

    /**
     * <p>The brand name that will be substituted into the OTP message body. Should be
     * owned by calling AWS account.</p>
     */
    inline bool BrandNameHasBeenSet() const { return m_brandNameHasBeenSet; }

    /**
     * <p>The brand name that will be substituted into the OTP message body. Should be
     * owned by calling AWS account.</p>
     */
    inline void SetBrandName(const Aws::String& value) { m_brandNameHasBeenSet = true; m_brandName = value; }

    /**
     * <p>The brand name that will be substituted into the OTP message body. Should be
     * owned by calling AWS account.</p>
     */
    inline void SetBrandName(Aws::String&& value) { m_brandNameHasBeenSet = true; m_brandName = std::move(value); }

    /**
     * <p>The brand name that will be substituted into the OTP message body. Should be
     * owned by calling AWS account.</p>
     */
    inline void SetBrandName(const char* value) { m_brandNameHasBeenSet = true; m_brandName.assign(value); }

    /**
     * <p>The brand name that will be substituted into the OTP message body. Should be
     * owned by calling AWS account.</p>
     */
    inline SendOTPMessageRequestParameters& WithBrandName(const Aws::String& value) { SetBrandName(value); return *this;}

    /**
     * <p>The brand name that will be substituted into the OTP message body. Should be
     * owned by calling AWS account.</p>
     */
    inline SendOTPMessageRequestParameters& WithBrandName(Aws::String&& value) { SetBrandName(std::move(value)); return *this;}

    /**
     * <p>The brand name that will be substituted into the OTP message body. Should be
     * owned by calling AWS account.</p>
     */
    inline SendOTPMessageRequestParameters& WithBrandName(const char* value) { SetBrandName(value); return *this;}


    /**
     * <p>Channel type for the OTP message. Supported values: [SMS].</p>
     */
    inline const Aws::String& GetChannel() const{ return m_channel; }

    /**
     * <p>Channel type for the OTP message. Supported values: [SMS].</p>
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>Channel type for the OTP message. Supported values: [SMS].</p>
     */
    inline void SetChannel(const Aws::String& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>Channel type for the OTP message. Supported values: [SMS].</p>
     */
    inline void SetChannel(Aws::String&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>Channel type for the OTP message. Supported values: [SMS].</p>
     */
    inline void SetChannel(const char* value) { m_channelHasBeenSet = true; m_channel.assign(value); }

    /**
     * <p>Channel type for the OTP message. Supported values: [SMS].</p>
     */
    inline SendOTPMessageRequestParameters& WithChannel(const Aws::String& value) { SetChannel(value); return *this;}

    /**
     * <p>Channel type for the OTP message. Supported values: [SMS].</p>
     */
    inline SendOTPMessageRequestParameters& WithChannel(Aws::String&& value) { SetChannel(std::move(value)); return *this;}

    /**
     * <p>Channel type for the OTP message. Supported values: [SMS].</p>
     */
    inline SendOTPMessageRequestParameters& WithChannel(const char* value) { SetChannel(value); return *this;}


    /**
     * <p>The number of characters in the generated OTP.</p>
     */
    inline int GetCodeLength() const{ return m_codeLength; }

    /**
     * <p>The number of characters in the generated OTP.</p>
     */
    inline bool CodeLengthHasBeenSet() const { return m_codeLengthHasBeenSet; }

    /**
     * <p>The number of characters in the generated OTP.</p>
     */
    inline void SetCodeLength(int value) { m_codeLengthHasBeenSet = true; m_codeLength = value; }

    /**
     * <p>The number of characters in the generated OTP.</p>
     */
    inline SendOTPMessageRequestParameters& WithCodeLength(int value) { SetCodeLength(value); return *this;}


    /**
     * <p>The destination identity to send OTP to.</p>
     */
    inline const Aws::String& GetDestinationIdentity() const{ return m_destinationIdentity; }

    /**
     * <p>The destination identity to send OTP to.</p>
     */
    inline bool DestinationIdentityHasBeenSet() const { return m_destinationIdentityHasBeenSet; }

    /**
     * <p>The destination identity to send OTP to.</p>
     */
    inline void SetDestinationIdentity(const Aws::String& value) { m_destinationIdentityHasBeenSet = true; m_destinationIdentity = value; }

    /**
     * <p>The destination identity to send OTP to.</p>
     */
    inline void SetDestinationIdentity(Aws::String&& value) { m_destinationIdentityHasBeenSet = true; m_destinationIdentity = std::move(value); }

    /**
     * <p>The destination identity to send OTP to.</p>
     */
    inline void SetDestinationIdentity(const char* value) { m_destinationIdentityHasBeenSet = true; m_destinationIdentity.assign(value); }

    /**
     * <p>The destination identity to send OTP to.</p>
     */
    inline SendOTPMessageRequestParameters& WithDestinationIdentity(const Aws::String& value) { SetDestinationIdentity(value); return *this;}

    /**
     * <p>The destination identity to send OTP to.</p>
     */
    inline SendOTPMessageRequestParameters& WithDestinationIdentity(Aws::String&& value) { SetDestinationIdentity(std::move(value)); return *this;}

    /**
     * <p>The destination identity to send OTP to.</p>
     */
    inline SendOTPMessageRequestParameters& WithDestinationIdentity(const char* value) { SetDestinationIdentity(value); return *this;}


    /**
     * <p>A unique Entity ID received from DLT after entity registration is
     * approved.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>A unique Entity ID received from DLT after entity registration is
     * approved.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>A unique Entity ID received from DLT after entity registration is
     * approved.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>A unique Entity ID received from DLT after entity registration is
     * approved.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>A unique Entity ID received from DLT after entity registration is
     * approved.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>A unique Entity ID received from DLT after entity registration is
     * approved.</p>
     */
    inline SendOTPMessageRequestParameters& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>A unique Entity ID received from DLT after entity registration is
     * approved.</p>
     */
    inline SendOTPMessageRequestParameters& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>A unique Entity ID received from DLT after entity registration is
     * approved.</p>
     */
    inline SendOTPMessageRequestParameters& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The language to be used for the outgoing message body containing the OTP.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The language to be used for the outgoing message body containing the OTP.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The language to be used for the outgoing message body containing the OTP.</p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The language to be used for the outgoing message body containing the OTP.</p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The language to be used for the outgoing message body containing the OTP.</p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The language to be used for the outgoing message body containing the OTP.</p>
     */
    inline SendOTPMessageRequestParameters& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The language to be used for the outgoing message body containing the OTP.</p>
     */
    inline SendOTPMessageRequestParameters& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The language to be used for the outgoing message body containing the OTP.</p>
     */
    inline SendOTPMessageRequestParameters& WithLanguage(const char* value) { SetLanguage(value); return *this;}


    /**
     * <p>The origination identity used to send OTP from.</p>
     */
    inline const Aws::String& GetOriginationIdentity() const{ return m_originationIdentity; }

    /**
     * <p>The origination identity used to send OTP from.</p>
     */
    inline bool OriginationIdentityHasBeenSet() const { return m_originationIdentityHasBeenSet; }

    /**
     * <p>The origination identity used to send OTP from.</p>
     */
    inline void SetOriginationIdentity(const Aws::String& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = value; }

    /**
     * <p>The origination identity used to send OTP from.</p>
     */
    inline void SetOriginationIdentity(Aws::String&& value) { m_originationIdentityHasBeenSet = true; m_originationIdentity = std::move(value); }

    /**
     * <p>The origination identity used to send OTP from.</p>
     */
    inline void SetOriginationIdentity(const char* value) { m_originationIdentityHasBeenSet = true; m_originationIdentity.assign(value); }

    /**
     * <p>The origination identity used to send OTP from.</p>
     */
    inline SendOTPMessageRequestParameters& WithOriginationIdentity(const Aws::String& value) { SetOriginationIdentity(value); return *this;}

    /**
     * <p>The origination identity used to send OTP from.</p>
     */
    inline SendOTPMessageRequestParameters& WithOriginationIdentity(Aws::String&& value) { SetOriginationIdentity(std::move(value)); return *this;}

    /**
     * <p>The origination identity used to send OTP from.</p>
     */
    inline SendOTPMessageRequestParameters& WithOriginationIdentity(const char* value) { SetOriginationIdentity(value); return *this;}


    /**
     * <p>Developer-specified reference identifier. Required to match during OTP
     * verification.</p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }

    /**
     * <p>Developer-specified reference identifier. Required to match during OTP
     * verification.</p>
     */
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }

    /**
     * <p>Developer-specified reference identifier. Required to match during OTP
     * verification.</p>
     */
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }

    /**
     * <p>Developer-specified reference identifier. Required to match during OTP
     * verification.</p>
     */
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::move(value); }

    /**
     * <p>Developer-specified reference identifier. Required to match during OTP
     * verification.</p>
     */
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }

    /**
     * <p>Developer-specified reference identifier. Required to match during OTP
     * verification.</p>
     */
    inline SendOTPMessageRequestParameters& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}

    /**
     * <p>Developer-specified reference identifier. Required to match during OTP
     * verification.</p>
     */
    inline SendOTPMessageRequestParameters& WithReferenceId(Aws::String&& value) { SetReferenceId(std::move(value)); return *this;}

    /**
     * <p>Developer-specified reference identifier. Required to match during OTP
     * verification.</p>
     */
    inline SendOTPMessageRequestParameters& WithReferenceId(const char* value) { SetReferenceId(value); return *this;}


    /**
     * <p>A unique Template ID received from DLT after entity registration is
     * approved.</p>
     */
    inline const Aws::String& GetTemplateId() const{ return m_templateId; }

    /**
     * <p>A unique Template ID received from DLT after entity registration is
     * approved.</p>
     */
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }

    /**
     * <p>A unique Template ID received from DLT after entity registration is
     * approved.</p>
     */
    inline void SetTemplateId(const Aws::String& value) { m_templateIdHasBeenSet = true; m_templateId = value; }

    /**
     * <p>A unique Template ID received from DLT after entity registration is
     * approved.</p>
     */
    inline void SetTemplateId(Aws::String&& value) { m_templateIdHasBeenSet = true; m_templateId = std::move(value); }

    /**
     * <p>A unique Template ID received from DLT after entity registration is
     * approved.</p>
     */
    inline void SetTemplateId(const char* value) { m_templateIdHasBeenSet = true; m_templateId.assign(value); }

    /**
     * <p>A unique Template ID received from DLT after entity registration is
     * approved.</p>
     */
    inline SendOTPMessageRequestParameters& WithTemplateId(const Aws::String& value) { SetTemplateId(value); return *this;}

    /**
     * <p>A unique Template ID received from DLT after entity registration is
     * approved.</p>
     */
    inline SendOTPMessageRequestParameters& WithTemplateId(Aws::String&& value) { SetTemplateId(std::move(value)); return *this;}

    /**
     * <p>A unique Template ID received from DLT after entity registration is
     * approved.</p>
     */
    inline SendOTPMessageRequestParameters& WithTemplateId(const char* value) { SetTemplateId(value); return *this;}


    /**
     * <p>The time in minutes before the OTP is no longer valid.</p>
     */
    inline int GetValidityPeriod() const{ return m_validityPeriod; }

    /**
     * <p>The time in minutes before the OTP is no longer valid.</p>
     */
    inline bool ValidityPeriodHasBeenSet() const { return m_validityPeriodHasBeenSet; }

    /**
     * <p>The time in minutes before the OTP is no longer valid.</p>
     */
    inline void SetValidityPeriod(int value) { m_validityPeriodHasBeenSet = true; m_validityPeriod = value; }

    /**
     * <p>The time in minutes before the OTP is no longer valid.</p>
     */
    inline SendOTPMessageRequestParameters& WithValidityPeriod(int value) { SetValidityPeriod(value); return *this;}

  private:

    int m_allowedAttempts;
    bool m_allowedAttemptsHasBeenSet = false;

    Aws::String m_brandName;
    bool m_brandNameHasBeenSet = false;

    Aws::String m_channel;
    bool m_channelHasBeenSet = false;

    int m_codeLength;
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

    int m_validityPeriod;
    bool m_validityPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
