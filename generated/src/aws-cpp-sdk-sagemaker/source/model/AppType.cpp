﻿/**
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

        static const int JupyterServer_HASH = HashingUtils::HashString("JupyterServer");
        static const int KernelGateway_HASH = HashingUtils::HashString("KernelGateway");
        static const int DetailedProfiler_HASH = HashingUtils::HashString("DetailedProfiler");
        static const int TensorBoard_HASH = HashingUtils::HashString("TensorBoard");
        static const int VSCode_HASH = HashingUtils::HashString("VSCode");
        static const int Savitur_HASH = HashingUtils::HashString("Savitur");
        static const int CodeEditor_HASH = HashingUtils::HashString("CodeEditor");
        static const int JupyterLab_HASH = HashingUtils::HashString("JupyterLab");
        static const int RStudioServerPro_HASH = HashingUtils::HashString("RStudioServerPro");
        static const int RSession_HASH = HashingUtils::HashString("RSession");
        static const int RSessionGateway_HASH = HashingUtils::HashString("RSessionGateway");
        static const int Canvas_HASH = HashingUtils::HashString("Canvas");
        static const int DatasetManager_HASH = HashingUtils::HashString("DatasetManager");
        static const int SageMakerLite_HASH = HashingUtils::HashString("SageMakerLite");
        static const int Local_HASH = HashingUtils::HashString("Local");


        AppType GetAppTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JupyterServer_HASH)
          {
            return AppType::JupyterServer;
          }
          else if (hashCode == KernelGateway_HASH)
          {
            return AppType::KernelGateway;
          }
          else if (hashCode == DetailedProfiler_HASH)
          {
            return AppType::DetailedProfiler;
          }
          else if (hashCode == TensorBoard_HASH)
          {
            return AppType::TensorBoard;
          }
          else if (hashCode == VSCode_HASH)
          {
            return AppType::VSCode;
          }
          else if (hashCode == Savitur_HASH)
          {
            return AppType::Savitur;
          }
          else if (hashCode == CodeEditor_HASH)
          {
            return AppType::CodeEditor;
          }
          else if (hashCode == JupyterLab_HASH)
          {
            return AppType::JupyterLab;
          }
          else if (hashCode == RStudioServerPro_HASH)
          {
            return AppType::RStudioServerPro;
          }
          else if (hashCode == RSession_HASH)
          {
            return AppType::RSession;
          }
          else if (hashCode == RSessionGateway_HASH)
          {
            return AppType::RSessionGateway;
          }
          else if (hashCode == Canvas_HASH)
          {
            return AppType::Canvas;
          }
          else if (hashCode == DatasetManager_HASH)
          {
            return AppType::DatasetManager;
          }
          else if (hashCode == SageMakerLite_HASH)
          {
            return AppType::SageMakerLite;
          }
          else if (hashCode == Local_HASH)
          {
            return AppType::Local;
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
          case AppType::DetailedProfiler:
            return "DetailedProfiler";
          case AppType::TensorBoard:
            return "TensorBoard";
          case AppType::VSCode:
            return "VSCode";
          case AppType::Savitur:
            return "Savitur";
          case AppType::CodeEditor:
            return "CodeEditor";
          case AppType::JupyterLab:
            return "JupyterLab";
          case AppType::RStudioServerPro:
            return "RStudioServerPro";
          case AppType::RSession:
            return "RSession";
          case AppType::RSessionGateway:
            return "RSessionGateway";
          case AppType::Canvas:
            return "Canvas";
          case AppType::DatasetManager:
            return "DatasetManager";
          case AppType::SageMakerLite:
            return "SageMakerLite";
          case AppType::Local:
            return "Local";
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
