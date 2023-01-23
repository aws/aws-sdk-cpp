/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClarifyTextGranularity.h>
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
      namespace ClarifyTextGranularityMapper
      {

        static const int token_HASH = HashingUtils::HashString("token");
        static const int sentence_HASH = HashingUtils::HashString("sentence");
        static const int paragraph_HASH = HashingUtils::HashString("paragraph");


        ClarifyTextGranularity GetClarifyTextGranularityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == token_HASH)
          {
            return ClarifyTextGranularity::token;
          }
          else if (hashCode == sentence_HASH)
          {
            return ClarifyTextGranularity::sentence;
          }
          else if (hashCode == paragraph_HASH)
          {
            return ClarifyTextGranularity::paragraph;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClarifyTextGranularity>(hashCode);
          }

          return ClarifyTextGranularity::NOT_SET;
        }

        Aws::String GetNameForClarifyTextGranularity(ClarifyTextGranularity enumValue)
        {
          switch(enumValue)
          {
          case ClarifyTextGranularity::token:
            return "token";
          case ClarifyTextGranularity::sentence:
            return "sentence";
          case ClarifyTextGranularity::paragraph:
            return "paragraph";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClarifyTextGranularityMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
