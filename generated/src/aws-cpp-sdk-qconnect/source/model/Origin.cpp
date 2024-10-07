/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/Origin.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace OriginMapper
      {

        static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");
        static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");


        Origin GetOriginForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYSTEM_HASH)
          {
            return Origin::SYSTEM;
          }
          else if (hashCode == CUSTOMER_HASH)
          {
            return Origin::CUSTOMER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Origin>(hashCode);
          }

          return Origin::NOT_SET;
        }

        Aws::String GetNameForOrigin(Origin enumValue)
        {
          switch(enumValue)
          {
          case Origin::NOT_SET:
            return {};
          case Origin::SYSTEM:
            return "SYSTEM";
          case Origin::CUSTOMER:
            return "CUSTOMER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OriginMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
