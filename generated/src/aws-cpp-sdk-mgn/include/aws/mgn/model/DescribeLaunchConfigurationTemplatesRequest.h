/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class DescribeLaunchConfigurationTemplatesRequest : public MgnRequest
  {
  public:
    AWS_MGN_API DescribeLaunchConfigurationTemplatesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLaunchConfigurationTemplates"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Request to filter Launch Configuration Templates list by Launch Configuration
     * Template ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLaunchConfigurationTemplateIDs() const { return m_launchConfigurationTemplateIDs; }
    inline bool LaunchConfigurationTemplateIDsHasBeenSet() const { return m_launchConfigurationTemplateIDsHasBeenSet; }
    template<typename LaunchConfigurationTemplateIDsT = Aws::Vector<Aws::String>>
    void SetLaunchConfigurationTemplateIDs(LaunchConfigurationTemplateIDsT&& value) { m_launchConfigurationTemplateIDsHasBeenSet = true; m_launchConfigurationTemplateIDs = std::forward<LaunchConfigurationTemplateIDsT>(value); }
    template<typename LaunchConfigurationTemplateIDsT = Aws::Vector<Aws::String>>
    DescribeLaunchConfigurationTemplatesRequest& WithLaunchConfigurationTemplateIDs(LaunchConfigurationTemplateIDsT&& value) { SetLaunchConfigurationTemplateIDs(std::forward<LaunchConfigurationTemplateIDsT>(value)); return *this;}
    template<typename LaunchConfigurationTemplateIDsT = Aws::String>
    DescribeLaunchConfigurationTemplatesRequest& AddLaunchConfigurationTemplateIDs(LaunchConfigurationTemplateIDsT&& value) { m_launchConfigurationTemplateIDsHasBeenSet = true; m_launchConfigurationTemplateIDs.emplace_back(std::forward<LaunchConfigurationTemplateIDsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maximum results to be returned in DescribeLaunchConfigurationTemplates.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeLaunchConfigurationTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Next pagination token returned from DescribeLaunchConfigurationTemplates.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeLaunchConfigurationTemplatesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_launchConfigurationTemplateIDs;
    bool m_launchConfigurationTemplateIDsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
