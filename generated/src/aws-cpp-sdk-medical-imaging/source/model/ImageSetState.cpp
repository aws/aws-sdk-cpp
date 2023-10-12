/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/ImageSetState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MedicalImaging
  {
    namespace Model
    {
      namespace ImageSetStateMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t LOCKED_HASH = ConstExprHashingUtils::HashString("LOCKED");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        ImageSetState GetImageSetStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ImageSetState::ACTIVE;
          }
          else if (hashCode == LOCKED_HASH)
          {
            return ImageSetState::LOCKED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ImageSetState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageSetState>(hashCode);
          }

          return ImageSetState::NOT_SET;
        }

        Aws::String GetNameForImageSetState(ImageSetState enumValue)
        {
          switch(enumValue)
          {
          case ImageSetState::NOT_SET:
            return {};
          case ImageSetState::ACTIVE:
            return "ACTIVE";
          case ImageSetState::LOCKED:
            return "LOCKED";
          case ImageSetState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageSetStateMapper
    } // namespace Model
  } // namespace MedicalImaging
} // namespace Aws
