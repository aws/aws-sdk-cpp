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

        static constexpr uint32_t REGISTERED_HASH = ConstExprHashingUtils::HashString("REGISTERED");
        static constexpr uint32_t DEPRECATED_HASH = ConstExprHashingUtils::HashString("DEPRECATED");


        RegistrationStatus GetRegistrationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case RegistrationStatus::NOT_SET:
            return {};
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
