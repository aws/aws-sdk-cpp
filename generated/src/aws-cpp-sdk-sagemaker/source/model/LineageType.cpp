/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LineageType.h>
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
      namespace LineageTypeMapper
      {

        static constexpr uint32_t TrialComponent_HASH = ConstExprHashingUtils::HashString("TrialComponent");
        static constexpr uint32_t Artifact_HASH = ConstExprHashingUtils::HashString("Artifact");
        static constexpr uint32_t Context_HASH = ConstExprHashingUtils::HashString("Context");
        static constexpr uint32_t Action_HASH = ConstExprHashingUtils::HashString("Action");


        LineageType GetLineageTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TrialComponent_HASH)
          {
            return LineageType::TrialComponent;
          }
          else if (hashCode == Artifact_HASH)
          {
            return LineageType::Artifact;
          }
          else if (hashCode == Context_HASH)
          {
            return LineageType::Context;
          }
          else if (hashCode == Action_HASH)
          {
            return LineageType::Action;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LineageType>(hashCode);
          }

          return LineageType::NOT_SET;
        }

        Aws::String GetNameForLineageType(LineageType enumValue)
        {
          switch(enumValue)
          {
          case LineageType::NOT_SET:
            return {};
          case LineageType::TrialComponent:
            return "TrialComponent";
          case LineageType::Artifact:
            return "Artifact";
          case LineageType::Context:
            return "Context";
          case LineageType::Action:
            return "Action";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LineageTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
