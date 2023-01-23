/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NamespaceErrorType.h>
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
      namespace NamespaceErrorTypeMapper
      {

        static const int PERMISSION_DENIED_HASH = HashingUtils::HashString("PERMISSION_DENIED");
        static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVICE_ERROR");


        NamespaceErrorType GetNamespaceErrorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERMISSION_DENIED_HASH)
          {
            return NamespaceErrorType::PERMISSION_DENIED;
          }
          else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
          {
            return NamespaceErrorType::INTERNAL_SERVICE_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NamespaceErrorType>(hashCode);
          }

          return NamespaceErrorType::NOT_SET;
        }

        Aws::String GetNameForNamespaceErrorType(NamespaceErrorType enumValue)
        {
          switch(enumValue)
          {
          case NamespaceErrorType::PERMISSION_DENIED:
            return "PERMISSION_DENIED";
          case NamespaceErrorType::INTERNAL_SERVICE_ERROR:
            return "INTERNAL_SERVICE_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NamespaceErrorTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
