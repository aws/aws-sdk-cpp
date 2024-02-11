/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FillingType.h>
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
      namespace FillingTypeMapper
      {

        static const int frontfill_HASH = HashingUtils::HashString("frontfill");
        static const int middlefill_HASH = HashingUtils::HashString("middlefill");
        static const int backfill_HASH = HashingUtils::HashString("backfill");
        static const int futurefill_HASH = HashingUtils::HashString("futurefill");
        static const int frontfill_value_HASH = HashingUtils::HashString("frontfill_value");
        static const int middlefill_value_HASH = HashingUtils::HashString("middlefill_value");
        static const int backfill_value_HASH = HashingUtils::HashString("backfill_value");
        static const int futurefill_value_HASH = HashingUtils::HashString("futurefill_value");


        FillingType GetFillingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == frontfill_HASH)
          {
            return FillingType::frontfill;
          }
          else if (hashCode == middlefill_HASH)
          {
            return FillingType::middlefill;
          }
          else if (hashCode == backfill_HASH)
          {
            return FillingType::backfill;
          }
          else if (hashCode == futurefill_HASH)
          {
            return FillingType::futurefill;
          }
          else if (hashCode == frontfill_value_HASH)
          {
            return FillingType::frontfill_value;
          }
          else if (hashCode == middlefill_value_HASH)
          {
            return FillingType::middlefill_value;
          }
          else if (hashCode == backfill_value_HASH)
          {
            return FillingType::backfill_value;
          }
          else if (hashCode == futurefill_value_HASH)
          {
            return FillingType::futurefill_value;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FillingType>(hashCode);
          }

          return FillingType::NOT_SET;
        }

        Aws::String GetNameForFillingType(FillingType enumValue)
        {
          switch(enumValue)
          {
          case FillingType::NOT_SET:
            return {};
          case FillingType::frontfill:
            return "frontfill";
          case FillingType::middlefill:
            return "middlefill";
          case FillingType::backfill:
            return "backfill";
          case FillingType::futurefill:
            return "futurefill";
          case FillingType::frontfill_value:
            return "frontfill_value";
          case FillingType::middlefill_value:
            return "middlefill_value";
          case FillingType::backfill_value:
            return "backfill_value";
          case FillingType::futurefill_value:
            return "futurefill_value";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FillingTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
