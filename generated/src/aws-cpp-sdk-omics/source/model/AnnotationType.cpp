/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/AnnotationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace AnnotationTypeMapper
      {

        static const int GENERIC_HASH = HashingUtils::HashString("GENERIC");
        static const int CHR_POS_HASH = HashingUtils::HashString("CHR_POS");
        static const int CHR_POS_REF_ALT_HASH = HashingUtils::HashString("CHR_POS_REF_ALT");
        static const int CHR_START_END_ONE_BASE_HASH = HashingUtils::HashString("CHR_START_END_ONE_BASE");
        static const int CHR_START_END_REF_ALT_ONE_BASE_HASH = HashingUtils::HashString("CHR_START_END_REF_ALT_ONE_BASE");
        static const int CHR_START_END_ZERO_BASE_HASH = HashingUtils::HashString("CHR_START_END_ZERO_BASE");
        static const int CHR_START_END_REF_ALT_ZERO_BASE_HASH = HashingUtils::HashString("CHR_START_END_REF_ALT_ZERO_BASE");


        AnnotationType GetAnnotationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GENERIC_HASH)
          {
            return AnnotationType::GENERIC;
          }
          else if (hashCode == CHR_POS_HASH)
          {
            return AnnotationType::CHR_POS;
          }
          else if (hashCode == CHR_POS_REF_ALT_HASH)
          {
            return AnnotationType::CHR_POS_REF_ALT;
          }
          else if (hashCode == CHR_START_END_ONE_BASE_HASH)
          {
            return AnnotationType::CHR_START_END_ONE_BASE;
          }
          else if (hashCode == CHR_START_END_REF_ALT_ONE_BASE_HASH)
          {
            return AnnotationType::CHR_START_END_REF_ALT_ONE_BASE;
          }
          else if (hashCode == CHR_START_END_ZERO_BASE_HASH)
          {
            return AnnotationType::CHR_START_END_ZERO_BASE;
          }
          else if (hashCode == CHR_START_END_REF_ALT_ZERO_BASE_HASH)
          {
            return AnnotationType::CHR_START_END_REF_ALT_ZERO_BASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnnotationType>(hashCode);
          }

          return AnnotationType::NOT_SET;
        }

        Aws::String GetNameForAnnotationType(AnnotationType enumValue)
        {
          switch(enumValue)
          {
          case AnnotationType::GENERIC:
            return "GENERIC";
          case AnnotationType::CHR_POS:
            return "CHR_POS";
          case AnnotationType::CHR_POS_REF_ALT:
            return "CHR_POS_REF_ALT";
          case AnnotationType::CHR_START_END_ONE_BASE:
            return "CHR_START_END_ONE_BASE";
          case AnnotationType::CHR_START_END_REF_ALT_ONE_BASE:
            return "CHR_START_END_REF_ALT_ONE_BASE";
          case AnnotationType::CHR_START_END_ZERO_BASE:
            return "CHR_START_END_ZERO_BASE";
          case AnnotationType::CHR_START_END_REF_ALT_ZERO_BASE:
            return "CHR_START_END_REF_ALT_ZERO_BASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnnotationTypeMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
