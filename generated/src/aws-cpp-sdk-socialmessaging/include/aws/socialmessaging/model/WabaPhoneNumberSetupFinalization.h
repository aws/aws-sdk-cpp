/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/model/Tag.h>
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
   * <p>The registration details for a linked phone number.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/WabaPhoneNumberSetupFinalization">AWS
   * API Reference</a></p>
   */
  class WabaPhoneNumberSetupFinalization
  {
  public:
    AWS_SOCIALMESSAGING_API WabaPhoneNumberSetupFinalization();
    AWS_SOCIALMESSAGING_API WabaPhoneNumberSetupFinalization(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API WabaPhoneNumberSetupFinalization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the originating phone number associated with the
     * media. Phone number identifiers are formatted as
     * <code>phone-number-id-01234567890123456789012345678901</code>. Use <a
     * href="https://docs.aws.amazon.com/social-messaging/latest/APIReference/API_GetLinkedWhatsAppBusinessAccountPhoneNumber.html">GetLinkedWhatsAppBusinessAccount</a>
     * to find a phone number's id.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline WabaPhoneNumberSetupFinalization& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline WabaPhoneNumberSetupFinalization& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline WabaPhoneNumberSetupFinalization& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PIN to use for two-step verification. To reset your PIN follow the
     * directions in <a
     * href="https://developers.facebook.com/docs/whatsapp/cloud-api/reference/two-step-verification/#updating-pin">Updating
     * PIN</a> in the <i>WhatsApp Business Platform Cloud API Reference</i>.</p>
     */
    inline const Aws::String& GetTwoFactorPin() const{ return m_twoFactorPin; }
    inline bool TwoFactorPinHasBeenSet() const { return m_twoFactorPinHasBeenSet; }
    inline void SetTwoFactorPin(const Aws::String& value) { m_twoFactorPinHasBeenSet = true; m_twoFactorPin = value; }
    inline void SetTwoFactorPin(Aws::String&& value) { m_twoFactorPinHasBeenSet = true; m_twoFactorPin = std::move(value); }
    inline void SetTwoFactorPin(const char* value) { m_twoFactorPinHasBeenSet = true; m_twoFactorPin.assign(value); }
    inline WabaPhoneNumberSetupFinalization& WithTwoFactorPin(const Aws::String& value) { SetTwoFactorPin(value); return *this;}
    inline WabaPhoneNumberSetupFinalization& WithTwoFactorPin(Aws::String&& value) { SetTwoFactorPin(std::move(value)); return *this;}
    inline WabaPhoneNumberSetupFinalization& WithTwoFactorPin(const char* value) { SetTwoFactorPin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two letter ISO region for the location of where Meta will store data.</p>
     * <p class="title"> <b>Asia–Pacific (APAC)</b> </p> <ul> <li> <p>Australia
     * <b>AU</b> </p> </li> <li> <p>Indonesia <b>ID</b> </p> </li> <li> <p>India
     * <b>IN</b> </p> </li> <li> <p>Japan <b>JP</b> </p> </li> <li> <p>Singapore
     * <b>SG</b> </p> </li> <li> <p>South Korea <b>KR</b> </p> </li> </ul> <p
     * class="title"> <b>Europe</b> </p> <ul> <li> <p>Germany <b>DE</b> </p> </li> <li>
     * <p>Switzerland <b>CH</b> </p> </li> <li> <p>United Kingdom <b>GB</b> </p> </li>
     * </ul> <p class="title"> <b>Latin America (LATAM)</b> </p> <ul> <li> <p>Brazil
     * <b>BR</b> </p> </li> </ul> <p class="title"> <b>Middle East and Africa (MEA)</b>
     * </p> <ul> <li> <p>Bahrain <b>BH</b> </p> </li> <li> <p>South Africa <b>ZA</b>
     * </p> </li> <li> <p>United Arab Emirates <b>AE</b> </p> </li> </ul> <p
     * class="title"> <b>North America (NORAM)</b> </p> <ul> <li> <p>Canada <b>CA</b>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetDataLocalizationRegion() const{ return m_dataLocalizationRegion; }
    inline bool DataLocalizationRegionHasBeenSet() const { return m_dataLocalizationRegionHasBeenSet; }
    inline void SetDataLocalizationRegion(const Aws::String& value) { m_dataLocalizationRegionHasBeenSet = true; m_dataLocalizationRegion = value; }
    inline void SetDataLocalizationRegion(Aws::String&& value) { m_dataLocalizationRegionHasBeenSet = true; m_dataLocalizationRegion = std::move(value); }
    inline void SetDataLocalizationRegion(const char* value) { m_dataLocalizationRegionHasBeenSet = true; m_dataLocalizationRegion.assign(value); }
    inline WabaPhoneNumberSetupFinalization& WithDataLocalizationRegion(const Aws::String& value) { SetDataLocalizationRegion(value); return *this;}
    inline WabaPhoneNumberSetupFinalization& WithDataLocalizationRegion(Aws::String&& value) { SetDataLocalizationRegion(std::move(value)); return *this;}
    inline WabaPhoneNumberSetupFinalization& WithDataLocalizationRegion(const char* value) { SetDataLocalizationRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key and value pair tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline WabaPhoneNumberSetupFinalization& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline WabaPhoneNumberSetupFinalization& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline WabaPhoneNumberSetupFinalization& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline WabaPhoneNumberSetupFinalization& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_twoFactorPin;
    bool m_twoFactorPinHasBeenSet = false;

    Aws::String m_dataLocalizationRegion;
    bool m_dataLocalizationRegionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
