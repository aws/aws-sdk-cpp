/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nova-act/NovaActRequest.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace NovaAct {
namespace Model {

/**
 */
class ListModelsRequest : public NovaActRequest {
 public:
  AWS_NOVAACT_API ListModelsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListModels"; }

  AWS_NOVAACT_API Aws::String SerializePayload() const override;

  AWS_NOVAACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The client compatibility version to filter models by compatibility.</p>
   */
  inline int GetClientCompatibilityVersion() const { return m_clientCompatibilityVersion; }
  inline bool ClientCompatibilityVersionHasBeenSet() const { return m_clientCompatibilityVersionHasBeenSet; }
  inline void SetClientCompatibilityVersion(int value) {
    m_clientCompatibilityVersionHasBeenSet = true;
    m_clientCompatibilityVersion = value;
  }
  inline ListModelsRequest& WithClientCompatibilityVersion(int value) {
    SetClientCompatibilityVersion(value);
    return *this;
  }
  ///@}
 private:
  int m_clientCompatibilityVersion{0};
  bool m_clientCompatibilityVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
