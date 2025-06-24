/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/IdentitySourceStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MPA
  {
    namespace Model
    {
      namespace IdentitySourceStatusCodeMapper
      {

        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int DELETION_FAILED_HASH = HashingUtils::HashString("DELETION_FAILED");
        static const int IDC_INSTANCE_NOT_FOUND_HASH = HashingUtils::HashString("IDC_INSTANCE_NOT_FOUND");
        static const int IDC_INSTANCE_NOT_VALID_HASH = HashingUtils::HashString("IDC_INSTANCE_NOT_VALID");


        IdentitySourceStatusCode GetIdentitySourceStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_DENIED_HASH)
          {
            return IdentitySourceStatusCode::ACCESS_DENIED;
          }
          else if (hashCode == DELETION_FAILED_HASH)
          {
            return IdentitySourceStatusCode::DELETION_FAILED;
          }
          else if (hashCode == IDC_INSTANCE_NOT_FOUND_HASH)
          {
            return IdentitySourceStatusCode::IDC_INSTANCE_NOT_FOUND;
          }
          else if (hashCode == IDC_INSTANCE_NOT_VALID_HASH)
          {
            return IdentitySourceStatusCode::IDC_INSTANCE_NOT_VALID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentitySourceStatusCode>(hashCode);
          }

          return IdentitySourceStatusCode::NOT_SET;
        }

        Aws::String GetNameForIdentitySourceStatusCode(IdentitySourceStatusCode enumValue)
        {
          switch(enumValue)
          {
          case IdentitySourceStatusCode::NOT_SET:
            return {};
          case IdentitySourceStatusCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case IdentitySourceStatusCode::DELETION_FAILED:
            return "DELETION_FAILED";
          case IdentitySourceStatusCode::IDC_INSTANCE_NOT_FOUND:
            return "IDC_INSTANCE_NOT_FOUND";
          case IdentitySourceStatusCode::IDC_INSTANCE_NOT_VALID:
            return "IDC_INSTANCE_NOT_VALID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentitySourceStatusCodeMapper
    } // namespace Model
  } // namespace MPA
} // namespace Aws
