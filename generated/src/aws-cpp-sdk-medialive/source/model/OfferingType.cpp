/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/OfferingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace OfferingTypeMapper
      {

        static constexpr uint32_t NO_UPFRONT_HASH = ConstExprHashingUtils::HashString("NO_UPFRONT");


        OfferingType GetOfferingTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_UPFRONT_HASH)
          {
            return OfferingType::NO_UPFRONT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OfferingType>(hashCode);
          }

          return OfferingType::NOT_SET;
        }

        Aws::String GetNameForOfferingType(OfferingType enumValue)
        {
          switch(enumValue)
          {
          case OfferingType::NOT_SET:
            return {};
          case OfferingType::NO_UPFRONT:
            return "NO_UPFRONT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OfferingTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
