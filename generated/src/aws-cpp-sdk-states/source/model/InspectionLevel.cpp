/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/InspectionLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SFN
  {
    namespace Model
    {
      namespace InspectionLevelMapper
      {

        static const int INFO_HASH = HashingUtils::HashString("INFO");
        static const int DEBUG__HASH = HashingUtils::HashString("DEBUG");
        static const int TRACE_HASH = HashingUtils::HashString("TRACE");


        InspectionLevel GetInspectionLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INFO_HASH)
          {
            return InspectionLevel::INFO;
          }
          else if (hashCode == DEBUG__HASH)
          {
            return InspectionLevel::DEBUG_;
          }
          else if (hashCode == TRACE_HASH)
          {
            return InspectionLevel::TRACE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InspectionLevel>(hashCode);
          }

          return InspectionLevel::NOT_SET;
        }

        Aws::String GetNameForInspectionLevel(InspectionLevel enumValue)
        {
          switch(enumValue)
          {
          case InspectionLevel::NOT_SET:
            return {};
          case InspectionLevel::INFO:
            return "INFO";
          case InspectionLevel::DEBUG_:
            return "DEBUG";
          case InspectionLevel::TRACE:
            return "TRACE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InspectionLevelMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
