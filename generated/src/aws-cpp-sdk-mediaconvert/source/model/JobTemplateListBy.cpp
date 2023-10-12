/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/JobTemplateListBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace JobTemplateListByMapper
      {

        static constexpr uint32_t NAME_HASH = ConstExprHashingUtils::HashString("NAME");
        static constexpr uint32_t CREATION_DATE_HASH = ConstExprHashingUtils::HashString("CREATION_DATE");
        static constexpr uint32_t SYSTEM_HASH = ConstExprHashingUtils::HashString("SYSTEM");


        JobTemplateListBy GetJobTemplateListByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return JobTemplateListBy::NAME;
          }
          else if (hashCode == CREATION_DATE_HASH)
          {
            return JobTemplateListBy::CREATION_DATE;
          }
          else if (hashCode == SYSTEM_HASH)
          {
            return JobTemplateListBy::SYSTEM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobTemplateListBy>(hashCode);
          }

          return JobTemplateListBy::NOT_SET;
        }

        Aws::String GetNameForJobTemplateListBy(JobTemplateListBy enumValue)
        {
          switch(enumValue)
          {
          case JobTemplateListBy::NOT_SET:
            return {};
          case JobTemplateListBy::NAME:
            return "NAME";
          case JobTemplateListBy::CREATION_DATE:
            return "CREATION_DATE";
          case JobTemplateListBy::SYSTEM:
            return "SYSTEM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobTemplateListByMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
