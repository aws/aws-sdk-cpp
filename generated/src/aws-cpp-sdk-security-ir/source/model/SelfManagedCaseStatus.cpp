/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/SelfManagedCaseStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityIR
  {
    namespace Model
    {
      namespace SelfManagedCaseStatusMapper
      {

        static const int Submitted_HASH = HashingUtils::HashString("Submitted");
        static const int Detection_and_Analysis_HASH = HashingUtils::HashString("Detection and Analysis");
        static const int Containment_COMMA_Eradication_and_Recovery_HASH = HashingUtils::HashString("Containment, Eradication and Recovery");
        static const int Post_incident_Activities_HASH = HashingUtils::HashString("Post-incident Activities");


        SelfManagedCaseStatus GetSelfManagedCaseStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Submitted_HASH)
          {
            return SelfManagedCaseStatus::Submitted;
          }
          else if (hashCode == Detection_and_Analysis_HASH)
          {
            return SelfManagedCaseStatus::Detection_and_Analysis;
          }
          else if (hashCode == Containment_COMMA_Eradication_and_Recovery_HASH)
          {
            return SelfManagedCaseStatus::Containment_COMMA_Eradication_and_Recovery;
          }
          else if (hashCode == Post_incident_Activities_HASH)
          {
            return SelfManagedCaseStatus::Post_incident_Activities;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SelfManagedCaseStatus>(hashCode);
          }

          return SelfManagedCaseStatus::NOT_SET;
        }

        Aws::String GetNameForSelfManagedCaseStatus(SelfManagedCaseStatus enumValue)
        {
          switch(enumValue)
          {
          case SelfManagedCaseStatus::NOT_SET:
            return {};
          case SelfManagedCaseStatus::Submitted:
            return "Submitted";
          case SelfManagedCaseStatus::Detection_and_Analysis:
            return "Detection and Analysis";
          case SelfManagedCaseStatus::Containment_COMMA_Eradication_and_Recovery:
            return "Containment, Eradication and Recovery";
          case SelfManagedCaseStatus::Post_incident_Activities:
            return "Post-incident Activities";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SelfManagedCaseStatusMapper
    } // namespace Model
  } // namespace SecurityIR
} // namespace Aws
