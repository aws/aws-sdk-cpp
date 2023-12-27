/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/LabelMatchScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace LabelMatchScopeMapper
      {

        static const int LABEL_HASH = HashingUtils::HashString("LABEL");
        static const int NAMESPACE_HASH = HashingUtils::HashString("NAMESPACE");


        LabelMatchScope GetLabelMatchScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LABEL_HASH)
          {
            return LabelMatchScope::LABEL;
          }
          else if (hashCode == NAMESPACE_HASH)
          {
            return LabelMatchScope::NAMESPACE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LabelMatchScope>(hashCode);
          }

          return LabelMatchScope::NOT_SET;
        }

        Aws::String GetNameForLabelMatchScope(LabelMatchScope enumValue)
        {
          switch(enumValue)
          {
          case LabelMatchScope::NOT_SET:
            return {};
          case LabelMatchScope::LABEL:
            return "LABEL";
          case LabelMatchScope::NAMESPACE:
            return "NAMESPACE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LabelMatchScopeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
