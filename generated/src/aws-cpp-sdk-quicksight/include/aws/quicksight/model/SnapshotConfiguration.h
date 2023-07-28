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
    AWS_QUICKSIGHT_API SnapshotConfiguration();
    AWS_QUICKSIGHT_API SnapshotConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of <code>SnapshotJobResultFileGroup</code> objects that contain
     * information about the snapshot that is generated. This list can hold a maximum
     * of 6 <code>FileGroup</code> configurations.</p>
     */
    inline const Aws::Vector<SnapshotFileGroup>& GetFileGroups() const{ return m_fileGroups; }

    /**
     * <p>A list of <code>SnapshotJobResultFileGroup</code> objects that contain
     * information about the snapshot that is generated. This list can hold a maximum
     * of 6 <code>FileGroup</code> configurations.</p>
     */
    inline bool FileGroupsHasBeenSet() const { return m_fileGroupsHasBeenSet; }

    /**
     * <p>A list of <code>SnapshotJobResultFileGroup</code> objects that contain
     * information about the snapshot that is generated. This list can hold a maximum
     * of 6 <code>FileGroup</code> configurations.</p>
     */
    inline void SetFileGroups(const Aws::Vector<SnapshotFileGroup>& value) { m_fileGroupsHasBeenSet = true; m_fileGroups = value; }

    /**
     * <p>A list of <code>SnapshotJobResultFileGroup</code> objects that contain
     * information about the snapshot that is generated. This list can hold a maximum
     * of 6 <code>FileGroup</code> configurations.</p>
     */
    inline void SetFileGroups(Aws::Vector<SnapshotFileGroup>&& value) { m_fileGroupsHasBeenSet = true; m_fileGroups = std::move(value); }

    /**
     * <p>A list of <code>SnapshotJobResultFileGroup</code> objects that contain
     * information about the snapshot that is generated. This list can hold a maximum
     * of 6 <code>FileGroup</code> configurations.</p>
     */
    inline SnapshotConfiguration& WithFileGroups(const Aws::Vector<SnapshotFileGroup>& value) { SetFileGroups(value); return *this;}

    /**
     * <p>A list of <code>SnapshotJobResultFileGroup</code> objects that contain
     * information about the snapshot that is generated. This list can hold a maximum
     * of 6 <code>FileGroup</code> configurations.</p>
     */
    inline SnapshotConfiguration& WithFileGroups(Aws::Vector<SnapshotFileGroup>&& value) { SetFileGroups(std::move(value)); return *this;}

    /**
     * <p>A list of <code>SnapshotJobResultFileGroup</code> objects that contain
     * information about the snapshot that is generated. This list can hold a maximum
     * of 6 <code>FileGroup</code> configurations.</p>
     */
    inline SnapshotConfiguration& AddFileGroups(const SnapshotFileGroup& value) { m_fileGroupsHasBeenSet = true; m_fileGroups.push_back(value); return *this; }

    /**
     * <p>A list of <code>SnapshotJobResultFileGroup</code> objects that contain
     * information about the snapshot that is generated. This list can hold a maximum
     * of 6 <code>FileGroup</code> configurations.</p>
     */
    inline SnapshotConfiguration& AddFileGroups(SnapshotFileGroup&& value) { m_fileGroupsHasBeenSet = true; m_fileGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>A structure that contains information on the Amazon S3 bucket that the
     * generated snapshot is stored in.</p>
     */
    inline const SnapshotDestinationConfiguration& GetDestinationConfiguration() const{ return m_destinationConfiguration; }

    /**
     * <p>A structure that contains information on the Amazon S3 bucket that the
     * generated snapshot is stored in.</p>
     */
    inline bool DestinationConfigurationHasBeenSet() const { return m_destinationConfigurationHasBeenSet; }

    /**
     * <p>A structure that contains information on the Amazon S3 bucket that the
     * generated snapshot is stored in.</p>
     */
    inline void SetDestinationConfiguration(const SnapshotDestinationConfiguration& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = value; }

    /**
     * <p>A structure that contains information on the Amazon S3 bucket that the
     * generated snapshot is stored in.</p>
     */
    inline void SetDestinationConfiguration(SnapshotDestinationConfiguration&& value) { m_destinationConfigurationHasBeenSet = true; m_destinationConfiguration = std::move(value); }

    /**
     * <p>A structure that contains information on the Amazon S3 bucket that the
     * generated snapshot is stored in.</p>
     */
    inline SnapshotConfiguration& WithDestinationConfiguration(const SnapshotDestinationConfiguration& value) { SetDestinationConfiguration(value); return *this;}

    /**
     * <p>A structure that contains information on the Amazon S3 bucket that the
     * generated snapshot is stored in.</p>
     */
    inline SnapshotConfiguration& WithDestinationConfiguration(SnapshotDestinationConfiguration&& value) { SetDestinationConfiguration(std::move(value)); return *this;}


    
    inline const Parameters& GetParameters() const{ return m_parameters; }

    
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    
    inline void SetParameters(const Parameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    
    inline void SetParameters(Parameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    
    inline SnapshotConfiguration& WithParameters(const Parameters& value) { SetParameters(value); return *this;}

    
    inline SnapshotConfiguration& WithParameters(Parameters&& value) { SetParameters(std::move(value)); return *this;}

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
