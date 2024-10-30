/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/IamIdentityCenterGroupAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchServerless
  {
    namespace Model
    {
      namespace IamIdentityCenterGroupAttributeMapper
      {

        static const int GroupId_HASH = HashingUtils::HashString("GroupId");
        static const int GroupName_HASH = HashingUtils::HashString("GroupName");


        IamIdentityCenterGroupAttribute GetIamIdentityCenterGroupAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GroupId_HASH)
          {
            return IamIdentityCenterGroupAttribute::GroupId;
          }
          else if (hashCode == GroupName_HASH)
          {
            return IamIdentityCenterGroupAttribute::GroupName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IamIdentityCenterGroupAttribute>(hashCode);
          }

          return IamIdentityCenterGroupAttribute::NOT_SET;
        }

        Aws::String GetNameForIamIdentityCenterGroupAttribute(IamIdentityCenterGroupAttribute enumValue)
        {
          switch(enumValue)
          {
          case IamIdentityCenterGroupAttribute::NOT_SET:
            return {};
          case IamIdentityCenterGroupAttribute::GroupId:
            return "GroupId";
          case IamIdentityCenterGroupAttribute::GroupName:
            return "GroupName";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IamIdentityCenterGroupAttributeMapper
    } // namespace Model
  } // namespace OpenSearchServerless
} // namespace Aws
