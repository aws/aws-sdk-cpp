/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/BounceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace BounceTypeMapper
      {

        static const int UNDETERMINED_HASH = HashingUtils::HashString("UNDETERMINED");
        static const int TRANSIENT_HASH = HashingUtils::HashString("TRANSIENT");
        static const int PERMANENT_HASH = HashingUtils::HashString("PERMANENT");


        BounceType GetBounceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNDETERMINED_HASH)
          {
            return BounceType::UNDETERMINED;
          }
          else if (hashCode == TRANSIENT_HASH)
          {
            return BounceType::TRANSIENT;
          }
          else if (hashCode == PERMANENT_HASH)
          {
            return BounceType::PERMANENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BounceType>(hashCode);
          }

          return BounceType::NOT_SET;
        }

        Aws::String GetNameForBounceType(BounceType enumValue)
        {
          switch(enumValue)
          {
          case BounceType::NOT_SET:
            return {};
          case BounceType::UNDETERMINED:
            return "UNDETERMINED";
          case BounceType::TRANSIENT:
            return "TRANSIENT";
          case BounceType::PERMANENT:
            return "PERMANENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BounceTypeMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
