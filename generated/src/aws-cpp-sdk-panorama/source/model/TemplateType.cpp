/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/TemplateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace TemplateTypeMapper
      {

        static const int RTSP_CAMERA_STREAM_HASH = HashingUtils::HashString("RTSP_CAMERA_STREAM");


        TemplateType GetTemplateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RTSP_CAMERA_STREAM_HASH)
          {
            return TemplateType::RTSP_CAMERA_STREAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemplateType>(hashCode);
          }

          return TemplateType::NOT_SET;
        }

        Aws::String GetNameForTemplateType(TemplateType enumValue)
        {
          switch(enumValue)
          {
          case TemplateType::NOT_SET:
            return {};
          case TemplateType::RTSP_CAMERA_STREAM:
            return "RTSP_CAMERA_STREAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemplateTypeMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
