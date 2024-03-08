/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/DifferenceStatus.h>
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
      namespace DifferenceStatusMapper
      {

        static const int UPDATED_HASH = HashingUtils::HashString("UPDATED");
        static const int NEW__HASH = HashingUtils::HashString("NEW");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        DifferenceStatus GetDifferenceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATED_HASH)
          {
            return DifferenceStatus::UPDATED;
          }
          else if (hashCode == NEW__HASH)
          {
            return DifferenceStatus::NEW_;
          }
          else if (hashCode == DELETED_HASH)
          {
            return DifferenceStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DifferenceStatus>(hashCode);
          }

          return DifferenceStatus::NOT_SET;
        }

        Aws::String GetNameForDifferenceStatus(DifferenceStatus enumValue)
        {
          switch(enumValue)
          {
          case DifferenceStatus::NOT_SET:
            return {};
          case DifferenceStatus::UPDATED:
            return "UPDATED";
          case DifferenceStatus::NEW_:
            return "NEW";
          case DifferenceStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DifferenceStatusMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
