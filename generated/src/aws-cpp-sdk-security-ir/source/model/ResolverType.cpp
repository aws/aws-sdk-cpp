/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/ResolverType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityIR
  {
    namespace Model
    {
      namespace ResolverTypeMapper
      {

        static const int AWS_HASH = HashingUtils::HashString("AWS");
        static const int Self_HASH = HashingUtils::HashString("Self");


        ResolverType GetResolverTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_HASH)
          {
            return ResolverType::AWS;
          }
          else if (hashCode == Self_HASH)
          {
            return ResolverType::Self;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolverType>(hashCode);
          }

          return ResolverType::NOT_SET;
        }

        Aws::String GetNameForResolverType(ResolverType enumValue)
        {
          switch(enumValue)
          {
          case ResolverType::NOT_SET:
            return {};
          case ResolverType::AWS:
            return "AWS";
          case ResolverType::Self:
            return "Self";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolverTypeMapper
    } // namespace Model
  } // namespace SecurityIR
} // namespace Aws
