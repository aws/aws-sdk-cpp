/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AcceptHeader.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace AcceptHeaderMapper
      {

        static constexpr uint32_t image_jpeg_HASH = ConstExprHashingUtils::HashString("image/jpeg");


        AcceptHeader GetAcceptHeaderForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == image_jpeg_HASH)
          {
            return AcceptHeader::image_jpeg;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcceptHeader>(hashCode);
          }

          return AcceptHeader::NOT_SET;
        }

        Aws::String GetNameForAcceptHeader(AcceptHeader enumValue)
        {
          switch(enumValue)
          {
          case AcceptHeader::NOT_SET:
            return {};
          case AcceptHeader::image_jpeg:
            return "image/jpeg";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcceptHeaderMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
