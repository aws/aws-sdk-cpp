/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AssociationEdgeType.h>
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
      namespace AssociationEdgeTypeMapper
      {

        static constexpr uint32_t ContributedTo_HASH = ConstExprHashingUtils::HashString("ContributedTo");
        static constexpr uint32_t AssociatedWith_HASH = ConstExprHashingUtils::HashString("AssociatedWith");
        static constexpr uint32_t DerivedFrom_HASH = ConstExprHashingUtils::HashString("DerivedFrom");
        static constexpr uint32_t Produced_HASH = ConstExprHashingUtils::HashString("Produced");


        AssociationEdgeType GetAssociationEdgeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ContributedTo_HASH)
          {
            return AssociationEdgeType::ContributedTo;
          }
          else if (hashCode == AssociatedWith_HASH)
          {
            return AssociationEdgeType::AssociatedWith;
          }
          else if (hashCode == DerivedFrom_HASH)
          {
            return AssociationEdgeType::DerivedFrom;
          }
          else if (hashCode == Produced_HASH)
          {
            return AssociationEdgeType::Produced;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationEdgeType>(hashCode);
          }

          return AssociationEdgeType::NOT_SET;
        }

        Aws::String GetNameForAssociationEdgeType(AssociationEdgeType enumValue)
        {
          switch(enumValue)
          {
          case AssociationEdgeType::NOT_SET:
            return {};
          case AssociationEdgeType::ContributedTo:
            return "ContributedTo";
          case AssociationEdgeType::AssociatedWith:
            return "AssociatedWith";
          case AssociationEdgeType::DerivedFrom:
            return "DerivedFrom";
          case AssociationEdgeType::Produced:
            return "Produced";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationEdgeTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
