/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/AllocationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace AllocationTypeMapper
      {

        static const int VPC_SUBNET_HASH = HashingUtils::HashString("VPC_SUBNET");
        static const int ELASTIC_IP_HASH = HashingUtils::HashString("ELASTIC_IP");
        static const int OVERLAY_HASH = HashingUtils::HashString("OVERLAY");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        AllocationType GetAllocationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VPC_SUBNET_HASH)
          {
            return AllocationType::VPC_SUBNET;
          }
          else if (hashCode == ELASTIC_IP_HASH)
          {
            return AllocationType::ELASTIC_IP;
          }
          else if (hashCode == OVERLAY_HASH)
          {
            return AllocationType::OVERLAY;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return AllocationType::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllocationType>(hashCode);
          }

          return AllocationType::NOT_SET;
        }

        Aws::String GetNameForAllocationType(AllocationType enumValue)
        {
          switch(enumValue)
          {
          case AllocationType::NOT_SET:
            return {};
          case AllocationType::VPC_SUBNET:
            return "VPC_SUBNET";
          case AllocationType::ELASTIC_IP:
            return "ELASTIC_IP";
          case AllocationType::OVERLAY:
            return "OVERLAY";
          case AllocationType::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllocationTypeMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
