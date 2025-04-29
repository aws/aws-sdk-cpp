/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationAssociationBehavior.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationDisassociationBehavior.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>The processing rules for when a registration can be associated with an
   * origination identity and disassociated from an origination
   * identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/SupportedAssociation">AWS
   * API Reference</a></p>
   */
  class SupportedAssociation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SupportedAssociation() = default;
    AWS_PINPOINTSMSVOICEV2_API SupportedAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API SupportedAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the behavior of when an origination identity and registration can be
     * associated with each other.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    SupportedAssociation& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const { return m_isoCountryCode; }
    inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }
    template<typename IsoCountryCodeT = Aws::String>
    void SetIsoCountryCode(IsoCountryCodeT&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::forward<IsoCountryCodeT>(value); }
    template<typename IsoCountryCodeT = Aws::String>
    SupportedAssociation& WithIsoCountryCode(IsoCountryCodeT&& value) { SetIsoCountryCode(std::forward<IsoCountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association behavior.</p> <ul> <li> <p>
     * <code>ASSOCIATE_BEFORE_SUBMIT</code> The origination identity has to be supplied
     * when creating a registration.</p> </li> <li> <p>
     * <code>ASSOCIATE_ON_APPROVAL</code> This applies to all sender ID registrations.
     * The sender ID will be automatically provisioned once the registration is
     * approved.</p> </li> <li> <p> <code>ASSOCIATE_AFTER_COMPLETE</code> This applies
     * to phone number registrations when you must complete a registration first, then
     * associate one or more phone numbers later. For example 10DLC campaigns and long
     * codes. </p> </li> </ul>
     */
    inline RegistrationAssociationBehavior GetAssociationBehavior() const { return m_associationBehavior; }
    inline bool AssociationBehaviorHasBeenSet() const { return m_associationBehaviorHasBeenSet; }
    inline void SetAssociationBehavior(RegistrationAssociationBehavior value) { m_associationBehaviorHasBeenSet = true; m_associationBehavior = value; }
    inline SupportedAssociation& WithAssociationBehavior(RegistrationAssociationBehavior value) { SetAssociationBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disassociation behavior.</p> <ul> <li> <p>
     * <code>DISASSOCIATE_ALL_CLOSES_REGISTRATION</code> All origination identities
     * must be disassociated from the registration before the registration can be
     * closed.</p> </li> <li> <p>
     * <code>DISASSOCIATE_ALL_ALLOWS_DELETE_REGISTRATION</code> All origination
     * identities must be disassociated from the registration before the registration
     * can be deleted.</p> </li> <li> <p>
     * <code>DELETE_REGISTRATION_DISASSOCIATES</code> The registration can be deleted
     * and all origination identities will be disasscoiated.</p> </li> </ul>
     */
    inline RegistrationDisassociationBehavior GetDisassociationBehavior() const { return m_disassociationBehavior; }
    inline bool DisassociationBehaviorHasBeenSet() const { return m_disassociationBehaviorHasBeenSet; }
    inline void SetDisassociationBehavior(RegistrationDisassociationBehavior value) { m_disassociationBehaviorHasBeenSet = true; m_disassociationBehavior = value; }
    inline SupportedAssociation& WithDisassociationBehavior(RegistrationDisassociationBehavior value) { SetDisassociationBehavior(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;

    RegistrationAssociationBehavior m_associationBehavior{RegistrationAssociationBehavior::NOT_SET};
    bool m_associationBehaviorHasBeenSet = false;

    RegistrationDisassociationBehavior m_disassociationBehavior{RegistrationDisassociationBehavior::NOT_SET};
    bool m_disassociationBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
