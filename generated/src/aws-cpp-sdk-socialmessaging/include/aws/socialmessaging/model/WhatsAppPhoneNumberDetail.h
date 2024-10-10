/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
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
namespace SocialMessaging
{
namespace Model
{

  /**
   * <p>The details of your WhatsApp phone number.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/WhatsAppPhoneNumberDetail">AWS
   * API Reference</a></p>
   */
  class WhatsAppPhoneNumberDetail
  {
  public:
    AWS_SOCIALMESSAGING_API WhatsAppPhoneNumberDetail();
    AWS_SOCIALMESSAGING_API WhatsAppPhoneNumberDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API WhatsAppPhoneNumberDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the WhatsApp phone number.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline WhatsAppPhoneNumberDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline WhatsAppPhoneNumberDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline WhatsAppPhoneNumberDetail& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number for sending WhatsApp.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }
    inline WhatsAppPhoneNumberDetail& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}
    inline WhatsAppPhoneNumberDetail& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}
    inline WhatsAppPhoneNumberDetail& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number ID. Phone number identifiers are formatted as
     * <code>phone-number-id-01234567890123456789012345678901</code>. </p>
     */
    inline const Aws::String& GetPhoneNumberId() const{ return m_phoneNumberId; }
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }
    inline void SetPhoneNumberId(const Aws::String& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = value; }
    inline void SetPhoneNumberId(Aws::String&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::move(value); }
    inline void SetPhoneNumberId(const char* value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId.assign(value); }
    inline WhatsAppPhoneNumberDetail& WithPhoneNumberId(const Aws::String& value) { SetPhoneNumberId(value); return *this;}
    inline WhatsAppPhoneNumberDetail& WithPhoneNumberId(Aws::String&& value) { SetPhoneNumberId(std::move(value)); return *this;}
    inline WhatsAppPhoneNumberDetail& WithPhoneNumberId(const char* value) { SetPhoneNumberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number ID from Meta.</p>
     */
    inline const Aws::String& GetMetaPhoneNumberId() const{ return m_metaPhoneNumberId; }
    inline bool MetaPhoneNumberIdHasBeenSet() const { return m_metaPhoneNumberIdHasBeenSet; }
    inline void SetMetaPhoneNumberId(const Aws::String& value) { m_metaPhoneNumberIdHasBeenSet = true; m_metaPhoneNumberId = value; }
    inline void SetMetaPhoneNumberId(Aws::String&& value) { m_metaPhoneNumberIdHasBeenSet = true; m_metaPhoneNumberId = std::move(value); }
    inline void SetMetaPhoneNumberId(const char* value) { m_metaPhoneNumberIdHasBeenSet = true; m_metaPhoneNumberId.assign(value); }
    inline WhatsAppPhoneNumberDetail& WithMetaPhoneNumberId(const Aws::String& value) { SetMetaPhoneNumberId(value); return *this;}
    inline WhatsAppPhoneNumberDetail& WithMetaPhoneNumberId(Aws::String&& value) { SetMetaPhoneNumberId(std::move(value)); return *this;}
    inline WhatsAppPhoneNumberDetail& WithMetaPhoneNumberId(const char* value) { SetMetaPhoneNumberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for this phone number.</p>
     */
    inline const Aws::String& GetDisplayPhoneNumberName() const{ return m_displayPhoneNumberName; }
    inline bool DisplayPhoneNumberNameHasBeenSet() const { return m_displayPhoneNumberNameHasBeenSet; }
    inline void SetDisplayPhoneNumberName(const Aws::String& value) { m_displayPhoneNumberNameHasBeenSet = true; m_displayPhoneNumberName = value; }
    inline void SetDisplayPhoneNumberName(Aws::String&& value) { m_displayPhoneNumberNameHasBeenSet = true; m_displayPhoneNumberName = std::move(value); }
    inline void SetDisplayPhoneNumberName(const char* value) { m_displayPhoneNumberNameHasBeenSet = true; m_displayPhoneNumberName.assign(value); }
    inline WhatsAppPhoneNumberDetail& WithDisplayPhoneNumberName(const Aws::String& value) { SetDisplayPhoneNumberName(value); return *this;}
    inline WhatsAppPhoneNumberDetail& WithDisplayPhoneNumberName(Aws::String&& value) { SetDisplayPhoneNumberName(std::move(value)); return *this;}
    inline WhatsAppPhoneNumberDetail& WithDisplayPhoneNumberName(const char* value) { SetDisplayPhoneNumberName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number that appears in the recipients display.</p>
     */
    inline const Aws::String& GetDisplayPhoneNumber() const{ return m_displayPhoneNumber; }
    inline bool DisplayPhoneNumberHasBeenSet() const { return m_displayPhoneNumberHasBeenSet; }
    inline void SetDisplayPhoneNumber(const Aws::String& value) { m_displayPhoneNumberHasBeenSet = true; m_displayPhoneNumber = value; }
    inline void SetDisplayPhoneNumber(Aws::String&& value) { m_displayPhoneNumberHasBeenSet = true; m_displayPhoneNumber = std::move(value); }
    inline void SetDisplayPhoneNumber(const char* value) { m_displayPhoneNumberHasBeenSet = true; m_displayPhoneNumber.assign(value); }
    inline WhatsAppPhoneNumberDetail& WithDisplayPhoneNumber(const Aws::String& value) { SetDisplayPhoneNumber(value); return *this;}
    inline WhatsAppPhoneNumberDetail& WithDisplayPhoneNumber(Aws::String&& value) { SetDisplayPhoneNumber(std::move(value)); return *this;}
    inline WhatsAppPhoneNumberDetail& WithDisplayPhoneNumber(const char* value) { SetDisplayPhoneNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quality rating of the phone number.</p>
     */
    inline const Aws::String& GetQualityRating() const{ return m_qualityRating; }
    inline bool QualityRatingHasBeenSet() const { return m_qualityRatingHasBeenSet; }
    inline void SetQualityRating(const Aws::String& value) { m_qualityRatingHasBeenSet = true; m_qualityRating = value; }
    inline void SetQualityRating(Aws::String&& value) { m_qualityRatingHasBeenSet = true; m_qualityRating = std::move(value); }
    inline void SetQualityRating(const char* value) { m_qualityRatingHasBeenSet = true; m_qualityRating.assign(value); }
    inline WhatsAppPhoneNumberDetail& WithQualityRating(const Aws::String& value) { SetQualityRating(value); return *this;}
    inline WhatsAppPhoneNumberDetail& WithQualityRating(Aws::String&& value) { SetQualityRating(std::move(value)); return *this;}
    inline WhatsAppPhoneNumberDetail& WithQualityRating(const char* value) { SetQualityRating(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;

    Aws::String m_metaPhoneNumberId;
    bool m_metaPhoneNumberIdHasBeenSet = false;

    Aws::String m_displayPhoneNumberName;
    bool m_displayPhoneNumberNameHasBeenSet = false;

    Aws::String m_displayPhoneNumber;
    bool m_displayPhoneNumberHasBeenSet = false;

    Aws::String m_qualityRating;
    bool m_qualityRatingHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
