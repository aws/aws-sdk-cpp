/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ActivationStatus.h>
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
      namespace ActivationStatusMapper
      {

        static const int ACTIVATED_HASH = HashingUtils::HashString("ACTIVATED");
        static const int NOT_ACTIVATED_HASH = HashingUtils::HashString("NOT_ACTIVATED");


        ActivationStatus GetActivationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVATED_HASH)
          {
            return ActivationStatus::ACTIVATED;
          }
          else if (hashCode == NOT_ACTIVATED_HASH)
          {
            return ActivationStatus::NOT_ACTIVATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActivationStatus>(hashCode);
          }

          return ActivationStatus::NOT_SET;
        }

        Aws::String GetNameForActivationStatus(ActivationStatus enumValue)
        {
          switch(enumValue)
          {
          case ActivationStatus::NOT_SET:
            return {};
          case ActivationStatus::ACTIVATED:
            return "ACTIVATED";
          case ActivationStatus::NOT_ACTIVATED:
            return "NOT_ACTIVATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActivationStatusMapper
    } // namespace Model
  } // namespace SSMContacts
} // namespace Aws
