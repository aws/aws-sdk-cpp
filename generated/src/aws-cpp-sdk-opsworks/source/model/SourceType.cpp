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

        static constexpr uint32_t git_HASH = ConstExprHashingUtils::HashString("git");
        static constexpr uint32_t svn_HASH = ConstExprHashingUtils::HashString("svn");
        static constexpr uint32_t archive_HASH = ConstExprHashingUtils::HashString("archive");
        static constexpr uint32_t s3_HASH = ConstExprHashingUtils::HashString("s3");


        SourceType GetSourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case SourceType::NOT_SET:
            return {};
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
