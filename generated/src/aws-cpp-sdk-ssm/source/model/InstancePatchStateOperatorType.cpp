/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InstancePatchStateOperatorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace InstancePatchStateOperatorTypeMapper
      {

        static const int Equal_HASH = HashingUtils::HashString("Equal");
        static const int NotEqual_HASH = HashingUtils::HashString("NotEqual");
        static const int LessThan_HASH = HashingUtils::HashString("LessThan");
        static const int GreaterThan_HASH = HashingUtils::HashString("GreaterThan");


        InstancePatchStateOperatorType GetInstancePatchStateOperatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equal_HASH)
          {
            return InstancePatchStateOperatorType::Equal;
          }
          else if (hashCode == NotEqual_HASH)
          {
            return InstancePatchStateOperatorType::NotEqual;
          }
          else if (hashCode == LessThan_HASH)
          {
            return InstancePatchStateOperatorType::LessThan;
          }
          else if (hashCode == GreaterThan_HASH)
          {
            return InstancePatchStateOperatorType::GreaterThan;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstancePatchStateOperatorType>(hashCode);
          }

          return InstancePatchStateOperatorType::NOT_SET;
        }

        Aws::String GetNameForInstancePatchStateOperatorType(InstancePatchStateOperatorType enumValue)
        {
          switch(enumValue)
          {
          case InstancePatchStateOperatorType::Equal:
            return "Equal";
          case InstancePatchStateOperatorType::NotEqual:
            return "NotEqual";
          case InstancePatchStateOperatorType::LessThan:
            return "LessThan";
          case InstancePatchStateOperatorType::GreaterThan:
            return "GreaterThan";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstancePatchStateOperatorTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
