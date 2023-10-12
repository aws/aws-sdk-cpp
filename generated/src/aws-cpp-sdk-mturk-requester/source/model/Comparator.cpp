/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/Comparator.h>
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
      namespace ComparatorMapper
      {

        static constexpr uint32_t LessThan_HASH = ConstExprHashingUtils::HashString("LessThan");
        static constexpr uint32_t LessThanOrEqualTo_HASH = ConstExprHashingUtils::HashString("LessThanOrEqualTo");
        static constexpr uint32_t GreaterThan_HASH = ConstExprHashingUtils::HashString("GreaterThan");
        static constexpr uint32_t GreaterThanOrEqualTo_HASH = ConstExprHashingUtils::HashString("GreaterThanOrEqualTo");
        static constexpr uint32_t EqualTo_HASH = ConstExprHashingUtils::HashString("EqualTo");
        static constexpr uint32_t NotEqualTo_HASH = ConstExprHashingUtils::HashString("NotEqualTo");
        static constexpr uint32_t Exists_HASH = ConstExprHashingUtils::HashString("Exists");
        static constexpr uint32_t DoesNotExist_HASH = ConstExprHashingUtils::HashString("DoesNotExist");
        static constexpr uint32_t In_HASH = ConstExprHashingUtils::HashString("In");
        static constexpr uint32_t NotIn_HASH = ConstExprHashingUtils::HashString("NotIn");


        Comparator GetComparatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LessThan_HASH)
          {
            return Comparator::LessThan;
          }
          else if (hashCode == LessThanOrEqualTo_HASH)
          {
            return Comparator::LessThanOrEqualTo;
          }
          else if (hashCode == GreaterThan_HASH)
          {
            return Comparator::GreaterThan;
          }
          else if (hashCode == GreaterThanOrEqualTo_HASH)
          {
            return Comparator::GreaterThanOrEqualTo;
          }
          else if (hashCode == EqualTo_HASH)
          {
            return Comparator::EqualTo;
          }
          else if (hashCode == NotEqualTo_HASH)
          {
            return Comparator::NotEqualTo;
          }
          else if (hashCode == Exists_HASH)
          {
            return Comparator::Exists;
          }
          else if (hashCode == DoesNotExist_HASH)
          {
            return Comparator::DoesNotExist;
          }
          else if (hashCode == In_HASH)
          {
            return Comparator::In;
          }
          else if (hashCode == NotIn_HASH)
          {
            return Comparator::NotIn;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Comparator>(hashCode);
          }

          return Comparator::NOT_SET;
        }

        Aws::String GetNameForComparator(Comparator enumValue)
        {
          switch(enumValue)
          {
          case Comparator::NOT_SET:
            return {};
          case Comparator::LessThan:
            return "LessThan";
          case Comparator::LessThanOrEqualTo:
            return "LessThanOrEqualTo";
          case Comparator::GreaterThan:
            return "GreaterThan";
          case Comparator::GreaterThanOrEqualTo:
            return "GreaterThanOrEqualTo";
          case Comparator::EqualTo:
            return "EqualTo";
          case Comparator::NotEqualTo:
            return "NotEqualTo";
          case Comparator::Exists:
            return "Exists";
          case Comparator::DoesNotExist:
            return "DoesNotExist";
          case Comparator::In:
            return "In";
          case Comparator::NotIn:
            return "NotIn";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComparatorMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws
