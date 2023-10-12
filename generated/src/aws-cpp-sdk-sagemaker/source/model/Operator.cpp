/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Operator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace OperatorMapper
      {

        static constexpr uint32_t Equals_HASH = ConstExprHashingUtils::HashString("Equals");
        static constexpr uint32_t NotEquals_HASH = ConstExprHashingUtils::HashString("NotEquals");
        static constexpr uint32_t GreaterThan_HASH = ConstExprHashingUtils::HashString("GreaterThan");
        static constexpr uint32_t GreaterThanOrEqualTo_HASH = ConstExprHashingUtils::HashString("GreaterThanOrEqualTo");
        static constexpr uint32_t LessThan_HASH = ConstExprHashingUtils::HashString("LessThan");
        static constexpr uint32_t LessThanOrEqualTo_HASH = ConstExprHashingUtils::HashString("LessThanOrEqualTo");
        static constexpr uint32_t Contains_HASH = ConstExprHashingUtils::HashString("Contains");
        static constexpr uint32_t Exists_HASH = ConstExprHashingUtils::HashString("Exists");
        static constexpr uint32_t NotExists_HASH = ConstExprHashingUtils::HashString("NotExists");
        static constexpr uint32_t In_HASH = ConstExprHashingUtils::HashString("In");


        Operator GetOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equals_HASH)
          {
            return Operator::Equals;
          }
          else if (hashCode == NotEquals_HASH)
          {
            return Operator::NotEquals;
          }
          else if (hashCode == GreaterThan_HASH)
          {
            return Operator::GreaterThan;
          }
          else if (hashCode == GreaterThanOrEqualTo_HASH)
          {
            return Operator::GreaterThanOrEqualTo;
          }
          else if (hashCode == LessThan_HASH)
          {
            return Operator::LessThan;
          }
          else if (hashCode == LessThanOrEqualTo_HASH)
          {
            return Operator::LessThanOrEqualTo;
          }
          else if (hashCode == Contains_HASH)
          {
            return Operator::Contains;
          }
          else if (hashCode == Exists_HASH)
          {
            return Operator::Exists;
          }
          else if (hashCode == NotExists_HASH)
          {
            return Operator::NotExists;
          }
          else if (hashCode == In_HASH)
          {
            return Operator::In;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Operator>(hashCode);
          }

          return Operator::NOT_SET;
        }

        Aws::String GetNameForOperator(Operator enumValue)
        {
          switch(enumValue)
          {
          case Operator::NOT_SET:
            return {};
          case Operator::Equals:
            return "Equals";
          case Operator::NotEquals:
            return "NotEquals";
          case Operator::GreaterThan:
            return "GreaterThan";
          case Operator::GreaterThanOrEqualTo:
            return "GreaterThanOrEqualTo";
          case Operator::LessThan:
            return "LessThan";
          case Operator::LessThanOrEqualTo:
            return "LessThanOrEqualTo";
          case Operator::Contains:
            return "Contains";
          case Operator::Exists:
            return "Exists";
          case Operator::NotExists:
            return "NotExists";
          case Operator::In:
            return "In";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperatorMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
