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
    AWS_SOCIALMESSAGING_API WabaPhoneNumberSetupFinalization() = default;
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
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    WabaPhoneNumberSetupFinalization& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PIN to use for two-step verification. To reset your PIN follow the
     * directions in <a
     * href="https://developers.facebook.com/docs/whatsapp/cloud-api/reference/two-step-verification/#updating-pin">Updating
     * PIN</a> in the <i>WhatsApp Business Platform Cloud API Reference</i>.</p>
     */
    inline const Aws::String& GetTwoFactorPin() const { return m_twoFactorPin; }
    inline bool TwoFactorPinHasBeenSet() const { return m_twoFactorPinHasBeenSet; }
    template<typename TwoFactorPinT = Aws::String>
    void SetTwoFactorPin(TwoFactorPinT&& value) { m_twoFactorPinHasBeenSet = true; m_twoFactorPin = std::forward<TwoFactorPinT>(value); }
    template<typename TwoFactorPinT = Aws::String>
    WabaPhoneNumberSetupFinalization& WithTwoFactorPin(TwoFactorPinT&& value) { SetTwoFactorPin(std::forward<TwoFactorPinT>(value)); return *this;}
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
    inline const Aws::String& GetDataLocalizationRegion() const { return m_dataLocalizationRegion; }
    inline bool DataLocalizationRegionHasBeenSet() const { return m_dataLocalizationRegionHasBeenSet; }
    template<typename DataLocalizationRegionT = Aws::String>
    void SetDataLocalizationRegion(DataLocalizationRegionT&& value) { m_dataLocalizationRegionHasBeenSet = true; m_dataLocalizationRegion = std::forward<DataLocalizationRegionT>(value); }
    template<typename DataLocalizationRegionT = Aws::String>
    WabaPhoneNumberSetupFinalization& WithDataLocalizationRegion(DataLocalizationRegionT&& value) { SetDataLocalizationRegion(std::forward<DataLocalizationRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key and value pair tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    WabaPhoneNumberSetupFinalization& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    WabaPhoneNumberSetupFinalization& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
