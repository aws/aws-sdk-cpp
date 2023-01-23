/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AssociationFilterKey.h>
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
      namespace AssociationFilterKeyMapper
      {

        static const int InstanceId_HASH = HashingUtils::HashString("InstanceId");
        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int AssociationId_HASH = HashingUtils::HashString("AssociationId");
        static const int AssociationStatusName_HASH = HashingUtils::HashString("AssociationStatusName");
        static const int LastExecutedBefore_HASH = HashingUtils::HashString("LastExecutedBefore");
        static const int LastExecutedAfter_HASH = HashingUtils::HashString("LastExecutedAfter");
        static const int AssociationName_HASH = HashingUtils::HashString("AssociationName");
        static const int ResourceGroupName_HASH = HashingUtils::HashString("ResourceGroupName");


        AssociationFilterKey GetAssociationFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InstanceId_HASH)
          {
            return AssociationFilterKey::InstanceId;
          }
          else if (hashCode == Name_HASH)
          {
            return AssociationFilterKey::Name;
          }
          else if (hashCode == AssociationId_HASH)
          {
            return AssociationFilterKey::AssociationId;
          }
          else if (hashCode == AssociationStatusName_HASH)
          {
            return AssociationFilterKey::AssociationStatusName;
          }
          else if (hashCode == LastExecutedBefore_HASH)
          {
            return AssociationFilterKey::LastExecutedBefore;
          }
          else if (hashCode == LastExecutedAfter_HASH)
          {
            return AssociationFilterKey::LastExecutedAfter;
          }
          else if (hashCode == AssociationName_HASH)
          {
            return AssociationFilterKey::AssociationName;
          }
          else if (hashCode == ResourceGroupName_HASH)
          {
            return AssociationFilterKey::ResourceGroupName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationFilterKey>(hashCode);
          }

          return AssociationFilterKey::NOT_SET;
        }

        Aws::String GetNameForAssociationFilterKey(AssociationFilterKey enumValue)
        {
          switch(enumValue)
          {
          case AssociationFilterKey::InstanceId:
            return "InstanceId";
          case AssociationFilterKey::Name:
            return "Name";
          case AssociationFilterKey::AssociationId:
            return "AssociationId";
          case AssociationFilterKey::AssociationStatusName:
            return "AssociationStatusName";
          case AssociationFilterKey::LastExecutedBefore:
            return "LastExecutedBefore";
          case AssociationFilterKey::LastExecutedAfter:
            return "LastExecutedAfter";
          case AssociationFilterKey::AssociationName:
            return "AssociationName";
          case AssociationFilterKey::ResourceGroupName:
            return "ResourceGroupName";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
