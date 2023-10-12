/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ReviewTemplateUpdateStatus.h>
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
      namespace ReviewTemplateUpdateStatusMapper
      {

        static constexpr uint32_t CURRENT_HASH = ConstExprHashingUtils::HashString("CURRENT");
        static constexpr uint32_t LENS_NOT_CURRENT_HASH = ConstExprHashingUtils::HashString("LENS_NOT_CURRENT");


        ReviewTemplateUpdateStatus GetReviewTemplateUpdateStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CURRENT_HASH)
          {
            return ReviewTemplateUpdateStatus::CURRENT;
          }
          else if (hashCode == LENS_NOT_CURRENT_HASH)
          {
            return ReviewTemplateUpdateStatus::LENS_NOT_CURRENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReviewTemplateUpdateStatus>(hashCode);
          }

          return ReviewTemplateUpdateStatus::NOT_SET;
        }

        Aws::String GetNameForReviewTemplateUpdateStatus(ReviewTemplateUpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case ReviewTemplateUpdateStatus::NOT_SET:
            return {};
          case ReviewTemplateUpdateStatus::CURRENT:
            return "CURRENT";
          case ReviewTemplateUpdateStatus::LENS_NOT_CURRENT:
            return "LENS_NOT_CURRENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReviewTemplateUpdateStatusMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
