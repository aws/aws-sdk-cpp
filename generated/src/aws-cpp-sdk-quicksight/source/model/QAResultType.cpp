/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/QAResultType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace QAResultTypeMapper
      {

        static const int DASHBOARD_VISUAL_HASH = HashingUtils::HashString("DASHBOARD_VISUAL");
        static const int GENERATED_ANSWER_HASH = HashingUtils::HashString("GENERATED_ANSWER");
        static const int NO_ANSWER_HASH = HashingUtils::HashString("NO_ANSWER");


        QAResultType GetQAResultTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DASHBOARD_VISUAL_HASH)
          {
            return QAResultType::DASHBOARD_VISUAL;
          }
          else if (hashCode == GENERATED_ANSWER_HASH)
          {
            return QAResultType::GENERATED_ANSWER;
          }
          else if (hashCode == NO_ANSWER_HASH)
          {
            return QAResultType::NO_ANSWER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QAResultType>(hashCode);
          }

          return QAResultType::NOT_SET;
        }

        Aws::String GetNameForQAResultType(QAResultType enumValue)
        {
          switch(enumValue)
          {
          case QAResultType::NOT_SET:
            return {};
          case QAResultType::DASHBOARD_VISUAL:
            return "DASHBOARD_VISUAL";
          case QAResultType::GENERATED_ANSWER:
            return "GENERATED_ANSWER";
          case QAResultType::NO_ANSWER:
            return "NO_ANSWER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QAResultTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
