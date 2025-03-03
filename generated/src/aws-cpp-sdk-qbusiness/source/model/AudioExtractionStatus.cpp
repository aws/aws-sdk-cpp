/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/AudioExtractionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace AudioExtractionStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AudioExtractionStatus GetAudioExtractionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AudioExtractionStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AudioExtractionStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AudioExtractionStatus>(hashCode);
          }

          return AudioExtractionStatus::NOT_SET;
        }

        Aws::String GetNameForAudioExtractionStatus(AudioExtractionStatus enumValue)
        {
          switch(enumValue)
          {
          case AudioExtractionStatus::NOT_SET:
            return {};
          case AudioExtractionStatus::ENABLED:
            return "ENABLED";
          case AudioExtractionStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AudioExtractionStatusMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
