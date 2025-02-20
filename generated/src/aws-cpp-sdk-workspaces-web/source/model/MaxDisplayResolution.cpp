/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/MaxDisplayResolution.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesWeb
  {
    namespace Model
    {
      namespace MaxDisplayResolutionMapper
      {

        static const int size4096X2160_HASH = HashingUtils::HashString("size4096X2160");
        static const int size3840X2160_HASH = HashingUtils::HashString("size3840X2160");
        static const int size3440X1440_HASH = HashingUtils::HashString("size3440X1440");
        static const int size2560X1440_HASH = HashingUtils::HashString("size2560X1440");
        static const int size1920X1080_HASH = HashingUtils::HashString("size1920X1080");
        static const int size1280X720_HASH = HashingUtils::HashString("size1280X720");
        static const int size1024X768_HASH = HashingUtils::HashString("size1024X768");
        static const int size800X600_HASH = HashingUtils::HashString("size800X600");


        MaxDisplayResolution GetMaxDisplayResolutionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == size4096X2160_HASH)
          {
            return MaxDisplayResolution::size4096X2160;
          }
          else if (hashCode == size3840X2160_HASH)
          {
            return MaxDisplayResolution::size3840X2160;
          }
          else if (hashCode == size3440X1440_HASH)
          {
            return MaxDisplayResolution::size3440X1440;
          }
          else if (hashCode == size2560X1440_HASH)
          {
            return MaxDisplayResolution::size2560X1440;
          }
          else if (hashCode == size1920X1080_HASH)
          {
            return MaxDisplayResolution::size1920X1080;
          }
          else if (hashCode == size1280X720_HASH)
          {
            return MaxDisplayResolution::size1280X720;
          }
          else if (hashCode == size1024X768_HASH)
          {
            return MaxDisplayResolution::size1024X768;
          }
          else if (hashCode == size800X600_HASH)
          {
            return MaxDisplayResolution::size800X600;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaxDisplayResolution>(hashCode);
          }

          return MaxDisplayResolution::NOT_SET;
        }

        Aws::String GetNameForMaxDisplayResolution(MaxDisplayResolution enumValue)
        {
          switch(enumValue)
          {
          case MaxDisplayResolution::NOT_SET:
            return {};
          case MaxDisplayResolution::size4096X2160:
            return "size4096X2160";
          case MaxDisplayResolution::size3840X2160:
            return "size3840X2160";
          case MaxDisplayResolution::size3440X1440:
            return "size3440X1440";
          case MaxDisplayResolution::size2560X1440:
            return "size2560X1440";
          case MaxDisplayResolution::size1920X1080:
            return "size1920X1080";
          case MaxDisplayResolution::size1280X720:
            return "size1280X720";
          case MaxDisplayResolution::size1024X768:
            return "size1024X768";
          case MaxDisplayResolution::size800X600:
            return "size800X600";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MaxDisplayResolutionMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws
