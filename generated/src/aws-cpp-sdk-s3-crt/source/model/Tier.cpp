/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/Tier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Crt
  {
    namespace Model
    {
      namespace TierMapper
      {

        static constexpr uint32_t Standard_HASH = ConstExprHashingUtils::HashString("Standard");
        static constexpr uint32_t Bulk_HASH = ConstExprHashingUtils::HashString("Bulk");
        static constexpr uint32_t Expedited_HASH = ConstExprHashingUtils::HashString("Expedited");


        Tier GetTierForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Standard_HASH)
          {
            return Tier::Standard;
          }
          else if (hashCode == Bulk_HASH)
          {
            return Tier::Bulk;
          }
          else if (hashCode == Expedited_HASH)
          {
            return Tier::Expedited;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Tier>(hashCode);
          }

          return Tier::NOT_SET;
        }

        Aws::String GetNameForTier(Tier enumValue)
        {
          switch(enumValue)
          {
          case Tier::NOT_SET:
            return {};
          case Tier::Standard:
            return "Standard";
          case Tier::Bulk:
            return "Bulk";
          case Tier::Expedited:
            return "Expedited";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TierMapper
    } // namespace Model
  } // namespace S3Crt
} // namespace Aws
