/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/__TimezoneEstimationMethodsElement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace __TimezoneEstimationMethodsElementMapper
      {

        static const int PHONE_NUMBER_HASH = HashingUtils::HashString("PHONE_NUMBER");
        static const int POSTAL_CODE_HASH = HashingUtils::HashString("POSTAL_CODE");


        __TimezoneEstimationMethodsElement Get__TimezoneEstimationMethodsElementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PHONE_NUMBER_HASH)
          {
            return __TimezoneEstimationMethodsElement::PHONE_NUMBER;
          }
          else if (hashCode == POSTAL_CODE_HASH)
          {
            return __TimezoneEstimationMethodsElement::POSTAL_CODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<__TimezoneEstimationMethodsElement>(hashCode);
          }

          return __TimezoneEstimationMethodsElement::NOT_SET;
        }

        Aws::String GetNameFor__TimezoneEstimationMethodsElement(__TimezoneEstimationMethodsElement enumValue)
        {
          switch(enumValue)
          {
          case __TimezoneEstimationMethodsElement::NOT_SET:
            return {};
          case __TimezoneEstimationMethodsElement::PHONE_NUMBER:
            return "PHONE_NUMBER";
          case __TimezoneEstimationMethodsElement::POSTAL_CODE:
            return "POSTAL_CODE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace __TimezoneEstimationMethodsElementMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
