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

        static const int START_TEST_HASH = HashingUtils::HashString("START_TEST");
        static const int START_CUTOVER_HASH = HashingUtils::HashString("START_CUTOVER");
        static const int DIAGNOSTIC_HASH = HashingUtils::HashString("DIAGNOSTIC");
        static const int TERMINATE_HASH = HashingUtils::HashString("TERMINATE");


        InitiatedBy GetInitiatedByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
