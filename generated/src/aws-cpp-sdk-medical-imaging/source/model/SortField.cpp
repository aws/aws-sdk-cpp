/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/SortField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MedicalImaging
  {
    namespace Model
    {
      namespace SortFieldMapper
      {

        static const int updatedAt_HASH = HashingUtils::HashString("updatedAt");
        static const int createdAt_HASH = HashingUtils::HashString("createdAt");
        static const int DICOMStudyDateAndTime_HASH = HashingUtils::HashString("DICOMStudyDateAndTime");


        SortField GetSortFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == updatedAt_HASH)
          {
            return SortField::updatedAt;
          }
          else if (hashCode == createdAt_HASH)
          {
            return SortField::createdAt;
          }
          else if (hashCode == DICOMStudyDateAndTime_HASH)
          {
            return SortField::DICOMStudyDateAndTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortField>(hashCode);
          }

          return SortField::NOT_SET;
        }

        Aws::String GetNameForSortField(SortField enumValue)
        {
          switch(enumValue)
          {
          case SortField::NOT_SET:
            return {};
          case SortField::updatedAt:
            return "updatedAt";
          case SortField::createdAt:
            return "createdAt";
          case SortField::DICOMStudyDateAndTime:
            return "DICOMStudyDateAndTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortFieldMapper
    } // namespace Model
  } // namespace MedicalImaging
} // namespace Aws
