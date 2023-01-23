/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MpdTimedMetadataBoxVersion.h>
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
      namespace MpdTimedMetadataBoxVersionMapper
      {

        static const int VERSION_0_HASH = HashingUtils::HashString("VERSION_0");
        static const int VERSION_1_HASH = HashingUtils::HashString("VERSION_1");


        MpdTimedMetadataBoxVersion GetMpdTimedMetadataBoxVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VERSION_0_HASH)
          {
            return MpdTimedMetadataBoxVersion::VERSION_0;
          }
          else if (hashCode == VERSION_1_HASH)
          {
            return MpdTimedMetadataBoxVersion::VERSION_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MpdTimedMetadataBoxVersion>(hashCode);
          }

          return MpdTimedMetadataBoxVersion::NOT_SET;
        }

        Aws::String GetNameForMpdTimedMetadataBoxVersion(MpdTimedMetadataBoxVersion enumValue)
        {
          switch(enumValue)
          {
          case MpdTimedMetadataBoxVersion::VERSION_0:
            return "VERSION_0";
          case MpdTimedMetadataBoxVersion::VERSION_1:
            return "VERSION_1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MpdTimedMetadataBoxVersionMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
