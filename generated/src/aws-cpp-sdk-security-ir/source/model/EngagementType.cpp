/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/EngagementType.h>
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
      namespace EngagementTypeMapper
      {

        static const int Security_Incident_HASH = HashingUtils::HashString("Security Incident");
        static const int Investigation_HASH = HashingUtils::HashString("Investigation");


        EngagementType GetEngagementTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Security_Incident_HASH)
          {
            return EngagementType::Security_Incident;
          }
          else if (hashCode == Investigation_HASH)
          {
            return EngagementType::Investigation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EngagementType>(hashCode);
          }

          return EngagementType::NOT_SET;
        }

        Aws::String GetNameForEngagementType(EngagementType enumValue)
        {
          switch(enumValue)
          {
          case EngagementType::NOT_SET:
            return {};
          case EngagementType::Security_Incident:
            return "Security Incident";
          case EngagementType::Investigation:
            return "Investigation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EngagementTypeMapper
    } // namespace Model
  } // namespace SecurityIR
} // namespace Aws
