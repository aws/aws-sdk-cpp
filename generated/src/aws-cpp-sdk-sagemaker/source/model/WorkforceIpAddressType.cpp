/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/WorkforceIpAddressType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace WorkforceIpAddressTypeMapper
      {

        static const int ipv4_HASH = HashingUtils::HashString("ipv4");
        static const int dualstack_HASH = HashingUtils::HashString("dualstack");


        WorkforceIpAddressType GetWorkforceIpAddressTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ipv4_HASH)
          {
            return WorkforceIpAddressType::ipv4;
          }
          else if (hashCode == dualstack_HASH)
          {
            return WorkforceIpAddressType::dualstack;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkforceIpAddressType>(hashCode);
          }

          return WorkforceIpAddressType::NOT_SET;
        }

        Aws::String GetNameForWorkforceIpAddressType(WorkforceIpAddressType enumValue)
        {
          switch(enumValue)
          {
          case WorkforceIpAddressType::NOT_SET:
            return {};
          case WorkforceIpAddressType::ipv4:
            return "ipv4";
          case WorkforceIpAddressType::dualstack:
            return "dualstack";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkforceIpAddressTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
