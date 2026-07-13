/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/FeatureName.h>

#include <utility>

namespace Aws {
namespace SecurityHub {
namespace Model {

/**
 */
class EnableSecurityHubFeatureV2Request : public SecurityHubRequest {
 public:
  AWS_SECURITYHUB_API EnableSecurityHubFeatureV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "EnableSecurityHubFeatureV2"; }

  AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the feature to enable.</p>
   */
  inline FeatureName GetFeatureName() const { return m_featureName; }
  inline bool FeatureNameHasBeenSet() const { return m_featureNameHasBeenSet; }
  inline void SetFeatureName(FeatureName value) {
    m_featureNameHasBeenSet = true;
    m_featureName = value;
  }
  inline EnableSecurityHubFeatureV2Request& WithFeatureName(FeatureName value) {
    SetFeatureName(value);
    return *this;
  }
  ///@}
 private:
  FeatureName m_featureName{FeatureName::NOT_SET};
  bool m_featureNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
