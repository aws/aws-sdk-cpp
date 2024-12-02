/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ResourceConfigurationType.h>
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
      namespace ResourceConfigurationTypeMapper
      {

        static const int GROUP_HASH = HashingUtils::HashString("GROUP");
        static const int CHILD_HASH = HashingUtils::HashString("CHILD");
        static const int SINGLE_HASH = HashingUtils::HashString("SINGLE");
        static const int ARN_HASH = HashingUtils::HashString("ARN");


        ResourceConfigurationType GetResourceConfigurationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GROUP_HASH)
          {
            return ResourceConfigurationType::GROUP;
          }
          else if (hashCode == CHILD_HASH)
          {
            return ResourceConfigurationType::CHILD;
          }
          else if (hashCode == SINGLE_HASH)
          {
            return ResourceConfigurationType::SINGLE;
          }
          else if (hashCode == ARN_HASH)
          {
            return ResourceConfigurationType::ARN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceConfigurationType>(hashCode);
          }

          return ResourceConfigurationType::NOT_SET;
        }

        Aws::String GetNameForResourceConfigurationType(ResourceConfigurationType enumValue)
        {
          switch(enumValue)
          {
          case ResourceConfigurationType::NOT_SET:
            return {};
          case ResourceConfigurationType::GROUP:
            return "GROUP";
          case ResourceConfigurationType::CHILD:
            return "CHILD";
          case ResourceConfigurationType::SINGLE:
            return "SINGLE";
          case ResourceConfigurationType::ARN:
            return "ARN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceConfigurationTypeMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
