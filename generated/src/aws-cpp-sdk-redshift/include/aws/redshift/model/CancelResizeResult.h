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
  class CancelResizeResult
  {
  public:
    AWS_REDSHIFT_API CancelResizeResult();
    AWS_REDSHIFT_API CancelResizeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CancelResizeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The node type that the cluster will have after the resize operation is
     * complete.</p>
     */
    inline const Aws::String& GetTargetNodeType() const{ return m_targetNodeType; }
    inline void SetTargetNodeType(const Aws::String& value) { m_targetNodeType = value; }
    inline void SetTargetNodeType(Aws::String&& value) { m_targetNodeType = std::move(value); }
    inline void SetTargetNodeType(const char* value) { m_targetNodeType.assign(value); }
    inline CancelResizeResult& WithTargetNodeType(const Aws::String& value) { SetTargetNodeType(value); return *this;}
    inline CancelResizeResult& WithTargetNodeType(Aws::String&& value) { SetTargetNodeType(std::move(value)); return *this;}
    inline CancelResizeResult& WithTargetNodeType(const char* value) { SetTargetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes that the cluster will have after the resize operation is
     * complete.</p>
     */
    inline int GetTargetNumberOfNodes() const{ return m_targetNumberOfNodes; }
    inline void SetTargetNumberOfNodes(int value) { m_targetNumberOfNodes = value; }
    inline CancelResizeResult& WithTargetNumberOfNodes(int value) { SetTargetNumberOfNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cluster type after the resize operation is complete.</p> <p>Valid Values:
     * <code>multi-node</code> | <code>single-node</code> </p>
     */
    inline const Aws::String& GetTargetClusterType() const{ return m_targetClusterType; }
    inline void SetTargetClusterType(const Aws::String& value) { m_targetClusterType = value; }
    inline void SetTargetClusterType(Aws::String&& value) { m_targetClusterType = std::move(value); }
    inline void SetTargetClusterType(const char* value) { m_targetClusterType.assign(value); }
    inline CancelResizeResult& WithTargetClusterType(const Aws::String& value) { SetTargetClusterType(value); return *this;}
    inline CancelResizeResult& WithTargetClusterType(Aws::String&& value) { SetTargetClusterType(std::move(value)); return *this;}
    inline CancelResizeResult& WithTargetClusterType(const char* value) { SetTargetClusterType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the resize operation.</p> <p>Valid Values: <code>NONE</code> |
     * <code>IN_PROGRESS</code> | <code>FAILED</code> | <code>SUCCEEDED</code> |
     * <code>CANCELLING</code> </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline CancelResizeResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline CancelResizeResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline CancelResizeResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of tables that have been completely imported .</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportTablesCompleted() const{ return m_importTablesCompleted; }
    inline void SetImportTablesCompleted(const Aws::Vector<Aws::String>& value) { m_importTablesCompleted = value; }
    inline void SetImportTablesCompleted(Aws::Vector<Aws::String>&& value) { m_importTablesCompleted = std::move(value); }
    inline CancelResizeResult& WithImportTablesCompleted(const Aws::Vector<Aws::String>& value) { SetImportTablesCompleted(value); return *this;}
    inline CancelResizeResult& WithImportTablesCompleted(Aws::Vector<Aws::String>&& value) { SetImportTablesCompleted(std::move(value)); return *this;}
    inline CancelResizeResult& AddImportTablesCompleted(const Aws::String& value) { m_importTablesCompleted.push_back(value); return *this; }
    inline CancelResizeResult& AddImportTablesCompleted(Aws::String&& value) { m_importTablesCompleted.push_back(std::move(value)); return *this; }
    inline CancelResizeResult& AddImportTablesCompleted(const char* value) { m_importTablesCompleted.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of tables that are being currently imported.</p> <p>Valid Values:
     * List of table names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportTablesInProgress() const{ return m_importTablesInProgress; }
    inline void SetImportTablesInProgress(const Aws::Vector<Aws::String>& value) { m_importTablesInProgress = value; }
    inline void SetImportTablesInProgress(Aws::Vector<Aws::String>&& value) { m_importTablesInProgress = std::move(value); }
    inline CancelResizeResult& WithImportTablesInProgress(const Aws::Vector<Aws::String>& value) { SetImportTablesInProgress(value); return *this;}
    inline CancelResizeResult& WithImportTablesInProgress(Aws::Vector<Aws::String>&& value) { SetImportTablesInProgress(std::move(value)); return *this;}
    inline CancelResizeResult& AddImportTablesInProgress(const Aws::String& value) { m_importTablesInProgress.push_back(value); return *this; }
    inline CancelResizeResult& AddImportTablesInProgress(Aws::String&& value) { m_importTablesInProgress.push_back(std::move(value)); return *this; }
    inline CancelResizeResult& AddImportTablesInProgress(const char* value) { m_importTablesInProgress.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of tables that have not been yet imported.</p> <p>Valid Values:
     * List of table names</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportTablesNotStarted() const{ return m_importTablesNotStarted; }
    inline void SetImportTablesNotStarted(const Aws::Vector<Aws::String>& value) { m_importTablesNotStarted = value; }
    inline void SetImportTablesNotStarted(Aws::Vector<Aws::String>&& value) { m_importTablesNotStarted = std::move(value); }
    inline CancelResizeResult& WithImportTablesNotStarted(const Aws::Vector<Aws::String>& value) { SetImportTablesNotStarted(value); return *this;}
    inline CancelResizeResult& WithImportTablesNotStarted(Aws::Vector<Aws::String>&& value) { SetImportTablesNotStarted(std::move(value)); return *this;}
    inline CancelResizeResult& AddImportTablesNotStarted(const Aws::String& value) { m_importTablesNotStarted.push_back(value); return *this; }
    inline CancelResizeResult& AddImportTablesNotStarted(Aws::String&& value) { m_importTablesNotStarted.push_back(std::move(value)); return *this; }
    inline CancelResizeResult& AddImportTablesNotStarted(const char* value) { m_importTablesNotStarted.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The average rate of the resize operation over the last few minutes, measured
     * in megabytes per second. After the resize operation completes, this value shows
     * the average rate of the entire resize operation.</p>
     */
    inline double GetAvgResizeRateInMegaBytesPerSecond() const{ return m_avgResizeRateInMegaBytesPerSecond; }
    inline void SetAvgResizeRateInMegaBytesPerSecond(double value) { m_avgResizeRateInMegaBytesPerSecond = value; }
    inline CancelResizeResult& WithAvgResizeRateInMegaBytesPerSecond(double value) { SetAvgResizeRateInMegaBytesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated total amount of data, in megabytes, on the cluster before the
     * resize operation began.</p>
     */
    inline long long GetTotalResizeDataInMegaBytes() const{ return m_totalResizeDataInMegaBytes; }
    inline void SetTotalResizeDataInMegaBytes(long long value) { m_totalResizeDataInMegaBytes = value; }
    inline CancelResizeResult& WithTotalResizeDataInMegaBytes(long long value) { SetTotalResizeDataInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>While the resize operation is in progress, this value shows the current
     * amount of data, in megabytes, that has been processed so far. When the resize
     * operation is complete, this value shows the total amount of data, in megabytes,
     * on the cluster, which may be more or less than TotalResizeDataInMegaBytes (the
     * estimated total amount of data before resize).</p>
     */
    inline long long GetProgressInMegaBytes() const{ return m_progressInMegaBytes; }
    inline void SetProgressInMegaBytes(long long value) { m_progressInMegaBytes = value; }
    inline CancelResizeResult& WithProgressInMegaBytes(long long value) { SetProgressInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of seconds that have elapsed since the resize operation began.
     * After the resize operation completes, this value shows the total actual time, in
     * seconds, for the resize operation.</p>
     */
    inline long long GetElapsedTimeInSeconds() const{ return m_elapsedTimeInSeconds; }
    inline void SetElapsedTimeInSeconds(long long value) { m_elapsedTimeInSeconds = value; }
    inline CancelResizeResult& WithElapsedTimeInSeconds(long long value) { SetElapsedTimeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time remaining, in seconds, until the resize operation is
     * complete. This value is calculated based on the average resize rate and the
     * estimated amount of data remaining to be processed. Once the resize operation is
     * complete, this value will be 0.</p>
     */
    inline long long GetEstimatedTimeToCompletionInSeconds() const{ return m_estimatedTimeToCompletionInSeconds; }
    inline void SetEstimatedTimeToCompletionInSeconds(long long value) { m_estimatedTimeToCompletionInSeconds = value; }
    inline CancelResizeResult& WithEstimatedTimeToCompletionInSeconds(long long value) { SetEstimatedTimeToCompletionInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An enum with possible values of <code>ClassicResize</code> and
     * <code>ElasticResize</code>. These values describe the type of resize operation
     * being performed. </p>
     */
    inline const Aws::String& GetResizeType() const{ return m_resizeType; }
    inline void SetResizeType(const Aws::String& value) { m_resizeType = value; }
    inline void SetResizeType(Aws::String&& value) { m_resizeType = std::move(value); }
    inline void SetResizeType(const char* value) { m_resizeType.assign(value); }
    inline CancelResizeResult& WithResizeType(const Aws::String& value) { SetResizeType(value); return *this;}
    inline CancelResizeResult& WithResizeType(Aws::String&& value) { SetResizeType(std::move(value)); return *this;}
    inline CancelResizeResult& WithResizeType(const char* value) { SetResizeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional string to provide additional details about the resize action.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline CancelResizeResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline CancelResizeResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline CancelResizeResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of encryption for the cluster after the resize is complete.</p>
     * <p>Possible values are <code>KMS</code> and <code>None</code>. </p>
     */
    inline const Aws::String& GetTargetEncryptionType() const{ return m_targetEncryptionType; }
    inline void SetTargetEncryptionType(const Aws::String& value) { m_targetEncryptionType = value; }
    inline void SetTargetEncryptionType(Aws::String&& value) { m_targetEncryptionType = std::move(value); }
    inline void SetTargetEncryptionType(const char* value) { m_targetEncryptionType.assign(value); }
    inline CancelResizeResult& WithTargetEncryptionType(const Aws::String& value) { SetTargetEncryptionType(value); return *this;}
    inline CancelResizeResult& WithTargetEncryptionType(Aws::String&& value) { SetTargetEncryptionType(std::move(value)); return *this;}
    inline CancelResizeResult& WithTargetEncryptionType(const char* value) { SetTargetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percent of data transferred from source cluster to target cluster.</p>
     */
    inline double GetDataTransferProgressPercent() const{ return m_dataTransferProgressPercent; }
    inline void SetDataTransferProgressPercent(double value) { m_dataTransferProgressPercent = value; }
    inline CancelResizeResult& WithDataTransferProgressPercent(double value) { SetDataTransferProgressPercent(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CancelResizeResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CancelResizeResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetNodeType;

    int m_targetNumberOfNodes;

    Aws::String m_targetClusterType;

    Aws::String m_status;

    Aws::Vector<Aws::String> m_importTablesCompleted;

    Aws::Vector<Aws::String> m_importTablesInProgress;

    Aws::Vector<Aws::String> m_importTablesNotStarted;

    double m_avgResizeRateInMegaBytesPerSecond;

    long long m_totalResizeDataInMegaBytes;

    long long m_progressInMegaBytes;

    long long m_elapsedTimeInSeconds;

    long long m_estimatedTimeToCompletionInSeconds;

    Aws::String m_resizeType;

    Aws::String m_message;

    Aws::String m_targetEncryptionType;

    double m_dataTransferProgressPercent;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
