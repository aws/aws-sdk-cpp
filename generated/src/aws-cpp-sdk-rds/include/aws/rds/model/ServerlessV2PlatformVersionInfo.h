/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/ServerlessV2FeaturesSupport.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RDS {
namespace Model {

/**
 * <p>This data type is used as a response element in the action
 * <code>DescribeServerlessV2PlatformVersions</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ServerlessV2PlatformVersionInfo">AWS
 * API Reference</a></p>
 */
class ServerlessV2PlatformVersionInfo {
 public:
  AWS_RDS_API ServerlessV2PlatformVersionInfo() = default;
  AWS_RDS_API ServerlessV2PlatformVersionInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API ServerlessV2PlatformVersionInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The version number of the serverless platform.</p>
   */
  inline const Aws::String& GetServerlessV2PlatformVersion() const { return m_serverlessV2PlatformVersion; }
  inline bool ServerlessV2PlatformVersionHasBeenSet() const { return m_serverlessV2PlatformVersionHasBeenSet; }
  template <typename ServerlessV2PlatformVersionT = Aws::String>
  void SetServerlessV2PlatformVersion(ServerlessV2PlatformVersionT&& value) {
    m_serverlessV2PlatformVersionHasBeenSet = true;
    m_serverlessV2PlatformVersion = std::forward<ServerlessV2PlatformVersionT>(value);
  }
  template <typename ServerlessV2PlatformVersionT = Aws::String>
  ServerlessV2PlatformVersionInfo& WithServerlessV2PlatformVersion(ServerlessV2PlatformVersionT&& value) {
    SetServerlessV2PlatformVersion(std::forward<ServerlessV2PlatformVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the serverless platform.</p>
   */
  inline const Aws::String& GetServerlessV2PlatformVersionDescription() const { return m_serverlessV2PlatformVersionDescription; }
  inline bool ServerlessV2PlatformVersionDescriptionHasBeenSet() const { return m_serverlessV2PlatformVersionDescriptionHasBeenSet; }
  template <typename ServerlessV2PlatformVersionDescriptionT = Aws::String>
  void SetServerlessV2PlatformVersionDescription(ServerlessV2PlatformVersionDescriptionT&& value) {
    m_serverlessV2PlatformVersionDescriptionHasBeenSet = true;
    m_serverlessV2PlatformVersionDescription = std::forward<ServerlessV2PlatformVersionDescriptionT>(value);
  }
  template <typename ServerlessV2PlatformVersionDescriptionT = Aws::String>
  ServerlessV2PlatformVersionInfo& WithServerlessV2PlatformVersionDescription(ServerlessV2PlatformVersionDescriptionT&& value) {
    SetServerlessV2PlatformVersionDescription(std::forward<ServerlessV2PlatformVersionDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the database engine.</p>
   */
  inline const Aws::String& GetEngine() const { return m_engine; }
  inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
  template <typename EngineT = Aws::String>
  void SetEngine(EngineT&& value) {
    m_engineHasBeenSet = true;
    m_engine = std::forward<EngineT>(value);
  }
  template <typename EngineT = Aws::String>
  ServerlessV2PlatformVersionInfo& WithEngine(EngineT&& value) {
    SetEngine(std::forward<EngineT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies any Aurora Serverless v2 properties or limits that differ between
   * Aurora Serverless v2 platform versions. You can retrieve the platform version of
   * an existing DB cluster and check whether that version supports certain Aurora
   * Serverless v2 features before you attempt to use those features.</p>
   */
  inline const ServerlessV2FeaturesSupport& GetServerlessV2FeaturesSupport() const { return m_serverlessV2FeaturesSupport; }
  inline bool ServerlessV2FeaturesSupportHasBeenSet() const { return m_serverlessV2FeaturesSupportHasBeenSet; }
  template <typename ServerlessV2FeaturesSupportT = ServerlessV2FeaturesSupport>
  void SetServerlessV2FeaturesSupport(ServerlessV2FeaturesSupportT&& value) {
    m_serverlessV2FeaturesSupportHasBeenSet = true;
    m_serverlessV2FeaturesSupport = std::forward<ServerlessV2FeaturesSupportT>(value);
  }
  template <typename ServerlessV2FeaturesSupportT = ServerlessV2FeaturesSupport>
  ServerlessV2PlatformVersionInfo& WithServerlessV2FeaturesSupport(ServerlessV2FeaturesSupportT&& value) {
    SetServerlessV2FeaturesSupport(std::forward<ServerlessV2FeaturesSupportT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the serverless platform. Valid statuses are the following:</p>
   * <ul> <li> <p> <code>enabled</code> - The platform version is in use.</p> </li>
   * <li> <p> <code>disabled</code> - The platform version is not in use.</p> </li>
   * </ul>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  ServerlessV2PlatformVersionInfo& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this platform version is the default version for the
   * engine. The default platform version is the version used for new DB
   * clusters.</p>
   */
  inline bool GetIsDefault() const { return m_isDefault; }
  inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
  inline void SetIsDefault(bool value) {
    m_isDefaultHasBeenSet = true;
    m_isDefault = value;
  }
  inline ServerlessV2PlatformVersionInfo& WithIsDefault(bool value) {
    SetIsDefault(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_serverlessV2PlatformVersion;

  Aws::String m_serverlessV2PlatformVersionDescription;

  Aws::String m_engine;

  ServerlessV2FeaturesSupport m_serverlessV2FeaturesSupport;

  Aws::String m_status;

  bool m_isDefault{false};
  bool m_serverlessV2PlatformVersionHasBeenSet = false;
  bool m_serverlessV2PlatformVersionDescriptionHasBeenSet = false;
  bool m_engineHasBeenSet = false;
  bool m_serverlessV2FeaturesSupportHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_isDefaultHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
