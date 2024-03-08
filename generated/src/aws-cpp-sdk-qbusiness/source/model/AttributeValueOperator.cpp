/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AttributeValueOperator.h>
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
      namespace AttributeValueOperatorMapper
      {

        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        AttributeValueOperator GetAttributeValueOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETE__HASH)
          {
            return AttributeValueOperator::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttributeValueOperator>(hashCode);
          }

          return AttributeValueOperator::NOT_SET;
        }

        Aws::String GetNameForAttributeValueOperator(AttributeValueOperator enumValue)
        {
          switch(enumValue)
          {
          case AttributeValueOperator::NOT_SET:
            return {};
          case AttributeValueOperator::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttributeValueOperatorMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
