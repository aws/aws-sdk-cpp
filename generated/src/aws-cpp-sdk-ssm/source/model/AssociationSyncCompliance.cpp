/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AssociationSyncCompliance.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace AssociationSyncComplianceMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        AssociationSyncCompliance GetAssociationSyncComplianceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return AssociationSyncCompliance::AUTO;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return AssociationSyncCompliance::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationSyncCompliance>(hashCode);
          }

          return AssociationSyncCompliance::NOT_SET;
        }

        Aws::String GetNameForAssociationSyncCompliance(AssociationSyncCompliance enumValue)
        {
          switch(enumValue)
          {
          case AssociationSyncCompliance::AUTO:
            return "AUTO";
          case AssociationSyncCompliance::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationSyncComplianceMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
