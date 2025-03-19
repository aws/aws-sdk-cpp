/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/LabelingJobDataSource.h>
#include <aws/sagemaker/model/LabelingJobDataAttributes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Input configuration information for a labeling job.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobInputConfig">AWS
   * API Reference</a></p>
   */
  class LabelingJobInputConfig
  {
  public:
    AWS_SAGEMAKER_API LabelingJobInputConfig() = default;
    AWS_SAGEMAKER_API LabelingJobInputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelingJobInputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location of the input data.</p>
     */
    inline const LabelingJobDataSource& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = LabelingJobDataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = LabelingJobDataSource>
    LabelingJobInputConfig& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes of the data specified by the customer.</p>
     */
    inline const LabelingJobDataAttributes& GetDataAttributes() const { return m_dataAttributes; }
    inline bool DataAttributesHasBeenSet() const { return m_dataAttributesHasBeenSet; }
    template<typename DataAttributesT = LabelingJobDataAttributes>
    void SetDataAttributes(DataAttributesT&& value) { m_dataAttributesHasBeenSet = true; m_dataAttributes = std::forward<DataAttributesT>(value); }
    template<typename DataAttributesT = LabelingJobDataAttributes>
    LabelingJobInputConfig& WithDataAttributes(DataAttributesT&& value) { SetDataAttributes(std::forward<DataAttributesT>(value)); return *this;}
    ///@}
  private:

    LabelingJobDataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    LabelingJobDataAttributes m_dataAttributes;
    bool m_dataAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
