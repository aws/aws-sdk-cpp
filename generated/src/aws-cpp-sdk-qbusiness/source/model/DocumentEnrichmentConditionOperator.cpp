/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DocumentEnrichmentConditionOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace DocumentEnrichmentConditionOperatorMapper
      {

        static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
        static const int GREATER_THAN_OR_EQUALS_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUALS");
        static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
        static const int LESS_THAN_OR_EQUALS_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUALS");
        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int NOT_CONTAINS_HASH = HashingUtils::HashString("NOT_CONTAINS");
        static const int EXISTS_HASH = HashingUtils::HashString("EXISTS");
        static const int NOT_EXISTS_HASH = HashingUtils::HashString("NOT_EXISTS");
        static const int BEGINS_WITH_HASH = HashingUtils::HashString("BEGINS_WITH");


        DocumentEnrichmentConditionOperator GetDocumentEnrichmentConditionOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GREATER_THAN_HASH)
          {
            return DocumentEnrichmentConditionOperator::GREATER_THAN;
          }
          else if (hashCode == GREATER_THAN_OR_EQUALS_HASH)
          {
            return DocumentEnrichmentConditionOperator::GREATER_THAN_OR_EQUALS;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return DocumentEnrichmentConditionOperator::LESS_THAN;
          }
          else if (hashCode == LESS_THAN_OR_EQUALS_HASH)
          {
            return DocumentEnrichmentConditionOperator::LESS_THAN_OR_EQUALS;
          }
          else if (hashCode == EQUALS_HASH)
          {
            return DocumentEnrichmentConditionOperator::EQUALS;
          }
          else if (hashCode == NOT_EQUALS_HASH)
          {
            return DocumentEnrichmentConditionOperator::NOT_EQUALS;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return DocumentEnrichmentConditionOperator::CONTAINS;
          }
          else if (hashCode == NOT_CONTAINS_HASH)
          {
            return DocumentEnrichmentConditionOperator::NOT_CONTAINS;
          }
          else if (hashCode == EXISTS_HASH)
          {
            return DocumentEnrichmentConditionOperator::EXISTS;
          }
          else if (hashCode == NOT_EXISTS_HASH)
          {
            return DocumentEnrichmentConditionOperator::NOT_EXISTS;
          }
          else if (hashCode == BEGINS_WITH_HASH)
          {
            return DocumentEnrichmentConditionOperator::BEGINS_WITH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentEnrichmentConditionOperator>(hashCode);
          }

          return DocumentEnrichmentConditionOperator::NOT_SET;
        }

        Aws::String GetNameForDocumentEnrichmentConditionOperator(DocumentEnrichmentConditionOperator enumValue)
        {
          switch(enumValue)
          {
          case DocumentEnrichmentConditionOperator::NOT_SET:
            return {};
          case DocumentEnrichmentConditionOperator::GREATER_THAN:
            return "GREATER_THAN";
          case DocumentEnrichmentConditionOperator::GREATER_THAN_OR_EQUALS:
            return "GREATER_THAN_OR_EQUALS";
          case DocumentEnrichmentConditionOperator::LESS_THAN:
            return "LESS_THAN";
          case DocumentEnrichmentConditionOperator::LESS_THAN_OR_EQUALS:
            return "LESS_THAN_OR_EQUALS";
          case DocumentEnrichmentConditionOperator::EQUALS:
            return "EQUALS";
          case DocumentEnrichmentConditionOperator::NOT_EQUALS:
            return "NOT_EQUALS";
          case DocumentEnrichmentConditionOperator::CONTAINS:
            return "CONTAINS";
          case DocumentEnrichmentConditionOperator::NOT_CONTAINS:
            return "NOT_CONTAINS";
          case DocumentEnrichmentConditionOperator::EXISTS:
            return "EXISTS";
          case DocumentEnrichmentConditionOperator::NOT_EXISTS:
            return "NOT_EXISTS";
          case DocumentEnrichmentConditionOperator::BEGINS_WITH:
            return "BEGINS_WITH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentEnrichmentConditionOperatorMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
