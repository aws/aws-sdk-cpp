/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/KnownGenderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace KnownGenderTypeMapper
      {

        static constexpr uint32_t Male_HASH = ConstExprHashingUtils::HashString("Male");
        static constexpr uint32_t Female_HASH = ConstExprHashingUtils::HashString("Female");
        static constexpr uint32_t Nonbinary_HASH = ConstExprHashingUtils::HashString("Nonbinary");
        static constexpr uint32_t Unlisted_HASH = ConstExprHashingUtils::HashString("Unlisted");


        KnownGenderType GetKnownGenderTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Male_HASH)
          {
            return KnownGenderType::Male;
          }
          else if (hashCode == Female_HASH)
          {
            return KnownGenderType::Female;
          }
          else if (hashCode == Nonbinary_HASH)
          {
            return KnownGenderType::Nonbinary;
          }
          else if (hashCode == Unlisted_HASH)
          {
            return KnownGenderType::Unlisted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KnownGenderType>(hashCode);
          }

          return KnownGenderType::NOT_SET;
        }

        Aws::String GetNameForKnownGenderType(KnownGenderType enumValue)
        {
          switch(enumValue)
          {
          case KnownGenderType::NOT_SET:
            return {};
          case KnownGenderType::Male:
            return "Male";
          case KnownGenderType::Female:
            return "Female";
          case KnownGenderType::Nonbinary:
            return "Nonbinary";
          case KnownGenderType::Unlisted:
            return "Unlisted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KnownGenderTypeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
