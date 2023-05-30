/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/DataLakeConfiguration.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class UpdateDataLakeRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API UpdateDataLakeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataLake"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>Specify the Region or Regions that will contribute data to the rollup
     * region.</p>
     */
    inline const Aws::Vector<DataLakeConfiguration>& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>Specify the Region or Regions that will contribute data to the rollup
     * region.</p>
     */
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }

    /**
     * <p>Specify the Region or Regions that will contribute data to the rollup
     * region.</p>
     */
    inline void SetConfigurations(const Aws::Vector<DataLakeConfiguration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }

    /**
     * <p>Specify the Region or Regions that will contribute data to the rollup
     * region.</p>
     */
    inline void SetConfigurations(Aws::Vector<DataLakeConfiguration>&& value) { m_configurationsHasBeenSet = true; m_configurations = std::move(value); }

    /**
     * <p>Specify the Region or Regions that will contribute data to the rollup
     * region.</p>
     */
    inline UpdateDataLakeRequest& WithConfigurations(const Aws::Vector<DataLakeConfiguration>& value) { SetConfigurations(value); return *this;}

    /**
     * <p>Specify the Region or Regions that will contribute data to the rollup
     * region.</p>
     */
    inline UpdateDataLakeRequest& WithConfigurations(Aws::Vector<DataLakeConfiguration>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * <p>Specify the Region or Regions that will contribute data to the rollup
     * region.</p>
     */
    inline UpdateDataLakeRequest& AddConfigurations(const DataLakeConfiguration& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }

    /**
     * <p>Specify the Region or Regions that will contribute data to the rollup
     * region.</p>
     */
    inline UpdateDataLakeRequest& AddConfigurations(DataLakeConfiguration&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DataLakeConfiguration> m_configurations;
    bool m_configurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
