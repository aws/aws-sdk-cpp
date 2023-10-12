/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EndpointConfigSortKey.h>
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
      namespace EndpointConfigSortKeyMapper
      {

        static constexpr uint32_t Name_HASH = ConstExprHashingUtils::HashString("Name");
        static constexpr uint32_t CreationTime_HASH = ConstExprHashingUtils::HashString("CreationTime");


        EndpointConfigSortKey GetEndpointConfigSortKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return EndpointConfigSortKey::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return EndpointConfigSortKey::CreationTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointConfigSortKey>(hashCode);
          }

          return EndpointConfigSortKey::NOT_SET;
        }

        Aws::String GetNameForEndpointConfigSortKey(EndpointConfigSortKey enumValue)
        {
          switch(enumValue)
          {
          case EndpointConfigSortKey::NOT_SET:
            return {};
          case EndpointConfigSortKey::Name:
            return "Name";
          case EndpointConfigSortKey::CreationTime:
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

      } // namespace EndpointConfigSortKeyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
