﻿/**
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

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Inactive_HASH = HashingUtils::HashString("Inactive");


        QualificationTypeStatus GetQualificationTypeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
