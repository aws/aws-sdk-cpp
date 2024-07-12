/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/VisualRole.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace VisualRoleMapper
      {

        static const int PRIMARY_HASH = HashingUtils::HashString("PRIMARY");
        static const int COMPLIMENTARY_HASH = HashingUtils::HashString("COMPLIMENTARY");
        static const int MULTI_INTENT_HASH = HashingUtils::HashString("MULTI_INTENT");
        static const int FALLBACK_HASH = HashingUtils::HashString("FALLBACK");
        static const int FRAGMENT_HASH = HashingUtils::HashString("FRAGMENT");


        VisualRole GetVisualRoleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIMARY_HASH)
          {
            return VisualRole::PRIMARY;
          }
          else if (hashCode == COMPLIMENTARY_HASH)
          {
            return VisualRole::COMPLIMENTARY;
          }
          else if (hashCode == MULTI_INTENT_HASH)
          {
            return VisualRole::MULTI_INTENT;
          }
          else if (hashCode == FALLBACK_HASH)
          {
            return VisualRole::FALLBACK;
          }
          else if (hashCode == FRAGMENT_HASH)
          {
            return VisualRole::FRAGMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VisualRole>(hashCode);
          }

          return VisualRole::NOT_SET;
        }

        Aws::String GetNameForVisualRole(VisualRole enumValue)
        {
          switch(enumValue)
          {
          case VisualRole::NOT_SET:
            return {};
          case VisualRole::PRIMARY:
            return "PRIMARY";
          case VisualRole::COMPLIMENTARY:
            return "COMPLIMENTARY";
          case VisualRole::MULTI_INTENT:
            return "MULTI_INTENT";
          case VisualRole::FALLBACK:
            return "FALLBACK";
          case VisualRole::FRAGMENT:
            return "FRAGMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VisualRoleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
