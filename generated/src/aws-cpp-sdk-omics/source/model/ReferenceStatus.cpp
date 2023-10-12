/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReferenceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace ReferenceStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        ReferenceStatus GetReferenceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ReferenceStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ReferenceStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ReferenceStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceStatus>(hashCode);
          }

          return ReferenceStatus::NOT_SET;
        }

        Aws::String GetNameForReferenceStatus(ReferenceStatus enumValue)
        {
          switch(enumValue)
          {
          case ReferenceStatus::NOT_SET:
            return {};
          case ReferenceStatus::ACTIVE:
            return "ACTIVE";
          case ReferenceStatus::DELETING:
            return "DELETING";
          case ReferenceStatus::DELETED:
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

      } // namespace ReferenceStatusMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
