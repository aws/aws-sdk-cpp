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

        static const int HTTP1_HASH = HashingUtils::HashString("HTTP1");
        static const int HTTP2_HASH = HashingUtils::HashString("HTTP2");
        static const int GRPC_HASH = HashingUtils::HashString("GRPC");


        TargetGroupProtocolVersion GetTargetGroupProtocolVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
