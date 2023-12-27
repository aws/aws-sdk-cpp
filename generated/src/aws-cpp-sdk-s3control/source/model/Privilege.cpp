/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/Privilege.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace PrivilegeMapper
      {

        static const int Minimal_HASH = HashingUtils::HashString("Minimal");
        static const int Default_HASH = HashingUtils::HashString("Default");


        Privilege GetPrivilegeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Minimal_HASH)
          {
            return Privilege::Minimal;
          }
          else if (hashCode == Default_HASH)
          {
            return Privilege::Default;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Privilege>(hashCode);
          }

          return Privilege::NOT_SET;
        }

        Aws::String GetNameForPrivilege(Privilege enumValue)
        {
          switch(enumValue)
          {
          case Privilege::NOT_SET:
            return {};
          case Privilege::Minimal:
            return "Minimal";
          case Privilege::Default:
            return "Default";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrivilegeMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
