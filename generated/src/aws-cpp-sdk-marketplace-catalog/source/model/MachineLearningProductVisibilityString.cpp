/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/MachineLearningProductVisibilityString.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MarketplaceCatalog
  {
    namespace Model
    {
      namespace MachineLearningProductVisibilityStringMapper
      {

        static const int Limited_HASH = HashingUtils::HashString("Limited");
        static const int Public_HASH = HashingUtils::HashString("Public");
        static const int Restricted_HASH = HashingUtils::HashString("Restricted");
        static const int Draft_HASH = HashingUtils::HashString("Draft");


        MachineLearningProductVisibilityString GetMachineLearningProductVisibilityStringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Limited_HASH)
          {
            return MachineLearningProductVisibilityString::Limited;
          }
          else if (hashCode == Public_HASH)
          {
            return MachineLearningProductVisibilityString::Public;
          }
          else if (hashCode == Restricted_HASH)
          {
            return MachineLearningProductVisibilityString::Restricted;
          }
          else if (hashCode == Draft_HASH)
          {
            return MachineLearningProductVisibilityString::Draft;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MachineLearningProductVisibilityString>(hashCode);
          }

          return MachineLearningProductVisibilityString::NOT_SET;
        }

        Aws::String GetNameForMachineLearningProductVisibilityString(MachineLearningProductVisibilityString enumValue)
        {
          switch(enumValue)
          {
          case MachineLearningProductVisibilityString::NOT_SET:
            return {};
          case MachineLearningProductVisibilityString::Limited:
            return "Limited";
          case MachineLearningProductVisibilityString::Public:
            return "Public";
          case MachineLearningProductVisibilityString::Restricted:
            return "Restricted";
          case MachineLearningProductVisibilityString::Draft:
            return "Draft";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MachineLearningProductVisibilityStringMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
