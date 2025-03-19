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
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterParameterGroup() = default;
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterParameterGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterParameterGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of parameter statuses.</p>
     */
    inline const Aws::Vector<AwsRedshiftClusterClusterParameterStatus>& GetClusterParameterStatusList() const { return m_clusterParameterStatusList; }
    inline bool ClusterParameterStatusListHasBeenSet() const { return m_clusterParameterStatusListHasBeenSet; }
    template<typename ClusterParameterStatusListT = Aws::Vector<AwsRedshiftClusterClusterParameterStatus>>
    void SetClusterParameterStatusList(ClusterParameterStatusListT&& value) { m_clusterParameterStatusListHasBeenSet = true; m_clusterParameterStatusList = std::forward<ClusterParameterStatusListT>(value); }
    template<typename ClusterParameterStatusListT = Aws::Vector<AwsRedshiftClusterClusterParameterStatus>>
    AwsRedshiftClusterClusterParameterGroup& WithClusterParameterStatusList(ClusterParameterStatusListT&& value) { SetClusterParameterStatusList(std::forward<ClusterParameterStatusListT>(value)); return *this;}
    template<typename ClusterParameterStatusListT = AwsRedshiftClusterClusterParameterStatus>
    AwsRedshiftClusterClusterParameterGroup& AddClusterParameterStatusList(ClusterParameterStatusListT&& value) { m_clusterParameterStatusListHasBeenSet = true; m_clusterParameterStatusList.emplace_back(std::forward<ClusterParameterStatusListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of updates to the parameters.</p>
     */
    inline const Aws::String& GetParameterApplyStatus() const { return m_parameterApplyStatus; }
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }
    template<typename ParameterApplyStatusT = Aws::String>
    void SetParameterApplyStatus(ParameterApplyStatusT&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::forward<ParameterApplyStatusT>(value); }
    template<typename ParameterApplyStatusT = Aws::String>
    AwsRedshiftClusterClusterParameterGroup& WithParameterApplyStatus(ParameterApplyStatusT&& value) { SetParameterApplyStatus(std::forward<ParameterApplyStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the parameter group.</p>
     */
    inline const Aws::String& GetParameterGroupName() const { return m_parameterGroupName; }
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }
    template<typename ParameterGroupNameT = Aws::String>
    void SetParameterGroupName(ParameterGroupNameT&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::forward<ParameterGroupNameT>(value); }
    template<typename ParameterGroupNameT = Aws::String>
    AwsRedshiftClusterClusterParameterGroup& WithParameterGroupName(ParameterGroupNameT&& value) { SetParameterGroupName(std::forward<ParameterGroupNameT>(value)); return *this;}
    ///@}
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
