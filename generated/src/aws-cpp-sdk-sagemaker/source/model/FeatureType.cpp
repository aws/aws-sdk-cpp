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

        static constexpr uint32_t Integral_HASH = ConstExprHashingUtils::HashString("Integral");
        static constexpr uint32_t Fractional_HASH = ConstExprHashingUtils::HashString("Fractional");
        static constexpr uint32_t String_HASH = ConstExprHashingUtils::HashString("String");


        FeatureType GetFeatureTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
