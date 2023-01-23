/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/StackInstanceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace StackInstanceStatusMapper
      {

        static const int CURRENT_HASH = HashingUtils::HashString("CURRENT");
        static const int OUTDATED_HASH = HashingUtils::HashString("OUTDATED");
        static const int INOPERABLE_HASH = HashingUtils::HashString("INOPERABLE");


        StackInstanceStatus GetStackInstanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CURRENT_HASH)
          {
            return StackInstanceStatus::CURRENT;
          }
          else if (hashCode == OUTDATED_HASH)
          {
            return StackInstanceStatus::OUTDATED;
          }
          else if (hashCode == INOPERABLE_HASH)
          {
            return StackInstanceStatus::INOPERABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackInstanceStatus>(hashCode);
          }

          return StackInstanceStatus::NOT_SET;
        }

        Aws::String GetNameForStackInstanceStatus(StackInstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case StackInstanceStatus::CURRENT:
            return "CURRENT";
          case StackInstanceStatus::OUTDATED:
            return "OUTDATED";
          case StackInstanceStatus::INOPERABLE:
            return "INOPERABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackInstanceStatusMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
