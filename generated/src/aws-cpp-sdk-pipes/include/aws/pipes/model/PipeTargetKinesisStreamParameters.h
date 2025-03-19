/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters for using a Kinesis stream as a target.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetKinesisStreamParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetKinesisStreamParameters
  {
  public:
    AWS_PIPES_API PipeTargetKinesisStreamParameters() = default;
    AWS_PIPES_API PipeTargetKinesisStreamParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetKinesisStreamParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines which shard in the stream the data record is assigned to.
     * Partition keys are Unicode strings with a maximum length limit of 256 characters
     * for each key. Amazon Kinesis Data Streams uses the partition key as input to a
     * hash function that maps the partition key and associated data to a specific
     * shard. Specifically, an MD5 hash function is used to map partition keys to
     * 128-bit integer values and to map associated data records to shards. As a result
     * of this hashing mechanism, all data records with the same partition key map to
     * the same shard within the stream.</p>
     */
    inline const Aws::String& GetPartitionKey() const { return m_partitionKey; }
    inline bool PartitionKeyHasBeenSet() const { return m_partitionKeyHasBeenSet; }
    template<typename PartitionKeyT = Aws::String>
    void SetPartitionKey(PartitionKeyT&& value) { m_partitionKeyHasBeenSet = true; m_partitionKey = std::forward<PartitionKeyT>(value); }
    template<typename PartitionKeyT = Aws::String>
    PipeTargetKinesisStreamParameters& WithPartitionKey(PartitionKeyT&& value) { SetPartitionKey(std::forward<PartitionKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_partitionKey;
    bool m_partitionKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
