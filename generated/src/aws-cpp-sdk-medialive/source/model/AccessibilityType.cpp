/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AccessibilityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace AccessibilityTypeMapper
      {

        static const int DOES_NOT_IMPLEMENT_ACCESSIBILITY_FEATURES_HASH = HashingUtils::HashString("DOES_NOT_IMPLEMENT_ACCESSIBILITY_FEATURES");
        static const int IMPLEMENTS_ACCESSIBILITY_FEATURES_HASH = HashingUtils::HashString("IMPLEMENTS_ACCESSIBILITY_FEATURES");


        AccessibilityType GetAccessibilityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOES_NOT_IMPLEMENT_ACCESSIBILITY_FEATURES_HASH)
          {
            return AccessibilityType::DOES_NOT_IMPLEMENT_ACCESSIBILITY_FEATURES;
          }
          else if (hashCode == IMPLEMENTS_ACCESSIBILITY_FEATURES_HASH)
          {
            return AccessibilityType::IMPLEMENTS_ACCESSIBILITY_FEATURES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessibilityType>(hashCode);
          }

          return AccessibilityType::NOT_SET;
        }

        Aws::String GetNameForAccessibilityType(AccessibilityType enumValue)
        {
          switch(enumValue)
          {
          case AccessibilityType::NOT_SET:
            return {};
          case AccessibilityType::DOES_NOT_IMPLEMENT_ACCESSIBILITY_FEATURES:
            return "DOES_NOT_IMPLEMENT_ACCESSIBILITY_FEATURES";
          case AccessibilityType::IMPLEMENTS_ACCESSIBILITY_FEATURES:
            return "IMPLEMENTS_ACCESSIBILITY_FEATURES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessibilityTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
