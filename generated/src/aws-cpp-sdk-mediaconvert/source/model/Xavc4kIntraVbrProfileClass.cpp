/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Xavc4kIntraVbrProfileClass.h>
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
      namespace Xavc4kIntraVbrProfileClassMapper
      {

        static const int CLASS_100_HASH = HashingUtils::HashString("CLASS_100");
        static const int CLASS_300_HASH = HashingUtils::HashString("CLASS_300");
        static const int CLASS_480_HASH = HashingUtils::HashString("CLASS_480");


        Xavc4kIntraVbrProfileClass GetXavc4kIntraVbrProfileClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLASS_100_HASH)
          {
            return Xavc4kIntraVbrProfileClass::CLASS_100;
          }
          else if (hashCode == CLASS_300_HASH)
          {
            return Xavc4kIntraVbrProfileClass::CLASS_300;
          }
          else if (hashCode == CLASS_480_HASH)
          {
            return Xavc4kIntraVbrProfileClass::CLASS_480;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Xavc4kIntraVbrProfileClass>(hashCode);
          }

          return Xavc4kIntraVbrProfileClass::NOT_SET;
        }

        Aws::String GetNameForXavc4kIntraVbrProfileClass(Xavc4kIntraVbrProfileClass enumValue)
        {
          switch(enumValue)
          {
          case Xavc4kIntraVbrProfileClass::NOT_SET:
            return {};
          case Xavc4kIntraVbrProfileClass::CLASS_100:
            return "CLASS_100";
          case Xavc4kIntraVbrProfileClass::CLASS_300:
            return "CLASS_300";
          case Xavc4kIntraVbrProfileClass::CLASS_480:
            return "CLASS_480";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Xavc4kIntraVbrProfileClassMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
