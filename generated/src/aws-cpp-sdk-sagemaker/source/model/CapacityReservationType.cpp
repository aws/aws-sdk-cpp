/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CapacityReservationType.h>
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
      namespace CapacityReservationTypeMapper
      {

        static const int ODCR_HASH = HashingUtils::HashString("ODCR");
        static const int CRG_HASH = HashingUtils::HashString("CRG");


        CapacityReservationType GetCapacityReservationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ODCR_HASH)
          {
            return CapacityReservationType::ODCR;
          }
          else if (hashCode == CRG_HASH)
          {
            return CapacityReservationType::CRG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityReservationType>(hashCode);
          }

          return CapacityReservationType::NOT_SET;
        }

        Aws::String GetNameForCapacityReservationType(CapacityReservationType enumValue)
        {
          switch(enumValue)
          {
          case CapacityReservationType::NOT_SET:
            return {};
          case CapacityReservationType::ODCR:
            return "ODCR";
          case CapacityReservationType::CRG:
            return "CRG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityReservationTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
