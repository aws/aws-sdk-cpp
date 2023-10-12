/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/StopType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace StopTypeMapper
      {

        static constexpr uint32_t Complete_HASH = ConstExprHashingUtils::HashString("Complete");
        static constexpr uint32_t Cancel_HASH = ConstExprHashingUtils::HashString("Cancel");


        StopType GetStopTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Complete_HASH)
          {
            return StopType::Complete;
          }
          else if (hashCode == Cancel_HASH)
          {
            return StopType::Cancel;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StopType>(hashCode);
          }

          return StopType::NOT_SET;
        }

        Aws::String GetNameForStopType(StopType enumValue)
        {
          switch(enumValue)
          {
          case StopType::NOT_SET:
            return {};
          case StopType::Complete:
            return "Complete";
          case StopType::Cancel:
            return "Cancel";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StopTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
