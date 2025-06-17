/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/PolicyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MPA
  {
    namespace Model
    {
      namespace PolicyTypeMapper
      {

        static const int AWS_MANAGED_HASH = HashingUtils::HashString("AWS_MANAGED");
        static const int AWS_RAM_HASH = HashingUtils::HashString("AWS_RAM");


        PolicyType GetPolicyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_MANAGED_HASH)
          {
            return PolicyType::AWS_MANAGED;
          }
          else if (hashCode == AWS_RAM_HASH)
          {
            return PolicyType::AWS_RAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyType>(hashCode);
          }

          return PolicyType::NOT_SET;
        }

        Aws::String GetNameForPolicyType(PolicyType enumValue)
        {
          switch(enumValue)
          {
          case PolicyType::NOT_SET:
            return {};
          case PolicyType::AWS_MANAGED:
            return "AWS_MANAGED";
          case PolicyType::AWS_RAM:
            return "AWS_RAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyTypeMapper
    } // namespace Model
  } // namespace MPA
} // namespace Aws
