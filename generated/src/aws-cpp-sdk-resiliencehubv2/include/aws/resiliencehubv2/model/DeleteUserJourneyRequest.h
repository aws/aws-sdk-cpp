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
namespace resiliencehubv2 {
namespace Model {

/**
 */
class DeleteUserJourneyRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API DeleteUserJourneyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteUserJourney"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetSystemArn() const { return m_systemArn; }
  inline bool SystemArnHasBeenSet() const { return m_systemArnHasBeenSet; }
  template <typename SystemArnT = Aws::String>
  void SetSystemArn(SystemArnT&& value) {
    m_systemArnHasBeenSet = true;
    m_systemArn = std::forward<SystemArnT>(value);
  }
  template <typename SystemArnT = Aws::String>
  DeleteUserJourneyRequest& WithSystemArn(SystemArnT&& value) {
    SetSystemArn(std::forward<SystemArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user journey to delete.</p>
   */
  inline const Aws::String& GetUserJourneyId() const { return m_userJourneyId; }
  inline bool UserJourneyIdHasBeenSet() const { return m_userJourneyIdHasBeenSet; }
  template <typename UserJourneyIdT = Aws::String>
  void SetUserJourneyId(UserJourneyIdT&& value) {
    m_userJourneyIdHasBeenSet = true;
    m_userJourneyId = std::forward<UserJourneyIdT>(value);
  }
  template <typename UserJourneyIdT = Aws::String>
  DeleteUserJourneyRequest& WithUserJourneyId(UserJourneyIdT&& value) {
    SetUserJourneyId(std::forward<UserJourneyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_systemArn;

  Aws::String m_userJourneyId;
  bool m_systemArnHasBeenSet = false;
  bool m_userJourneyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
