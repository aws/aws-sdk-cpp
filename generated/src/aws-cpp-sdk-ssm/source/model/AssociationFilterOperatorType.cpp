/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AssociationFilterOperatorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace AssociationFilterOperatorTypeMapper
      {

        static const int EQUAL_HASH = HashingUtils::HashString("EQUAL");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");


        AssociationFilterOperatorType GetAssociationFilterOperatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUAL_HASH)
          {
            return AssociationFilterOperatorType::EQUAL;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return AssociationFilterOperatorType::LESS_THAN;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return AssociationFilterOperatorType::GREATER_THAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationFilterOperatorType>(hashCode);
          }

          return AssociationFilterOperatorType::NOT_SET;
        }

        Aws::String GetNameForAssociationFilterOperatorType(AssociationFilterOperatorType enumValue)
        {
          switch(enumValue)
          {
          case AssociationFilterOperatorType::EQUAL:
            return "EQUAL";
          case AssociationFilterOperatorType::LESS_THAN:
            return "LESS_THAN";
          case AssociationFilterOperatorType::GREATER_THAN:
            return "GREATER_THAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationFilterOperatorTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
