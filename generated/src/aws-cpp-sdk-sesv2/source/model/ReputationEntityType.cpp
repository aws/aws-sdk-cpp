/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ReputationEntityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace ReputationEntityTypeMapper
      {

        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");


        ReputationEntityType GetReputationEntityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_HASH)
          {
            return ReputationEntityType::RESOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReputationEntityType>(hashCode);
          }

          return ReputationEntityType::NOT_SET;
        }

        Aws::String GetNameForReputationEntityType(ReputationEntityType enumValue)
        {
          switch(enumValue)
          {
          case ReputationEntityType::NOT_SET:
            return {};
          case ReputationEntityType::RESOURCE:
            return "RESOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReputationEntityTypeMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
