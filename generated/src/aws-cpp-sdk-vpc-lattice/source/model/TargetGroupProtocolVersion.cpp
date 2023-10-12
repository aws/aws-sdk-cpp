/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/TargetGroupProtocolVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VPCLattice
  {
    namespace Model
    {
      namespace TargetGroupProtocolVersionMapper
      {

        static constexpr uint32_t HTTP1_HASH = ConstExprHashingUtils::HashString("HTTP1");
        static constexpr uint32_t HTTP2_HASH = ConstExprHashingUtils::HashString("HTTP2");
        static constexpr uint32_t GRPC_HASH = ConstExprHashingUtils::HashString("GRPC");


        TargetGroupProtocolVersion GetTargetGroupProtocolVersionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP1_HASH)
          {
            return TargetGroupProtocolVersion::HTTP1;
          }
          else if (hashCode == HTTP2_HASH)
          {
            return TargetGroupProtocolVersion::HTTP2;
          }
          else if (hashCode == GRPC_HASH)
          {
            return TargetGroupProtocolVersion::GRPC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetGroupProtocolVersion>(hashCode);
          }

          return TargetGroupProtocolVersion::NOT_SET;
        }

        Aws::String GetNameForTargetGroupProtocolVersion(TargetGroupProtocolVersion enumValue)
        {
          switch(enumValue)
          {
          case TargetGroupProtocolVersion::NOT_SET:
            return {};
          case TargetGroupProtocolVersion::HTTP1:
            return "HTTP1";
          case TargetGroupProtocolVersion::HTTP2:
            return "HTTP2";
          case TargetGroupProtocolVersion::GRPC:
            return "GRPC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetGroupProtocolVersionMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
