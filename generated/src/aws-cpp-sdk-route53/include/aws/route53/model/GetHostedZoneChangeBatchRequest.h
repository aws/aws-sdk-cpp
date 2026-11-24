/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/Route53_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Route53 {
namespace Model {

/**
 */
class GetHostedZoneChangeBatchRequest : public Route53Request {
 public:
  AWS_ROUTE53_API GetHostedZoneChangeBatchRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetHostedZoneChangeBatch"; }

  AWS_ROUTE53_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the hosted zone that contains the change batch.</p>
   */
  inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
  inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
  template <typename HostedZoneIdT = Aws::String>
  void SetHostedZoneId(HostedZoneIdT&& value) {
    m_hostedZoneIdHasBeenSet = true;
    m_hostedZoneId = std::forward<HostedZoneIdT>(value);
  }
  template <typename HostedZoneIdT = Aws::String>
  GetHostedZoneChangeBatchRequest& WithHostedZoneId(HostedZoneIdT&& value) {
    SetHostedZoneId(std::forward<HostedZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the change batch that you want to get. This is the ID that
   * <code>ChangeResourceRecordSets</code> returns in <code>ChangeInfo/Id</code>. You
   * can specify the ID with or without the <code>/change/</code> prefix.</p>
   */
  inline const Aws::String& GetChangeId() const { return m_changeId; }
  inline bool ChangeIdHasBeenSet() const { return m_changeIdHasBeenSet; }
  template <typename ChangeIdT = Aws::String>
  void SetChangeId(ChangeIdT&& value) {
    m_changeIdHasBeenSet = true;
    m_changeId = std::forward<ChangeIdT>(value);
  }
  template <typename ChangeIdT = Aws::String>
  GetHostedZoneChangeBatchRequest& WithChangeId(ChangeIdT&& value) {
    SetChangeId(std::forward<ChangeIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hostedZoneId;

  Aws::String m_changeId;
  bool m_hostedZoneIdHasBeenSet = false;
  bool m_changeIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
