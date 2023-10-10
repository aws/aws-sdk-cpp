/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/FillPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace FillPolicyMapper
      {

        static const int FULL_AVAIL_ONLY_HASH = HashingUtils::HashString("FULL_AVAIL_ONLY");
        static const int PARTIAL_AVAIL_HASH = HashingUtils::HashString("PARTIAL_AVAIL");


        FillPolicy GetFillPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_AVAIL_ONLY_HASH)
          {
            return FillPolicy::FULL_AVAIL_ONLY;
          }
          else if (hashCode == PARTIAL_AVAIL_HASH)
          {
            return FillPolicy::PARTIAL_AVAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FillPolicy>(hashCode);
          }

          return FillPolicy::NOT_SET;
        }

        Aws::String GetNameForFillPolicy(FillPolicy enumValue)
        {
          switch(enumValue)
          {
          case FillPolicy::NOT_SET:
            return {};
          case FillPolicy::FULL_AVAIL_ONLY:
            return "FULL_AVAIL_ONLY";
          case FillPolicy::PARTIAL_AVAIL:
            return "PARTIAL_AVAIL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FillPolicyMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
