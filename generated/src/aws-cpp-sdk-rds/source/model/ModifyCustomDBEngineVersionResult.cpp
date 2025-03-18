/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyCustomDBEngineVersionResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyCustomDBEngineVersionResult::ModifyCustomDBEngineVersionResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ModifyCustomDBEngineVersionResult& ModifyCustomDBEngineVersionResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyCustomDBEngineVersionResult"))
  {
    resultNode = rootNode.FirstChild("ModifyCustomDBEngineVersionResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode dBParameterGroupFamilyNode = resultNode.FirstChild("DBParameterGroupFamily");
    if(!dBParameterGroupFamilyNode.IsNull())
    {
      m_dBParameterGroupFamily = Aws::Utils::Xml::DecodeEscapedXmlText(dBParameterGroupFamilyNode.GetText());
      m_dBParameterGroupFamilyHasBeenSet = true;
    }
    XmlNode dBEngineDescriptionNode = resultNode.FirstChild("DBEngineDescription");
    if(!dBEngineDescriptionNode.IsNull())
    {
      m_dBEngineDescription = Aws::Utils::Xml::DecodeEscapedXmlText(dBEngineDescriptionNode.GetText());
      m_dBEngineDescriptionHasBeenSet = true;
    }
    XmlNode dBEngineVersionDescriptionNode = resultNode.FirstChild("DBEngineVersionDescription");
    if(!dBEngineVersionDescriptionNode.IsNull())
    {
      m_dBEngineVersionDescription = Aws::Utils::Xml::DecodeEscapedXmlText(dBEngineVersionDescriptionNode.GetText());
      m_dBEngineVersionDescriptionHasBeenSet = true;
    }
    XmlNode defaultCharacterSetNode = resultNode.FirstChild("DefaultCharacterSet");
    if(!defaultCharacterSetNode.IsNull())
    {
      m_defaultCharacterSet = defaultCharacterSetNode;
      m_defaultCharacterSetHasBeenSet = true;
    }
    XmlNode imageNode = resultNode.FirstChild("Image");
    if(!imageNode.IsNull())
    {
      m_image = imageNode;
      m_imageHasBeenSet = true;
    }
    XmlNode dBEngineMediaTypeNode = resultNode.FirstChild("DBEngineMediaType");
    if(!dBEngineMediaTypeNode.IsNull())
    {
      m_dBEngineMediaType = Aws::Utils::Xml::DecodeEscapedXmlText(dBEngineMediaTypeNode.GetText());
      m_dBEngineMediaTypeHasBeenSet = true;
    }
    XmlNode supportedCharacterSetsNode = resultNode.FirstChild("SupportedCharacterSets");
    if(!supportedCharacterSetsNode.IsNull())
    {
      XmlNode supportedCharacterSetsMember = supportedCharacterSetsNode.FirstChild("CharacterSet");
      m_supportedCharacterSetsHasBeenSet = !supportedCharacterSetsMember.IsNull();
      while(!supportedCharacterSetsMember.IsNull())
      {
        m_supportedCharacterSets.push_back(supportedCharacterSetsMember);
        supportedCharacterSetsMember = supportedCharacterSetsMember.NextNode("CharacterSet");
      }

      m_supportedCharacterSetsHasBeenSet = true;
    }
    XmlNode supportedNcharCharacterSetsNode = resultNode.FirstChild("SupportedNcharCharacterSets");
    if(!supportedNcharCharacterSetsNode.IsNull())
    {
      XmlNode supportedNcharCharacterSetsMember = supportedNcharCharacterSetsNode.FirstChild("CharacterSet");
      m_supportedNcharCharacterSetsHasBeenSet = !supportedNcharCharacterSetsMember.IsNull();
      while(!supportedNcharCharacterSetsMember.IsNull())
      {
        m_supportedNcharCharacterSets.push_back(supportedNcharCharacterSetsMember);
        supportedNcharCharacterSetsMember = supportedNcharCharacterSetsMember.NextNode("CharacterSet");
      }

      m_supportedNcharCharacterSetsHasBeenSet = true;
    }
    XmlNode validUpgradeTargetNode = resultNode.FirstChild("ValidUpgradeTarget");
    if(!validUpgradeTargetNode.IsNull())
    {
      XmlNode validUpgradeTargetMember = validUpgradeTargetNode.FirstChild("UpgradeTarget");
      m_validUpgradeTargetHasBeenSet = !validUpgradeTargetMember.IsNull();
      while(!validUpgradeTargetMember.IsNull())
      {
        m_validUpgradeTarget.push_back(validUpgradeTargetMember);
        validUpgradeTargetMember = validUpgradeTargetMember.NextNode("UpgradeTarget");
      }

      m_validUpgradeTargetHasBeenSet = true;
    }
    XmlNode supportedTimezonesNode = resultNode.FirstChild("SupportedTimezones");
    if(!supportedTimezonesNode.IsNull())
    {
      XmlNode supportedTimezonesMember = supportedTimezonesNode.FirstChild("Timezone");
      m_supportedTimezonesHasBeenSet = !supportedTimezonesMember.IsNull();
      while(!supportedTimezonesMember.IsNull())
      {
        m_supportedTimezones.push_back(supportedTimezonesMember);
        supportedTimezonesMember = supportedTimezonesMember.NextNode("Timezone");
      }

      m_supportedTimezonesHasBeenSet = true;
    }
    XmlNode exportableLogTypesNode = resultNode.FirstChild("ExportableLogTypes");
    if(!exportableLogTypesNode.IsNull())
    {
      XmlNode exportableLogTypesMember = exportableLogTypesNode.FirstChild("member");
      m_exportableLogTypesHasBeenSet = !exportableLogTypesMember.IsNull();
      while(!exportableLogTypesMember.IsNull())
      {
        m_exportableLogTypes.push_back(exportableLogTypesMember.GetText());
        exportableLogTypesMember = exportableLogTypesMember.NextNode("member");
      }

      m_exportableLogTypesHasBeenSet = true;
    }
    XmlNode supportsLogExportsToCloudwatchLogsNode = resultNode.FirstChild("SupportsLogExportsToCloudwatchLogs");
    if(!supportsLogExportsToCloudwatchLogsNode.IsNull())
    {
      m_supportsLogExportsToCloudwatchLogs = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsLogExportsToCloudwatchLogsNode.GetText()).c_str()).c_str());
      m_supportsLogExportsToCloudwatchLogsHasBeenSet = true;
    }
    XmlNode supportsReadReplicaNode = resultNode.FirstChild("SupportsReadReplica");
    if(!supportsReadReplicaNode.IsNull())
    {
      m_supportsReadReplica = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsReadReplicaNode.GetText()).c_str()).c_str());
      m_supportsReadReplicaHasBeenSet = true;
    }
    XmlNode supportedEngineModesNode = resultNode.FirstChild("SupportedEngineModes");
    if(!supportedEngineModesNode.IsNull())
    {
      XmlNode supportedEngineModesMember = supportedEngineModesNode.FirstChild("member");
      m_supportedEngineModesHasBeenSet = !supportedEngineModesMember.IsNull();
      while(!supportedEngineModesMember.IsNull())
      {
        m_supportedEngineModes.push_back(supportedEngineModesMember.GetText());
        supportedEngineModesMember = supportedEngineModesMember.NextNode("member");
      }

      m_supportedEngineModesHasBeenSet = true;
    }
    XmlNode supportedFeatureNamesNode = resultNode.FirstChild("SupportedFeatureNames");
    if(!supportedFeatureNamesNode.IsNull())
    {
      XmlNode supportedFeatureNamesMember = supportedFeatureNamesNode.FirstChild("member");
      m_supportedFeatureNamesHasBeenSet = !supportedFeatureNamesMember.IsNull();
      while(!supportedFeatureNamesMember.IsNull())
      {
        m_supportedFeatureNames.push_back(supportedFeatureNamesMember.GetText());
        supportedFeatureNamesMember = supportedFeatureNamesMember.NextNode("member");
      }

      m_supportedFeatureNamesHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode supportsParallelQueryNode = resultNode.FirstChild("SupportsParallelQuery");
    if(!supportsParallelQueryNode.IsNull())
    {
      m_supportsParallelQuery = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsParallelQueryNode.GetText()).c_str()).c_str());
      m_supportsParallelQueryHasBeenSet = true;
    }
    XmlNode supportsGlobalDatabasesNode = resultNode.FirstChild("SupportsGlobalDatabases");
    if(!supportsGlobalDatabasesNode.IsNull())
    {
      m_supportsGlobalDatabases = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsGlobalDatabasesNode.GetText()).c_str()).c_str());
      m_supportsGlobalDatabasesHasBeenSet = true;
    }
    XmlNode majorEngineVersionNode = resultNode.FirstChild("MajorEngineVersion");
    if(!majorEngineVersionNode.IsNull())
    {
      m_majorEngineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(majorEngineVersionNode.GetText());
      m_majorEngineVersionHasBeenSet = true;
    }
    XmlNode databaseInstallationFilesS3BucketNameNode = resultNode.FirstChild("DatabaseInstallationFilesS3BucketName");
    if(!databaseInstallationFilesS3BucketNameNode.IsNull())
    {
      m_databaseInstallationFilesS3BucketName = Aws::Utils::Xml::DecodeEscapedXmlText(databaseInstallationFilesS3BucketNameNode.GetText());
      m_databaseInstallationFilesS3BucketNameHasBeenSet = true;
    }
    XmlNode databaseInstallationFilesS3PrefixNode = resultNode.FirstChild("DatabaseInstallationFilesS3Prefix");
    if(!databaseInstallationFilesS3PrefixNode.IsNull())
    {
      m_databaseInstallationFilesS3Prefix = Aws::Utils::Xml::DecodeEscapedXmlText(databaseInstallationFilesS3PrefixNode.GetText());
      m_databaseInstallationFilesS3PrefixHasBeenSet = true;
    }
    XmlNode dBEngineVersionArnNode = resultNode.FirstChild("DBEngineVersionArn");
    if(!dBEngineVersionArnNode.IsNull())
    {
      m_dBEngineVersionArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBEngineVersionArnNode.GetText());
      m_dBEngineVersionArnHasBeenSet = true;
    }
    XmlNode kMSKeyIdNode = resultNode.FirstChild("KMSKeyId");
    if(!kMSKeyIdNode.IsNull())
    {
      m_kMSKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kMSKeyIdNode.GetText());
      m_kMSKeyIdHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("CreateTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode tagListNode = resultNode.FirstChild("TagList");
    if(!tagListNode.IsNull())
    {
      XmlNode tagListMember = tagListNode.FirstChild("Tag");
      m_tagListHasBeenSet = !tagListMember.IsNull();
      while(!tagListMember.IsNull())
      {
        m_tagList.push_back(tagListMember);
        tagListMember = tagListMember.NextNode("Tag");
      }

      m_tagListHasBeenSet = true;
    }
    XmlNode supportsBabelfishNode = resultNode.FirstChild("SupportsBabelfish");
    if(!supportsBabelfishNode.IsNull())
    {
      m_supportsBabelfish = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsBabelfishNode.GetText()).c_str()).c_str());
      m_supportsBabelfishHasBeenSet = true;
    }
    XmlNode customDBEngineVersionManifestNode = resultNode.FirstChild("CustomDBEngineVersionManifest");
    if(!customDBEngineVersionManifestNode.IsNull())
    {
      m_customDBEngineVersionManifest = Aws::Utils::Xml::DecodeEscapedXmlText(customDBEngineVersionManifestNode.GetText());
      m_customDBEngineVersionManifestHasBeenSet = true;
    }
    XmlNode supportsLimitlessDatabaseNode = resultNode.FirstChild("SupportsLimitlessDatabase");
    if(!supportsLimitlessDatabaseNode.IsNull())
    {
      m_supportsLimitlessDatabase = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsLimitlessDatabaseNode.GetText()).c_str()).c_str());
      m_supportsLimitlessDatabaseHasBeenSet = true;
    }
    XmlNode supportsCertificateRotationWithoutRestartNode = resultNode.FirstChild("SupportsCertificateRotationWithoutRestart");
    if(!supportsCertificateRotationWithoutRestartNode.IsNull())
    {
      m_supportsCertificateRotationWithoutRestart = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsCertificateRotationWithoutRestartNode.GetText()).c_str()).c_str());
      m_supportsCertificateRotationWithoutRestartHasBeenSet = true;
    }
    XmlNode supportedCACertificateIdentifiersNode = resultNode.FirstChild("SupportedCACertificateIdentifiers");
    if(!supportedCACertificateIdentifiersNode.IsNull())
    {
      XmlNode supportedCACertificateIdentifiersMember = supportedCACertificateIdentifiersNode.FirstChild("member");
      m_supportedCACertificateIdentifiersHasBeenSet = !supportedCACertificateIdentifiersMember.IsNull();
      while(!supportedCACertificateIdentifiersMember.IsNull())
      {
        m_supportedCACertificateIdentifiers.push_back(supportedCACertificateIdentifiersMember.GetText());
        supportedCACertificateIdentifiersMember = supportedCACertificateIdentifiersMember.NextNode("member");
      }

      m_supportedCACertificateIdentifiersHasBeenSet = true;
    }
    XmlNode supportsLocalWriteForwardingNode = resultNode.FirstChild("SupportsLocalWriteForwarding");
    if(!supportsLocalWriteForwardingNode.IsNull())
    {
      m_supportsLocalWriteForwarding = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsLocalWriteForwardingNode.GetText()).c_str()).c_str());
      m_supportsLocalWriteForwardingHasBeenSet = true;
    }
    XmlNode supportsIntegrationsNode = resultNode.FirstChild("SupportsIntegrations");
    if(!supportsIntegrationsNode.IsNull())
    {
      m_supportsIntegrations = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsIntegrationsNode.GetText()).c_str()).c_str());
      m_supportsIntegrationsHasBeenSet = true;
    }
    XmlNode serverlessV2FeaturesSupportNode = resultNode.FirstChild("ServerlessV2FeaturesSupport");
    if(!serverlessV2FeaturesSupportNode.IsNull())
    {
      m_serverlessV2FeaturesSupport = serverlessV2FeaturesSupportNode;
      m_serverlessV2FeaturesSupportHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::ModifyCustomDBEngineVersionResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
