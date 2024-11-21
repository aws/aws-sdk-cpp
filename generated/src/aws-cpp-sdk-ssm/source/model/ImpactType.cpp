/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ImpactType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace ImpactTypeMapper
      {

        static const int Mutating_HASH = HashingUtils::HashString("Mutating");
        static const int NonMutating_HASH = HashingUtils::HashString("NonMutating");
        static const int Undetermined_HASH = HashingUtils::HashString("Undetermined");


        ImpactType GetImpactTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Mutating_HASH)
          {
            return ImpactType::Mutating;
          }
          else if (hashCode == NonMutating_HASH)
          {
            return ImpactType::NonMutating;
          }
          else if (hashCode == Undetermined_HASH)
          {
            return ImpactType::Undetermined;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImpactType>(hashCode);
          }

          return ImpactType::NOT_SET;
        }

        Aws::String GetNameForImpactType(ImpactType enumValue)
        {
          switch(enumValue)
          {
          case ImpactType::NOT_SET:
            return {};
          case ImpactType::Mutating:
            return "Mutating";
          case ImpactType::NonMutating:
            return "NonMutating";
          case ImpactType::Undetermined:
            return "Undetermined";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImpactTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
