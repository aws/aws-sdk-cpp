/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/Profile.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackageVod
  {
    namespace Model
    {
      namespace ProfileMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t HBBTV_1_5_HASH = ConstExprHashingUtils::HashString("HBBTV_1_5");


        Profile GetProfileForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Profile::NONE;
          }
          else if (hashCode == HBBTV_1_5_HASH)
          {
            return Profile::HBBTV_1_5;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Profile>(hashCode);
          }

          return Profile::NOT_SET;
        }

        Aws::String GetNameForProfile(Profile enumValue)
        {
          switch(enumValue)
          {
          case Profile::NOT_SET:
            return {};
          case Profile::NONE:
            return "NONE";
          case Profile::HBBTV_1_5:
            return "HBBTV_1_5";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProfileMapper
    } // namespace Model
  } // namespace MediaPackageVod
} // namespace Aws
