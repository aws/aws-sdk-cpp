/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/OpenCypherExplainMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace neptunedata
  {
    namespace Model
    {
      namespace OpenCypherExplainModeMapper
      {

        static constexpr uint32_t static__HASH = ConstExprHashingUtils::HashString("static");
        static constexpr uint32_t dynamic_HASH = ConstExprHashingUtils::HashString("dynamic");
        static constexpr uint32_t details_HASH = ConstExprHashingUtils::HashString("details");


        OpenCypherExplainMode GetOpenCypherExplainModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == static__HASH)
          {
            return OpenCypherExplainMode::static_;
          }
          else if (hashCode == dynamic_HASH)
          {
            return OpenCypherExplainMode::dynamic;
          }
          else if (hashCode == details_HASH)
          {
            return OpenCypherExplainMode::details;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpenCypherExplainMode>(hashCode);
          }

          return OpenCypherExplainMode::NOT_SET;
        }

        Aws::String GetNameForOpenCypherExplainMode(OpenCypherExplainMode enumValue)
        {
          switch(enumValue)
          {
          case OpenCypherExplainMode::NOT_SET:
            return {};
          case OpenCypherExplainMode::static_:
            return "static";
          case OpenCypherExplainMode::dynamic:
            return "dynamic";
          case OpenCypherExplainMode::details:
            return "details";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpenCypherExplainModeMapper
    } // namespace Model
  } // namespace neptunedata
} // namespace Aws
