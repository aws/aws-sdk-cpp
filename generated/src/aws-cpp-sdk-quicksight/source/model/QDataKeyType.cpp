/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/QDataKeyType.h>
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
      namespace QDataKeyTypeMapper
      {

        static const int AWS_OWNED_HASH = HashingUtils::HashString("AWS_OWNED");
        static const int CMK_HASH = HashingUtils::HashString("CMK");


        QDataKeyType GetQDataKeyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_OWNED_HASH)
          {
            return QDataKeyType::AWS_OWNED;
          }
          else if (hashCode == CMK_HASH)
          {
            return QDataKeyType::CMK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QDataKeyType>(hashCode);
          }

          return QDataKeyType::NOT_SET;
        }

        Aws::String GetNameForQDataKeyType(QDataKeyType enumValue)
        {
          switch(enumValue)
          {
          case QDataKeyType::NOT_SET:
            return {};
          case QDataKeyType::AWS_OWNED:
            return "AWS_OWNED";
          case QDataKeyType::CMK:
            return "CMK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QDataKeyTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
