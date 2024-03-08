/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/SsmDocumentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace SsmDocumentTypeMapper
      {

        static const int AUTOMATION_HASH = HashingUtils::HashString("AUTOMATION");
        static const int COMMAND_HASH = HashingUtils::HashString("COMMAND");


        SsmDocumentType GetSsmDocumentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATION_HASH)
          {
            return SsmDocumentType::AUTOMATION;
          }
          else if (hashCode == COMMAND_HASH)
          {
            return SsmDocumentType::COMMAND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SsmDocumentType>(hashCode);
          }

          return SsmDocumentType::NOT_SET;
        }

        Aws::String GetNameForSsmDocumentType(SsmDocumentType enumValue)
        {
          switch(enumValue)
          {
          case SsmDocumentType::NOT_SET:
            return {};
          case SsmDocumentType::AUTOMATION:
            return "AUTOMATION";
          case SsmDocumentType::COMMAND:
            return "COMMAND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SsmDocumentTypeMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
