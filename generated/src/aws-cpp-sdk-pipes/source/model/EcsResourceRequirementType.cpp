/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/EcsResourceRequirementType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace EcsResourceRequirementTypeMapper
      {

        static const int GPU_HASH = HashingUtils::HashString("GPU");
        static const int InferenceAccelerator_HASH = HashingUtils::HashString("InferenceAccelerator");


        EcsResourceRequirementType GetEcsResourceRequirementTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GPU_HASH)
          {
            return EcsResourceRequirementType::GPU;
          }
          else if (hashCode == InferenceAccelerator_HASH)
          {
            return EcsResourceRequirementType::InferenceAccelerator;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EcsResourceRequirementType>(hashCode);
          }

          return EcsResourceRequirementType::NOT_SET;
        }

        Aws::String GetNameForEcsResourceRequirementType(EcsResourceRequirementType enumValue)
        {
          switch(enumValue)
          {
          case EcsResourceRequirementType::GPU:
            return "GPU";
          case EcsResourceRequirementType::InferenceAccelerator:
            return "InferenceAccelerator";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EcsResourceRequirementTypeMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws
