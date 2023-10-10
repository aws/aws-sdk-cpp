/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-edge/model/ModelState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SagemakerEdgeManager
  {
    namespace Model
    {
      namespace ModelStateMapper
      {

        static const int DEPLOY_HASH = HashingUtils::HashString("DEPLOY");
        static const int UNDEPLOY_HASH = HashingUtils::HashString("UNDEPLOY");


        ModelState GetModelStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEPLOY_HASH)
          {
            return ModelState::DEPLOY;
          }
          else if (hashCode == UNDEPLOY_HASH)
          {
            return ModelState::UNDEPLOY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelState>(hashCode);
          }

          return ModelState::NOT_SET;
        }

        Aws::String GetNameForModelState(ModelState enumValue)
        {
          switch(enumValue)
          {
          case ModelState::NOT_SET:
            return {};
          case ModelState::DEPLOY:
            return "DEPLOY";
          case ModelState::UNDEPLOY:
            return "UNDEPLOY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelStateMapper
    } // namespace Model
  } // namespace SagemakerEdgeManager
} // namespace Aws
