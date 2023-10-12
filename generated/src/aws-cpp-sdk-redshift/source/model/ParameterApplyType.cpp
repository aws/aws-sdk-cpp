/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ParameterApplyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace ParameterApplyTypeMapper
      {

        static constexpr uint32_t static__HASH = ConstExprHashingUtils::HashString("static");
        static constexpr uint32_t dynamic_HASH = ConstExprHashingUtils::HashString("dynamic");


        ParameterApplyType GetParameterApplyTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == static__HASH)
          {
            return ParameterApplyType::static_;
          }
          else if (hashCode == dynamic_HASH)
          {
            return ParameterApplyType::dynamic;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterApplyType>(hashCode);
          }

          return ParameterApplyType::NOT_SET;
        }

        Aws::String GetNameForParameterApplyType(ParameterApplyType enumValue)
        {
          switch(enumValue)
          {
          case ParameterApplyType::NOT_SET:
            return {};
          case ParameterApplyType::static_:
            return "static";
          case ParameterApplyType::dynamic:
            return "dynamic";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParameterApplyTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
