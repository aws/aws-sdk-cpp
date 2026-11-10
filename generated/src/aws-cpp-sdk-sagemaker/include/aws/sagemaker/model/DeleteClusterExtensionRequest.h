/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class DeleteClusterExtensionRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API DeleteClusterExtensionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteClusterExtension"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster on which the
   * extension is installed.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  DeleteClusterExtensionRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the extension to delete.</p>
   */
  inline const Aws::String& GetExtensionArn() const { return m_extensionArn; }
  inline bool ExtensionArnHasBeenSet() const { return m_extensionArnHasBeenSet; }
  template <typename ExtensionArnT = Aws::String>
  void SetExtensionArn(ExtensionArnT&& value) {
    m_extensionArnHasBeenSet = true;
    m_extensionArn = std::forward<ExtensionArnT>(value);
  }
  template <typename ExtensionArnT = Aws::String>
  DeleteClusterExtensionRequest& WithExtensionArn(ExtensionArnT&& value) {
    SetExtensionArn(std::forward<ExtensionArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;

  Aws::String m_extensionArn;
  bool m_clusterArnHasBeenSet = false;
  bool m_extensionArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
