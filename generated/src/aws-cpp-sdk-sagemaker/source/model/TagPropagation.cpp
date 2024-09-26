/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TagPropagation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace TagPropagationMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        TagPropagation GetTagPropagationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return TagPropagation::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return TagPropagation::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TagPropagation>(hashCode);
          }

          return TagPropagation::NOT_SET;
        }

        Aws::String GetNameForTagPropagation(TagPropagation enumValue)
        {
          switch(enumValue)
          {
          case TagPropagation::NOT_SET:
            return {};
          case TagPropagation::ENABLED:
            return "ENABLED";
          case TagPropagation::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TagPropagationMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
