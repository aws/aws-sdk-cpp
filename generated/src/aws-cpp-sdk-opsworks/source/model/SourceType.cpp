/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/SourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace SourceTypeMapper
      {

        static const int git_HASH = HashingUtils::HashString("git");
        static const int svn_HASH = HashingUtils::HashString("svn");
        static const int archive_HASH = HashingUtils::HashString("archive");
        static const int s3_HASH = HashingUtils::HashString("s3");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == git_HASH)
          {
            return SourceType::git;
          }
          else if (hashCode == svn_HASH)
          {
            return SourceType::svn;
          }
          else if (hashCode == archive_HASH)
          {
            return SourceType::archive;
          }
          else if (hashCode == s3_HASH)
          {
            return SourceType::s3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceType>(hashCode);
          }

          return SourceType::NOT_SET;
        }

        Aws::String GetNameForSourceType(SourceType enumValue)
        {
          switch(enumValue)
          {
          case SourceType::git:
            return "git";
          case SourceType::svn:
            return "svn";
          case SourceType::archive:
            return "archive";
          case SourceType::s3:
            return "s3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceTypeMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
