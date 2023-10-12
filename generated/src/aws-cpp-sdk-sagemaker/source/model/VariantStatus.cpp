/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/VariantStatus.h>
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
      namespace VariantStatusMapper
      {

        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Updating_HASH = ConstExprHashingUtils::HashString("Updating");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t ActivatingTraffic_HASH = ConstExprHashingUtils::HashString("ActivatingTraffic");
        static constexpr uint32_t Baking_HASH = ConstExprHashingUtils::HashString("Baking");


        VariantStatus GetVariantStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return VariantStatus::Creating;
          }
          else if (hashCode == Updating_HASH)
          {
            return VariantStatus::Updating;
          }
          else if (hashCode == Deleting_HASH)
          {
            return VariantStatus::Deleting;
          }
          else if (hashCode == ActivatingTraffic_HASH)
          {
            return VariantStatus::ActivatingTraffic;
          }
          else if (hashCode == Baking_HASH)
          {
            return VariantStatus::Baking;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VariantStatus>(hashCode);
          }

          return VariantStatus::NOT_SET;
        }

        Aws::String GetNameForVariantStatus(VariantStatus enumValue)
        {
          switch(enumValue)
          {
          case VariantStatus::NOT_SET:
            return {};
          case VariantStatus::Creating:
            return "Creating";
          case VariantStatus::Updating:
            return "Updating";
          case VariantStatus::Deleting:
            return "Deleting";
          case VariantStatus::ActivatingTraffic:
            return "ActivatingTraffic";
          case VariantStatus::Baking:
            return "Baking";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VariantStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
