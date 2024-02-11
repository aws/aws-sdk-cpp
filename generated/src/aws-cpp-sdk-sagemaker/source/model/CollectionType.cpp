/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CollectionType.h>
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
      namespace CollectionTypeMapper
      {

        static const int List_HASH = HashingUtils::HashString("List");
        static const int Set_HASH = HashingUtils::HashString("Set");
        static const int Vector_HASH = HashingUtils::HashString("Vector");


        CollectionType GetCollectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == List_HASH)
          {
            return CollectionType::List;
          }
          else if (hashCode == Set_HASH)
          {
            return CollectionType::Set;
          }
          else if (hashCode == Vector_HASH)
          {
            return CollectionType::Vector;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CollectionType>(hashCode);
          }

          return CollectionType::NOT_SET;
        }

        Aws::String GetNameForCollectionType(CollectionType enumValue)
        {
          switch(enumValue)
          {
          case CollectionType::NOT_SET:
            return {};
          case CollectionType::List:
            return "List";
          case CollectionType::Set:
            return "Set";
          case CollectionType::Vector:
            return "Vector";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CollectionTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
