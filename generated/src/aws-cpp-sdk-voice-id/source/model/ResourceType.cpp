/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VoiceID
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static constexpr uint32_t BATCH_JOB_HASH = ConstExprHashingUtils::HashString("BATCH_JOB");
        static constexpr uint32_t COMPLIANCE_CONSENT_HASH = ConstExprHashingUtils::HashString("COMPLIANCE_CONSENT");
        static constexpr uint32_t DOMAIN__HASH = ConstExprHashingUtils::HashString("DOMAIN");
        static constexpr uint32_t FRAUDSTER_HASH = ConstExprHashingUtils::HashString("FRAUDSTER");
        static constexpr uint32_t SESSION_HASH = ConstExprHashingUtils::HashString("SESSION");
        static constexpr uint32_t SPEAKER_HASH = ConstExprHashingUtils::HashString("SPEAKER");
        static constexpr uint32_t WATCHLIST_HASH = ConstExprHashingUtils::HashString("WATCHLIST");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BATCH_JOB_HASH)
          {
            return ResourceType::BATCH_JOB;
          }
          else if (hashCode == COMPLIANCE_CONSENT_HASH)
          {
            return ResourceType::COMPLIANCE_CONSENT;
          }
          else if (hashCode == DOMAIN__HASH)
          {
            return ResourceType::DOMAIN_;
          }
          else if (hashCode == FRAUDSTER_HASH)
          {
            return ResourceType::FRAUDSTER;
          }
          else if (hashCode == SESSION_HASH)
          {
            return ResourceType::SESSION;
          }
          else if (hashCode == SPEAKER_HASH)
          {
            return ResourceType::SPEAKER;
          }
          else if (hashCode == WATCHLIST_HASH)
          {
            return ResourceType::WATCHLIST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::NOT_SET:
            return {};
          case ResourceType::BATCH_JOB:
            return "BATCH_JOB";
          case ResourceType::COMPLIANCE_CONSENT:
            return "COMPLIANCE_CONSENT";
          case ResourceType::DOMAIN_:
            return "DOMAIN";
          case ResourceType::FRAUDSTER:
            return "FRAUDSTER";
          case ResourceType::SESSION:
            return "SESSION";
          case ResourceType::SPEAKER:
            return "SPEAKER";
          case ResourceType::WATCHLIST:
            return "WATCHLIST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace VoiceID
} // namespace Aws
