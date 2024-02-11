/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationAssociationBehavior.h>
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
      namespace RegistrationAssociationBehaviorMapper
      {

        static const int ASSOCIATE_BEFORE_SUBMIT_HASH = HashingUtils::HashString("ASSOCIATE_BEFORE_SUBMIT");
        static const int ASSOCIATE_ON_APPROVAL_HASH = HashingUtils::HashString("ASSOCIATE_ON_APPROVAL");
        static const int ASSOCIATE_AFTER_COMPLETE_HASH = HashingUtils::HashString("ASSOCIATE_AFTER_COMPLETE");


        RegistrationAssociationBehavior GetRegistrationAssociationBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSOCIATE_BEFORE_SUBMIT_HASH)
          {
            return RegistrationAssociationBehavior::ASSOCIATE_BEFORE_SUBMIT;
          }
          else if (hashCode == ASSOCIATE_ON_APPROVAL_HASH)
          {
            return RegistrationAssociationBehavior::ASSOCIATE_ON_APPROVAL;
          }
          else if (hashCode == ASSOCIATE_AFTER_COMPLETE_HASH)
          {
            return RegistrationAssociationBehavior::ASSOCIATE_AFTER_COMPLETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegistrationAssociationBehavior>(hashCode);
          }

          return RegistrationAssociationBehavior::NOT_SET;
        }

        Aws::String GetNameForRegistrationAssociationBehavior(RegistrationAssociationBehavior enumValue)
        {
          switch(enumValue)
          {
          case RegistrationAssociationBehavior::NOT_SET:
            return {};
          case RegistrationAssociationBehavior::ASSOCIATE_BEFORE_SUBMIT:
            return "ASSOCIATE_BEFORE_SUBMIT";
          case RegistrationAssociationBehavior::ASSOCIATE_ON_APPROVAL:
            return "ASSOCIATE_ON_APPROVAL";
          case RegistrationAssociationBehavior::ASSOCIATE_AFTER_COMPLETE:
            return "ASSOCIATE_AFTER_COMPLETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegistrationAssociationBehaviorMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
