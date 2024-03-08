/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AssociationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace AssociationTypeMapper
      {

        static const int INHERITED_HASH = HashingUtils::HashString("INHERITED");
        static const int APPLIED_HASH = HashingUtils::HashString("APPLIED");


        AssociationType GetAssociationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INHERITED_HASH)
          {
            return AssociationType::INHERITED;
          }
          else if (hashCode == APPLIED_HASH)
          {
            return AssociationType::APPLIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationType>(hashCode);
          }

          return AssociationType::NOT_SET;
        }

        Aws::String GetNameForAssociationType(AssociationType enumValue)
        {
          switch(enumValue)
          {
          case AssociationType::NOT_SET:
            return {};
          case AssociationType::INHERITED:
            return "INHERITED";
          case AssociationType::APPLIED:
            return "APPLIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationTypeMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
