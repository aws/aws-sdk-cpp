/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DataLocationConstraint.h>
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
      namespace DataLocationConstraintMapper
      {

        static const int AnyLocation_HASH = HashingUtils::HashString("AnyLocation");
        static const int SameContinent_HASH = HashingUtils::HashString("SameContinent");
        static const int SameCountry_HASH = HashingUtils::HashString("SameCountry");


        DataLocationConstraint GetDataLocationConstraintForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AnyLocation_HASH)
          {
            return DataLocationConstraint::AnyLocation;
          }
          else if (hashCode == SameContinent_HASH)
          {
            return DataLocationConstraint::SameContinent;
          }
          else if (hashCode == SameCountry_HASH)
          {
            return DataLocationConstraint::SameCountry;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataLocationConstraint>(hashCode);
          }

          return DataLocationConstraint::NOT_SET;
        }

        Aws::String GetNameForDataLocationConstraint(DataLocationConstraint enumValue)
        {
          switch(enumValue)
          {
          case DataLocationConstraint::NOT_SET:
            return {};
          case DataLocationConstraint::AnyLocation:
            return "AnyLocation";
          case DataLocationConstraint::SameContinent:
            return "SameContinent";
          case DataLocationConstraint::SameCountry:
            return "SameCountry";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataLocationConstraintMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
