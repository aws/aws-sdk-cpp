/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3outposts/model/EndpointAccessType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Outposts
  {
    namespace Model
    {
      namespace EndpointAccessTypeMapper
      {

        static constexpr uint32_t Private_HASH = ConstExprHashingUtils::HashString("Private");
        static constexpr uint32_t CustomerOwnedIp_HASH = ConstExprHashingUtils::HashString("CustomerOwnedIp");


        EndpointAccessType GetEndpointAccessTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Private_HASH)
          {
            return EndpointAccessType::Private;
          }
          else if (hashCode == CustomerOwnedIp_HASH)
          {
            return EndpointAccessType::CustomerOwnedIp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointAccessType>(hashCode);
          }

          return EndpointAccessType::NOT_SET;
        }

        Aws::String GetNameForEndpointAccessType(EndpointAccessType enumValue)
        {
          switch(enumValue)
          {
          case EndpointAccessType::NOT_SET:
            return {};
          case EndpointAccessType::Private:
            return "Private";
          case EndpointAccessType::CustomerOwnedIp:
            return "CustomerOwnedIp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndpointAccessTypeMapper
    } // namespace Model
  } // namespace S3Outposts
} // namespace Aws
