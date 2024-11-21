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
    AWS_SSMQUICKSETUP_API ListConfigurationsRequest();

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
    inline const Aws::String& GetConfigurationDefinitionId() const{ return m_configurationDefinitionId; }
    inline bool ConfigurationDefinitionIdHasBeenSet() const { return m_configurationDefinitionIdHasBeenSet; }
    inline void SetConfigurationDefinitionId(const Aws::String& value) { m_configurationDefinitionIdHasBeenSet = true; m_configurationDefinitionId = value; }
    inline void SetConfigurationDefinitionId(Aws::String&& value) { m_configurationDefinitionIdHasBeenSet = true; m_configurationDefinitionId = std::move(value); }
    inline void SetConfigurationDefinitionId(const char* value) { m_configurationDefinitionIdHasBeenSet = true; m_configurationDefinitionId.assign(value); }
    inline ListConfigurationsRequest& WithConfigurationDefinitionId(const Aws::String& value) { SetConfigurationDefinitionId(value); return *this;}
    inline ListConfigurationsRequest& WithConfigurationDefinitionId(Aws::String&& value) { SetConfigurationDefinitionId(std::move(value)); return *this;}
    inline ListConfigurationsRequest& WithConfigurationDefinitionId(const char* value) { SetConfigurationDefinitionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results returned by the request.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListConfigurationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline ListConfigurationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline ListConfigurationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline ListConfigurationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the configuration manager.</p>
     */
    inline const Aws::String& GetManagerArn() const{ return m_managerArn; }
    inline bool ManagerArnHasBeenSet() const { return m_managerArnHasBeenSet; }
    inline void SetManagerArn(const Aws::String& value) { m_managerArnHasBeenSet = true; m_managerArn = value; }
    inline void SetManagerArn(Aws::String&& value) { m_managerArnHasBeenSet = true; m_managerArn = std::move(value); }
    inline void SetManagerArn(const char* value) { m_managerArnHasBeenSet = true; m_managerArn.assign(value); }
    inline ListConfigurationsRequest& WithManagerArn(const Aws::String& value) { SetManagerArn(value); return *this;}
    inline ListConfigurationsRequest& WithManagerArn(Aws::String&& value) { SetManagerArn(std::move(value)); return *this;}
    inline ListConfigurationsRequest& WithManagerArn(const char* value) { SetManagerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of configurations that are returned by the
     * request.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ListConfigurationsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting a specific set of items from a list.</p>
     */
    inline const Aws::String& GetStartingToken() const{ return m_startingToken; }
    inline bool StartingTokenHasBeenSet() const { return m_startingTokenHasBeenSet; }
    inline void SetStartingToken(const Aws::String& value) { m_startingTokenHasBeenSet = true; m_startingToken = value; }
    inline void SetStartingToken(Aws::String&& value) { m_startingTokenHasBeenSet = true; m_startingToken = std::move(value); }
    inline void SetStartingToken(const char* value) { m_startingTokenHasBeenSet = true; m_startingToken.assign(value); }
    inline ListConfigurationsRequest& WithStartingToken(const Aws::String& value) { SetStartingToken(value); return *this;}
    inline ListConfigurationsRequest& WithStartingToken(Aws::String&& value) { SetStartingToken(std::move(value)); return *this;}
    inline ListConfigurationsRequest& WithStartingToken(const char* value) { SetStartingToken(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationDefinitionId;
    bool m_configurationDefinitionIdHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_managerArn;
    bool m_managerArnHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_startingToken;
    bool m_startingTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
