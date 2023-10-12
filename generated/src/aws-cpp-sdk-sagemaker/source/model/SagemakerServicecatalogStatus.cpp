/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SagemakerServicecatalogStatus.h>
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
      namespace SagemakerServicecatalogStatusMapper
      {

        static constexpr uint32_t Enabled_HASH = ConstExprHashingUtils::HashString("Enabled");
        static constexpr uint32_t Disabled_HASH = ConstExprHashingUtils::HashString("Disabled");


        SagemakerServicecatalogStatus GetSagemakerServicecatalogStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return SagemakerServicecatalogStatus::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return SagemakerServicecatalogStatus::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SagemakerServicecatalogStatus>(hashCode);
          }

          return SagemakerServicecatalogStatus::NOT_SET;
        }

        Aws::String GetNameForSagemakerServicecatalogStatus(SagemakerServicecatalogStatus enumValue)
        {
          switch(enumValue)
          {
          case SagemakerServicecatalogStatus::NOT_SET:
            return {};
          case SagemakerServicecatalogStatus::Enabled:
            return "Enabled";
          case SagemakerServicecatalogStatus::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SagemakerServicecatalogStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
