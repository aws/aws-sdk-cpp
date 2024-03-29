﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H264GopBReference.h>
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
      namespace H264GopBReferenceMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        H264GopBReference GetH264GopBReferenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return H264GopBReference::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return H264GopBReference::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264GopBReference>(hashCode);
          }

          return H264GopBReference::NOT_SET;
        }

        Aws::String GetNameForH264GopBReference(H264GopBReference enumValue)
        {
          switch(enumValue)
          {
          case H264GopBReference::NOT_SET:
            return {};
          case H264GopBReference::DISABLED:
            return "DISABLED";
          case H264GopBReference::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264GopBReferenceMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
