/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/SourceEndpointConfiguration.h>

#include <utility>

namespace Aws {
namespace MediaConnect {
namespace Model {

/**
 */
class UpdateSourceEndpointRequest : public MediaConnectRequest {
 public:
  AWS_MEDIACONNECT_API UpdateSourceEndpointRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateSourceEndpoint"; }

  AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the source endpoint to update.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateSourceEndpointRequest& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description to help you identify the source endpoint.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateSourceEndpointRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated configuration settings for the source endpoint.</p>
   */
  inline const SourceEndpointConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = SourceEndpointConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = SourceEndpointConfiguration>
  UpdateSourceEndpointRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_description;

  SourceEndpointConfiguration m_configuration;
  bool m_arnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
