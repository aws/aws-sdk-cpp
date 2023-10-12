/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/QualificationTypeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MTurk
  {
    namespace Model
    {
      namespace QualificationTypeStatusMapper
      {

        static constexpr uint32_t Active_HASH = ConstExprHashingUtils::HashString("Active");
        static constexpr uint32_t Inactive_HASH = ConstExprHashingUtils::HashString("Inactive");


        QualificationTypeStatus GetQualificationTypeStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return QualificationTypeStatus::Active;
          }
          else if (hashCode == Inactive_HASH)
          {
            return QualificationTypeStatus::Inactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QualificationTypeStatus>(hashCode);
          }

          return QualificationTypeStatus::NOT_SET;
        }

        Aws::String GetNameForQualificationTypeStatus(QualificationTypeStatus enumValue)
        {
          switch(enumValue)
          {
          case QualificationTypeStatus::NOT_SET:
            return {};
          case QualificationTypeStatus::Active:
            return "Active";
          case QualificationTypeStatus::Inactive:
            return "Inactive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QualificationTypeStatusMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws
