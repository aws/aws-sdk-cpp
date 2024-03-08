/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/RendererType.h>
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
      namespace RendererTypeMapper
      {

        static const int AppStream_HASH = HashingUtils::HashString("AppStream");


        RendererType GetRendererTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AppStream_HASH)
          {
            return RendererType::AppStream;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RendererType>(hashCode);
          }

          return RendererType::NOT_SET;
        }

        Aws::String GetNameForRendererType(RendererType enumValue)
        {
          switch(enumValue)
          {
          case RendererType::NOT_SET:
            return {};
          case RendererType::AppStream:
            return "AppStream";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RendererTypeMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws
