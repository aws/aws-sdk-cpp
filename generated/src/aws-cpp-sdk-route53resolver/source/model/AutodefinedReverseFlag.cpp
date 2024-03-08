/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/AutodefinedReverseFlag.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Resolver
  {
    namespace Model
    {
      namespace AutodefinedReverseFlagMapper
      {

        static const int ENABLE_HASH = HashingUtils::HashString("ENABLE");
        static const int DISABLE_HASH = HashingUtils::HashString("DISABLE");
        static const int USE_LOCAL_RESOURCE_SETTING_HASH = HashingUtils::HashString("USE_LOCAL_RESOURCE_SETTING");


        AutodefinedReverseFlag GetAutodefinedReverseFlagForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLE_HASH)
          {
            return AutodefinedReverseFlag::ENABLE;
          }
          else if (hashCode == DISABLE_HASH)
          {
            return AutodefinedReverseFlag::DISABLE;
          }
          else if (hashCode == USE_LOCAL_RESOURCE_SETTING_HASH)
          {
            return AutodefinedReverseFlag::USE_LOCAL_RESOURCE_SETTING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutodefinedReverseFlag>(hashCode);
          }

          return AutodefinedReverseFlag::NOT_SET;
        }

        Aws::String GetNameForAutodefinedReverseFlag(AutodefinedReverseFlag enumValue)
        {
          switch(enumValue)
          {
          case AutodefinedReverseFlag::NOT_SET:
            return {};
          case AutodefinedReverseFlag::ENABLE:
            return "ENABLE";
          case AutodefinedReverseFlag::DISABLE:
            return "DISABLE";
          case AutodefinedReverseFlag::USE_LOCAL_RESOURCE_SETTING:
            return "USE_LOCAL_RESOURCE_SETTING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutodefinedReverseFlagMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
