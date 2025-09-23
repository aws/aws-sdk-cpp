/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/KmsKeyStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSOAdmin
  {
    namespace Model
    {
      namespace KmsKeyStatusMapper
      {

        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        KmsKeyStatus GetKmsKeyStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATING_HASH)
          {
            return KmsKeyStatus::UPDATING;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return KmsKeyStatus::ENABLED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return KmsKeyStatus::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KmsKeyStatus>(hashCode);
          }

          return KmsKeyStatus::NOT_SET;
        }

        Aws::String GetNameForKmsKeyStatus(KmsKeyStatus enumValue)
        {
          switch(enumValue)
          {
          case KmsKeyStatus::NOT_SET:
            return {};
          case KmsKeyStatus::UPDATING:
            return "UPDATING";
          case KmsKeyStatus::ENABLED:
            return "ENABLED";
          case KmsKeyStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KmsKeyStatusMapper
    } // namespace Model
  } // namespace SSOAdmin
} // namespace Aws
