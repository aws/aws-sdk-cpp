/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/SourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace SourceTypeMapper
      {

        static const int cluster_HASH = HashingUtils::HashString("cluster");
        static const int cluster_parameter_group_HASH = HashingUtils::HashString("cluster-parameter-group");
        static const int cluster_security_group_HASH = HashingUtils::HashString("cluster-security-group");
        static const int cluster_snapshot_HASH = HashingUtils::HashString("cluster-snapshot");
        static const int scheduled_action_HASH = HashingUtils::HashString("scheduled-action");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == cluster_HASH)
          {
            return SourceType::cluster;
          }
          else if (hashCode == cluster_parameter_group_HASH)
          {
            return SourceType::cluster_parameter_group;
          }
          else if (hashCode == cluster_security_group_HASH)
          {
            return SourceType::cluster_security_group;
          }
          else if (hashCode == cluster_snapshot_HASH)
          {
            return SourceType::cluster_snapshot;
          }
          else if (hashCode == scheduled_action_HASH)
          {
            return SourceType::scheduled_action;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceType>(hashCode);
          }

          return SourceType::NOT_SET;
        }

        Aws::String GetNameForSourceType(SourceType enumValue)
        {
          switch(enumValue)
          {
          case SourceType::cluster:
            return "cluster";
          case SourceType::cluster_parameter_group:
            return "cluster-parameter-group";
          case SourceType::cluster_security_group:
            return "cluster-security-group";
          case SourceType::cluster_snapshot:
            return "cluster-snapshot";
          case SourceType::scheduled_action:
            return "scheduled-action";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
