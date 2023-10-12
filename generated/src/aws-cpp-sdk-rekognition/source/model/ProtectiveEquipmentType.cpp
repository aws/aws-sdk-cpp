/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ProtectiveEquipmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace ProtectiveEquipmentTypeMapper
      {

        static constexpr uint32_t FACE_COVER_HASH = ConstExprHashingUtils::HashString("FACE_COVER");
        static constexpr uint32_t HAND_COVER_HASH = ConstExprHashingUtils::HashString("HAND_COVER");
        static constexpr uint32_t HEAD_COVER_HASH = ConstExprHashingUtils::HashString("HEAD_COVER");


        ProtectiveEquipmentType GetProtectiveEquipmentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FACE_COVER_HASH)
          {
            return ProtectiveEquipmentType::FACE_COVER;
          }
          else if (hashCode == HAND_COVER_HASH)
          {
            return ProtectiveEquipmentType::HAND_COVER;
          }
          else if (hashCode == HEAD_COVER_HASH)
          {
            return ProtectiveEquipmentType::HEAD_COVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtectiveEquipmentType>(hashCode);
          }

          return ProtectiveEquipmentType::NOT_SET;
        }

        Aws::String GetNameForProtectiveEquipmentType(ProtectiveEquipmentType enumValue)
        {
          switch(enumValue)
          {
          case ProtectiveEquipmentType::NOT_SET:
            return {};
          case ProtectiveEquipmentType::FACE_COVER:
            return "FACE_COVER";
          case ProtectiveEquipmentType::HAND_COVER:
            return "HAND_COVER";
          case ProtectiveEquipmentType::HEAD_COVER:
            return "HEAD_COVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtectiveEquipmentTypeMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
