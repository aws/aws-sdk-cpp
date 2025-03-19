/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/DataModel.h>
#include <aws/timestream-write/model/DataModelS3Configuration.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DataModelConfiguration">AWS
   * API Reference</a></p>
   */
  class DataModelConfiguration
  {
  public:
    AWS_TIMESTREAMWRITE_API DataModelConfiguration() = default;
    AWS_TIMESTREAMWRITE_API DataModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API DataModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const DataModel& GetDataModel() const { return m_dataModel; }
    inline bool DataModelHasBeenSet() const { return m_dataModelHasBeenSet; }
    template<typename DataModelT = DataModel>
    void SetDataModel(DataModelT&& value) { m_dataModelHasBeenSet = true; m_dataModel = std::forward<DataModelT>(value); }
    template<typename DataModelT = DataModel>
    DataModelConfiguration& WithDataModel(DataModelT&& value) { SetDataModel(std::forward<DataModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const DataModelS3Configuration& GetDataModelS3Configuration() const { return m_dataModelS3Configuration; }
    inline bool DataModelS3ConfigurationHasBeenSet() const { return m_dataModelS3ConfigurationHasBeenSet; }
    template<typename DataModelS3ConfigurationT = DataModelS3Configuration>
    void SetDataModelS3Configuration(DataModelS3ConfigurationT&& value) { m_dataModelS3ConfigurationHasBeenSet = true; m_dataModelS3Configuration = std::forward<DataModelS3ConfigurationT>(value); }
    template<typename DataModelS3ConfigurationT = DataModelS3Configuration>
    DataModelConfiguration& WithDataModelS3Configuration(DataModelS3ConfigurationT&& value) { SetDataModelS3Configuration(std::forward<DataModelS3ConfigurationT>(value)); return *this;}
    ///@}
  private:

    DataModel m_dataModel;
    bool m_dataModelHasBeenSet = false;

    DataModelS3Configuration m_dataModelS3Configuration;
    bool m_dataModelS3ConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
