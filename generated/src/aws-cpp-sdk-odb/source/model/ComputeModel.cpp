/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/ComputeModel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace odb
  {
    namespace Model
    {
      namespace ComputeModelMapper
      {

        static const int ECPU_HASH = HashingUtils::HashString("ECPU");
        static const int OCPU_HASH = HashingUtils::HashString("OCPU");


        ComputeModel GetComputeModelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ECPU_HASH)
          {
            return ComputeModel::ECPU;
          }
          else if (hashCode == OCPU_HASH)
          {
            return ComputeModel::OCPU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputeModel>(hashCode);
          }

          return ComputeModel::NOT_SET;
        }

        Aws::String GetNameForComputeModel(ComputeModel enumValue)
        {
          switch(enumValue)
          {
          case ComputeModel::NOT_SET:
            return {};
          case ComputeModel::ECPU:
            return "ECPU";
          case ComputeModel::OCPU:
            return "OCPU";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputeModelMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
