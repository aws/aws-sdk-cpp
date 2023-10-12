/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/EvaluationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace EvaluationTypeMapper
      {

        static constexpr uint32_t STATIC__HASH = ConstExprHashingUtils::HashString("STATIC");
        static constexpr uint32_t DYNAMIC_HASH = ConstExprHashingUtils::HashString("DYNAMIC");


        EvaluationType GetEvaluationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATIC__HASH)
          {
            return EvaluationType::STATIC_;
          }
          else if (hashCode == DYNAMIC_HASH)
          {
            return EvaluationType::DYNAMIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationType>(hashCode);
          }

          return EvaluationType::NOT_SET;
        }

        Aws::String GetNameForEvaluationType(EvaluationType enumValue)
        {
          switch(enumValue)
          {
          case EvaluationType::NOT_SET:
            return {};
          case EvaluationType::STATIC_:
            return "STATIC";
          case EvaluationType::DYNAMIC:
            return "DYNAMIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvaluationTypeMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
