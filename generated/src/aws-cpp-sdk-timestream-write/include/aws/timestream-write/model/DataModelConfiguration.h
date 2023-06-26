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
    AWS_TIMESTREAMWRITE_API DataModelConfiguration();
    AWS_TIMESTREAMWRITE_API DataModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API DataModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const DataModel& GetDataModel() const{ return m_dataModel; }

    /**
     * <p/>
     */
    inline bool DataModelHasBeenSet() const { return m_dataModelHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDataModel(const DataModel& value) { m_dataModelHasBeenSet = true; m_dataModel = value; }

    /**
     * <p/>
     */
    inline void SetDataModel(DataModel&& value) { m_dataModelHasBeenSet = true; m_dataModel = std::move(value); }

    /**
     * <p/>
     */
    inline DataModelConfiguration& WithDataModel(const DataModel& value) { SetDataModel(value); return *this;}

    /**
     * <p/>
     */
    inline DataModelConfiguration& WithDataModel(DataModel&& value) { SetDataModel(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const DataModelS3Configuration& GetDataModelS3Configuration() const{ return m_dataModelS3Configuration; }

    /**
     * <p/>
     */
    inline bool DataModelS3ConfigurationHasBeenSet() const { return m_dataModelS3ConfigurationHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDataModelS3Configuration(const DataModelS3Configuration& value) { m_dataModelS3ConfigurationHasBeenSet = true; m_dataModelS3Configuration = value; }

    /**
     * <p/>
     */
    inline void SetDataModelS3Configuration(DataModelS3Configuration&& value) { m_dataModelS3ConfigurationHasBeenSet = true; m_dataModelS3Configuration = std::move(value); }

    /**
     * <p/>
     */
    inline DataModelConfiguration& WithDataModelS3Configuration(const DataModelS3Configuration& value) { SetDataModelS3Configuration(value); return *this;}

    /**
     * <p/>
     */
    inline DataModelConfiguration& WithDataModelS3Configuration(DataModelS3Configuration&& value) { SetDataModelS3Configuration(std::move(value)); return *this;}

  private:

    DataModel m_dataModel;
    bool m_dataModelHasBeenSet = false;

    DataModelS3Configuration m_dataModelS3Configuration;
    bool m_dataModelS3ConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
