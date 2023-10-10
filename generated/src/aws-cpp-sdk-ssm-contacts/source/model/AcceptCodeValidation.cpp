/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/AcceptCodeValidation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSMContacts
  {
    namespace Model
    {
      namespace AcceptCodeValidationMapper
      {

        static const int IGNORE_HASH = HashingUtils::HashString("IGNORE");
        static const int ENFORCE_HASH = HashingUtils::HashString("ENFORCE");


        AcceptCodeValidation GetAcceptCodeValidationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IGNORE_HASH)
          {
            return AcceptCodeValidation::IGNORE;
          }
          else if (hashCode == ENFORCE_HASH)
          {
            return AcceptCodeValidation::ENFORCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcceptCodeValidation>(hashCode);
          }

          return AcceptCodeValidation::NOT_SET;
        }

        Aws::String GetNameForAcceptCodeValidation(AcceptCodeValidation enumValue)
        {
          switch(enumValue)
          {
          case AcceptCodeValidation::NOT_SET:
            return {};
          case AcceptCodeValidation::IGNORE:
            return "IGNORE";
          case AcceptCodeValidation::ENFORCE:
            return "ENFORCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcceptCodeValidationMapper
    } // namespace Model
  } // namespace SSMContacts
} // namespace Aws
