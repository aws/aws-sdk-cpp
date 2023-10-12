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

        static constexpr uint32_t None_HASH = ConstExprHashingUtils::HashString("None");
        static constexpr uint32_t Line_HASH = ConstExprHashingUtils::HashString("Line");
        static constexpr uint32_t RecordIO_HASH = ConstExprHashingUtils::HashString("RecordIO");
        static constexpr uint32_t TFRecord_HASH = ConstExprHashingUtils::HashString("TFRecord");


        SplitType GetSplitTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case SplitType::NOT_SET:
            return {};
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
