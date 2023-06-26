/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/RunExport.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace RunExportMapper
      {

        static const int DEFINITION_HASH = HashingUtils::HashString("DEFINITION");


        RunExport GetRunExportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFINITION_HASH)
          {
            return RunExport::DEFINITION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RunExport>(hashCode);
          }

          return RunExport::NOT_SET;
        }

        Aws::String GetNameForRunExport(RunExport enumValue)
        {
          switch(enumValue)
          {
          case RunExport::DEFINITION:
            return "DEFINITION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RunExportMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
