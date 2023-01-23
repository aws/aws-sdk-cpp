/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/Dimension.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityLake
  {
    namespace Model
    {
      namespace DimensionMapper
      {

        static const int REGION_HASH = HashingUtils::HashString("REGION");
        static const int SOURCE_TYPE_HASH = HashingUtils::HashString("SOURCE_TYPE");
        static const int MEMBER_HASH = HashingUtils::HashString("MEMBER");


        Dimension GetDimensionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGION_HASH)
          {
            return Dimension::REGION;
          }
          else if (hashCode == SOURCE_TYPE_HASH)
          {
            return Dimension::SOURCE_TYPE;
          }
          else if (hashCode == MEMBER_HASH)
          {
            return Dimension::MEMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Dimension>(hashCode);
          }

          return Dimension::NOT_SET;
        }

        Aws::String GetNameForDimension(Dimension enumValue)
        {
          switch(enumValue)
          {
          case Dimension::REGION:
            return "REGION";
          case Dimension::SOURCE_TYPE:
            return "SOURCE_TYPE";
          case Dimension::MEMBER:
            return "MEMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DimensionMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws
