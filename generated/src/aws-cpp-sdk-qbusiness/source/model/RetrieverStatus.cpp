/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/RetrieverStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace RetrieverStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        RetrieverStatus GetRetrieverStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return RetrieverStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return RetrieverStatus::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RetrieverStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetrieverStatus>(hashCode);
          }

          return RetrieverStatus::NOT_SET;
        }

        Aws::String GetNameForRetrieverStatus(RetrieverStatus enumValue)
        {
          switch(enumValue)
          {
          case RetrieverStatus::NOT_SET:
            return {};
          case RetrieverStatus::CREATING:
            return "CREATING";
          case RetrieverStatus::ACTIVE:
            return "ACTIVE";
          case RetrieverStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetrieverStatusMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
