/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography/model/MultiRegionKeyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PaymentCryptography
  {
    namespace Model
    {
      namespace MultiRegionKeyTypeMapper
      {

        static const int PRIMARY_HASH = HashingUtils::HashString("PRIMARY");
        static const int REPLICA_HASH = HashingUtils::HashString("REPLICA");


        MultiRegionKeyType GetMultiRegionKeyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIMARY_HASH)
          {
            return MultiRegionKeyType::PRIMARY;
          }
          else if (hashCode == REPLICA_HASH)
          {
            return MultiRegionKeyType::REPLICA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MultiRegionKeyType>(hashCode);
          }

          return MultiRegionKeyType::NOT_SET;
        }

        Aws::String GetNameForMultiRegionKeyType(MultiRegionKeyType enumValue)
        {
          switch(enumValue)
          {
          case MultiRegionKeyType::NOT_SET:
            return {};
          case MultiRegionKeyType::PRIMARY:
            return "PRIMARY";
          case MultiRegionKeyType::REPLICA:
            return "REPLICA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MultiRegionKeyTypeMapper
    } // namespace Model
  } // namespace PaymentCryptography
} // namespace Aws
