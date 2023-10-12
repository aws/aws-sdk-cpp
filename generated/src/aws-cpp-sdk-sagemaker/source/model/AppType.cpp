/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AppType.h>
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
      namespace AppTypeMapper
      {

        static constexpr uint32_t JupyterServer_HASH = ConstExprHashingUtils::HashString("JupyterServer");
        static constexpr uint32_t KernelGateway_HASH = ConstExprHashingUtils::HashString("KernelGateway");
        static constexpr uint32_t TensorBoard_HASH = ConstExprHashingUtils::HashString("TensorBoard");
        static constexpr uint32_t RStudioServerPro_HASH = ConstExprHashingUtils::HashString("RStudioServerPro");
        static constexpr uint32_t RSessionGateway_HASH = ConstExprHashingUtils::HashString("RSessionGateway");


        AppType GetAppTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JupyterServer_HASH)
          {
            return AppType::JupyterServer;
          }
          else if (hashCode == KernelGateway_HASH)
          {
            return AppType::KernelGateway;
          }
          else if (hashCode == TensorBoard_HASH)
          {
            return AppType::TensorBoard;
          }
          else if (hashCode == RStudioServerPro_HASH)
          {
            return AppType::RStudioServerPro;
          }
          else if (hashCode == RSessionGateway_HASH)
          {
            return AppType::RSessionGateway;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppType>(hashCode);
          }

          return AppType::NOT_SET;
        }

        Aws::String GetNameForAppType(AppType enumValue)
        {
          switch(enumValue)
          {
          case AppType::NOT_SET:
            return {};
          case AppType::JupyterServer:
            return "JupyterServer";
          case AppType::KernelGateway:
            return "KernelGateway";
          case AppType::TensorBoard:
            return "TensorBoard";
          case AppType::RStudioServerPro:
            return "RStudioServerPro";
          case AppType::RSessionGateway:
            return "RSessionGateway";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
