/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/RegistrationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SWF
  {
    namespace Model
    {
      namespace RegistrationStatusMapper
      {

        static const int REGISTERED_HASH = HashingUtils::HashString("REGISTERED");
        static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");


        RegistrationStatus GetRegistrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGISTERED_HASH)
          {
            return RegistrationStatus::REGISTERED;
          }
          else if (hashCode == DEPRECATED_HASH)
          {
            return RegistrationStatus::DEPRECATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegistrationStatus>(hashCode);
          }

          return RegistrationStatus::NOT_SET;
        }

        Aws::String GetNameForRegistrationStatus(RegistrationStatus enumValue)
        {
          switch(enumValue)
          {
          case RegistrationStatus::REGISTERED:
            return "REGISTERED";
          case RegistrationStatus::DEPRECATED:
            return "DEPRECATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegistrationStatusMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
