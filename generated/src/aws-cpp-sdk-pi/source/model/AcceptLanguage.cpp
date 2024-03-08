/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/AcceptLanguage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PI
  {
    namespace Model
    {
      namespace AcceptLanguageMapper
      {

        static const int EN_US_HASH = HashingUtils::HashString("EN_US");


        AcceptLanguage GetAcceptLanguageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EN_US_HASH)
          {
            return AcceptLanguage::EN_US;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcceptLanguage>(hashCode);
          }

          return AcceptLanguage::NOT_SET;
        }

        Aws::String GetNameForAcceptLanguage(AcceptLanguage enumValue)
        {
          switch(enumValue)
          {
          case AcceptLanguage::NOT_SET:
            return {};
          case AcceptLanguage::EN_US:
            return "EN_US";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcceptLanguageMapper
    } // namespace Model
  } // namespace PI
} // namespace Aws
