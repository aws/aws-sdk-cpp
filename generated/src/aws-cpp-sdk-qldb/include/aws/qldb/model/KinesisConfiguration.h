/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
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
namespace QLDB
{
namespace Model
{

  /**
   * <p>The configuration settings of the Amazon Kinesis Data Streams destination for
   * an Amazon QLDB journal stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-2019-01-02/KinesisConfiguration">AWS
   * API Reference</a></p>
   */
  class KinesisConfiguration
  {
  public:
    AWS_QLDB_API KinesisConfiguration() = default;
    AWS_QLDB_API KinesisConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API KinesisConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Kinesis Data Streams resource.</p>
     */
    inline const Aws::String& GetStreamArn() const { return m_streamArn; }
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
    template<typename StreamArnT = Aws::String>
    void SetStreamArn(StreamArnT&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::forward<StreamArnT>(value); }
    template<typename StreamArnT = Aws::String>
    KinesisConfiguration& WithStreamArn(StreamArnT&& value) { SetStreamArn(std::forward<StreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables QLDB to publish multiple data records in a single Kinesis Data
     * Streams record, increasing the number of records sent per API call.</p>
     * <p>Default: <code>True</code> </p>  <p>Record aggregation has
     * important implications for processing records and requires de-aggregation in
     * your stream consumer. To learn more, see <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/kinesis-kpl-concepts.html">KPL
     * Key Concepts</a> and <a
     * href="https://docs.aws.amazon.com/streams/latest/dev/kinesis-kpl-consumer-deaggregation.html">Consumer
     * De-aggregation</a> in the <i>Amazon Kinesis Data Streams Developer
     * Guide</i>.</p> 
     */
    inline bool GetAggregationEnabled() const { return m_aggregationEnabled; }
    inline bool AggregationEnabledHasBeenSet() const { return m_aggregationEnabledHasBeenSet; }
    inline void SetAggregationEnabled(bool value) { m_aggregationEnabledHasBeenSet = true; m_aggregationEnabled = value; }
    inline KinesisConfiguration& WithAggregationEnabled(bool value) { SetAggregationEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    bool m_aggregationEnabled{false};
    bool m_aggregationEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
