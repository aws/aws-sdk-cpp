/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SharingType.h>
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
      namespace SharingTypeMapper
      {

        static const int Private_HASH = HashingUtils::HashString("Private");
        static const int Shared_HASH = HashingUtils::HashString("Shared");


        SharingType GetSharingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Private_HASH)
          {
            return SharingType::Private;
          }
          else if (hashCode == Shared_HASH)
          {
            return SharingType::Shared;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SharingType>(hashCode);
          }

          return SharingType::NOT_SET;
        }

        Aws::String GetNameForSharingType(SharingType enumValue)
        {
          switch(enumValue)
          {
          case SharingType::NOT_SET:
            return {};
          case SharingType::Private:
            return "Private";
          case SharingType::Shared:
            return "Shared";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SharingTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
