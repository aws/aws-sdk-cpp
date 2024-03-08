/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/ResourceNotFoundExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RecycleBin
  {
    namespace Model
    {
      namespace ResourceNotFoundExceptionReasonMapper
      {

        static const int RULE_NOT_FOUND_HASH = HashingUtils::HashString("RULE_NOT_FOUND");


        ResourceNotFoundExceptionReason GetResourceNotFoundExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RULE_NOT_FOUND_HASH)
          {
            return ResourceNotFoundExceptionReason::RULE_NOT_FOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceNotFoundExceptionReason>(hashCode);
          }

          return ResourceNotFoundExceptionReason::NOT_SET;
        }

        Aws::String GetNameForResourceNotFoundExceptionReason(ResourceNotFoundExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ResourceNotFoundExceptionReason::NOT_SET:
            return {};
          case ResourceNotFoundExceptionReason::RULE_NOT_FOUND:
            return "RULE_NOT_FOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceNotFoundExceptionReasonMapper
    } // namespace Model
  } // namespace RecycleBin
} // namespace Aws
