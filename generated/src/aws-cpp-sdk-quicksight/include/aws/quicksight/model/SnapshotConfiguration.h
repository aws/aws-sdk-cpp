/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SnapshotDestinationConfiguration.h>
#include <aws/quicksight/model/Parameters.h>
#include <aws/quicksight/model/SnapshotFileGroup.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Describes the configuration of the dashboard snapshot.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnapshotConfiguration">AWS
   * API Reference</a></p>
   */
  class SnapshotConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SnapshotConfiguration() = default;
    AWS_QUICKSIGHT_API SnapshotConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of <code>SnapshotJobResultFileGroup</code> objects that contain
     * information about the snapshot that is generated. This list can hold a maximum
     * of 6 <code>FileGroup</code> configurations.</p>
     */
    inline const Aws::Vector<SnapshotFileGroup>& GetFileGroups() const { return m_fileGroups; }
    inline bool FileGroupsHasBeenSet() const { return m_fileGroupsHasBeenSet; }
    template<typename FileGroupsT = Aws::Vector<SnapshotFileGroup>>
    void SetFileGroups(FileGroupsT&& value) { m_fileGroupsHasBeenSet = true; m_fileGroups = std::forward<FileGroupsT>(value); }
    template<typename FileGroupsT = Aws::Vector<SnapshotFileGroup>>
    SnapshotConfiguration& WithFileGroups(FileGroupsT&& value) { SetFileGroups(std::forward<FileGroupsT>(value)); return *this;}
    template<typename FileGroupsT = SnapshotFileGroup>
    SnapshotConfiguration& AddFileGroups(FileGroupsT&& value) { m_fileGroupsHasBeenSet = true; m_fileGroups.emplace_back(std::forward<FileGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure that contains information on the Amazon S3 bucket that the
     * generated snapshot is stored in.</p>
     */
    inline const SnapshotDestinationConfiguration& GetDestinationConfiguration() const { return m_destinationConfiguration; }
    inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }
    template<typename DestinationConfigurationT = SnapshotDestinationConfiguration>
    void SetDestinationConfiguration(DestinationConfigurationT&& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = std::forward<DestinationConfigurationT>(value); }
    template<typename DestinationConfigurationT = SnapshotDestinationConfiguration>
    SnapshotConfiguration& WithDestinationConfiguration(DestinationConfigurationT&& value) { SetDestinationConfiguration(std::forward<DestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Parameters& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Parameters>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Parameters>
    SnapshotConfiguration& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SnapshotFileGroup> m_fileGroups;
    bool m_fileGroupsHasBeenSet = false;

    SnapshotDestinationConfiguration m_destinationConfiguration;
    bool m_destinationConfigurationHasBeenSet = false;

    Parameters m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
