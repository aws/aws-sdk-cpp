/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace DocumentTypeMapper
      {

        static constexpr uint32_t Command_HASH = ConstExprHashingUtils::HashString("Command");
        static constexpr uint32_t Policy_HASH = ConstExprHashingUtils::HashString("Policy");
        static constexpr uint32_t Automation_HASH = ConstExprHashingUtils::HashString("Automation");
        static constexpr uint32_t Session_HASH = ConstExprHashingUtils::HashString("Session");
        static constexpr uint32_t Package_HASH = ConstExprHashingUtils::HashString("Package");
        static constexpr uint32_t ApplicationConfiguration_HASH = ConstExprHashingUtils::HashString("ApplicationConfiguration");
        static constexpr uint32_t ApplicationConfigurationSchema_HASH = ConstExprHashingUtils::HashString("ApplicationConfigurationSchema");
        static constexpr uint32_t DeploymentStrategy_HASH = ConstExprHashingUtils::HashString("DeploymentStrategy");
        static constexpr uint32_t ChangeCalendar_HASH = ConstExprHashingUtils::HashString("ChangeCalendar");
        static constexpr uint32_t Automation_ChangeTemplate_HASH = ConstExprHashingUtils::HashString("Automation.ChangeTemplate");
        static constexpr uint32_t ProblemAnalysis_HASH = ConstExprHashingUtils::HashString("ProblemAnalysis");
        static constexpr uint32_t ProblemAnalysisTemplate_HASH = ConstExprHashingUtils::HashString("ProblemAnalysisTemplate");
        static constexpr uint32_t CloudFormation_HASH = ConstExprHashingUtils::HashString("CloudFormation");
        static constexpr uint32_t ConformancePackTemplate_HASH = ConstExprHashingUtils::HashString("ConformancePackTemplate");
        static constexpr uint32_t QuickSetup_HASH = ConstExprHashingUtils::HashString("QuickSetup");


        DocumentType GetDocumentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Command_HASH)
          {
            return DocumentType::Command;
          }
          else if (hashCode == Policy_HASH)
          {
            return DocumentType::Policy;
          }
          else if (hashCode == Automation_HASH)
          {
            return DocumentType::Automation;
          }
          else if (hashCode == Session_HASH)
          {
            return DocumentType::Session;
          }
          else if (hashCode == Package_HASH)
          {
            return DocumentType::Package;
          }
          else if (hashCode == ApplicationConfiguration_HASH)
          {
            return DocumentType::ApplicationConfiguration;
          }
          else if (hashCode == ApplicationConfigurationSchema_HASH)
          {
            return DocumentType::ApplicationConfigurationSchema;
          }
          else if (hashCode == DeploymentStrategy_HASH)
          {
            return DocumentType::DeploymentStrategy;
          }
          else if (hashCode == ChangeCalendar_HASH)
          {
            return DocumentType::ChangeCalendar;
          }
          else if (hashCode == Automation_ChangeTemplate_HASH)
          {
            return DocumentType::Automation_ChangeTemplate;
          }
          else if (hashCode == ProblemAnalysis_HASH)
          {
            return DocumentType::ProblemAnalysis;
          }
          else if (hashCode == ProblemAnalysisTemplate_HASH)
          {
            return DocumentType::ProblemAnalysisTemplate;
          }
          else if (hashCode == CloudFormation_HASH)
          {
            return DocumentType::CloudFormation;
          }
          else if (hashCode == ConformancePackTemplate_HASH)
          {
            return DocumentType::ConformancePackTemplate;
          }
          else if (hashCode == QuickSetup_HASH)
          {
            return DocumentType::QuickSetup;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentType>(hashCode);
          }

          return DocumentType::NOT_SET;
        }

        Aws::String GetNameForDocumentType(DocumentType enumValue)
        {
          switch(enumValue)
          {
          case DocumentType::NOT_SET:
            return {};
          case DocumentType::Command:
            return "Command";
          case DocumentType::Policy:
            return "Policy";
          case DocumentType::Automation:
            return "Automation";
          case DocumentType::Session:
            return "Session";
          case DocumentType::Package:
            return "Package";
          case DocumentType::ApplicationConfiguration:
            return "ApplicationConfiguration";
          case DocumentType::ApplicationConfigurationSchema:
            return "ApplicationConfigurationSchema";
          case DocumentType::DeploymentStrategy:
            return "DeploymentStrategy";
          case DocumentType::ChangeCalendar:
            return "ChangeCalendar";
          case DocumentType::Automation_ChangeTemplate:
            return "Automation.ChangeTemplate";
          case DocumentType::ProblemAnalysis:
            return "ProblemAnalysis";
          case DocumentType::ProblemAnalysisTemplate:
            return "ProblemAnalysisTemplate";
          case DocumentType::CloudFormation:
            return "CloudFormation";
          case DocumentType::ConformancePackTemplate:
            return "ConformancePackTemplate";
          case DocumentType::QuickSetup:
            return "QuickSetup";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
