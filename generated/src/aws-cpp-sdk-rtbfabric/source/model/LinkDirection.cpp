/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/model/LinkDirection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RTBFabric
  {
    namespace Model
    {
      namespace LinkDirectionMapper
      {

        static const int RESPONSE_HASH = HashingUtils::HashString("RESPONSE");
        static const int REQUEST_HASH = HashingUtils::HashString("REQUEST");


        LinkDirection GetLinkDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESPONSE_HASH)
          {
            return LinkDirection::RESPONSE;
          }
          else if (hashCode == REQUEST_HASH)
          {
            return LinkDirection::REQUEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LinkDirection>(hashCode);
          }

          return LinkDirection::NOT_SET;
        }

        Aws::String GetNameForLinkDirection(LinkDirection enumValue)
        {
          switch(enumValue)
          {
          case LinkDirection::NOT_SET:
            return {};
          case LinkDirection::RESPONSE:
            return "RESPONSE";
          case LinkDirection::REQUEST:
            return "REQUEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LinkDirectionMapper
    } // namespace Model
  } // namespace RTBFabric
} // namespace Aws
