/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DescribeUserProfilesRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeUserProfilesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeUserProfiles"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of IAM or federated user ARNs that identify the users to be
     * described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIamUserArns() const { return m_iamUserArns; }
    inline bool IamUserArnsHasBeenSet() const { return m_iamUserArnsHasBeenSet; }
    template<typename IamUserArnsT = Aws::Vector<Aws::String>>
    void SetIamUserArns(IamUserArnsT&& value) { m_iamUserArnsHasBeenSet = true; m_iamUserArns = std::forward<IamUserArnsT>(value); }
    template<typename IamUserArnsT = Aws::Vector<Aws::String>>
    DescribeUserProfilesRequest& WithIamUserArns(IamUserArnsT&& value) { SetIamUserArns(std::forward<IamUserArnsT>(value)); return *this;}
    template<typename IamUserArnsT = Aws::String>
    DescribeUserProfilesRequest& AddIamUserArns(IamUserArnsT&& value) { m_iamUserArnsHasBeenSet = true; m_iamUserArns.emplace_back(std::forward<IamUserArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_iamUserArns;
    bool m_iamUserArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
