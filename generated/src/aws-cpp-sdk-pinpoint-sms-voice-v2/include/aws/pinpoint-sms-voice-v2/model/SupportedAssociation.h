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
    AWS_PINPOINTSMSVOICEV2_API SupportedAssociation();
    AWS_PINPOINTSMSVOICEV2_API SupportedAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API SupportedAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the behavior of when an origination identity and registration can be
     * associated with each other.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Defines the behavior of when an origination identity and registration can be
     * associated with each other.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Defines the behavior of when an origination identity and registration can be
     * associated with each other.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Defines the behavior of when an origination identity and registration can be
     * associated with each other.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Defines the behavior of when an origination identity and registration can be
     * associated with each other.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Defines the behavior of when an origination identity and registration can be
     * associated with each other.</p>
     */
    inline SupportedAssociation& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Defines the behavior of when an origination identity and registration can be
     * associated with each other.</p>
     */
    inline SupportedAssociation& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Defines the behavior of when an origination identity and registration can be
     * associated with each other.</p>
     */
    inline SupportedAssociation& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline const Aws::String& GetIsoCountryCode() const{ return m_isoCountryCode; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline void SetIsoCountryCode(const Aws::String& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = value; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline void SetIsoCountryCode(Aws::String&& value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode = std::move(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline void SetIsoCountryCode(const char* value) { m_isoCountryCodeHasBeenSet = true; m_isoCountryCode.assign(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline SupportedAssociation& WithIsoCountryCode(const Aws::String& value) { SetIsoCountryCode(value); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline SupportedAssociation& WithIsoCountryCode(Aws::String&& value) { SetIsoCountryCode(std::move(value)); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
     * region.</p>
     */
    inline SupportedAssociation& WithIsoCountryCode(const char* value) { SetIsoCountryCode(value); return *this;}


    /**
     * <p>The association behavior.</p> <ul> <li> <p>
     * <code>ASSOCIATE_BEFORE_SUBMIT</code> The origination identity has to be supplied
     * when creating a registration.</p> </li> <li> <p>
     * <code>ASSOCIATE_ON_APPROVAL</code> This applies to all short code registrations.
     * The short code will be automatically provisioned once the registration is
     * approved.</p> </li> <li> <p> <code>ASSOCIATE_AFTER_COMPLETE</code> This applies
     * to phone number registrations when you must complete a registration first, then
     * associate one or more phone numbers later. For example 10DLC campaigns and long
     * codes. </p> </li> </ul>
     */
    inline const RegistrationAssociationBehavior& GetAssociationBehavior() const{ return m_associationBehavior; }

    /**
     * <p>The association behavior.</p> <ul> <li> <p>
     * <code>ASSOCIATE_BEFORE_SUBMIT</code> The origination identity has to be supplied
     * when creating a registration.</p> </li> <li> <p>
     * <code>ASSOCIATE_ON_APPROVAL</code> This applies to all short code registrations.
     * The short code will be automatically provisioned once the registration is
     * approved.</p> </li> <li> <p> <code>ASSOCIATE_AFTER_COMPLETE</code> This applies
     * to phone number registrations when you must complete a registration first, then
     * associate one or more phone numbers later. For example 10DLC campaigns and long
     * codes. </p> </li> </ul>
     */
    inline bool AssociationBehaviorHasBeenSet() const { return m_associationBehaviorHasBeenSet; }

    /**
     * <p>The association behavior.</p> <ul> <li> <p>
     * <code>ASSOCIATE_BEFORE_SUBMIT</code> The origination identity has to be supplied
     * when creating a registration.</p> </li> <li> <p>
     * <code>ASSOCIATE_ON_APPROVAL</code> This applies to all short code registrations.
     * The short code will be automatically provisioned once the registration is
     * approved.</p> </li> <li> <p> <code>ASSOCIATE_AFTER_COMPLETE</code> This applies
     * to phone number registrations when you must complete a registration first, then
     * associate one or more phone numbers later. For example 10DLC campaigns and long
     * codes. </p> </li> </ul>
     */
    inline void SetAssociationBehavior(const RegistrationAssociationBehavior& value) { m_associationBehaviorHasBeenSet = true; m_associationBehavior = value; }

    /**
     * <p>The association behavior.</p> <ul> <li> <p>
     * <code>ASSOCIATE_BEFORE_SUBMIT</code> The origination identity has to be supplied
     * when creating a registration.</p> </li> <li> <p>
     * <code>ASSOCIATE_ON_APPROVAL</code> This applies to all short code registrations.
     * The short code will be automatically provisioned once the registration is
     * approved.</p> </li> <li> <p> <code>ASSOCIATE_AFTER_COMPLETE</code> This applies
     * to phone number registrations when you must complete a registration first, then
     * associate one or more phone numbers later. For example 10DLC campaigns and long
     * codes. </p> </li> </ul>
     */
    inline void SetAssociationBehavior(RegistrationAssociationBehavior&& value) { m_associationBehaviorHasBeenSet = true; m_associationBehavior = std::move(value); }

    /**
     * <p>The association behavior.</p> <ul> <li> <p>
     * <code>ASSOCIATE_BEFORE_SUBMIT</code> The origination identity has to be supplied
     * when creating a registration.</p> </li> <li> <p>
     * <code>ASSOCIATE_ON_APPROVAL</code> This applies to all short code registrations.
     * The short code will be automatically provisioned once the registration is
     * approved.</p> </li> <li> <p> <code>ASSOCIATE_AFTER_COMPLETE</code> This applies
     * to phone number registrations when you must complete a registration first, then
     * associate one or more phone numbers later. For example 10DLC campaigns and long
     * codes. </p> </li> </ul>
     */
    inline SupportedAssociation& WithAssociationBehavior(const RegistrationAssociationBehavior& value) { SetAssociationBehavior(value); return *this;}

    /**
     * <p>The association behavior.</p> <ul> <li> <p>
     * <code>ASSOCIATE_BEFORE_SUBMIT</code> The origination identity has to be supplied
     * when creating a registration.</p> </li> <li> <p>
     * <code>ASSOCIATE_ON_APPROVAL</code> This applies to all short code registrations.
     * The short code will be automatically provisioned once the registration is
     * approved.</p> </li> <li> <p> <code>ASSOCIATE_AFTER_COMPLETE</code> This applies
     * to phone number registrations when you must complete a registration first, then
     * associate one or more phone numbers later. For example 10DLC campaigns and long
     * codes. </p> </li> </ul>
     */
    inline SupportedAssociation& WithAssociationBehavior(RegistrationAssociationBehavior&& value) { SetAssociationBehavior(std::move(value)); return *this;}


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
    inline const RegistrationDisassociationBehavior& GetDisassociationBehavior() const{ return m_disassociationBehavior; }

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
    inline bool DisassociationBehaviorHasBeenSet() const { return m_disassociationBehaviorHasBeenSet; }

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
    inline void SetDisassociationBehavior(const RegistrationDisassociationBehavior& value) { m_disassociationBehaviorHasBeenSet = true; m_disassociationBehavior = value; }

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
    inline void SetDisassociationBehavior(RegistrationDisassociationBehavior&& value) { m_disassociationBehaviorHasBeenSet = true; m_disassociationBehavior = std::move(value); }

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
    inline SupportedAssociation& WithDisassociationBehavior(const RegistrationDisassociationBehavior& value) { SetDisassociationBehavior(value); return *this;}

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
    inline SupportedAssociation& WithDisassociationBehavior(RegistrationDisassociationBehavior&& value) { SetDisassociationBehavior(std::move(value)); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_isoCountryCode;
    bool m_isoCountryCodeHasBeenSet = false;

    RegistrationAssociationBehavior m_associationBehavior;
    bool m_associationBehaviorHasBeenSet = false;

    RegistrationDisassociationBehavior m_disassociationBehavior;
    bool m_disassociationBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
