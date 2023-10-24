/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/LifecyclePolicyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchServerless
  {
    namespace Model
    {
      namespace LifecyclePolicyTypeMapper
      {

        static const int retention_HASH = HashingUtils::HashString("retention");


        LifecyclePolicyType GetLifecyclePolicyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == retention_HASH)
          {
            return LifecyclePolicyType::retention;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecyclePolicyType>(hashCode);
          }

          return LifecyclePolicyType::NOT_SET;
        }

        Aws::String GetNameForLifecyclePolicyType(LifecyclePolicyType enumValue)
        {
          switch(enumValue)
          {
          case LifecyclePolicyType::NOT_SET:
            return {};
          case LifecyclePolicyType::retention:
            return "retention";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LifecyclePolicyTypeMapper
    } // namespace Model
  } // namespace OpenSearchServerless
} // namespace Aws
