/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/TargetRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace TargetRoleMapper
      {

        static const int READ_WRITE_HASH = HashingUtils::HashString("READ_WRITE");
        static const int READ_ONLY_HASH = HashingUtils::HashString("READ_ONLY");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        TargetRole GetTargetRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READ_WRITE_HASH)
          {
            return TargetRole::READ_WRITE;
          }
          else if (hashCode == READ_ONLY_HASH)
          {
            return TargetRole::READ_ONLY;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return TargetRole::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetRole>(hashCode);
          }

          return TargetRole::NOT_SET;
        }

        Aws::String GetNameForTargetRole(TargetRole enumValue)
        {
          switch(enumValue)
          {
          case TargetRole::READ_WRITE:
            return "READ_WRITE";
          case TargetRole::READ_ONLY:
            return "READ_ONLY";
          case TargetRole::UNKNOWN:
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

      } // namespace TargetRoleMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
