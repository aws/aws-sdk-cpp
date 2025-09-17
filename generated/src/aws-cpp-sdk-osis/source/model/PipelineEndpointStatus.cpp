/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/PipelineEndpointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OSIS
  {
    namespace Model
    {
      namespace PipelineEndpointStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int REVOKING_HASH = HashingUtils::HashString("REVOKING");
        static const int REVOKED_HASH = HashingUtils::HashString("REVOKED");


        PipelineEndpointStatus GetPipelineEndpointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return PipelineEndpointStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return PipelineEndpointStatus::ACTIVE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return PipelineEndpointStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return PipelineEndpointStatus::DELETING;
          }
          else if (hashCode == REVOKING_HASH)
          {
            return PipelineEndpointStatus::REVOKING;
          }
          else if (hashCode == REVOKED_HASH)
          {
            return PipelineEndpointStatus::REVOKED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PipelineEndpointStatus>(hashCode);
          }

          return PipelineEndpointStatus::NOT_SET;
        }

        Aws::String GetNameForPipelineEndpointStatus(PipelineEndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case PipelineEndpointStatus::NOT_SET:
            return {};
          case PipelineEndpointStatus::CREATING:
            return "CREATING";
          case PipelineEndpointStatus::ACTIVE:
            return "ACTIVE";
          case PipelineEndpointStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case PipelineEndpointStatus::DELETING:
            return "DELETING";
          case PipelineEndpointStatus::REVOKING:
            return "REVOKING";
          case PipelineEndpointStatus::REVOKED:
            return "REVOKED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PipelineEndpointStatusMapper
    } // namespace Model
  } // namespace OSIS
} // namespace Aws
