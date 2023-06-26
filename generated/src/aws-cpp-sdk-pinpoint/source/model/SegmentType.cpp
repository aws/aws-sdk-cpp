/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SegmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace SegmentTypeMapper
      {

        static const int DIMENSIONAL_HASH = HashingUtils::HashString("DIMENSIONAL");
        static const int IMPORT_HASH = HashingUtils::HashString("IMPORT");


        SegmentType GetSegmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIMENSIONAL_HASH)
          {
            return SegmentType::DIMENSIONAL;
          }
          else if (hashCode == IMPORT_HASH)
          {
            return SegmentType::IMPORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SegmentType>(hashCode);
          }

          return SegmentType::NOT_SET;
        }

        Aws::String GetNameForSegmentType(SegmentType enumValue)
        {
          switch(enumValue)
          {
          case SegmentType::DIMENSIONAL:
            return "DIMENSIONAL";
          case SegmentType::IMPORT:
            return "IMPORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SegmentTypeMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
