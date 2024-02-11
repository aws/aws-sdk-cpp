/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/Directionality.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Translate
  {
    namespace Model
    {
      namespace DirectionalityMapper
      {

        static const int UNI_HASH = HashingUtils::HashString("UNI");
        static const int MULTI_HASH = HashingUtils::HashString("MULTI");


        Directionality GetDirectionalityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNI_HASH)
          {
            return Directionality::UNI;
          }
          else if (hashCode == MULTI_HASH)
          {
            return Directionality::MULTI;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Directionality>(hashCode);
          }

          return Directionality::NOT_SET;
        }

        Aws::String GetNameForDirectionality(Directionality enumValue)
        {
          switch(enumValue)
          {
          case Directionality::NOT_SET:
            return {};
          case Directionality::UNI:
            return "UNI";
          case Directionality::MULTI:
            return "MULTI";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectionalityMapper
    } // namespace Model
  } // namespace Translate
} // namespace Aws
