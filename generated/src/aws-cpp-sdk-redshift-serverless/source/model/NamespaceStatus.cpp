/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/NamespaceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RedshiftServerless
  {
    namespace Model
    {
      namespace NamespaceStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int MODIFYING_HASH = HashingUtils::HashString("MODIFYING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        NamespaceStatus GetNamespaceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return NamespaceStatus::AVAILABLE;
          }
          else if (hashCode == MODIFYING_HASH)
          {
            return NamespaceStatus::MODIFYING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return NamespaceStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NamespaceStatus>(hashCode);
          }

          return NamespaceStatus::NOT_SET;
        }

        Aws::String GetNameForNamespaceStatus(NamespaceStatus enumValue)
        {
          switch(enumValue)
          {
          case NamespaceStatus::NOT_SET:
            return {};
          case NamespaceStatus::AVAILABLE:
            return "AVAILABLE";
          case NamespaceStatus::MODIFYING:
            return "MODIFYING";
          case NamespaceStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NamespaceStatusMapper
    } // namespace Model
  } // namespace RedshiftServerless
} // namespace Aws
