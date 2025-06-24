/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/IcebergCompactionStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Tables
  {
    namespace Model
    {
      namespace IcebergCompactionStrategyMapper
      {

        static const int auto__HASH = HashingUtils::HashString("auto");
        static const int binpack_HASH = HashingUtils::HashString("binpack");
        static const int sort_HASH = HashingUtils::HashString("sort");
        static const int z_order_HASH = HashingUtils::HashString("z-order");


        IcebergCompactionStrategy GetIcebergCompactionStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == auto__HASH)
          {
            return IcebergCompactionStrategy::auto_;
          }
          else if (hashCode == binpack_HASH)
          {
            return IcebergCompactionStrategy::binpack;
          }
          else if (hashCode == sort_HASH)
          {
            return IcebergCompactionStrategy::sort;
          }
          else if (hashCode == z_order_HASH)
          {
            return IcebergCompactionStrategy::z_order;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IcebergCompactionStrategy>(hashCode);
          }

          return IcebergCompactionStrategy::NOT_SET;
        }

        Aws::String GetNameForIcebergCompactionStrategy(IcebergCompactionStrategy enumValue)
        {
          switch(enumValue)
          {
          case IcebergCompactionStrategy::NOT_SET:
            return {};
          case IcebergCompactionStrategy::auto_:
            return "auto";
          case IcebergCompactionStrategy::binpack:
            return "binpack";
          case IcebergCompactionStrategy::sort:
            return "sort";
          case IcebergCompactionStrategy::z_order:
            return "z-order";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IcebergCompactionStrategyMapper
    } // namespace Model
  } // namespace S3Tables
} // namespace Aws
