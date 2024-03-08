/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/DuplicateRegistrationAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VoiceID
  {
    namespace Model
    {
      namespace DuplicateRegistrationActionMapper
      {

        static const int SKIP_HASH = HashingUtils::HashString("SKIP");
        static const int REGISTER_AS_NEW_HASH = HashingUtils::HashString("REGISTER_AS_NEW");


        DuplicateRegistrationAction GetDuplicateRegistrationActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SKIP_HASH)
          {
            return DuplicateRegistrationAction::SKIP;
          }
          else if (hashCode == REGISTER_AS_NEW_HASH)
          {
            return DuplicateRegistrationAction::REGISTER_AS_NEW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DuplicateRegistrationAction>(hashCode);
          }

          return DuplicateRegistrationAction::NOT_SET;
        }

        Aws::String GetNameForDuplicateRegistrationAction(DuplicateRegistrationAction enumValue)
        {
          switch(enumValue)
          {
          case DuplicateRegistrationAction::NOT_SET:
            return {};
          case DuplicateRegistrationAction::SKIP:
            return "SKIP";
          case DuplicateRegistrationAction::REGISTER_AS_NEW:
            return "REGISTER_AS_NEW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DuplicateRegistrationActionMapper
    } // namespace Model
  } // namespace VoiceID
} // namespace Aws
