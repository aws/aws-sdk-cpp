/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/TraceFormatType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace XRay
  {
    namespace Model
    {
      namespace TraceFormatTypeMapper
      {

        static const int XRAY_HASH = HashingUtils::HashString("XRAY");
        static const int OTEL_HASH = HashingUtils::HashString("OTEL");


        TraceFormatType GetTraceFormatTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == XRAY_HASH)
          {
            return TraceFormatType::XRAY;
          }
          else if (hashCode == OTEL_HASH)
          {
            return TraceFormatType::OTEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TraceFormatType>(hashCode);
          }

          return TraceFormatType::NOT_SET;
        }

        Aws::String GetNameForTraceFormatType(TraceFormatType enumValue)
        {
          switch(enumValue)
          {
          case TraceFormatType::NOT_SET:
            return {};
          case TraceFormatType::XRAY:
            return "XRAY";
          case TraceFormatType::OTEL:
            return "OTEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TraceFormatTypeMapper
    } // namespace Model
  } // namespace XRay
} // namespace Aws
