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

        static const int ContributedTo_HASH = HashingUtils::HashString("ContributedTo");
        static const int AssociatedWith_HASH = HashingUtils::HashString("AssociatedWith");
        static const int DerivedFrom_HASH = HashingUtils::HashString("DerivedFrom");
        static const int Produced_HASH = HashingUtils::HashString("Produced");
        static const int SameAs_HASH = HashingUtils::HashString("SameAs");


        AssociationEdgeType GetAssociationEdgeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == SameAs_HASH)
          {
            return AssociationEdgeType::SameAs;
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
          case AssociationEdgeType::SameAs:
            return "SameAs";
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
