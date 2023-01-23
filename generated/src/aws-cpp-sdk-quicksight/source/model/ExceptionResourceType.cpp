/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ExceptionResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace ExceptionResourceTypeMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int GROUP_HASH = HashingUtils::HashString("GROUP");
        static const int NAMESPACE_HASH = HashingUtils::HashString("NAMESPACE");
        static const int ACCOUNT_SETTINGS_HASH = HashingUtils::HashString("ACCOUNT_SETTINGS");
        static const int IAMPOLICY_ASSIGNMENT_HASH = HashingUtils::HashString("IAMPOLICY_ASSIGNMENT");
        static const int DATA_SOURCE_HASH = HashingUtils::HashString("DATA_SOURCE");
        static const int DATA_SET_HASH = HashingUtils::HashString("DATA_SET");
        static const int VPC_CONNECTION_HASH = HashingUtils::HashString("VPC_CONNECTION");
        static const int INGESTION_HASH = HashingUtils::HashString("INGESTION");


        ExceptionResourceType GetExceptionResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return ExceptionResourceType::USER;
          }
          else if (hashCode == GROUP_HASH)
          {
            return ExceptionResourceType::GROUP;
          }
          else if (hashCode == NAMESPACE_HASH)
          {
            return ExceptionResourceType::NAMESPACE;
          }
          else if (hashCode == ACCOUNT_SETTINGS_HASH)
          {
            return ExceptionResourceType::ACCOUNT_SETTINGS;
          }
          else if (hashCode == IAMPOLICY_ASSIGNMENT_HASH)
          {
            return ExceptionResourceType::IAMPOLICY_ASSIGNMENT;
          }
          else if (hashCode == DATA_SOURCE_HASH)
          {
            return ExceptionResourceType::DATA_SOURCE;
          }
          else if (hashCode == DATA_SET_HASH)
          {
            return ExceptionResourceType::DATA_SET;
          }
          else if (hashCode == VPC_CONNECTION_HASH)
          {
            return ExceptionResourceType::VPC_CONNECTION;
          }
          else if (hashCode == INGESTION_HASH)
          {
            return ExceptionResourceType::INGESTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExceptionResourceType>(hashCode);
          }

          return ExceptionResourceType::NOT_SET;
        }

        Aws::String GetNameForExceptionResourceType(ExceptionResourceType enumValue)
        {
          switch(enumValue)
          {
          case ExceptionResourceType::USER:
            return "USER";
          case ExceptionResourceType::GROUP:
            return "GROUP";
          case ExceptionResourceType::NAMESPACE:
            return "NAMESPACE";
          case ExceptionResourceType::ACCOUNT_SETTINGS:
            return "ACCOUNT_SETTINGS";
          case ExceptionResourceType::IAMPOLICY_ASSIGNMENT:
            return "IAMPOLICY_ASSIGNMENT";
          case ExceptionResourceType::DATA_SOURCE:
            return "DATA_SOURCE";
          case ExceptionResourceType::DATA_SET:
            return "DATA_SET";
          case ExceptionResourceType::VPC_CONNECTION:
            return "VPC_CONNECTION";
          case ExceptionResourceType::INGESTION:
            return "INGESTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExceptionResourceTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
