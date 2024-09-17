/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/APISchemaType.h>
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
      namespace APISchemaTypeMapper
      {

        static const int OPEN_API_V3_HASH = HashingUtils::HashString("OPEN_API_V3");


        APISchemaType GetAPISchemaTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPEN_API_V3_HASH)
          {
            return APISchemaType::OPEN_API_V3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<APISchemaType>(hashCode);
          }

          return APISchemaType::NOT_SET;
        }

        Aws::String GetNameForAPISchemaType(APISchemaType enumValue)
        {
          switch(enumValue)
          {
          case APISchemaType::NOT_SET:
            return {};
          case APISchemaType::OPEN_API_V3:
            return "OPEN_API_V3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace APISchemaTypeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
