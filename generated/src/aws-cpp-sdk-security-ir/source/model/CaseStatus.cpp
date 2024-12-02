/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/CaseStatus.h>
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
      namespace CaseStatusMapper
      {

        static const int Submitted_HASH = HashingUtils::HashString("Submitted");
        static const int Acknowledged_HASH = HashingUtils::HashString("Acknowledged");
        static const int Detection_and_Analysis_HASH = HashingUtils::HashString("Detection and Analysis");
        static const int Containment_COMMA_Eradication_and_Recovery_HASH = HashingUtils::HashString("Containment, Eradication and Recovery");
        static const int Post_incident_Activities_HASH = HashingUtils::HashString("Post-incident Activities");
        static const int Ready_to_Close_HASH = HashingUtils::HashString("Ready to Close");
        static const int Closed_HASH = HashingUtils::HashString("Closed");


        CaseStatus GetCaseStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Submitted_HASH)
          {
            return CaseStatus::Submitted;
          }
          else if (hashCode == Acknowledged_HASH)
          {
            return CaseStatus::Acknowledged;
          }
          else if (hashCode == Detection_and_Analysis_HASH)
          {
            return CaseStatus::Detection_and_Analysis;
          }
          else if (hashCode == Containment_COMMA_Eradication_and_Recovery_HASH)
          {
            return CaseStatus::Containment_COMMA_Eradication_and_Recovery;
          }
          else if (hashCode == Post_incident_Activities_HASH)
          {
            return CaseStatus::Post_incident_Activities;
          }
          else if (hashCode == Ready_to_Close_HASH)
          {
            return CaseStatus::Ready_to_Close;
          }
          else if (hashCode == Closed_HASH)
          {
            return CaseStatus::Closed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CaseStatus>(hashCode);
          }

          return CaseStatus::NOT_SET;
        }

        Aws::String GetNameForCaseStatus(CaseStatus enumValue)
        {
          switch(enumValue)
          {
          case CaseStatus::NOT_SET:
            return {};
          case CaseStatus::Submitted:
            return "Submitted";
          case CaseStatus::Acknowledged:
            return "Acknowledged";
          case CaseStatus::Detection_and_Analysis:
            return "Detection and Analysis";
          case CaseStatus::Containment_COMMA_Eradication_and_Recovery:
            return "Containment, Eradication and Recovery";
          case CaseStatus::Post_incident_Activities:
            return "Post-incident Activities";
          case CaseStatus::Ready_to_Close:
            return "Ready to Close";
          case CaseStatus::Closed:
            return "Closed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CaseStatusMapper
    } // namespace Model
  } // namespace SecurityIR
} // namespace Aws
