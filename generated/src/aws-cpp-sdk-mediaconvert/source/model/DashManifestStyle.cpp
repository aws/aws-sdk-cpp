/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DashManifestStyle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace DashManifestStyleMapper
      {

        static const int BASIC_HASH = HashingUtils::HashString("BASIC");
        static const int COMPACT_HASH = HashingUtils::HashString("COMPACT");
        static const int DISTINCT_HASH = HashingUtils::HashString("DISTINCT");


        DashManifestStyle GetDashManifestStyleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_HASH)
          {
            return DashManifestStyle::BASIC;
          }
          else if (hashCode == COMPACT_HASH)
          {
            return DashManifestStyle::COMPACT;
          }
          else if (hashCode == DISTINCT_HASH)
          {
            return DashManifestStyle::DISTINCT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashManifestStyle>(hashCode);
          }

          return DashManifestStyle::NOT_SET;
        }

        Aws::String GetNameForDashManifestStyle(DashManifestStyle enumValue)
        {
          switch(enumValue)
          {
          case DashManifestStyle::NOT_SET:
            return {};
          case DashManifestStyle::BASIC:
            return "BASIC";
          case DashManifestStyle::COMPACT:
            return "COMPACT";
          case DashManifestStyle::DISTINCT:
            return "DISTINCT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashManifestStyleMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
