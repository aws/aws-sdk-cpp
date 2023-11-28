/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ActionPayloadFieldType.h>
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
      namespace ActionPayloadFieldTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");
        static const int ARRAY_HASH = HashingUtils::HashString("ARRAY");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");


        ActionPayloadFieldType GetActionPayloadFieldTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return ActionPayloadFieldType::STRING;
          }
          else if (hashCode == NUMBER_HASH)
          {
            return ActionPayloadFieldType::NUMBER;
          }
          else if (hashCode == ARRAY_HASH)
          {
            return ActionPayloadFieldType::ARRAY;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return ActionPayloadFieldType::BOOLEAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionPayloadFieldType>(hashCode);
          }

          return ActionPayloadFieldType::NOT_SET;
        }

        Aws::String GetNameForActionPayloadFieldType(ActionPayloadFieldType enumValue)
        {
          switch(enumValue)
          {
          case ActionPayloadFieldType::NOT_SET:
            return {};
          case ActionPayloadFieldType::STRING:
            return "STRING";
          case ActionPayloadFieldType::NUMBER:
            return "NUMBER";
          case ActionPayloadFieldType::ARRAY:
            return "ARRAY";
          case ActionPayloadFieldType::BOOLEAN:
            return "BOOLEAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionPayloadFieldTypeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
