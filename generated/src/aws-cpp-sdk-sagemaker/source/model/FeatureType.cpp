/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FeatureType.h>
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
      namespace FeatureTypeMapper
      {

        static const int Integral_HASH = HashingUtils::HashString("Integral");
        static const int Fractional_HASH = HashingUtils::HashString("Fractional");
        static const int String_HASH = HashingUtils::HashString("String");


        FeatureType GetFeatureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Integral_HASH)
          {
            return FeatureType::Integral;
          }
          else if (hashCode == Fractional_HASH)
          {
            return FeatureType::Fractional;
          }
          else if (hashCode == String_HASH)
          {
            return FeatureType::String;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeatureType>(hashCode);
          }

          return FeatureType::NOT_SET;
        }

        Aws::String GetNameForFeatureType(FeatureType enumValue)
        {
          switch(enumValue)
          {
          case FeatureType::NOT_SET:
            return {};
          case FeatureType::Integral:
            return "Integral";
          case FeatureType::Fractional:
            return "Fractional";
          case FeatureType::String:
            return "String";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeatureTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
