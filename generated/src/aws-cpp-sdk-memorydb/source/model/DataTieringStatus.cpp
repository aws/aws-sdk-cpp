/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/DataTieringStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MemoryDB
  {
    namespace Model
    {
      namespace DataTieringStatusMapper
      {

        static const int true__HASH = HashingUtils::HashString("true");
        static const int false__HASH = HashingUtils::HashString("false");


        DataTieringStatus GetDataTieringStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == true__HASH)
          {
            return DataTieringStatus::true_;
          }
          else if (hashCode == false__HASH)
          {
            return DataTieringStatus::false_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataTieringStatus>(hashCode);
          }

          return DataTieringStatus::NOT_SET;
        }

        Aws::String GetNameForDataTieringStatus(DataTieringStatus enumValue)
        {
          switch(enumValue)
          {
          case DataTieringStatus::true_:
            return "true";
          case DataTieringStatus::false_:
            return "false";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataTieringStatusMapper
    } // namespace Model
  } // namespace MemoryDB
} // namespace Aws
