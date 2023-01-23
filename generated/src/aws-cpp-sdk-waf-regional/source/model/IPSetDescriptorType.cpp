/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/IPSetDescriptorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFRegional
  {
    namespace Model
    {
      namespace IPSetDescriptorTypeMapper
      {

        static const int IPV4_HASH = HashingUtils::HashString("IPV4");
        static const int IPV6_HASH = HashingUtils::HashString("IPV6");


        IPSetDescriptorType GetIPSetDescriptorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPV4_HASH)
          {
            return IPSetDescriptorType::IPV4;
          }
          else if (hashCode == IPV6_HASH)
          {
            return IPSetDescriptorType::IPV6;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IPSetDescriptorType>(hashCode);
          }

          return IPSetDescriptorType::NOT_SET;
        }

        Aws::String GetNameForIPSetDescriptorType(IPSetDescriptorType enumValue)
        {
          switch(enumValue)
          {
          case IPSetDescriptorType::IPV4:
            return "IPV4";
          case IPSetDescriptorType::IPV6:
            return "IPV6";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IPSetDescriptorTypeMapper
    } // namespace Model
  } // namespace WAFRegional
} // namespace Aws
