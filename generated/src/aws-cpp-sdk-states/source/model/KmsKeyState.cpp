/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/KmsKeyState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SFN
  {
    namespace Model
    {
      namespace KmsKeyStateMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");
        static const int PENDING_IMPORT_HASH = HashingUtils::HashString("PENDING_IMPORT");
        static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");


        KmsKeyState GetKmsKeyStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return KmsKeyState::DISABLED;
          }
          else if (hashCode == PENDING_DELETION_HASH)
          {
            return KmsKeyState::PENDING_DELETION;
          }
          else if (hashCode == PENDING_IMPORT_HASH)
          {
            return KmsKeyState::PENDING_IMPORT;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return KmsKeyState::UNAVAILABLE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return KmsKeyState::CREATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KmsKeyState>(hashCode);
          }

          return KmsKeyState::NOT_SET;
        }

        Aws::String GetNameForKmsKeyState(KmsKeyState enumValue)
        {
          switch(enumValue)
          {
          case KmsKeyState::NOT_SET:
            return {};
          case KmsKeyState::DISABLED:
            return "DISABLED";
          case KmsKeyState::PENDING_DELETION:
            return "PENDING_DELETION";
          case KmsKeyState::PENDING_IMPORT:
            return "PENDING_IMPORT";
          case KmsKeyState::UNAVAILABLE:
            return "UNAVAILABLE";
          case KmsKeyState::CREATING:
            return "CREATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KmsKeyStateMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
