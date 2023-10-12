/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClarifyFeatureType.h>
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
      namespace ClarifyFeatureTypeMapper
      {

        static constexpr uint32_t numerical_HASH = ConstExprHashingUtils::HashString("numerical");
        static constexpr uint32_t categorical_HASH = ConstExprHashingUtils::HashString("categorical");
        static constexpr uint32_t text_HASH = ConstExprHashingUtils::HashString("text");


        ClarifyFeatureType GetClarifyFeatureTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == numerical_HASH)
          {
            return ClarifyFeatureType::numerical;
          }
          else if (hashCode == categorical_HASH)
          {
            return ClarifyFeatureType::categorical;
          }
          else if (hashCode == text_HASH)
          {
            return ClarifyFeatureType::text;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClarifyFeatureType>(hashCode);
          }

          return ClarifyFeatureType::NOT_SET;
        }

        Aws::String GetNameForClarifyFeatureType(ClarifyFeatureType enumValue)
        {
          switch(enumValue)
          {
          case ClarifyFeatureType::NOT_SET:
            return {};
          case ClarifyFeatureType::numerical:
            return "numerical";
          case ClarifyFeatureType::categorical:
            return "categorical";
          case ClarifyFeatureType::text:
            return "text";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClarifyFeatureTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
