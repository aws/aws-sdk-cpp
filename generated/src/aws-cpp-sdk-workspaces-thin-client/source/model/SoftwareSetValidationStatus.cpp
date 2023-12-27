/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-thin-client/model/SoftwareSetValidationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesThinClient
  {
    namespace Model
    {
      namespace SoftwareSetValidationStatusMapper
      {

        static const int VALIDATED_HASH = HashingUtils::HashString("VALIDATED");
        static const int NOT_VALIDATED_HASH = HashingUtils::HashString("NOT_VALIDATED");


        SoftwareSetValidationStatus GetSoftwareSetValidationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATED_HASH)
          {
            return SoftwareSetValidationStatus::VALIDATED;
          }
          else if (hashCode == NOT_VALIDATED_HASH)
          {
            return SoftwareSetValidationStatus::NOT_VALIDATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SoftwareSetValidationStatus>(hashCode);
          }

          return SoftwareSetValidationStatus::NOT_SET;
        }

        Aws::String GetNameForSoftwareSetValidationStatus(SoftwareSetValidationStatus enumValue)
        {
          switch(enumValue)
          {
          case SoftwareSetValidationStatus::NOT_SET:
            return {};
          case SoftwareSetValidationStatus::VALIDATED:
            return "VALIDATED";
          case SoftwareSetValidationStatus::NOT_VALIDATED:
            return "NOT_VALIDATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SoftwareSetValidationStatusMapper
    } // namespace Model
  } // namespace WorkSpacesThinClient
} // namespace Aws
