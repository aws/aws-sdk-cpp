/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/HeritageStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TaxSettings
  {
    namespace Model
    {
      namespace HeritageStatusMapper
      {

        static const int OptIn_HASH = HashingUtils::HashString("OptIn");
        static const int OptOut_HASH = HashingUtils::HashString("OptOut");


        HeritageStatus GetHeritageStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OptIn_HASH)
          {
            return HeritageStatus::OptIn;
          }
          else if (hashCode == OptOut_HASH)
          {
            return HeritageStatus::OptOut;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HeritageStatus>(hashCode);
          }

          return HeritageStatus::NOT_SET;
        }

        Aws::String GetNameForHeritageStatus(HeritageStatus enumValue)
        {
          switch(enumValue)
          {
          case HeritageStatus::NOT_SET:
            return {};
          case HeritageStatus::OptIn:
            return "OptIn";
          case HeritageStatus::OptOut:
            return "OptOut";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HeritageStatusMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
