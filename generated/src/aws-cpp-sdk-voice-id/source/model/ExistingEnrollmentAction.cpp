/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/ExistingEnrollmentAction.h>
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
      namespace ExistingEnrollmentActionMapper
      {

        static constexpr uint32_t SKIP_HASH = ConstExprHashingUtils::HashString("SKIP");
        static constexpr uint32_t OVERWRITE_HASH = ConstExprHashingUtils::HashString("OVERWRITE");


        ExistingEnrollmentAction GetExistingEnrollmentActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SKIP_HASH)
          {
            return ExistingEnrollmentAction::SKIP;
          }
          else if (hashCode == OVERWRITE_HASH)
          {
            return ExistingEnrollmentAction::OVERWRITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExistingEnrollmentAction>(hashCode);
          }

          return ExistingEnrollmentAction::NOT_SET;
        }

        Aws::String GetNameForExistingEnrollmentAction(ExistingEnrollmentAction enumValue)
        {
          switch(enumValue)
          {
          case ExistingEnrollmentAction::NOT_SET:
            return {};
          case ExistingEnrollmentAction::SKIP:
            return "SKIP";
          case ExistingEnrollmentAction::OVERWRITE:
            return "OVERWRITE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExistingEnrollmentActionMapper
    } // namespace Model
  } // namespace VoiceID
} // namespace Aws
