/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/RepositoryProvider.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Proton
  {
    namespace Model
    {
      namespace RepositoryProviderMapper
      {

        static const int GITHUB_HASH = HashingUtils::HashString("GITHUB");
        static const int GITHUB_ENTERPRISE_HASH = HashingUtils::HashString("GITHUB_ENTERPRISE");
        static const int BITBUCKET_HASH = HashingUtils::HashString("BITBUCKET");


        RepositoryProvider GetRepositoryProviderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GITHUB_HASH)
          {
            return RepositoryProvider::GITHUB;
          }
          else if (hashCode == GITHUB_ENTERPRISE_HASH)
          {
            return RepositoryProvider::GITHUB_ENTERPRISE;
          }
          else if (hashCode == BITBUCKET_HASH)
          {
            return RepositoryProvider::BITBUCKET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RepositoryProvider>(hashCode);
          }

          return RepositoryProvider::NOT_SET;
        }

        Aws::String GetNameForRepositoryProvider(RepositoryProvider enumValue)
        {
          switch(enumValue)
          {
          case RepositoryProvider::NOT_SET:
            return {};
          case RepositoryProvider::GITHUB:
            return "GITHUB";
          case RepositoryProvider::GITHUB_ENTERPRISE:
            return "GITHUB_ENTERPRISE";
          case RepositoryProvider::BITBUCKET:
            return "BITBUCKET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RepositoryProviderMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
