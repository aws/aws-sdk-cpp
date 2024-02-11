/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/ResourceTypeNotFound.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mediapackagev2
  {
    namespace Model
    {
      namespace ResourceTypeNotFoundMapper
      {

        static const int CHANNEL_GROUP_HASH = HashingUtils::HashString("CHANNEL_GROUP");
        static const int CHANNEL_HASH = HashingUtils::HashString("CHANNEL");
        static const int ORIGIN_ENDPOINT_HASH = HashingUtils::HashString("ORIGIN_ENDPOINT");


        ResourceTypeNotFound GetResourceTypeNotFoundForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHANNEL_GROUP_HASH)
          {
            return ResourceTypeNotFound::CHANNEL_GROUP;
          }
          else if (hashCode == CHANNEL_HASH)
          {
            return ResourceTypeNotFound::CHANNEL;
          }
          else if (hashCode == ORIGIN_ENDPOINT_HASH)
          {
            return ResourceTypeNotFound::ORIGIN_ENDPOINT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceTypeNotFound>(hashCode);
          }

          return ResourceTypeNotFound::NOT_SET;
        }

        Aws::String GetNameForResourceTypeNotFound(ResourceTypeNotFound enumValue)
        {
          switch(enumValue)
          {
          case ResourceTypeNotFound::NOT_SET:
            return {};
          case ResourceTypeNotFound::CHANNEL_GROUP:
            return "CHANNEL_GROUP";
          case ResourceTypeNotFound::CHANNEL:
            return "CHANNEL";
          case ResourceTypeNotFound::ORIGIN_ENDPOINT:
            return "ORIGIN_ENDPOINT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeNotFoundMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws
