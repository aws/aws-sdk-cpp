/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/ClosureCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityIR
  {
    namespace Model
    {
      namespace ClosureCodeMapper
      {

        static const int Investigation_Completed_HASH = HashingUtils::HashString("Investigation Completed");
        static const int Not_Resolved_HASH = HashingUtils::HashString("Not Resolved");
        static const int False_Positive_HASH = HashingUtils::HashString("False Positive");
        static const int Duplicate_HASH = HashingUtils::HashString("Duplicate");


        ClosureCode GetClosureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Investigation_Completed_HASH)
          {
            return ClosureCode::Investigation_Completed;
          }
          else if (hashCode == Not_Resolved_HASH)
          {
            return ClosureCode::Not_Resolved;
          }
          else if (hashCode == False_Positive_HASH)
          {
            return ClosureCode::False_Positive;
          }
          else if (hashCode == Duplicate_HASH)
          {
            return ClosureCode::Duplicate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClosureCode>(hashCode);
          }

          return ClosureCode::NOT_SET;
        }

        Aws::String GetNameForClosureCode(ClosureCode enumValue)
        {
          switch(enumValue)
          {
          case ClosureCode::NOT_SET:
            return {};
          case ClosureCode::Investigation_Completed:
            return "Investigation Completed";
          case ClosureCode::Not_Resolved:
            return "Not Resolved";
          case ClosureCode::False_Positive:
            return "False Positive";
          case ClosureCode::Duplicate:
            return "Duplicate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClosureCodeMapper
    } // namespace Model
  } // namespace SecurityIR
} // namespace Aws
