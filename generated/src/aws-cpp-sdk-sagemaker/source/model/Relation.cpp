/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Relation.h>
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
      namespace RelationMapper
      {

        static const int EqualTo_HASH = HashingUtils::HashString("EqualTo");
        static const int GreaterThanOrEqualTo_HASH = HashingUtils::HashString("GreaterThanOrEqualTo");


        Relation GetRelationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EqualTo_HASH)
          {
            return Relation::EqualTo;
          }
          else if (hashCode == GreaterThanOrEqualTo_HASH)
          {
            return Relation::GreaterThanOrEqualTo;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Relation>(hashCode);
          }

          return Relation::NOT_SET;
        }

        Aws::String GetNameForRelation(Relation enumValue)
        {
          switch(enumValue)
          {
          case Relation::NOT_SET:
            return {};
          case Relation::EqualTo:
            return "EqualTo";
          case Relation::GreaterThanOrEqualTo:
            return "GreaterThanOrEqualTo";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelationMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
