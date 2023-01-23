/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ParameterValueType.h>
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
      namespace ParameterValueTypeMapper
      {

        static const int MULTI_VALUED_HASH = HashingUtils::HashString("MULTI_VALUED");
        static const int SINGLE_VALUED_HASH = HashingUtils::HashString("SINGLE_VALUED");


        ParameterValueType GetParameterValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MULTI_VALUED_HASH)
          {
            return ParameterValueType::MULTI_VALUED;
          }
          else if (hashCode == SINGLE_VALUED_HASH)
          {
            return ParameterValueType::SINGLE_VALUED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterValueType>(hashCode);
          }

          return ParameterValueType::NOT_SET;
        }

        Aws::String GetNameForParameterValueType(ParameterValueType enumValue)
        {
          switch(enumValue)
          {
          case ParameterValueType::MULTI_VALUED:
            return "MULTI_VALUED";
          case ParameterValueType::SINGLE_VALUED:
            return "SINGLE_VALUED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParameterValueTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
