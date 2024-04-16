/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/IssueManagementType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace IssueManagementTypeMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        IssueManagementType GetIssueManagementTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return IssueManagementType::AUTO;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return IssueManagementType::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IssueManagementType>(hashCode);
          }

          return IssueManagementType::NOT_SET;
        }

        Aws::String GetNameForIssueManagementType(IssueManagementType enumValue)
        {
          switch(enumValue)
          {
          case IssueManagementType::NOT_SET:
            return {};
          case IssueManagementType::AUTO:
            return "AUTO";
          case IssueManagementType::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IssueManagementTypeMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
