/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/IndexType.h>
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
      namespace IndexTypeMapper
      {

        static const int ENTERPRISE_HASH = HashingUtils::HashString("ENTERPRISE");
        static const int STARTER_HASH = HashingUtils::HashString("STARTER");


        IndexType GetIndexTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENTERPRISE_HASH)
          {
            return IndexType::ENTERPRISE;
          }
          else if (hashCode == STARTER_HASH)
          {
            return IndexType::STARTER;
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
          case IndexType::NOT_SET:
            return {};
          case IndexType::ENTERPRISE:
            return "ENTERPRISE";
          case IndexType::STARTER:
            return "STARTER";
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
  } // namespace QBusiness
} // namespace Aws
