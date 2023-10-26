/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/LensStatus.h>
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
      namespace LensStatusMapper
      {

        static const int CURRENT_HASH = HashingUtils::HashString("CURRENT");
        static const int NOT_CURRENT_HASH = HashingUtils::HashString("NOT_CURRENT");
        static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int UNSHARED_HASH = HashingUtils::HashString("UNSHARED");


        LensStatus GetLensStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CURRENT_HASH)
          {
            return LensStatus::CURRENT;
          }
          else if (hashCode == NOT_CURRENT_HASH)
          {
            return LensStatus::NOT_CURRENT;
          }
          else if (hashCode == DEPRECATED_HASH)
          {
            return LensStatus::DEPRECATED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return LensStatus::DELETED;
          }
          else if (hashCode == UNSHARED_HASH)
          {
            return LensStatus::UNSHARED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LensStatus>(hashCode);
          }

          return LensStatus::NOT_SET;
        }

        Aws::String GetNameForLensStatus(LensStatus enumValue)
        {
          switch(enumValue)
          {
          case LensStatus::NOT_SET:
            return {};
          case LensStatus::CURRENT:
            return "CURRENT";
          case LensStatus::NOT_CURRENT:
            return "NOT_CURRENT";
          case LensStatus::DEPRECATED:
            return "DEPRECATED";
          case LensStatus::DELETED:
            return "DELETED";
          case LensStatus::UNSHARED:
            return "UNSHARED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LensStatusMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
