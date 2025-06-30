/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AccessType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace AccessTypeMapper
      {

        static const int Standard_HASH = HashingUtils::HashString("Standard");
        static const int JustInTime_HASH = HashingUtils::HashString("JustInTime");


        AccessType GetAccessTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Standard_HASH)
          {
            return AccessType::Standard;
          }
          else if (hashCode == JustInTime_HASH)
          {
            return AccessType::JustInTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessType>(hashCode);
          }

          return AccessType::NOT_SET;
        }

        Aws::String GetNameForAccessType(AccessType enumValue)
        {
          switch(enumValue)
          {
          case AccessType::NOT_SET:
            return {};
          case AccessType::Standard:
            return "Standard";
          case AccessType::JustInTime:
            return "JustInTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
