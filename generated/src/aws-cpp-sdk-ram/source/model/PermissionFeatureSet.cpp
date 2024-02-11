/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/PermissionFeatureSet.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RAM
  {
    namespace Model
    {
      namespace PermissionFeatureSetMapper
      {

        static const int CREATED_FROM_POLICY_HASH = HashingUtils::HashString("CREATED_FROM_POLICY");
        static const int PROMOTING_TO_STANDARD_HASH = HashingUtils::HashString("PROMOTING_TO_STANDARD");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");


        PermissionFeatureSet GetPermissionFeatureSetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_FROM_POLICY_HASH)
          {
            return PermissionFeatureSet::CREATED_FROM_POLICY;
          }
          else if (hashCode == PROMOTING_TO_STANDARD_HASH)
          {
            return PermissionFeatureSet::PROMOTING_TO_STANDARD;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return PermissionFeatureSet::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionFeatureSet>(hashCode);
          }

          return PermissionFeatureSet::NOT_SET;
        }

        Aws::String GetNameForPermissionFeatureSet(PermissionFeatureSet enumValue)
        {
          switch(enumValue)
          {
          case PermissionFeatureSet::NOT_SET:
            return {};
          case PermissionFeatureSet::CREATED_FROM_POLICY:
            return "CREATED_FROM_POLICY";
          case PermissionFeatureSet::PROMOTING_TO_STANDARD:
            return "PROMOTING_TO_STANDARD";
          case PermissionFeatureSet::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionFeatureSetMapper
    } // namespace Model
  } // namespace RAM
} // namespace Aws
