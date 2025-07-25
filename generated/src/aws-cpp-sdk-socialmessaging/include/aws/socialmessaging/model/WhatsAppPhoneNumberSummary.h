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
   * <p>The details of a linked phone number.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/WhatsAppPhoneNumberSummary">AWS
   * API Reference</a></p>
   */
  class WhatsAppPhoneNumberSummary
  {
  public:
    AWS_SOCIALMESSAGING_API WhatsAppPhoneNumberSummary() = default;
    AWS_SOCIALMESSAGING_API WhatsAppPhoneNumberSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API WhatsAppPhoneNumberSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full Amazon Resource Name (ARN) for the phone number.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    WhatsAppPhoneNumberSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number associated with the Linked WhatsApp Business Account.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    WhatsAppPhoneNumberSummary& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number ID. Phone number identifiers are formatted as
     * <code>phone-number-id-01234567890123456789012345678901</code>. </p>
     */
    inline const Aws::String& GetPhoneNumberId() const { return m_phoneNumberId; }
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }
    template<typename PhoneNumberIdT = Aws::String>
    void SetPhoneNumberId(PhoneNumberIdT&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::forward<PhoneNumberIdT>(value); }
    template<typename PhoneNumberIdT = Aws::String>
    WhatsAppPhoneNumberSummary& WithPhoneNumberId(PhoneNumberIdT&& value) { SetPhoneNumberId(std::forward<PhoneNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number ID from Meta.</p>
     */
    inline const Aws::String& GetMetaPhoneNumberId() const { return m_metaPhoneNumberId; }
    inline bool MetaPhoneNumberIdHasBeenSet() const { return m_metaPhoneNumberIdHasBeenSet; }
    template<typename MetaPhoneNumberIdT = Aws::String>
    void SetMetaPhoneNumberId(MetaPhoneNumberIdT&& value) { m_metaPhoneNumberIdHasBeenSet = true; m_metaPhoneNumberId = std::forward<MetaPhoneNumberIdT>(value); }
    template<typename MetaPhoneNumberIdT = Aws::String>
    WhatsAppPhoneNumberSummary& WithMetaPhoneNumberId(MetaPhoneNumberIdT&& value) { SetMetaPhoneNumberId(std::forward<MetaPhoneNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for this phone number.</p>
     */
    inline const Aws::String& GetDisplayPhoneNumberName() const { return m_displayPhoneNumberName; }
    inline bool DisplayPhoneNumberNameHasBeenSet() const { return m_displayPhoneNumberNameHasBeenSet; }
    template<typename DisplayPhoneNumberNameT = Aws::String>
    void SetDisplayPhoneNumberName(DisplayPhoneNumberNameT&& value) { m_displayPhoneNumberNameHasBeenSet = true; m_displayPhoneNumberName = std::forward<DisplayPhoneNumberNameT>(value); }
    template<typename DisplayPhoneNumberNameT = Aws::String>
    WhatsAppPhoneNumberSummary& WithDisplayPhoneNumberName(DisplayPhoneNumberNameT&& value) { SetDisplayPhoneNumberName(std::forward<DisplayPhoneNumberNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number that appears in the recipients display.</p>
     */
    inline const Aws::String& GetDisplayPhoneNumber() const { return m_displayPhoneNumber; }
    inline bool DisplayPhoneNumberHasBeenSet() const { return m_displayPhoneNumberHasBeenSet; }
    template<typename DisplayPhoneNumberT = Aws::String>
    void SetDisplayPhoneNumber(DisplayPhoneNumberT&& value) { m_displayPhoneNumberHasBeenSet = true; m_displayPhoneNumber = std::forward<DisplayPhoneNumberT>(value); }
    template<typename DisplayPhoneNumberT = Aws::String>
    WhatsAppPhoneNumberSummary& WithDisplayPhoneNumber(DisplayPhoneNumberT&& value) { SetDisplayPhoneNumber(std::forward<DisplayPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quality rating of the phone number. This is from Meta.</p>
     */
    inline const Aws::String& GetQualityRating() const { return m_qualityRating; }
    inline bool QualityRatingHasBeenSet() const { return m_qualityRatingHasBeenSet; }
    template<typename QualityRatingT = Aws::String>
    void SetQualityRating(QualityRatingT&& value) { m_qualityRatingHasBeenSet = true; m_qualityRating = std::forward<QualityRatingT>(value); }
    template<typename QualityRatingT = Aws::String>
    WhatsAppPhoneNumberSummary& WithQualityRating(QualityRatingT&& value) { SetQualityRating(std::forward<QualityRatingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The geographic region where the WhatsApp phone number's data is stored and
     * processed.</p>
     */
    inline const Aws::String& GetDataLocalizationRegion() const { return m_dataLocalizationRegion; }
    inline bool DataLocalizationRegionHasBeenSet() const { return m_dataLocalizationRegionHasBeenSet; }
    template<typename DataLocalizationRegionT = Aws::String>
    void SetDataLocalizationRegion(DataLocalizationRegionT&& value) { m_dataLocalizationRegionHasBeenSet = true; m_dataLocalizationRegion = std::forward<DataLocalizationRegionT>(value); }
    template<typename DataLocalizationRegionT = Aws::String>
    WhatsAppPhoneNumberSummary& WithDataLocalizationRegion(DataLocalizationRegionT&& value) { SetDataLocalizationRegion(std::forward<DataLocalizationRegionT>(value)); return *this;}
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

    Aws::String m_dataLocalizationRegion;
    bool m_dataLocalizationRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
