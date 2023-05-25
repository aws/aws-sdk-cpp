/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/QueueListBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace QueueListByMapper
      {

        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int CREATION_DATE_HASH = HashingUtils::HashString("CREATION_DATE");


        QueueListBy GetQueueListByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return QueueListBy::NAME;
          }
          else if (hashCode == CREATION_DATE_HASH)
          {
            return QueueListBy::CREATION_DATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueueListBy>(hashCode);
          }

          return QueueListBy::NOT_SET;
        }

        Aws::String GetNameForQueueListBy(QueueListBy enumValue)
        {
          switch(enumValue)
          {
          case QueueListBy::NAME:
            return "NAME";
          case QueueListBy::CREATION_DATE:
            return "CREATION_DATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueueListByMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
