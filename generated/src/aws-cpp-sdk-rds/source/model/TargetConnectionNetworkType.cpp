/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/TargetConnectionNetworkType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace TargetConnectionNetworkTypeMapper
      {

        static const int IPV4_HASH = HashingUtils::HashString("IPV4");
        static const int IPV6_HASH = HashingUtils::HashString("IPV6");


        TargetConnectionNetworkType GetTargetConnectionNetworkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPV4_HASH)
          {
            return TargetConnectionNetworkType::IPV4;
          }
          else if (hashCode == IPV6_HASH)
          {
            return TargetConnectionNetworkType::IPV6;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetConnectionNetworkType>(hashCode);
          }

          return TargetConnectionNetworkType::NOT_SET;
        }

        Aws::String GetNameForTargetConnectionNetworkType(TargetConnectionNetworkType enumValue)
        {
          switch(enumValue)
          {
          case TargetConnectionNetworkType::NOT_SET:
            return {};
          case TargetConnectionNetworkType::IPV4:
            return "IPV4";
          case TargetConnectionNetworkType::IPV6:
            return "IPV6";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetConnectionNetworkTypeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
