/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/PrivateGraphEndpointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NeptuneGraph
  {
    namespace Model
    {
      namespace PrivateGraphEndpointStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        PrivateGraphEndpointStatus GetPrivateGraphEndpointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return PrivateGraphEndpointStatus::CREATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return PrivateGraphEndpointStatus::AVAILABLE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return PrivateGraphEndpointStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return PrivateGraphEndpointStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrivateGraphEndpointStatus>(hashCode);
          }

          return PrivateGraphEndpointStatus::NOT_SET;
        }

        Aws::String GetNameForPrivateGraphEndpointStatus(PrivateGraphEndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case PrivateGraphEndpointStatus::NOT_SET:
            return {};
          case PrivateGraphEndpointStatus::CREATING:
            return "CREATING";
          case PrivateGraphEndpointStatus::AVAILABLE:
            return "AVAILABLE";
          case PrivateGraphEndpointStatus::DELETING:
            return "DELETING";
          case PrivateGraphEndpointStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrivateGraphEndpointStatusMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws
