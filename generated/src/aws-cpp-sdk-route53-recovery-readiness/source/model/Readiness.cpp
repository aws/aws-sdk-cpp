/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/Readiness.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53RecoveryReadiness
  {
    namespace Model
    {
      namespace ReadinessMapper
      {

        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t NOT_READY_HASH = ConstExprHashingUtils::HashString("NOT_READY");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");
        static constexpr uint32_t NOT_AUTHORIZED_HASH = ConstExprHashingUtils::HashString("NOT_AUTHORIZED");


        Readiness GetReadinessForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return Readiness::READY;
          }
          else if (hashCode == NOT_READY_HASH)
          {
            return Readiness::NOT_READY;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return Readiness::UNKNOWN;
          }
          else if (hashCode == NOT_AUTHORIZED_HASH)
          {
            return Readiness::NOT_AUTHORIZED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Readiness>(hashCode);
          }

          return Readiness::NOT_SET;
        }

        Aws::String GetNameForReadiness(Readiness enumValue)
        {
          switch(enumValue)
          {
          case Readiness::NOT_SET:
            return {};
          case Readiness::READY:
            return "READY";
          case Readiness::NOT_READY:
            return "NOT_READY";
          case Readiness::UNKNOWN:
            return "UNKNOWN";
          case Readiness::NOT_AUTHORIZED:
            return "NOT_AUTHORIZED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReadinessMapper
    } // namespace Model
  } // namespace Route53RecoveryReadiness
} // namespace Aws
