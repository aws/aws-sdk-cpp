/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterNodeRecovery.h>
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
      namespace ClusterNodeRecoveryMapper
      {

        static const int Automatic_HASH = HashingUtils::HashString("Automatic");
        static const int None_HASH = HashingUtils::HashString("None");


        ClusterNodeRecovery GetClusterNodeRecoveryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Automatic_HASH)
          {
            return ClusterNodeRecovery::Automatic;
          }
          else if (hashCode == None_HASH)
          {
            return ClusterNodeRecovery::None;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterNodeRecovery>(hashCode);
          }

          return ClusterNodeRecovery::NOT_SET;
        }

        Aws::String GetNameForClusterNodeRecovery(ClusterNodeRecovery enumValue)
        {
          switch(enumValue)
          {
          case ClusterNodeRecovery::NOT_SET:
            return {};
          case ClusterNodeRecovery::Automatic:
            return "Automatic";
          case ClusterNodeRecovery::None:
            return "None";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterNodeRecoveryMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
