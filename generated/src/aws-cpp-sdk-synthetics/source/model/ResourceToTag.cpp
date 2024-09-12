/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/ResourceToTag.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Synthetics
  {
    namespace Model
    {
      namespace ResourceToTagMapper
      {

        static const int lambda_function_HASH = HashingUtils::HashString("lambda-function");


        ResourceToTag GetResourceToTagForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == lambda_function_HASH)
          {
            return ResourceToTag::lambda_function;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceToTag>(hashCode);
          }

          return ResourceToTag::NOT_SET;
        }

        Aws::String GetNameForResourceToTag(ResourceToTag enumValue)
        {
          switch(enumValue)
          {
          case ResourceToTag::NOT_SET:
            return {};
          case ResourceToTag::lambda_function:
            return "lambda-function";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceToTagMapper
    } // namespace Model
  } // namespace Synthetics
} // namespace Aws
