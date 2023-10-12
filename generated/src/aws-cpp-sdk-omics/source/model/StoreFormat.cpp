/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/StoreFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace StoreFormatMapper
      {

        static constexpr uint32_t GFF_HASH = ConstExprHashingUtils::HashString("GFF");
        static constexpr uint32_t TSV_HASH = ConstExprHashingUtils::HashString("TSV");
        static constexpr uint32_t VCF_HASH = ConstExprHashingUtils::HashString("VCF");


        StoreFormat GetStoreFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GFF_HASH)
          {
            return StoreFormat::GFF;
          }
          else if (hashCode == TSV_HASH)
          {
            return StoreFormat::TSV;
          }
          else if (hashCode == VCF_HASH)
          {
            return StoreFormat::VCF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StoreFormat>(hashCode);
          }

          return StoreFormat::NOT_SET;
        }

        Aws::String GetNameForStoreFormat(StoreFormat enumValue)
        {
          switch(enumValue)
          {
          case StoreFormat::NOT_SET:
            return {};
          case StoreFormat::GFF:
            return "GFF";
          case StoreFormat::TSV:
            return "TSV";
          case StoreFormat::VCF:
            return "VCF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StoreFormatMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
