/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/DynamoDBStreamStartPosition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace DynamoDBStreamStartPositionMapper
      {

        static constexpr uint32_t TRIM_HORIZON_HASH = ConstExprHashingUtils::HashString("TRIM_HORIZON");
        static constexpr uint32_t LATEST_HASH = ConstExprHashingUtils::HashString("LATEST");


        DynamoDBStreamStartPosition GetDynamoDBStreamStartPositionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRIM_HORIZON_HASH)
          {
            return DynamoDBStreamStartPosition::TRIM_HORIZON;
          }
          else if (hashCode == LATEST_HASH)
          {
            return DynamoDBStreamStartPosition::LATEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DynamoDBStreamStartPosition>(hashCode);
          }

          return DynamoDBStreamStartPosition::NOT_SET;
        }

        Aws::String GetNameForDynamoDBStreamStartPosition(DynamoDBStreamStartPosition enumValue)
        {
          switch(enumValue)
          {
          case DynamoDBStreamStartPosition::NOT_SET:
            return {};
          case DynamoDBStreamStartPosition::TRIM_HORIZON:
            return "TRIM_HORIZON";
          case DynamoDBStreamStartPosition::LATEST:
            return "LATEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DynamoDBStreamStartPositionMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws
