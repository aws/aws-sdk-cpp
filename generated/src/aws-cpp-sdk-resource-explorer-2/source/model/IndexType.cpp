/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/IndexType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResourceExplorer2
  {
    namespace Model
    {
      namespace IndexTypeMapper
      {

        static const int LOCAL_HASH = HashingUtils::HashString("LOCAL");
        static const int AGGREGATOR_HASH = HashingUtils::HashString("AGGREGATOR");


        IndexType GetIndexTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOCAL_HASH)
          {
            return IndexType::LOCAL;
          }
          else if (hashCode == AGGREGATOR_HASH)
          {
            return IndexType::AGGREGATOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IndexType>(hashCode);
          }

          return IndexType::NOT_SET;
        }

        Aws::String GetNameForIndexType(IndexType enumValue)
        {
          switch(enumValue)
          {
          case IndexType::LOCAL:
            return "LOCAL";
          case IndexType::AGGREGATOR:
            return "AGGREGATOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IndexTypeMapper
    } // namespace Model
  } // namespace ResourceExplorer2
} // namespace Aws
