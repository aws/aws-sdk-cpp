/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/VpcInformation.h>

#include <utility>

namespace Aws {
namespace Outposts {
namespace Model {

/**
 */
class CreatePrivateConnectivityConfigRequest : public OutpostsRequest {
 public:
  AWS_OUTPOSTS_API CreatePrivateConnectivityConfigRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreatePrivateConnectivityConfig"; }

  AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID or ARN of the Outpost.</p>
   */
  inline const Aws::String& GetOutpostId() const { return m_outpostId; }
  inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }
  template <typename OutpostIdT = Aws::String>
  void SetOutpostId(OutpostIdT&& value) {
    m_outpostIdHasBeenSet = true;
    m_outpostId = std::forward<OutpostIdT>(value);
  }
  template <typename OutpostIdT = Aws::String>
  CreatePrivateConnectivityConfigRequest& WithOutpostId(OutpostIdT&& value) {
    SetOutpostId(std::forward<OutpostIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the VPC used for private connectivity, including the VPC,
   * its subnets, and an associated VPC endpoint. You can specify at most one
   * entry.</p>
   */
  inline const Aws::Vector<VpcInformation>& GetVpcInformationList() const { return m_vpcInformationList; }
  inline bool VpcInformationListHasBeenSet() const { return m_vpcInformationListHasBeenSet; }
  template <typename VpcInformationListT = Aws::Vector<VpcInformation>>
  void SetVpcInformationList(VpcInformationListT&& value) {
    m_vpcInformationListHasBeenSet = true;
    m_vpcInformationList = std::forward<VpcInformationListT>(value);
  }
  template <typename VpcInformationListT = Aws::Vector<VpcInformation>>
  CreatePrivateConnectivityConfigRequest& WithVpcInformationList(VpcInformationListT&& value) {
    SetVpcInformationList(std::forward<VpcInformationListT>(value));
    return *this;
  }
  template <typename VpcInformationListT = VpcInformation>
  CreatePrivateConnectivityConfigRequest& AddVpcInformationList(VpcInformationListT&& value) {
    m_vpcInformationListHasBeenSet = true;
    m_vpcInformationList.emplace_back(std::forward<VpcInformationListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_outpostId;

  Aws::Vector<VpcInformation> m_vpcInformationList;
  bool m_outpostIdHasBeenSet = false;
  bool m_vpcInformationListHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
