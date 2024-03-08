/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/FieldRequirement.h>
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
      namespace FieldRequirementMapper
      {

        static const int REQUIRED_HASH = HashingUtils::HashString("REQUIRED");
        static const int CONDITIONAL_HASH = HashingUtils::HashString("CONDITIONAL");
        static const int OPTIONAL_HASH = HashingUtils::HashString("OPTIONAL");


        FieldRequirement GetFieldRequirementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUIRED_HASH)
          {
            return FieldRequirement::REQUIRED;
          }
          else if (hashCode == CONDITIONAL_HASH)
          {
            return FieldRequirement::CONDITIONAL;
          }
          else if (hashCode == OPTIONAL_HASH)
          {
            return FieldRequirement::OPTIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FieldRequirement>(hashCode);
          }

          return FieldRequirement::NOT_SET;
        }

        Aws::String GetNameForFieldRequirement(FieldRequirement enumValue)
        {
          switch(enumValue)
          {
          case FieldRequirement::NOT_SET:
            return {};
          case FieldRequirement::REQUIRED:
            return "REQUIRED";
          case FieldRequirement::CONDITIONAL:
            return "CONDITIONAL";
          case FieldRequirement::OPTIONAL:
            return "OPTIONAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FieldRequirementMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
