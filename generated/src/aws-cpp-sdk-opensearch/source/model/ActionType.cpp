/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace ActionTypeMapper
      {

        static constexpr uint32_t SERVICE_SOFTWARE_UPDATE_HASH = ConstExprHashingUtils::HashString("SERVICE_SOFTWARE_UPDATE");
        static constexpr uint32_t JVM_HEAP_SIZE_TUNING_HASH = ConstExprHashingUtils::HashString("JVM_HEAP_SIZE_TUNING");
        static constexpr uint32_t JVM_YOUNG_GEN_TUNING_HASH = ConstExprHashingUtils::HashString("JVM_YOUNG_GEN_TUNING");


        ActionType GetActionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_SOFTWARE_UPDATE_HASH)
          {
            return ActionType::SERVICE_SOFTWARE_UPDATE;
          }
          else if (hashCode == JVM_HEAP_SIZE_TUNING_HASH)
          {
            return ActionType::JVM_HEAP_SIZE_TUNING;
          }
          else if (hashCode == JVM_YOUNG_GEN_TUNING_HASH)
          {
            return ActionType::JVM_YOUNG_GEN_TUNING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionType>(hashCode);
          }

          return ActionType::NOT_SET;
        }

        Aws::String GetNameForActionType(ActionType enumValue)
        {
          switch(enumValue)
          {
          case ActionType::NOT_SET:
            return {};
          case ActionType::SERVICE_SOFTWARE_UPDATE:
            return "SERVICE_SOFTWARE_UPDATE";
          case ActionType::JVM_HEAP_SIZE_TUNING:
            return "JVM_HEAP_SIZE_TUNING";
          case ActionType::JVM_YOUNG_GEN_TUNING:
            return "JVM_YOUNG_GEN_TUNING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionTypeMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
