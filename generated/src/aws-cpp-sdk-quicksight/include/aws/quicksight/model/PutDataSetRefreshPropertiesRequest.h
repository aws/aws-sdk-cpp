/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSetRefreshProperties.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class PutDataSetRefreshPropertiesRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API PutDataSetRefreshPropertiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDataSetRefreshProperties"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    PutDataSetRefreshPropertiesRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the dataset.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    PutDataSetRefreshPropertiesRequest& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset refresh properties.</p>
     */
    inline const DataSetRefreshProperties& GetDataSetRefreshProperties() const { return m_dataSetRefreshProperties; }
    inline bool DataSetRefreshPropertiesHasBeenSet() const { return m_dataSetRefreshPropertiesHasBeenSet; }
    template<typename DataSetRefreshPropertiesT = DataSetRefreshProperties>
    void SetDataSetRefreshProperties(DataSetRefreshPropertiesT&& value) { m_dataSetRefreshPropertiesHasBeenSet = true; m_dataSetRefreshProperties = std::forward<DataSetRefreshPropertiesT>(value); }
    template<typename DataSetRefreshPropertiesT = DataSetRefreshProperties>
    PutDataSetRefreshPropertiesRequest& WithDataSetRefreshProperties(DataSetRefreshPropertiesT&& value) { SetDataSetRefreshProperties(std::forward<DataSetRefreshPropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    DataSetRefreshProperties m_dataSetRefreshProperties;
    bool m_dataSetRefreshPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
