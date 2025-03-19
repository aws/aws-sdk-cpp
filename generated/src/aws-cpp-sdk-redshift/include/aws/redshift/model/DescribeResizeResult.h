/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  /**
   * <p>Describes the result of a cluster resize operation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ResizeProgressMessage">AWS
   * API Reference</a></p>
   */
  class DescribeResizeResult
  {
  public:
    AWS_REDSHIFT_API DescribeResizeResult() = default;
    AWS_REDSHIFT_API DescribeResizeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeResizeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The node type that the cluster will have after the resize operation is
     * complete.</p>
     */
    inline const Aws::String& GetTargetNodeType() const { return m_targetNodeType; }
    template<typename TargetNodeTypeT = Aws::String>
    void SetTargetNodeType(TargetNodeTypeT&& value) { m_targetNodeTypeHasBeenSet = true; m_targetNodeType = std::forward<TargetNodeTypeT>(value); }
    template<typename TargetNodeTypeT = Aws::String>
    DescribeResizeResult& WithTargetNodeType(TargetNodeTypeT&& value) { SetTargetNodeType(std::forward<TargetNodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes that the cluster will have after the resize operation is
     * complete.</p>
     */
    inline int GetTargetNumberOfNodes() const { return m_targetNumberOfNodes; }
    inline void SetTargetNumberOfNodes(int value) { m_targetNumberOfNodesHasBeenSet = true; m_targetNumberOfNodes = value; }
    inline DescribeResizeResult& WithTargetNumberOfNodes(int value) { SetTargetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster type after the resize operation is complete.</p> <p>Valid Values:
     * <code>multi-node</code> | <code>single-node</code> </p>
     */
    inline const Aws::String& GetTargetClusterType() const { return m_targetClusterType; }
    template<typename TargetClusterTypeT = Aws::String>
    void SetTargetClusterType(TargetClusterTypeT&& value) { m_targetClusterTypeHasBeenSet = true; m_targetClusterType = std::forward<TargetClusterTypeT>(value); }
    template<typename TargetClusterTypeT = Aws::String>
    DescribeResizeResult& WithTargetClusterType(TargetClusterTypeT&& value) { SetTargetClusterType(std::forward<TargetClusterTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the resize operation.</p> <p>Valid Values: <code>NONE</code> |
     * <code>IN_PROGRESS</code> | <code>FAILED</code> | <code>SUCCEEDED</code> |
     * <code>CANCELLING</code> </p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DescribeResizeResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of tables that have been completely imported .</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportTablesCompleted() const { return m_importTablesCompleted; }
    template<typename ImportTablesCompletedT = Aws::Vector<Aws::String>>
    void SetImportTablesCompleted(ImportTablesCompletedT&& value) { m_importTablesCompletedHasBeenSet = true; m_importTablesCompleted = std::forward<ImportTablesCompletedT>(value); }
    template<typename ImportTablesCompletedT = Aws::Vector<Aws::String>>
    DescribeResizeResult& WithImportTablesCompleted(ImportTablesCompletedT&& value) { SetImportTablesCompleted(std::forward<ImportTablesCompletedT>(value)); return *this;}
    template<typename ImportTablesCompletedT = Aws::String>
    DescribeResizeResult& AddImportTablesCompleted(ImportTablesCompletedT&& value) { m_importTablesCompletedHasBeenSet = true; m_importTablesCompleted.emplace_back(std::forward<ImportTablesCompletedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of tables that are being currently imported.</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportTablesInProgress() const { return m_importTablesInProgress; }
    template<typename ImportTablesInProgressT = Aws::Vector<Aws::String>>
    void SetImportTablesInProgress(ImportTablesInProgressT&& value) { m_importTablesInProgressHasBeenSet = true; m_importTablesInProgress = std::forward<ImportTablesInProgressT>(value); }
    template<typename ImportTablesInProgressT = Aws::Vector<Aws::String>>
    DescribeResizeResult& WithImportTablesInProgress(ImportTablesInProgressT&& value) { SetImportTablesInProgress(std::forward<ImportTablesInProgressT>(value)); return *this;}
    template<typename ImportTablesInProgressT = Aws::String>
    DescribeResizeResult& AddImportTablesInProgress(ImportTablesInProgressT&& value) { m_importTablesInProgressHasBeenSet = true; m_importTablesInProgress.emplace_back(std::forward<ImportTablesInProgressT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of tables that have not been yet imported.</p> <p>Valid Values:
     * List of table names</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportTablesNotStarted() const { return m_importTablesNotStarted; }
    template<typename ImportTablesNotStartedT = Aws::Vector<Aws::String>>
    void SetImportTablesNotStarted(ImportTablesNotStartedT&& value) { m_importTablesNotStartedHasBeenSet = true; m_importTablesNotStarted = std::forward<ImportTablesNotStartedT>(value); }
    template<typename ImportTablesNotStartedT = Aws::Vector<Aws::String>>
    DescribeResizeResult& WithImportTablesNotStarted(ImportTablesNotStartedT&& value) { SetImportTablesNotStarted(std::forward<ImportTablesNotStartedT>(value)); return *this;}
    template<typename ImportTablesNotStartedT = Aws::String>
    DescribeResizeResult& AddImportTablesNotStarted(ImportTablesNotStartedT&& value) { m_importTablesNotStartedHasBeenSet = true; m_importTablesNotStarted.emplace_back(std::forward<ImportTablesNotStartedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The average rate of the resize operation over the last few minutes, measured
     * in megabytes per second. After the resize operation completes, this value shows
     * the average rate of the entire resize operation.</p>
     */
    inline double GetAvgResizeRateInMegaBytesPerSecond() const { return m_avgResizeRateInMegaBytesPerSecond; }
    inline void SetAvgResizeRateInMegaBytesPerSecond(double value) { m_avgResizeRateInMegaBytesPerSecondHasBeenSet = true; m_avgResizeRateInMegaBytesPerSecond = value; }
    inline DescribeResizeResult& WithAvgResizeRateInMegaBytesPerSecond(double value) { SetAvgResizeRateInMegaBytesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated total amount of data, in megabytes, on the cluster before the
     * resize operation began.</p>
     */
    inline long long GetTotalResizeDataInMegaBytes() const { return m_totalResizeDataInMegaBytes; }
    inline void SetTotalResizeDataInMegaBytes(long long value) { m_totalResizeDataInMegaBytesHasBeenSet = true; m_totalResizeDataInMegaBytes = value; }
    inline DescribeResizeResult& WithTotalResizeDataInMegaBytes(long long value) { SetTotalResizeDataInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>While the resize operation is in progress, this value shows the current
     * amount of data, in megabytes, that has been processed so far. When the resize
     * operation is complete, this value shows the total amount of data, in megabytes,
     * on the cluster, which may be more or less than TotalResizeDataInMegaBytes (the
     * estimated total amount of data before resize).</p>
     */
    inline long long GetProgressInMegaBytes() const { return m_progressInMegaBytes; }
    inline void SetProgressInMegaBytes(long long value) { m_progressInMegaBytesHasBeenSet = true; m_progressInMegaBytes = value; }
    inline DescribeResizeResult& WithProgressInMegaBytes(long long value) { SetProgressInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of seconds that have elapsed since the resize operation began.
     * After the resize operation completes, this value shows the total actual time, in
     * seconds, for the resize operation.</p>
     */
    inline long long GetElapsedTimeInSeconds() const { return m_elapsedTimeInSeconds; }
    inline void SetElapsedTimeInSeconds(long long value) { m_elapsedTimeInSecondsHasBeenSet = true; m_elapsedTimeInSeconds = value; }
    inline DescribeResizeResult& WithElapsedTimeInSeconds(long long value) { SetElapsedTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time remaining, in seconds, until the resize operation is
     * complete. This value is calculated based on the average resize rate and the
     * estimated amount of data remaining to be processed. Once the resize operation is
     * complete, this value will be 0.</p>
     */
    inline long long GetEstimatedTimeToCompletionInSeconds() const { return m_estimatedTimeToCompletionInSeconds; }
    inline void SetEstimatedTimeToCompletionInSeconds(long long value) { m_estimatedTimeToCompletionInSecondsHasBeenSet = true; m_estimatedTimeToCompletionInSeconds = value; }
    inline DescribeResizeResult& WithEstimatedTimeToCompletionInSeconds(long long value) { SetEstimatedTimeToCompletionInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enum with possible values of <code>ClassicResize</code> and
     * <code>ElasticResize</code>. These values describe the type of resize operation
     * being performed. </p>
     */
    inline const Aws::String& GetResizeType() const { return m_resizeType; }
    template<typename ResizeTypeT = Aws::String>
    void SetResizeType(ResizeTypeT&& value) { m_resizeTypeHasBeenSet = true; m_resizeType = std::forward<ResizeTypeT>(value); }
    template<typename ResizeTypeT = Aws::String>
    DescribeResizeResult& WithResizeType(ResizeTypeT&& value) { SetResizeType(std::forward<ResizeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional string to provide additional details about the resize action.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DescribeResizeResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of encryption for the cluster after the resize is complete.</p>
     * <p>Possible values are <code>KMS</code> and <code>None</code>. </p>
     */
    inline const Aws::String& GetTargetEncryptionType() const { return m_targetEncryptionType; }
    template<typename TargetEncryptionTypeT = Aws::String>
    void SetTargetEncryptionType(TargetEncryptionTypeT&& value) { m_targetEncryptionTypeHasBeenSet = true; m_targetEncryptionType = std::forward<TargetEncryptionTypeT>(value); }
    template<typename TargetEncryptionTypeT = Aws::String>
    DescribeResizeResult& WithTargetEncryptionType(TargetEncryptionTypeT&& value) { SetTargetEncryptionType(std::forward<TargetEncryptionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percent of data transferred from source cluster to target cluster.</p>
     */
    inline double GetDataTransferProgressPercent() const { return m_dataTransferProgressPercent; }
    inline void SetDataTransferProgressPercent(double value) { m_dataTransferProgressPercentHasBeenSet = true; m_dataTransferProgressPercent = value; }
    inline DescribeResizeResult& WithDataTransferProgressPercent(double value) { SetDataTransferProgressPercent(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeResizeResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetNodeType;
    bool m_targetNodeTypeHasBeenSet = false;

    int m_targetNumberOfNodes{0};
    bool m_targetNumberOfNodesHasBeenSet = false;

    Aws::String m_targetClusterType;
    bool m_targetClusterTypeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_importTablesCompleted;
    bool m_importTablesCompletedHasBeenSet = false;

    Aws::Vector<Aws::String> m_importTablesInProgress;
    bool m_importTablesInProgressHasBeenSet = false;

    Aws::Vector<Aws::String> m_importTablesNotStarted;
    bool m_importTablesNotStartedHasBeenSet = false;

    double m_avgResizeRateInMegaBytesPerSecond{0.0};
    bool m_avgResizeRateInMegaBytesPerSecondHasBeenSet = false;

    long long m_totalResizeDataInMegaBytes{0};
    bool m_totalResizeDataInMegaBytesHasBeenSet = false;

    long long m_progressInMegaBytes{0};
    bool m_progressInMegaBytesHasBeenSet = false;

    long long m_elapsedTimeInSeconds{0};
    bool m_elapsedTimeInSecondsHasBeenSet = false;

    long long m_estimatedTimeToCompletionInSeconds{0};
    bool m_estimatedTimeToCompletionInSecondsHasBeenSet = false;

    Aws::String m_resizeType;
    bool m_resizeTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_targetEncryptionType;
    bool m_targetEncryptionTypeHasBeenSet = false;

    double m_dataTransferProgressPercent{0.0};
    bool m_dataTransferProgressPercentHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
