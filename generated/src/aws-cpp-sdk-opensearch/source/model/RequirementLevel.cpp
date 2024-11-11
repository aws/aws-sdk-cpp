/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/RequirementLevel.h>
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
      namespace RequirementLevelMapper
      {

        static const int REQUIRED_HASH = HashingUtils::HashString("REQUIRED");
        static const int OPTIONAL_HASH = HashingUtils::HashString("OPTIONAL");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        RequirementLevel GetRequirementLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUIRED_HASH)
          {
            return RequirementLevel::REQUIRED;
          }
          else if (hashCode == OPTIONAL_HASH)
          {
            return RequirementLevel::OPTIONAL;
          }
          else if (hashCode == NONE_HASH)
          {
            return RequirementLevel::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequirementLevel>(hashCode);
          }

          return RequirementLevel::NOT_SET;
        }

        Aws::String GetNameForRequirementLevel(RequirementLevel enumValue)
        {
          switch(enumValue)
          {
          case RequirementLevel::NOT_SET:
            return {};
          case RequirementLevel::REQUIRED:
            return "REQUIRED";
          case RequirementLevel::OPTIONAL:
            return "OPTIONAL";
          case RequirementLevel::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RequirementLevelMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
