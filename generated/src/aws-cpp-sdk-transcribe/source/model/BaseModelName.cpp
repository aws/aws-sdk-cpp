/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/BaseModelName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace BaseModelNameMapper
      {

        static constexpr uint32_t NarrowBand_HASH = ConstExprHashingUtils::HashString("NarrowBand");
        static constexpr uint32_t WideBand_HASH = ConstExprHashingUtils::HashString("WideBand");


        BaseModelName GetBaseModelNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NarrowBand_HASH)
          {
            return BaseModelName::NarrowBand;
          }
          else if (hashCode == WideBand_HASH)
          {
            return BaseModelName::WideBand;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BaseModelName>(hashCode);
          }

          return BaseModelName::NOT_SET;
        }

        Aws::String GetNameForBaseModelName(BaseModelName enumValue)
        {
          switch(enumValue)
          {
          case BaseModelName::NOT_SET:
            return {};
          case BaseModelName::NarrowBand:
            return "NarrowBand";
          case BaseModelName::WideBand:
            return "WideBand";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BaseModelNameMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
