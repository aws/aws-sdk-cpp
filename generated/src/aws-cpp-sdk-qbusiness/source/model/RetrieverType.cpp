/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/RetrieverType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace RetrieverTypeMapper
      {

        static const int NATIVE_INDEX_HASH = HashingUtils::HashString("NATIVE_INDEX");
        static const int KENDRA_INDEX_HASH = HashingUtils::HashString("KENDRA_INDEX");


        RetrieverType GetRetrieverTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NATIVE_INDEX_HASH)
          {
            return RetrieverType::NATIVE_INDEX;
          }
          else if (hashCode == KENDRA_INDEX_HASH)
          {
            return RetrieverType::KENDRA_INDEX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetrieverType>(hashCode);
          }

          return RetrieverType::NOT_SET;
        }

        Aws::String GetNameForRetrieverType(RetrieverType enumValue)
        {
          switch(enumValue)
          {
          case RetrieverType::NOT_SET:
            return {};
          case RetrieverType::NATIVE_INDEX:
            return "NATIVE_INDEX";
          case RetrieverType::KENDRA_INDEX:
            return "KENDRA_INDEX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetrieverTypeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
