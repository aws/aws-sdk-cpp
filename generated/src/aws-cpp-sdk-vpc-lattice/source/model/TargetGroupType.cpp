/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/TargetGroupType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VPCLattice
  {
    namespace Model
    {
      namespace TargetGroupTypeMapper
      {

        static const int IP_HASH = HashingUtils::HashString("IP");
        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");
        static const int INSTANCE_HASH = HashingUtils::HashString("INSTANCE");
        static const int ALB_HASH = HashingUtils::HashString("ALB");


        TargetGroupType GetTargetGroupTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IP_HASH)
          {
            return TargetGroupType::IP;
          }
          else if (hashCode == LAMBDA_HASH)
          {
            return TargetGroupType::LAMBDA;
          }
          else if (hashCode == INSTANCE_HASH)
          {
            return TargetGroupType::INSTANCE;
          }
          else if (hashCode == ALB_HASH)
          {
            return TargetGroupType::ALB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetGroupType>(hashCode);
          }

          return TargetGroupType::NOT_SET;
        }

        Aws::String GetNameForTargetGroupType(TargetGroupType enumValue)
        {
          switch(enumValue)
          {
          case TargetGroupType::NOT_SET:
            return {};
          case TargetGroupType::IP:
            return "IP";
          case TargetGroupType::LAMBDA:
            return "LAMBDA";
          case TargetGroupType::INSTANCE:
            return "INSTANCE";
          case TargetGroupType::ALB:
            return "ALB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetGroupTypeMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
