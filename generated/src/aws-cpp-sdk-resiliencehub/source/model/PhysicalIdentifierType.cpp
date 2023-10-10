/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/PhysicalIdentifierType.h>
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
      namespace PhysicalIdentifierTypeMapper
      {

        static const int Arn_HASH = HashingUtils::HashString("Arn");
        static const int Native_HASH = HashingUtils::HashString("Native");


        PhysicalIdentifierType GetPhysicalIdentifierTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Arn_HASH)
          {
            return PhysicalIdentifierType::Arn;
          }
          else if (hashCode == Native_HASH)
          {
            return PhysicalIdentifierType::Native;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhysicalIdentifierType>(hashCode);
          }

          return PhysicalIdentifierType::NOT_SET;
        }

        Aws::String GetNameForPhysicalIdentifierType(PhysicalIdentifierType enumValue)
        {
          switch(enumValue)
          {
          case PhysicalIdentifierType::NOT_SET:
            return {};
          case PhysicalIdentifierType::Arn:
            return "Arn";
          case PhysicalIdentifierType::Native:
            return "Native";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhysicalIdentifierTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
