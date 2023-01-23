/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsRedshiftClusterClusterParameterStatus.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A cluster parameter group that is associated with an Amazon Redshift
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterClusterParameterGroup">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterClusterParameterGroup
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterParameterGroup();
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterParameterGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterParameterGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of parameter statuses.</p>
     */
    inline const Aws::Vector<AwsRedshiftClusterClusterParameterStatus>& GetClusterParameterStatusList() const{ return m_clusterParameterStatusList; }

    /**
     * <p>The list of parameter statuses.</p>
     */
    inline bool ClusterParameterStatusListHasBeenSet() const { return m_clusterParameterStatusListHasBeenSet; }

    /**
     * <p>The list of parameter statuses.</p>
     */
    inline void SetClusterParameterStatusList(const Aws::Vector<AwsRedshiftClusterClusterParameterStatus>& value) { m_clusterParameterStatusListHasBeenSet = true; m_clusterParameterStatusList = value; }

    /**
     * <p>The list of parameter statuses.</p>
     */
    inline void SetClusterParameterStatusList(Aws::Vector<AwsRedshiftClusterClusterParameterStatus>&& value) { m_clusterParameterStatusListHasBeenSet = true; m_clusterParameterStatusList = std::move(value); }

    /**
     * <p>The list of parameter statuses.</p>
     */
    inline AwsRedshiftClusterClusterParameterGroup& WithClusterParameterStatusList(const Aws::Vector<AwsRedshiftClusterClusterParameterStatus>& value) { SetClusterParameterStatusList(value); return *this;}

    /**
     * <p>The list of parameter statuses.</p>
     */
    inline AwsRedshiftClusterClusterParameterGroup& WithClusterParameterStatusList(Aws::Vector<AwsRedshiftClusterClusterParameterStatus>&& value) { SetClusterParameterStatusList(std::move(value)); return *this;}

    /**
     * <p>The list of parameter statuses.</p>
     */
    inline AwsRedshiftClusterClusterParameterGroup& AddClusterParameterStatusList(const AwsRedshiftClusterClusterParameterStatus& value) { m_clusterParameterStatusListHasBeenSet = true; m_clusterParameterStatusList.push_back(value); return *this; }

    /**
     * <p>The list of parameter statuses.</p>
     */
    inline AwsRedshiftClusterClusterParameterGroup& AddClusterParameterStatusList(AwsRedshiftClusterClusterParameterStatus&& value) { m_clusterParameterStatusListHasBeenSet = true; m_clusterParameterStatusList.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of updates to the parameters.</p>
     */
    inline const Aws::String& GetParameterApplyStatus() const{ return m_parameterApplyStatus; }

    /**
     * <p>The status of updates to the parameters.</p>
     */
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }

    /**
     * <p>The status of updates to the parameters.</p>
     */
    inline void SetParameterApplyStatus(const Aws::String& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = value; }

    /**
     * <p>The status of updates to the parameters.</p>
     */
    inline void SetParameterApplyStatus(Aws::String&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::move(value); }

    /**
     * <p>The status of updates to the parameters.</p>
     */
    inline void SetParameterApplyStatus(const char* value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus.assign(value); }

    /**
     * <p>The status of updates to the parameters.</p>
     */
    inline AwsRedshiftClusterClusterParameterGroup& WithParameterApplyStatus(const Aws::String& value) { SetParameterApplyStatus(value); return *this;}

    /**
     * <p>The status of updates to the parameters.</p>
     */
    inline AwsRedshiftClusterClusterParameterGroup& WithParameterApplyStatus(Aws::String&& value) { SetParameterApplyStatus(std::move(value)); return *this;}

    /**
     * <p>The status of updates to the parameters.</p>
     */
    inline AwsRedshiftClusterClusterParameterGroup& WithParameterApplyStatus(const char* value) { SetParameterApplyStatus(value); return *this;}


    /**
     * <p>The name of the parameter group.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The name of the parameter group.</p>
     */
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the parameter group.</p>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of the parameter group.</p>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }

    /**
     * <p>The name of the parameter group.</p>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /**
     * <p>The name of the parameter group.</p>
     */
    inline AwsRedshiftClusterClusterParameterGroup& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of the parameter group.</p>
     */
    inline AwsRedshiftClusterClusterParameterGroup& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter group.</p>
     */
    inline AwsRedshiftClusterClusterParameterGroup& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}

  private:

    Aws::Vector<AwsRedshiftClusterClusterParameterStatus> m_clusterParameterStatusList;
    bool m_clusterParameterStatusListHasBeenSet = false;

    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet = false;

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
