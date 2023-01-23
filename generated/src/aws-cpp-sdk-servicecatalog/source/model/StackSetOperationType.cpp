/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/StackSetOperationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace StackSetOperationTypeMapper
      {

        static const int CREATE_HASH = HashingUtils::HashString("CREATE");
        static const int UPDATE_HASH = HashingUtils::HashString("UPDATE");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        StackSetOperationType GetStackSetOperationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_HASH)
          {
            return StackSetOperationType::CREATE;
          }
          else if (hashCode == UPDATE_HASH)
          {
            return StackSetOperationType::UPDATE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return StackSetOperationType::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackSetOperationType>(hashCode);
          }

          return StackSetOperationType::NOT_SET;
        }

        Aws::String GetNameForStackSetOperationType(StackSetOperationType enumValue)
        {
          switch(enumValue)
          {
          case StackSetOperationType::CREATE:
            return "CREATE";
          case StackSetOperationType::UPDATE:
            return "UPDATE";
          case StackSetOperationType::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackSetOperationTypeMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
