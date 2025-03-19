/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SnapshotS3DestinationConfiguration.h>
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
   * <p>A structure that contains information on the Amazon S3 destinations of the
   * generated snapshot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SnapshotDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class SnapshotDestinationConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SnapshotDestinationConfiguration() = default;
    AWS_QUICKSIGHT_API SnapshotDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SnapshotDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A list of <code>SnapshotS3DestinationConfiguration</code> objects that
     * contain Amazon S3 destination configurations. This structure can hold a maximum
     * of 1 <code>S3DestinationConfiguration</code>. </p>
     */
    inline const Aws::Vector<SnapshotS3DestinationConfiguration>& GetS3Destinations() const { return m_s3Destinations; }
    inline bool S3DestinationsHasBeenSet() const { return m_s3DestinationsHasBeenSet; }
    template<typename S3DestinationsT = Aws::Vector<SnapshotS3DestinationConfiguration>>
    void SetS3Destinations(S3DestinationsT&& value) { m_s3DestinationsHasBeenSet = true; m_s3Destinations = std::forward<S3DestinationsT>(value); }
    template<typename S3DestinationsT = Aws::Vector<SnapshotS3DestinationConfiguration>>
    SnapshotDestinationConfiguration& WithS3Destinations(S3DestinationsT&& value) { SetS3Destinations(std::forward<S3DestinationsT>(value)); return *this;}
    template<typename S3DestinationsT = SnapshotS3DestinationConfiguration>
    SnapshotDestinationConfiguration& AddS3Destinations(S3DestinationsT&& value) { m_s3DestinationsHasBeenSet = true; m_s3Destinations.emplace_back(std::forward<S3DestinationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SnapshotS3DestinationConfiguration> m_s3Destinations;
    bool m_s3DestinationsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
