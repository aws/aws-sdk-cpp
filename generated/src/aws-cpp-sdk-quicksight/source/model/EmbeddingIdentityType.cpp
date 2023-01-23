/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/EmbeddingIdentityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace EmbeddingIdentityTypeMapper
      {

        static const int IAM_HASH = HashingUtils::HashString("IAM");
        static const int QUICKSIGHT_HASH = HashingUtils::HashString("QUICKSIGHT");
        static const int ANONYMOUS_HASH = HashingUtils::HashString("ANONYMOUS");


        EmbeddingIdentityType GetEmbeddingIdentityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_HASH)
          {
            return EmbeddingIdentityType::IAM;
          }
          else if (hashCode == QUICKSIGHT_HASH)
          {
            return EmbeddingIdentityType::QUICKSIGHT;
          }
          else if (hashCode == ANONYMOUS_HASH)
          {
            return EmbeddingIdentityType::ANONYMOUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EmbeddingIdentityType>(hashCode);
          }

          return EmbeddingIdentityType::NOT_SET;
        }

        Aws::String GetNameForEmbeddingIdentityType(EmbeddingIdentityType enumValue)
        {
          switch(enumValue)
          {
          case EmbeddingIdentityType::IAM:
            return "IAM";
          case EmbeddingIdentityType::QUICKSIGHT:
            return "QUICKSIGHT";
          case EmbeddingIdentityType::ANONYMOUS:
            return "ANONYMOUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EmbeddingIdentityTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
