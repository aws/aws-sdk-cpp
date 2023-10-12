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

        static constexpr uint32_t node_HASH = ConstExprHashingUtils::HashString("node");
        static constexpr uint32_t parameter_group_HASH = ConstExprHashingUtils::HashString("parameter-group");
        static constexpr uint32_t subnet_group_HASH = ConstExprHashingUtils::HashString("subnet-group");
        static constexpr uint32_t cluster_HASH = ConstExprHashingUtils::HashString("cluster");
        static constexpr uint32_t user_HASH = ConstExprHashingUtils::HashString("user");
        static constexpr uint32_t acl_HASH = ConstExprHashingUtils::HashString("acl");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
