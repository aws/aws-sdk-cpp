/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PartnerAppType.h>
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
      namespace PartnerAppTypeMapper
      {

        static const int lakera_guard_HASH = HashingUtils::HashString("lakera-guard");
        static const int comet_HASH = HashingUtils::HashString("comet");
        static const int deepchecks_llm_evaluation_HASH = HashingUtils::HashString("deepchecks-llm-evaluation");
        static const int fiddler_HASH = HashingUtils::HashString("fiddler");


        PartnerAppType GetPartnerAppTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == lakera_guard_HASH)
          {
            return PartnerAppType::lakera_guard;
          }
          else if (hashCode == comet_HASH)
          {
            return PartnerAppType::comet;
          }
          else if (hashCode == deepchecks_llm_evaluation_HASH)
          {
            return PartnerAppType::deepchecks_llm_evaluation;
          }
          else if (hashCode == fiddler_HASH)
          {
            return PartnerAppType::fiddler;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PartnerAppType>(hashCode);
          }

          return PartnerAppType::NOT_SET;
        }

        Aws::String GetNameForPartnerAppType(PartnerAppType enumValue)
        {
          switch(enumValue)
          {
          case PartnerAppType::NOT_SET:
            return {};
          case PartnerAppType::lakera_guard:
            return "lakera-guard";
          case PartnerAppType::comet:
            return "comet";
          case PartnerAppType::deepchecks_llm_evaluation:
            return "deepchecks-llm-evaluation";
          case PartnerAppType::fiddler:
            return "fiddler";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PartnerAppTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
