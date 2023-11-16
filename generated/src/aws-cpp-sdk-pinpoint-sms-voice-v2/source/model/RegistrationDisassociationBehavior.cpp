/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationDisassociationBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointSMSVoiceV2
  {
    namespace Model
    {
      namespace RegistrationDisassociationBehaviorMapper
      {

        static const int DISASSOCIATE_ALL_CLOSES_REGISTRATION_HASH = HashingUtils::HashString("DISASSOCIATE_ALL_CLOSES_REGISTRATION");
        static const int DISASSOCIATE_ALL_ALLOWS_DELETE_REGISTRATION_HASH = HashingUtils::HashString("DISASSOCIATE_ALL_ALLOWS_DELETE_REGISTRATION");
        static const int DELETE_REGISTRATION_DISASSOCIATES_HASH = HashingUtils::HashString("DELETE_REGISTRATION_DISASSOCIATES");


        RegistrationDisassociationBehavior GetRegistrationDisassociationBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISASSOCIATE_ALL_CLOSES_REGISTRATION_HASH)
          {
            return RegistrationDisassociationBehavior::DISASSOCIATE_ALL_CLOSES_REGISTRATION;
          }
          else if (hashCode == DISASSOCIATE_ALL_ALLOWS_DELETE_REGISTRATION_HASH)
          {
            return RegistrationDisassociationBehavior::DISASSOCIATE_ALL_ALLOWS_DELETE_REGISTRATION;
          }
          else if (hashCode == DELETE_REGISTRATION_DISASSOCIATES_HASH)
          {
            return RegistrationDisassociationBehavior::DELETE_REGISTRATION_DISASSOCIATES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegistrationDisassociationBehavior>(hashCode);
          }

          return RegistrationDisassociationBehavior::NOT_SET;
        }

        Aws::String GetNameForRegistrationDisassociationBehavior(RegistrationDisassociationBehavior enumValue)
        {
          switch(enumValue)
          {
          case RegistrationDisassociationBehavior::NOT_SET:
            return {};
          case RegistrationDisassociationBehavior::DISASSOCIATE_ALL_CLOSES_REGISTRATION:
            return "DISASSOCIATE_ALL_CLOSES_REGISTRATION";
          case RegistrationDisassociationBehavior::DISASSOCIATE_ALL_ALLOWS_DELETE_REGISTRATION:
            return "DISASSOCIATE_ALL_ALLOWS_DELETE_REGISTRATION";
          case RegistrationDisassociationBehavior::DELETE_REGISTRATION_DISASSOCIATES:
            return "DELETE_REGISTRATION_DISASSOCIATES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegistrationDisassociationBehaviorMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
