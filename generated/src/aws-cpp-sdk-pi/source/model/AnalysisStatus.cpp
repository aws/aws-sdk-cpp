/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/AnalysisStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PI
  {
    namespace Model
    {
      namespace AnalysisStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        AnalysisStatus GetAnalysisStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return AnalysisStatus::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return AnalysisStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AnalysisStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalysisStatus>(hashCode);
          }

          return AnalysisStatus::NOT_SET;
        }

        Aws::String GetNameForAnalysisStatus(AnalysisStatus enumValue)
        {
          switch(enumValue)
          {
          case AnalysisStatus::NOT_SET:
            return {};
          case AnalysisStatus::RUNNING:
            return "RUNNING";
          case AnalysisStatus::SUCCEEDED:
            return "SUCCEEDED";
          case AnalysisStatus::FAILED:
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

      } // namespace AnalysisStatusMapper
    } // namespace Model
  } // namespace PI
} // namespace Aws
