/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/Validation.h>
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
      namespace ValidationMapper
      {

        static constexpr uint32_t ENABLE_HASH = ConstExprHashingUtils::HashString("ENABLE");
        static constexpr uint32_t DISABLE_HASH = ConstExprHashingUtils::HashString("DISABLE");
        static constexpr uint32_t USE_LOCAL_RESOURCE_SETTING_HASH = ConstExprHashingUtils::HashString("USE_LOCAL_RESOURCE_SETTING");


        Validation GetValidationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLE_HASH)
          {
            return Validation::ENABLE;
          }
          else if (hashCode == DISABLE_HASH)
          {
            return Validation::DISABLE;
          }
          else if (hashCode == USE_LOCAL_RESOURCE_SETTING_HASH)
          {
            return Validation::USE_LOCAL_RESOURCE_SETTING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Validation>(hashCode);
          }

          return Validation::NOT_SET;
        }

        Aws::String GetNameForValidation(Validation enumValue)
        {
          switch(enumValue)
          {
          case Validation::NOT_SET:
            return {};
          case Validation::ENABLE:
            return "ENABLE";
          case Validation::DISABLE:
            return "DISABLE";
          case Validation::USE_LOCAL_RESOURCE_SETTING:
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

      } // namespace ValidationMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
