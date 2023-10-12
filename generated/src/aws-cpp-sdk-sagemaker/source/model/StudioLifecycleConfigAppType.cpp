/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/StudioLifecycleConfigAppType.h>
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
      namespace StudioLifecycleConfigAppTypeMapper
      {

        static constexpr uint32_t JupyterServer_HASH = ConstExprHashingUtils::HashString("JupyterServer");
        static constexpr uint32_t KernelGateway_HASH = ConstExprHashingUtils::HashString("KernelGateway");


        StudioLifecycleConfigAppType GetStudioLifecycleConfigAppTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JupyterServer_HASH)
          {
            return StudioLifecycleConfigAppType::JupyterServer;
          }
          else if (hashCode == KernelGateway_HASH)
          {
            return StudioLifecycleConfigAppType::KernelGateway;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StudioLifecycleConfigAppType>(hashCode);
          }

          return StudioLifecycleConfigAppType::NOT_SET;
        }

        Aws::String GetNameForStudioLifecycleConfigAppType(StudioLifecycleConfigAppType enumValue)
        {
          switch(enumValue)
          {
          case StudioLifecycleConfigAppType::NOT_SET:
            return {};
          case StudioLifecycleConfigAppType::JupyterServer:
            return "JupyterServer";
          case StudioLifecycleConfigAppType::KernelGateway:
            return "KernelGateway";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StudioLifecycleConfigAppTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
