/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLChannelType.h>
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
      namespace AutoMLChannelTypeMapper
      {

        static const int training_HASH = HashingUtils::HashString("training");
        static const int validation_HASH = HashingUtils::HashString("validation");


        AutoMLChannelType GetAutoMLChannelTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == training_HASH)
          {
            return AutoMLChannelType::training;
          }
          else if (hashCode == validation_HASH)
          {
            return AutoMLChannelType::validation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLChannelType>(hashCode);
          }

          return AutoMLChannelType::NOT_SET;
        }

        Aws::String GetNameForAutoMLChannelType(AutoMLChannelType enumValue)
        {
          switch(enumValue)
          {
          case AutoMLChannelType::NOT_SET:
            return {};
          case AutoMLChannelType::training:
            return "training";
          case AutoMLChannelType::validation:
            return "validation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLChannelTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
