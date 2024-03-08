/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/SopServiceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace SopServiceTypeMapper
      {

        static const int SSM_HASH = HashingUtils::HashString("SSM");


        SopServiceType GetSopServiceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSM_HASH)
          {
            return SopServiceType::SSM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SopServiceType>(hashCode);
          }

          return SopServiceType::NOT_SET;
        }

        Aws::String GetNameForSopServiceType(SopServiceType enumValue)
        {
          switch(enumValue)
          {
          case SopServiceType::NOT_SET:
            return {};
          case SopServiceType::SSM:
            return "SSM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SopServiceTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
