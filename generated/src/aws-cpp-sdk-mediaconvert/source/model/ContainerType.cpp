/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/ContainerType.h>
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
      namespace ContainerTypeMapper
      {

        static constexpr uint32_t F4V_HASH = ConstExprHashingUtils::HashString("F4V");
        static constexpr uint32_t ISMV_HASH = ConstExprHashingUtils::HashString("ISMV");
        static constexpr uint32_t M2TS_HASH = ConstExprHashingUtils::HashString("M2TS");
        static constexpr uint32_t M3U8_HASH = ConstExprHashingUtils::HashString("M3U8");
        static constexpr uint32_t CMFC_HASH = ConstExprHashingUtils::HashString("CMFC");
        static constexpr uint32_t MOV_HASH = ConstExprHashingUtils::HashString("MOV");
        static constexpr uint32_t MP4_HASH = ConstExprHashingUtils::HashString("MP4");
        static constexpr uint32_t MPD_HASH = ConstExprHashingUtils::HashString("MPD");
        static constexpr uint32_t MXF_HASH = ConstExprHashingUtils::HashString("MXF");
        static constexpr uint32_t WEBM_HASH = ConstExprHashingUtils::HashString("WEBM");
        static constexpr uint32_t RAW_HASH = ConstExprHashingUtils::HashString("RAW");


        ContainerType GetContainerTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == F4V_HASH)
          {
            return ContainerType::F4V;
          }
          else if (hashCode == ISMV_HASH)
          {
            return ContainerType::ISMV;
          }
          else if (hashCode == M2TS_HASH)
          {
            return ContainerType::M2TS;
          }
          else if (hashCode == M3U8_HASH)
          {
            return ContainerType::M3U8;
          }
          else if (hashCode == CMFC_HASH)
          {
            return ContainerType::CMFC;
          }
          else if (hashCode == MOV_HASH)
          {
            return ContainerType::MOV;
          }
          else if (hashCode == MP4_HASH)
          {
            return ContainerType::MP4;
          }
          else if (hashCode == MPD_HASH)
          {
            return ContainerType::MPD;
          }
          else if (hashCode == MXF_HASH)
          {
            return ContainerType::MXF;
          }
          else if (hashCode == WEBM_HASH)
          {
            return ContainerType::WEBM;
          }
          else if (hashCode == RAW_HASH)
          {
            return ContainerType::RAW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerType>(hashCode);
          }

          return ContainerType::NOT_SET;
        }

        Aws::String GetNameForContainerType(ContainerType enumValue)
        {
          switch(enumValue)
          {
          case ContainerType::NOT_SET:
            return {};
          case ContainerType::F4V:
            return "F4V";
          case ContainerType::ISMV:
            return "ISMV";
          case ContainerType::M2TS:
            return "M2TS";
          case ContainerType::M3U8:
            return "M3U8";
          case ContainerType::CMFC:
            return "CMFC";
          case ContainerType::MOV:
            return "MOV";
          case ContainerType::MP4:
            return "MP4";
          case ContainerType::MPD:
            return "MPD";
          case ContainerType::MXF:
            return "MXF";
          case ContainerType::WEBM:
            return "WEBM";
          case ContainerType::RAW:
            return "RAW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
