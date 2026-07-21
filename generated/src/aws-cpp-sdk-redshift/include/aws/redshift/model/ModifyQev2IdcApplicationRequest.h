/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/redshift/Redshift_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Redshift {
namespace Model {

/**
 */
class ModifyQev2IdcApplicationRequest : public RedshiftRequest {
 public:
  AWS_REDSHIFT_API ModifyQev2IdcApplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyQev2IdcApplication"; }

  AWS_REDSHIFT_API Aws::String SerializePayload() const override;

 protected:
  AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the Amazon Redshift Query Editor (QEV2)
   * application that integrates with IAM Identity Center.</p>
   */
  inline const Aws::String& GetQev2IdcApplicationArn() const { return m_qev2IdcApplicationArn; }
  inline bool Qev2IdcApplicationArnHasBeenSet() const { return m_qev2IdcApplicationArnHasBeenSet; }
  template <typename Qev2IdcApplicationArnT = Aws::String>
  void SetQev2IdcApplicationArn(Qev2IdcApplicationArnT&& value) {
    m_qev2IdcApplicationArnHasBeenSet = true;
    m_qev2IdcApplicationArn = std::forward<Qev2IdcApplicationArnT>(value);
  }
  template <typename Qev2IdcApplicationArnT = Aws::String>
  ModifyQev2IdcApplicationRequest& WithQev2IdcApplicationArn(Qev2IdcApplicationArnT&& value) {
    SetQev2IdcApplicationArn(std::forward<Qev2IdcApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name for the Amazon Redshift Query Editor (QEV2) IAM Identity
   * Center application. It appears in the console.</p>
   */
  inline const Aws::String& GetIdcDisplayName() const { return m_idcDisplayName; }
  inline bool IdcDisplayNameHasBeenSet() const { return m_idcDisplayNameHasBeenSet; }
  template <typename IdcDisplayNameT = Aws::String>
  void SetIdcDisplayName(IdcDisplayNameT&& value) {
    m_idcDisplayNameHasBeenSet = true;
    m_idcDisplayName = std::forward<IdcDisplayNameT>(value);
  }
  template <typename IdcDisplayNameT = Aws::String>
  ModifyQev2IdcApplicationRequest& WithIdcDisplayName(IdcDisplayNameT&& value) {
    SetIdcDisplayName(std::forward<IdcDisplayNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_qev2IdcApplicationArn;

  Aws::String m_idcDisplayName;
  bool m_qev2IdcApplicationArnHasBeenSet = false;
  bool m_idcDisplayNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
