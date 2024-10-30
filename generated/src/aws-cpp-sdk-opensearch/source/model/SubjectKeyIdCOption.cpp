/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/SubjectKeyIdCOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace SubjectKeyIdCOptionMapper
      {

        static const int UserName_HASH = HashingUtils::HashString("UserName");
        static const int UserId_HASH = HashingUtils::HashString("UserId");
        static const int Email_HASH = HashingUtils::HashString("Email");


        SubjectKeyIdCOption GetSubjectKeyIdCOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UserName_HASH)
          {
            return SubjectKeyIdCOption::UserName;
          }
          else if (hashCode == UserId_HASH)
          {
            return SubjectKeyIdCOption::UserId;
          }
          else if (hashCode == Email_HASH)
          {
            return SubjectKeyIdCOption::Email;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubjectKeyIdCOption>(hashCode);
          }

          return SubjectKeyIdCOption::NOT_SET;
        }

        Aws::String GetNameForSubjectKeyIdCOption(SubjectKeyIdCOption enumValue)
        {
          switch(enumValue)
          {
          case SubjectKeyIdCOption::NOT_SET:
            return {};
          case SubjectKeyIdCOption::UserName:
            return "UserName";
          case SubjectKeyIdCOption::UserId:
            return "UserId";
          case SubjectKeyIdCOption::Email:
            return "Email";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubjectKeyIdCOptionMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
