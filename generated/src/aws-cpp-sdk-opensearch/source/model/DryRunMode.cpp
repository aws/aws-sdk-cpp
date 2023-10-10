/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DryRunMode.h>
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
      namespace DryRunModeMapper
      {

        static const int Basic_HASH = HashingUtils::HashString("Basic");
        static const int Verbose_HASH = HashingUtils::HashString("Verbose");


        DryRunMode GetDryRunModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Basic_HASH)
          {
            return DryRunMode::Basic;
          }
          else if (hashCode == Verbose_HASH)
          {
            return DryRunMode::Verbose;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DryRunMode>(hashCode);
          }

          return DryRunMode::NOT_SET;
        }

        Aws::String GetNameForDryRunMode(DryRunMode enumValue)
        {
          switch(enumValue)
          {
          case DryRunMode::NOT_SET:
            return {};
          case DryRunMode::Basic:
            return "Basic";
          case DryRunMode::Verbose:
            return "Verbose";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DryRunModeMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
