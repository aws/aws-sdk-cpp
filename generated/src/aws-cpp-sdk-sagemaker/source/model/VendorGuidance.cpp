/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/VendorGuidance.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace VendorGuidanceMapper
      {

        static const int NOT_PROVIDED_HASH = HashingUtils::HashString("NOT_PROVIDED");
        static const int STABLE_HASH = HashingUtils::HashString("STABLE");
        static const int TO_BE_ARCHIVED_HASH = HashingUtils::HashString("TO_BE_ARCHIVED");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");


        VendorGuidance GetVendorGuidanceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_PROVIDED_HASH)
          {
            return VendorGuidance::NOT_PROVIDED;
          }
          else if (hashCode == STABLE_HASH)
          {
            return VendorGuidance::STABLE;
          }
          else if (hashCode == TO_BE_ARCHIVED_HASH)
          {
            return VendorGuidance::TO_BE_ARCHIVED;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return VendorGuidance::ARCHIVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VendorGuidance>(hashCode);
          }

          return VendorGuidance::NOT_SET;
        }

        Aws::String GetNameForVendorGuidance(VendorGuidance enumValue)
        {
          switch(enumValue)
          {
          case VendorGuidance::NOT_PROVIDED:
            return "NOT_PROVIDED";
          case VendorGuidance::STABLE:
            return "STABLE";
          case VendorGuidance::TO_BE_ARCHIVED:
            return "TO_BE_ARCHIVED";
          case VendorGuidance::ARCHIVED:
            return "ARCHIVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VendorGuidanceMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
