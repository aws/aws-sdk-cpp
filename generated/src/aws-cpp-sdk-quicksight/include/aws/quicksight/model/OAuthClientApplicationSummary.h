/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataSourceType.h>
#include <aws/quicksight/model/OAuthClientAuthenticationType.h>
#include <aws/quicksight/model/VpcConnectionProperties.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A summary of an OAuthClientApplication.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/OAuthClientApplicationSummary">AWS
 * API Reference</a></p>
 */
class OAuthClientApplicationSummary {
 public:
  AWS_QUICKSIGHT_API OAuthClientApplicationSummary() = default;
  AWS_QUICKSIGHT_API OAuthClientApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API OAuthClientApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the OAuthClientApplication. This ID is unique per Amazon Web
   * Services Region for each Amazon Web Services account.</p>
   */
  inline const Aws::String& GetOAuthClientApplicationId() const { return m_oAuthClientApplicationId; }
  inline bool OAuthClientApplicationIdHasBeenSet() const { return m_oAuthClientApplicationIdHasBeenSet; }
  template <typename OAuthClientApplicationIdT = Aws::String>
  void SetOAuthClientApplicationId(OAuthClientApplicationIdT&& value) {
    m_oAuthClientApplicationIdHasBeenSet = true;
    m_oAuthClientApplicationId = std::forward<OAuthClientApplicationIdT>(value);
  }
  template <typename OAuthClientApplicationIdT = Aws::String>
  OAuthClientApplicationSummary& WithOAuthClientApplicationId(OAuthClientApplicationIdT&& value) {
    SetOAuthClientApplicationId(std::forward<OAuthClientApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the OAuthClientApplication.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  OAuthClientApplicationSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth client authentication type used by the OAuthClientApplication.
   * Valid values are <code>TOKEN</code>.</p>
   */
  inline OAuthClientAuthenticationType GetOAuthClientAuthenticationType() const { return m_oAuthClientAuthenticationType; }
  inline bool OAuthClientAuthenticationTypeHasBeenSet() const { return m_oAuthClientAuthenticationTypeHasBeenSet; }
  inline void SetOAuthClientAuthenticationType(OAuthClientAuthenticationType value) {
    m_oAuthClientAuthenticationTypeHasBeenSet = true;
    m_oAuthClientAuthenticationType = value;
  }
  inline OAuthClientApplicationSummary& WithOAuthClientAuthenticationType(OAuthClientAuthenticationType value) {
    SetOAuthClientAuthenticationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of data source that the OAuthClientApplication is used with. Valid
   * values are <code>SNOWFLAKE</code>.</p>
   */
  inline DataSourceType GetDataSourceType() const { return m_dataSourceType; }
  inline bool DataSourceTypeHasBeenSet() const { return m_dataSourceTypeHasBeenSet; }
  inline void SetDataSourceType(DataSourceType value) {
    m_dataSourceTypeHasBeenSet = true;
    m_dataSourceType = value;
  }
  inline OAuthClientApplicationSummary& WithDataSourceType(DataSourceType value) {
    SetDataSourceType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const VpcConnectionProperties& GetIdentityProviderVpcConnectionProperties() const {
    return m_identityProviderVpcConnectionProperties;
  }
  inline bool IdentityProviderVpcConnectionPropertiesHasBeenSet() const { return m_identityProviderVpcConnectionPropertiesHasBeenSet; }
  template <typename IdentityProviderVpcConnectionPropertiesT = VpcConnectionProperties>
  void SetIdentityProviderVpcConnectionProperties(IdentityProviderVpcConnectionPropertiesT&& value) {
    m_identityProviderVpcConnectionPropertiesHasBeenSet = true;
    m_identityProviderVpcConnectionProperties = std::forward<IdentityProviderVpcConnectionPropertiesT>(value);
  }
  template <typename IdentityProviderVpcConnectionPropertiesT = VpcConnectionProperties>
  OAuthClientApplicationSummary& WithIdentityProviderVpcConnectionProperties(IdentityProviderVpcConnectionPropertiesT&& value) {
    SetIdentityProviderVpcConnectionProperties(std::forward<IdentityProviderVpcConnectionPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time that the OAuthClientApplication was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  OAuthClientApplicationSummary& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time that the OAuthClientApplication was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  void SetLastUpdatedTime(LastUpdatedTimeT&& value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value);
  }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  OAuthClientApplicationSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the OAuthClientApplication.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  OAuthClientApplicationSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_oAuthClientApplicationId;

  Aws::String m_name;

  OAuthClientAuthenticationType m_oAuthClientAuthenticationType{OAuthClientAuthenticationType::NOT_SET};

  DataSourceType m_dataSourceType{DataSourceType::NOT_SET};

  VpcConnectionProperties m_identityProviderVpcConnectionProperties;

  Aws::Utils::DateTime m_createdTime{};

  Aws::Utils::DateTime m_lastUpdatedTime{};

  Aws::String m_arn;
  bool m_oAuthClientApplicationIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_oAuthClientAuthenticationTypeHasBeenSet = false;
  bool m_dataSourceTypeHasBeenSet = false;
  bool m_identityProviderVpcConnectionPropertiesHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_arnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
