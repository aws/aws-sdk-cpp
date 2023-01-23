/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EndpointSortKey.h>
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
      namespace EndpointSortKeyMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int Status_HASH = HashingUtils::HashString("Status");


        EndpointSortKey GetEndpointSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return EndpointSortKey::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return EndpointSortKey::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return EndpointSortKey::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointSortKey>(hashCode);
          }

          return EndpointSortKey::NOT_SET;
        }

        Aws::String GetNameForEndpointSortKey(EndpointSortKey enumValue)
        {
          switch(enumValue)
          {
          case EndpointSortKey::Name:
            return "Name";
          case EndpointSortKey::CreationTime:
            return "CreationTime";
          case EndpointSortKey::Status:
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

      } // namespace EndpointSortKeyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
