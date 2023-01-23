/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SplitType.h>
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
      namespace SplitTypeMapper
      {

        static const int None_HASH = HashingUtils::HashString("None");
        static const int Line_HASH = HashingUtils::HashString("Line");
        static const int RecordIO_HASH = HashingUtils::HashString("RecordIO");
        static const int TFRecord_HASH = HashingUtils::HashString("TFRecord");


        SplitType GetSplitTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_HASH)
          {
            return SplitType::None;
          }
          else if (hashCode == Line_HASH)
          {
            return SplitType::Line;
          }
          else if (hashCode == RecordIO_HASH)
          {
            return SplitType::RecordIO;
          }
          else if (hashCode == TFRecord_HASH)
          {
            return SplitType::TFRecord;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SplitType>(hashCode);
          }

          return SplitType::NOT_SET;
        }

        Aws::String GetNameForSplitType(SplitType enumValue)
        {
          switch(enumValue)
          {
          case SplitType::None:
            return "None";
          case SplitType::Line:
            return "Line";
          case SplitType::RecordIO:
            return "RecordIO";
          case SplitType::TFRecord:
            return "TFRecord";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SplitTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
