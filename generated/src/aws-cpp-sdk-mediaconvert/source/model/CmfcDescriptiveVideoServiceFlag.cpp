/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmfcDescriptiveVideoServiceFlag.h>
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
      namespace CmfcDescriptiveVideoServiceFlagMapper
      {

        static const int DONT_FLAG_HASH = HashingUtils::HashString("DONT_FLAG");
        static const int FLAG_HASH = HashingUtils::HashString("FLAG");


        CmfcDescriptiveVideoServiceFlag GetCmfcDescriptiveVideoServiceFlagForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DONT_FLAG_HASH)
          {
            return CmfcDescriptiveVideoServiceFlag::DONT_FLAG;
          }
          else if (hashCode == FLAG_HASH)
          {
            return CmfcDescriptiveVideoServiceFlag::FLAG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmfcDescriptiveVideoServiceFlag>(hashCode);
          }

          return CmfcDescriptiveVideoServiceFlag::NOT_SET;
        }

        Aws::String GetNameForCmfcDescriptiveVideoServiceFlag(CmfcDescriptiveVideoServiceFlag enumValue)
        {
          switch(enumValue)
          {
          case CmfcDescriptiveVideoServiceFlag::NOT_SET:
            return {};
          case CmfcDescriptiveVideoServiceFlag::DONT_FLAG:
            return "DONT_FLAG";
          case CmfcDescriptiveVideoServiceFlag::FLAG:
            return "FLAG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmfcDescriptiveVideoServiceFlagMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
