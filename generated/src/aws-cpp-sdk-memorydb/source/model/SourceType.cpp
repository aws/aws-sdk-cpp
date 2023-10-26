/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/SourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MemoryDB
  {
    namespace Model
    {
      namespace SourceTypeMapper
      {

        static const int node_HASH = HashingUtils::HashString("node");
        static const int parameter_group_HASH = HashingUtils::HashString("parameter-group");
        static const int subnet_group_HASH = HashingUtils::HashString("subnet-group");
        static const int cluster_HASH = HashingUtils::HashString("cluster");
        static const int user_HASH = HashingUtils::HashString("user");
        static const int acl_HASH = HashingUtils::HashString("acl");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == node_HASH)
          {
            return SourceType::node;
          }
          else if (hashCode == parameter_group_HASH)
          {
            return SourceType::parameter_group;
          }
          else if (hashCode == subnet_group_HASH)
          {
            return SourceType::subnet_group;
          }
          else if (hashCode == cluster_HASH)
          {
            return SourceType::cluster;
          }
          else if (hashCode == user_HASH)
          {
            return SourceType::user;
          }
          else if (hashCode == acl_HASH)
          {
            return SourceType::acl;
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
          case SourceType::NOT_SET:
            return {};
          case SourceType::node:
            return "node";
          case SourceType::parameter_group:
            return "parameter-group";
          case SourceType::subnet_group:
            return "subnet-group";
          case SourceType::cluster:
            return "cluster";
          case SourceType::user:
            return "user";
          case SourceType::acl:
            return "acl";
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
  } // namespace MemoryDB
} // namespace Aws
