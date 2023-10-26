/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ChoiceReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace ChoiceReasonMapper
      {

        static const int OUT_OF_SCOPE_HASH = HashingUtils::HashString("OUT_OF_SCOPE");
        static const int BUSINESS_PRIORITIES_HASH = HashingUtils::HashString("BUSINESS_PRIORITIES");
        static const int ARCHITECTURE_CONSTRAINTS_HASH = HashingUtils::HashString("ARCHITECTURE_CONSTRAINTS");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        ChoiceReason GetChoiceReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OUT_OF_SCOPE_HASH)
          {
            return ChoiceReason::OUT_OF_SCOPE;
          }
          else if (hashCode == BUSINESS_PRIORITIES_HASH)
          {
            return ChoiceReason::BUSINESS_PRIORITIES;
          }
          else if (hashCode == ARCHITECTURE_CONSTRAINTS_HASH)
          {
            return ChoiceReason::ARCHITECTURE_CONSTRAINTS;
          }
          else if (hashCode == OTHER_HASH)
          {
            return ChoiceReason::OTHER;
          }
          else if (hashCode == NONE_HASH)
          {
            return ChoiceReason::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChoiceReason>(hashCode);
          }

          return ChoiceReason::NOT_SET;
        }

        Aws::String GetNameForChoiceReason(ChoiceReason enumValue)
        {
          switch(enumValue)
          {
          case ChoiceReason::NOT_SET:
            return {};
          case ChoiceReason::OUT_OF_SCOPE:
            return "OUT_OF_SCOPE";
          case ChoiceReason::BUSINESS_PRIORITIES:
            return "BUSINESS_PRIORITIES";
          case ChoiceReason::ARCHITECTURE_CONSTRAINTS:
            return "ARCHITECTURE_CONSTRAINTS";
          case ChoiceReason::OTHER:
            return "OTHER";
          case ChoiceReason::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChoiceReasonMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
