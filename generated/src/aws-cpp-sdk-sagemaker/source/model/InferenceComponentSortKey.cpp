/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentSortKey.h>
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
      namespace InferenceComponentSortKeyMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int Status_HASH = HashingUtils::HashString("Status");


        InferenceComponentSortKey GetInferenceComponentSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return InferenceComponentSortKey::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return InferenceComponentSortKey::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return InferenceComponentSortKey::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InferenceComponentSortKey>(hashCode);
          }

          return InferenceComponentSortKey::NOT_SET;
        }

        Aws::String GetNameForInferenceComponentSortKey(InferenceComponentSortKey enumValue)
        {
          switch(enumValue)
          {
          case InferenceComponentSortKey::NOT_SET:
            return {};
          case InferenceComponentSortKey::Name:
            return "Name";
          case InferenceComponentSortKey::CreationTime:
            return "CreationTime";
          case InferenceComponentSortKey::Status:
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

      } // namespace InferenceComponentSortKeyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
