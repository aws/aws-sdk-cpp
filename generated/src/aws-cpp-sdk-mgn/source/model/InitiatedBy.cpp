/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/InitiatedBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace InitiatedByMapper
      {

        static constexpr uint32_t START_TEST_HASH = ConstExprHashingUtils::HashString("START_TEST");
        static constexpr uint32_t START_CUTOVER_HASH = ConstExprHashingUtils::HashString("START_CUTOVER");
        static constexpr uint32_t DIAGNOSTIC_HASH = ConstExprHashingUtils::HashString("DIAGNOSTIC");
        static constexpr uint32_t TERMINATE_HASH = ConstExprHashingUtils::HashString("TERMINATE");


        InitiatedBy GetInitiatedByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_TEST_HASH)
          {
            return InitiatedBy::START_TEST;
          }
          else if (hashCode == START_CUTOVER_HASH)
          {
            return InitiatedBy::START_CUTOVER;
          }
          else if (hashCode == DIAGNOSTIC_HASH)
          {
            return InitiatedBy::DIAGNOSTIC;
          }
          else if (hashCode == TERMINATE_HASH)
          {
            return InitiatedBy::TERMINATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InitiatedBy>(hashCode);
          }

          return InitiatedBy::NOT_SET;
        }

        Aws::String GetNameForInitiatedBy(InitiatedBy enumValue)
        {
          switch(enumValue)
          {
          case InitiatedBy::NOT_SET:
            return {};
          case InitiatedBy::START_TEST:
            return "START_TEST";
          case InitiatedBy::START_CUTOVER:
            return "START_CUTOVER";
          case InitiatedBy::DIAGNOSTIC:
            return "DIAGNOSTIC";
          case InitiatedBy::TERMINATE:
            return "TERMINATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InitiatedByMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
