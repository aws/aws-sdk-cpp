/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53profiles/Route53ProfilesRequest.h>
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Route53Profiles {
namespace Model {

/**
 */
class UpdateProfileAssociationRequest : public Route53ProfilesRequest {
 public:
  AWS_ROUTE53PROFILES_API UpdateProfileAssociationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProfileAssociation"; }

  AWS_ROUTE53PROFILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p> The ID of the Profile association to update. </p>
   */
  inline const Aws::String& GetProfileAssociationId() const { return m_profileAssociationId; }
  inline bool ProfileAssociationIdHasBeenSet() const { return m_profileAssociationIdHasBeenSet; }
  template <typename ProfileAssociationIdT = Aws::String>
  void SetProfileAssociationId(ProfileAssociationIdT&& value) {
    m_profileAssociationIdHasBeenSet = true;
    m_profileAssociationId = std::forward<ProfileAssociationIdT>(value);
  }
  template <typename ProfileAssociationIdT = Aws::String>
  UpdateProfileAssociationRequest& WithProfileAssociationId(ProfileAssociationIdT&& value) {
    SetProfileAssociationId(std::forward<ProfileAssociationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the Profile association. </p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateProfileAssociationRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The new priority of the Profile association. Route 53 VPC Resolver evaluates
   * the Profile associations for a VPC in priority order, starting with the lowest
   * value. </p> <p>The priority must be unique among the Profile associations for
   * the VPC.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline UpdateProfileAssociationRequest& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileAssociationId;

  Aws::String m_name;

  int m_priority{0};
  bool m_profileAssociationIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Profiles
}  // namespace Aws
