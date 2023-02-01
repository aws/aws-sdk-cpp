/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SpaceSortKey.h>
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
      namespace SpaceSortKeyMapper
      {

        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int LastModifiedTime_HASH = HashingUtils::HashString("LastModifiedTime");


        SpaceSortKey GetSpaceSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreationTime_HASH)
          {
            return SpaceSortKey::CreationTime;
          }
          else if (hashCode == LastModifiedTime_HASH)
          {
            return SpaceSortKey::LastModifiedTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpaceSortKey>(hashCode);
          }

          return SpaceSortKey::NOT_SET;
        }

        Aws::String GetNameForSpaceSortKey(SpaceSortKey enumValue)
        {
          switch(enumValue)
          {
          case SpaceSortKey::CreationTime:
            return "CreationTime";
          case SpaceSortKey::LastModifiedTime:
            return "LastModifiedTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpaceSortKeyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
