/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ComplianceUploadType.h>
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
      namespace ComplianceUploadTypeMapper
      {

        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int PARTIAL_HASH = HashingUtils::HashString("PARTIAL");


        ComplianceUploadType GetComplianceUploadTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETE_HASH)
          {
            return ComplianceUploadType::COMPLETE;
          }
          else if (hashCode == PARTIAL_HASH)
          {
            return ComplianceUploadType::PARTIAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComplianceUploadType>(hashCode);
          }

          return ComplianceUploadType::NOT_SET;
        }

        Aws::String GetNameForComplianceUploadType(ComplianceUploadType enumValue)
        {
          switch(enumValue)
          {
          case ComplianceUploadType::COMPLETE:
            return "COMPLETE";
          case ComplianceUploadType::PARTIAL:
            return "PARTIAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComplianceUploadTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
