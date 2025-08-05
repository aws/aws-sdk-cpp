/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ReputationEntityFilterKey.h>
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
      namespace ReputationEntityFilterKeyMapper
      {

        static const int ENTITY_TYPE_HASH = HashingUtils::HashString("ENTITY_TYPE");
        static const int REPUTATION_IMPACT_HASH = HashingUtils::HashString("REPUTATION_IMPACT");
        static const int SENDING_STATUS_HASH = HashingUtils::HashString("SENDING_STATUS");
        static const int ENTITY_REFERENCE_PREFIX_HASH = HashingUtils::HashString("ENTITY_REFERENCE_PREFIX");


        ReputationEntityFilterKey GetReputationEntityFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENTITY_TYPE_HASH)
          {
            return ReputationEntityFilterKey::ENTITY_TYPE;
          }
          else if (hashCode == REPUTATION_IMPACT_HASH)
          {
            return ReputationEntityFilterKey::REPUTATION_IMPACT;
          }
          else if (hashCode == SENDING_STATUS_HASH)
          {
            return ReputationEntityFilterKey::SENDING_STATUS;
          }
          else if (hashCode == ENTITY_REFERENCE_PREFIX_HASH)
          {
            return ReputationEntityFilterKey::ENTITY_REFERENCE_PREFIX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReputationEntityFilterKey>(hashCode);
          }

          return ReputationEntityFilterKey::NOT_SET;
        }

        Aws::String GetNameForReputationEntityFilterKey(ReputationEntityFilterKey enumValue)
        {
          switch(enumValue)
          {
          case ReputationEntityFilterKey::NOT_SET:
            return {};
          case ReputationEntityFilterKey::ENTITY_TYPE:
            return "ENTITY_TYPE";
          case ReputationEntityFilterKey::REPUTATION_IMPACT:
            return "REPUTATION_IMPACT";
          case ReputationEntityFilterKey::SENDING_STATUS:
            return "SENDING_STATUS";
          case ReputationEntityFilterKey::ENTITY_REFERENCE_PREFIX:
            return "ENTITY_REFERENCE_PREFIX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReputationEntityFilterKeyMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
