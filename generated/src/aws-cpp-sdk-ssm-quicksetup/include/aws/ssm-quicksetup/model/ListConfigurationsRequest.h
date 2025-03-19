/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/ssm-quicksetup/SSMQuickSetupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-quicksetup/model/Filter.h>
#include <utility>

namespace Aws
{
namespace SSMQuickSetup
{
namespace Model
{

  /**
   */
  class ListConfigurationsRequest : public SSMQuickSetupRequest
  {
  public:
    AWS_SSMQUICKSETUP_API ListConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConfigurations"; }

    AWS_SSMQUICKSETUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the configuration definition.</p>
     */
    inline const Aws::String& GetConfigurationDefinitionId() const { return m_configurationDefinitionId; }
    inline bool ConfigurationDefinitionIdHasBeenSet() const { return m_configurationDefinitionIdHasBeenSet; }
    template<typename ConfigurationDefinitionIdT = Aws::String>
    void SetConfigurationDefinitionId(ConfigurationDefinitionIdT&& value) { m_configurationDefinitionIdHasBeenSet = true; m_configurationDefinitionId = std::forward<ConfigurationDefinitionIdT>(value); }
    template<typename ConfigurationDefinitionIdT = Aws::String>
    ListConfigurationsRequest& WithConfigurationDefinitionId(ConfigurationDefinitionIdT&& value) { SetConfigurationDefinitionId(std::forward<ConfigurationDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results returned by the request.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    ListConfigurationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    ListConfigurationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the configuration manager.</p>
     */
    inline const Aws::String& GetManagerArn() const { return m_managerArn; }
    inline bool ManagerArnHasBeenSet() const { return m_managerArnHasBeenSet; }
    template<typename ManagerArnT = Aws::String>
    void SetManagerArn(ManagerArnT&& value) { m_managerArnHasBeenSet = true; m_managerArn = std::forward<ManagerArnT>(value); }
    template<typename ManagerArnT = Aws::String>
    ListConfigurationsRequest& WithManagerArn(ManagerArnT&& value) { SetManagerArn(std::forward<ManagerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of configurations that are returned by the
     * request.</p>
     */
    inline int GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ListConfigurationsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting a specific set of items from a list.</p>
     */
    inline const Aws::String& GetStartingToken() const { return m_startingToken; }
    inline bool StartingTokenHasBeenSet() const { return m_startingTokenHasBeenSet; }
    template<typename StartingTokenT = Aws::String>
    void SetStartingToken(StartingTokenT&& value) { m_startingTokenHasBeenSet = true; m_startingToken = std::forward<StartingTokenT>(value); }
    template<typename StartingTokenT = Aws::String>
    ListConfigurationsRequest& WithStartingToken(StartingTokenT&& value) { SetStartingToken(std::forward<StartingTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationDefinitionId;
    bool m_configurationDefinitionIdHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_managerArn;
    bool m_managerArnHasBeenSet = false;

    int m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_startingToken;
    bool m_startingTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
