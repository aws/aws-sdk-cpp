/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HumanTaskUiStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace HumanTaskUiStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        HumanTaskUiStatus GetHumanTaskUiStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return HumanTaskUiStatus::Active;
          }
          else if (hashCode == Deleting_HASH)
          {
            return HumanTaskUiStatus::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HumanTaskUiStatus>(hashCode);
          }

          return HumanTaskUiStatus::NOT_SET;
        }

        Aws::String GetNameForHumanTaskUiStatus(HumanTaskUiStatus enumValue)
        {
          switch(enumValue)
          {
          case HumanTaskUiStatus::Active:
            return "Active";
          case HumanTaskUiStatus::Deleting:
            return "Deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HumanTaskUiStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
