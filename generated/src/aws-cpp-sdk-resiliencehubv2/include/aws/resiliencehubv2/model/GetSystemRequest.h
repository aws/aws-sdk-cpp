/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2Request.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace resiliencehubv2 {
namespace Model {

/**
 */
class GetSystemRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API GetSystemRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetSystem"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  AWS_RESILIENCEHUBV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{

  inline const Aws::String& GetSystemArn() const { return m_systemArn; }
  inline bool SystemArnHasBeenSet() const { return m_systemArnHasBeenSet; }
  template <typename SystemArnT = Aws::String>
  void SetSystemArn(SystemArnT&& value) {
    m_systemArnHasBeenSet = true;
    m_systemArn = std::forward<SystemArnT>(value);
  }
  template <typename SystemArnT = Aws::String>
  GetSystemRequest& WithSystemArn(SystemArnT&& value) {
    SetSystemArn(std::forward<SystemArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_systemArn;
  bool m_systemArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
