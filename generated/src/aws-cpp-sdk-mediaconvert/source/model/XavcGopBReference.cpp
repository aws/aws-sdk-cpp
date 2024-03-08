/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/XavcGopBReference.h>
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
      namespace XavcGopBReferenceMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        XavcGopBReference GetXavcGopBReferenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return XavcGopBReference::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return XavcGopBReference::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<XavcGopBReference>(hashCode);
          }

          return XavcGopBReference::NOT_SET;
        }

        Aws::String GetNameForXavcGopBReference(XavcGopBReference enumValue)
        {
          switch(enumValue)
          {
          case XavcGopBReference::NOT_SET:
            return {};
          case XavcGopBReference::DISABLED:
            return "DISABLED";
          case XavcGopBReference::ENABLED:
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

      } // namespace XavcGopBReferenceMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
