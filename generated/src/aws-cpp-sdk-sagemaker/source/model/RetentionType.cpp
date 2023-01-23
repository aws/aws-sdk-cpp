/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RetentionType.h>
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
      namespace RetentionTypeMapper
      {

        static const int Retain_HASH = HashingUtils::HashString("Retain");
        static const int Delete_HASH = HashingUtils::HashString("Delete");


        RetentionType GetRetentionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Retain_HASH)
          {
            return RetentionType::Retain;
          }
          else if (hashCode == Delete_HASH)
          {
            return RetentionType::Delete;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetentionType>(hashCode);
          }

          return RetentionType::NOT_SET;
        }

        Aws::String GetNameForRetentionType(RetentionType enumValue)
        {
          switch(enumValue)
          {
          case RetentionType::Retain:
            return "Retain";
          case RetentionType::Delete:
            return "Delete";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetentionTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
