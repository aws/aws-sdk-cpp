/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SortArtifactsBy.h>
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
      namespace SortArtifactsByMapper
      {

        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");


        SortArtifactsBy GetSortArtifactsByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreationTime_HASH)
          {
            return SortArtifactsBy::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortArtifactsBy>(hashCode);
          }

          return SortArtifactsBy::NOT_SET;
        }

        Aws::String GetNameForSortArtifactsBy(SortArtifactsBy enumValue)
        {
          switch(enumValue)
          {
          case SortArtifactsBy::NOT_SET:
            return {};
          case SortArtifactsBy::CreationTime:
            return "CreationTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortArtifactsByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
