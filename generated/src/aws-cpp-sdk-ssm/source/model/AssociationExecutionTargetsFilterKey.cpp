/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AssociationExecutionTargetsFilterKey.h>
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
      namespace AssociationExecutionTargetsFilterKeyMapper
      {

        static const int Status_HASH = HashingUtils::HashString("Status");
        static const int ResourceId_HASH = HashingUtils::HashString("ResourceId");
        static const int ResourceType_HASH = HashingUtils::HashString("ResourceType");


        AssociationExecutionTargetsFilterKey GetAssociationExecutionTargetsFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Status_HASH)
          {
            return AssociationExecutionTargetsFilterKey::Status;
          }
          else if (hashCode == ResourceId_HASH)
          {
            return AssociationExecutionTargetsFilterKey::ResourceId;
          }
          else if (hashCode == ResourceType_HASH)
          {
            return AssociationExecutionTargetsFilterKey::ResourceType;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationExecutionTargetsFilterKey>(hashCode);
          }

          return AssociationExecutionTargetsFilterKey::NOT_SET;
        }

        Aws::String GetNameForAssociationExecutionTargetsFilterKey(AssociationExecutionTargetsFilterKey enumValue)
        {
          switch(enumValue)
          {
          case AssociationExecutionTargetsFilterKey::Status:
            return "Status";
          case AssociationExecutionTargetsFilterKey::ResourceId:
            return "ResourceId";
          case AssociationExecutionTargetsFilterKey::ResourceType:
            return "ResourceType";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationExecutionTargetsFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
