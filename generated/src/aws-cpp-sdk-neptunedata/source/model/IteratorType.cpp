/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/IteratorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace neptunedata
  {
    namespace Model
    {
      namespace IteratorTypeMapper
      {

        static const int AT_SEQUENCE_NUMBER_HASH = HashingUtils::HashString("AT_SEQUENCE_NUMBER");
        static const int AFTER_SEQUENCE_NUMBER_HASH = HashingUtils::HashString("AFTER_SEQUENCE_NUMBER");
        static const int TRIM_HORIZON_HASH = HashingUtils::HashString("TRIM_HORIZON");
        static const int LATEST_HASH = HashingUtils::HashString("LATEST");


        IteratorType GetIteratorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AT_SEQUENCE_NUMBER_HASH)
          {
            return IteratorType::AT_SEQUENCE_NUMBER;
          }
          else if (hashCode == AFTER_SEQUENCE_NUMBER_HASH)
          {
            return IteratorType::AFTER_SEQUENCE_NUMBER;
          }
          else if (hashCode == TRIM_HORIZON_HASH)
          {
            return IteratorType::TRIM_HORIZON;
          }
          else if (hashCode == LATEST_HASH)
          {
            return IteratorType::LATEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IteratorType>(hashCode);
          }

          return IteratorType::NOT_SET;
        }

        Aws::String GetNameForIteratorType(IteratorType enumValue)
        {
          switch(enumValue)
          {
          case IteratorType::NOT_SET:
            return {};
          case IteratorType::AT_SEQUENCE_NUMBER:
            return "AT_SEQUENCE_NUMBER";
          case IteratorType::AFTER_SEQUENCE_NUMBER:
            return "AFTER_SEQUENCE_NUMBER";
          case IteratorType::TRIM_HORIZON:
            return "TRIM_HORIZON";
          case IteratorType::LATEST:
            return "LATEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IteratorTypeMapper
    } // namespace Model
  } // namespace neptunedata
} // namespace Aws
