/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>Represents the JSON dataset format used when running a monitoring
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringJsonDatasetFormat">AWS
   * API Reference</a></p>
   */
  class MonitoringJsonDatasetFormat
  {
  public:
    AWS_SAGEMAKER_API MonitoringJsonDatasetFormat();
    AWS_SAGEMAKER_API MonitoringJsonDatasetFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringJsonDatasetFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates if the file should be read as a json object per line. </p>
     */
    inline bool GetLine() const{ return m_line; }

    /**
     * <p>Indicates if the file should be read as a json object per line. </p>
     */
    inline bool LineHasBeenSet() const { return m_lineHasBeenSet; }

    /**
     * <p>Indicates if the file should be read as a json object per line. </p>
     */
    inline void SetLine(bool value) { m_lineHasBeenSet = true; m_line = value; }

    /**
     * <p>Indicates if the file should be read as a json object per line. </p>
     */
    inline MonitoringJsonDatasetFormat& WithLine(bool value) { SetLine(value); return *this;}

  private:

    bool m_line;
    bool m_lineHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
