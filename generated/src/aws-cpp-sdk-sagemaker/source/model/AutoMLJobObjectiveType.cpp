/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLJobObjectiveType.h>
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
      namespace AutoMLJobObjectiveTypeMapper
      {

        static constexpr uint32_t Maximize_HASH = ConstExprHashingUtils::HashString("Maximize");
        static constexpr uint32_t Minimize_HASH = ConstExprHashingUtils::HashString("Minimize");


        AutoMLJobObjectiveType GetAutoMLJobObjectiveTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Maximize_HASH)
          {
            return AutoMLJobObjectiveType::Maximize;
          }
          else if (hashCode == Minimize_HASH)
          {
            return AutoMLJobObjectiveType::Minimize;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLJobObjectiveType>(hashCode);
          }

          return AutoMLJobObjectiveType::NOT_SET;
        }

        Aws::String GetNameForAutoMLJobObjectiveType(AutoMLJobObjectiveType enumValue)
        {
          switch(enumValue)
          {
          case AutoMLJobObjectiveType::NOT_SET:
            return {};
          case AutoMLJobObjectiveType::Maximize:
            return "Maximize";
          case AutoMLJobObjectiveType::Minimize:
            return "Minimize";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLJobObjectiveTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
