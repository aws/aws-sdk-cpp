/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AttachmentsControlMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace AttachmentsControlModeMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AttachmentsControlMode GetAttachmentsControlModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AttachmentsControlMode::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AttachmentsControlMode::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttachmentsControlMode>(hashCode);
          }

          return AttachmentsControlMode::NOT_SET;
        }

        Aws::String GetNameForAttachmentsControlMode(AttachmentsControlMode enumValue)
        {
          switch(enumValue)
          {
          case AttachmentsControlMode::NOT_SET:
            return {};
          case AttachmentsControlMode::ENABLED:
            return "ENABLED";
          case AttachmentsControlMode::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttachmentsControlModeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
