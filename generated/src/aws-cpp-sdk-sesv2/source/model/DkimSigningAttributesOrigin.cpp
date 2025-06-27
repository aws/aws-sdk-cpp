/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/DkimSigningAttributesOrigin.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace DkimSigningAttributesOriginMapper
      {

        static const int AWS_SES_HASH = HashingUtils::HashString("AWS_SES");
        static const int EXTERNAL_HASH = HashingUtils::HashString("EXTERNAL");
        static const int AWS_SES_AF_SOUTH_1_HASH = HashingUtils::HashString("AWS_SES_AF_SOUTH_1");
        static const int AWS_SES_EU_NORTH_1_HASH = HashingUtils::HashString("AWS_SES_EU_NORTH_1");
        static const int AWS_SES_AP_SOUTH_1_HASH = HashingUtils::HashString("AWS_SES_AP_SOUTH_1");
        static const int AWS_SES_EU_WEST_3_HASH = HashingUtils::HashString("AWS_SES_EU_WEST_3");
        static const int AWS_SES_EU_WEST_2_HASH = HashingUtils::HashString("AWS_SES_EU_WEST_2");
        static const int AWS_SES_EU_SOUTH_1_HASH = HashingUtils::HashString("AWS_SES_EU_SOUTH_1");
        static const int AWS_SES_EU_WEST_1_HASH = HashingUtils::HashString("AWS_SES_EU_WEST_1");
        static const int AWS_SES_AP_NORTHEAST_3_HASH = HashingUtils::HashString("AWS_SES_AP_NORTHEAST_3");
        static const int AWS_SES_AP_NORTHEAST_2_HASH = HashingUtils::HashString("AWS_SES_AP_NORTHEAST_2");
        static const int AWS_SES_ME_SOUTH_1_HASH = HashingUtils::HashString("AWS_SES_ME_SOUTH_1");
        static const int AWS_SES_AP_NORTHEAST_1_HASH = HashingUtils::HashString("AWS_SES_AP_NORTHEAST_1");
        static const int AWS_SES_IL_CENTRAL_1_HASH = HashingUtils::HashString("AWS_SES_IL_CENTRAL_1");
        static const int AWS_SES_SA_EAST_1_HASH = HashingUtils::HashString("AWS_SES_SA_EAST_1");
        static const int AWS_SES_CA_CENTRAL_1_HASH = HashingUtils::HashString("AWS_SES_CA_CENTRAL_1");
        static const int AWS_SES_AP_SOUTHEAST_1_HASH = HashingUtils::HashString("AWS_SES_AP_SOUTHEAST_1");
        static const int AWS_SES_AP_SOUTHEAST_2_HASH = HashingUtils::HashString("AWS_SES_AP_SOUTHEAST_2");
        static const int AWS_SES_AP_SOUTHEAST_3_HASH = HashingUtils::HashString("AWS_SES_AP_SOUTHEAST_3");
        static const int AWS_SES_EU_CENTRAL_1_HASH = HashingUtils::HashString("AWS_SES_EU_CENTRAL_1");
        static const int AWS_SES_US_EAST_1_HASH = HashingUtils::HashString("AWS_SES_US_EAST_1");
        static const int AWS_SES_US_EAST_2_HASH = HashingUtils::HashString("AWS_SES_US_EAST_2");
        static const int AWS_SES_US_WEST_1_HASH = HashingUtils::HashString("AWS_SES_US_WEST_1");
        static const int AWS_SES_US_WEST_2_HASH = HashingUtils::HashString("AWS_SES_US_WEST_2");
        static const int AWS_SES_ME_CENTRAL_1_HASH = HashingUtils::HashString("AWS_SES_ME_CENTRAL_1");
        static const int AWS_SES_AP_SOUTH_2_HASH = HashingUtils::HashString("AWS_SES_AP_SOUTH_2");
        static const int AWS_SES_EU_CENTRAL_2_HASH = HashingUtils::HashString("AWS_SES_EU_CENTRAL_2");


        DkimSigningAttributesOrigin GetDkimSigningAttributesOriginForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_SES_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES;
          }
          else if (hashCode == EXTERNAL_HASH)
          {
            return DkimSigningAttributesOrigin::EXTERNAL;
          }
          else if (hashCode == AWS_SES_AF_SOUTH_1_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_AF_SOUTH_1;
          }
          else if (hashCode == AWS_SES_EU_NORTH_1_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_EU_NORTH_1;
          }
          else if (hashCode == AWS_SES_AP_SOUTH_1_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_AP_SOUTH_1;
          }
          else if (hashCode == AWS_SES_EU_WEST_3_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_EU_WEST_3;
          }
          else if (hashCode == AWS_SES_EU_WEST_2_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_EU_WEST_2;
          }
          else if (hashCode == AWS_SES_EU_SOUTH_1_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_EU_SOUTH_1;
          }
          else if (hashCode == AWS_SES_EU_WEST_1_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_EU_WEST_1;
          }
          else if (hashCode == AWS_SES_AP_NORTHEAST_3_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_AP_NORTHEAST_3;
          }
          else if (hashCode == AWS_SES_AP_NORTHEAST_2_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_AP_NORTHEAST_2;
          }
          else if (hashCode == AWS_SES_ME_SOUTH_1_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_ME_SOUTH_1;
          }
          else if (hashCode == AWS_SES_AP_NORTHEAST_1_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_AP_NORTHEAST_1;
          }
          else if (hashCode == AWS_SES_IL_CENTRAL_1_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_IL_CENTRAL_1;
          }
          else if (hashCode == AWS_SES_SA_EAST_1_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_SA_EAST_1;
          }
          else if (hashCode == AWS_SES_CA_CENTRAL_1_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_CA_CENTRAL_1;
          }
          else if (hashCode == AWS_SES_AP_SOUTHEAST_1_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_AP_SOUTHEAST_1;
          }
          else if (hashCode == AWS_SES_AP_SOUTHEAST_2_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_AP_SOUTHEAST_2;
          }
          else if (hashCode == AWS_SES_AP_SOUTHEAST_3_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_AP_SOUTHEAST_3;
          }
          else if (hashCode == AWS_SES_EU_CENTRAL_1_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_EU_CENTRAL_1;
          }
          else if (hashCode == AWS_SES_US_EAST_1_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_US_EAST_1;
          }
          else if (hashCode == AWS_SES_US_EAST_2_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_US_EAST_2;
          }
          else if (hashCode == AWS_SES_US_WEST_1_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_US_WEST_1;
          }
          else if (hashCode == AWS_SES_US_WEST_2_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_US_WEST_2;
          }
          else if (hashCode == AWS_SES_ME_CENTRAL_1_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_ME_CENTRAL_1;
          }
          else if (hashCode == AWS_SES_AP_SOUTH_2_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_AP_SOUTH_2;
          }
          else if (hashCode == AWS_SES_EU_CENTRAL_2_HASH)
          {
            return DkimSigningAttributesOrigin::AWS_SES_EU_CENTRAL_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DkimSigningAttributesOrigin>(hashCode);
          }

          return DkimSigningAttributesOrigin::NOT_SET;
        }

        Aws::String GetNameForDkimSigningAttributesOrigin(DkimSigningAttributesOrigin enumValue)
        {
          switch(enumValue)
          {
          case DkimSigningAttributesOrigin::NOT_SET:
            return {};
          case DkimSigningAttributesOrigin::AWS_SES:
            return "AWS_SES";
          case DkimSigningAttributesOrigin::EXTERNAL:
            return "EXTERNAL";
          case DkimSigningAttributesOrigin::AWS_SES_AF_SOUTH_1:
            return "AWS_SES_AF_SOUTH_1";
          case DkimSigningAttributesOrigin::AWS_SES_EU_NORTH_1:
            return "AWS_SES_EU_NORTH_1";
          case DkimSigningAttributesOrigin::AWS_SES_AP_SOUTH_1:
            return "AWS_SES_AP_SOUTH_1";
          case DkimSigningAttributesOrigin::AWS_SES_EU_WEST_3:
            return "AWS_SES_EU_WEST_3";
          case DkimSigningAttributesOrigin::AWS_SES_EU_WEST_2:
            return "AWS_SES_EU_WEST_2";
          case DkimSigningAttributesOrigin::AWS_SES_EU_SOUTH_1:
            return "AWS_SES_EU_SOUTH_1";
          case DkimSigningAttributesOrigin::AWS_SES_EU_WEST_1:
            return "AWS_SES_EU_WEST_1";
          case DkimSigningAttributesOrigin::AWS_SES_AP_NORTHEAST_3:
            return "AWS_SES_AP_NORTHEAST_3";
          case DkimSigningAttributesOrigin::AWS_SES_AP_NORTHEAST_2:
            return "AWS_SES_AP_NORTHEAST_2";
          case DkimSigningAttributesOrigin::AWS_SES_ME_SOUTH_1:
            return "AWS_SES_ME_SOUTH_1";
          case DkimSigningAttributesOrigin::AWS_SES_AP_NORTHEAST_1:
            return "AWS_SES_AP_NORTHEAST_1";
          case DkimSigningAttributesOrigin::AWS_SES_IL_CENTRAL_1:
            return "AWS_SES_IL_CENTRAL_1";
          case DkimSigningAttributesOrigin::AWS_SES_SA_EAST_1:
            return "AWS_SES_SA_EAST_1";
          case DkimSigningAttributesOrigin::AWS_SES_CA_CENTRAL_1:
            return "AWS_SES_CA_CENTRAL_1";
          case DkimSigningAttributesOrigin::AWS_SES_AP_SOUTHEAST_1:
            return "AWS_SES_AP_SOUTHEAST_1";
          case DkimSigningAttributesOrigin::AWS_SES_AP_SOUTHEAST_2:
            return "AWS_SES_AP_SOUTHEAST_2";
          case DkimSigningAttributesOrigin::AWS_SES_AP_SOUTHEAST_3:
            return "AWS_SES_AP_SOUTHEAST_3";
          case DkimSigningAttributesOrigin::AWS_SES_EU_CENTRAL_1:
            return "AWS_SES_EU_CENTRAL_1";
          case DkimSigningAttributesOrigin::AWS_SES_US_EAST_1:
            return "AWS_SES_US_EAST_1";
          case DkimSigningAttributesOrigin::AWS_SES_US_EAST_2:
            return "AWS_SES_US_EAST_2";
          case DkimSigningAttributesOrigin::AWS_SES_US_WEST_1:
            return "AWS_SES_US_WEST_1";
          case DkimSigningAttributesOrigin::AWS_SES_US_WEST_2:
            return "AWS_SES_US_WEST_2";
          case DkimSigningAttributesOrigin::AWS_SES_ME_CENTRAL_1:
            return "AWS_SES_ME_CENTRAL_1";
          case DkimSigningAttributesOrigin::AWS_SES_AP_SOUTH_2:
            return "AWS_SES_AP_SOUTH_2";
          case DkimSigningAttributesOrigin::AWS_SES_EU_CENTRAL_2:
            return "AWS_SES_EU_CENTRAL_2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DkimSigningAttributesOriginMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
