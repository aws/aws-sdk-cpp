/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReadSetPartSource.h>
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
      namespace ReadSetPartSourceMapper
      {

        static constexpr uint32_t SOURCE1_HASH = ConstExprHashingUtils::HashString("SOURCE1");
        static constexpr uint32_t SOURCE2_HASH = ConstExprHashingUtils::HashString("SOURCE2");


        ReadSetPartSource GetReadSetPartSourceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOURCE1_HASH)
          {
            return ReadSetPartSource::SOURCE1;
          }
          else if (hashCode == SOURCE2_HASH)
          {
            return ReadSetPartSource::SOURCE2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReadSetPartSource>(hashCode);
          }

          return ReadSetPartSource::NOT_SET;
        }

        Aws::String GetNameForReadSetPartSource(ReadSetPartSource enumValue)
        {
          switch(enumValue)
          {
          case ReadSetPartSource::NOT_SET:
            return {};
          case ReadSetPartSource::SOURCE1:
            return "SOURCE1";
          case ReadSetPartSource::SOURCE2:
            return "SOURCE2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReadSetPartSourceMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
