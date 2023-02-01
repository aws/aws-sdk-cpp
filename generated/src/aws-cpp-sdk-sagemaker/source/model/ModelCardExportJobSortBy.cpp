/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelCardExportJobSortBy.h>
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
      namespace ModelCardExportJobSortByMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int Status_HASH = HashingUtils::HashString("Status");


        ModelCardExportJobSortBy GetModelCardExportJobSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return ModelCardExportJobSortBy::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return ModelCardExportJobSortBy::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return ModelCardExportJobSortBy::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelCardExportJobSortBy>(hashCode);
          }

          return ModelCardExportJobSortBy::NOT_SET;
        }

        Aws::String GetNameForModelCardExportJobSortBy(ModelCardExportJobSortBy enumValue)
        {
          switch(enumValue)
          {
          case ModelCardExportJobSortBy::Name:
            return "Name";
          case ModelCardExportJobSortBy::CreationTime:
            return "CreationTime";
          case ModelCardExportJobSortBy::Status:
            return "Status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelCardExportJobSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
