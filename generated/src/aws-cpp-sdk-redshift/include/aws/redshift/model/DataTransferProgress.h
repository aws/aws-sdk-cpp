/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes the status of a cluster while it is in the process of resizing with
   * an incremental resize.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DataTransferProgress">AWS
   * API Reference</a></p>
   */
  class DataTransferProgress
  {
  public:
    AWS_REDSHIFT_API DataTransferProgress() = default;
    AWS_REDSHIFT_API DataTransferProgress(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API DataTransferProgress& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Describes the status of the cluster. While the transfer is in progress the
     * status is <code>transferringdata</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DataTransferProgress& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the data transfer rate in MB's per second.</p>
     */
    inline double GetCurrentRateInMegaBytesPerSecond() const { return m_currentRateInMegaBytesPerSecond; }
    inline bool CurrentRateInMegaBytesPerSecondHasBeenSet() const { return m_currentRateInMegaBytesPerSecondHasBeenSet; }
    inline void SetCurrentRateInMegaBytesPerSecond(double value) { m_currentRateInMegaBytesPerSecondHasBeenSet = true; m_currentRateInMegaBytesPerSecond = value; }
    inline DataTransferProgress& WithCurrentRateInMegaBytesPerSecond(double value) { SetCurrentRateInMegaBytesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the total amount of data to be transfered in megabytes.</p>
     */
    inline long long GetTotalDataInMegaBytes() const { return m_totalDataInMegaBytes; }
    inline bool TotalDataInMegaBytesHasBeenSet() const { return m_totalDataInMegaBytesHasBeenSet; }
    inline void SetTotalDataInMegaBytes(long long value) { m_totalDataInMegaBytesHasBeenSet = true; m_totalDataInMegaBytes = value; }
    inline DataTransferProgress& WithTotalDataInMegaBytes(long long value) { SetTotalDataInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the total amount of data that has been transfered in MB's.</p>
     */
    inline long long GetDataTransferredInMegaBytes() const { return m_dataTransferredInMegaBytes; }
    inline bool DataTransferredInMegaBytesHasBeenSet() const { return m_dataTransferredInMegaBytesHasBeenSet; }
    inline void SetDataTransferredInMegaBytes(long long value) { m_dataTransferredInMegaBytesHasBeenSet = true; m_dataTransferredInMegaBytes = value; }
    inline DataTransferProgress& WithDataTransferredInMegaBytes(long long value) { SetDataTransferredInMegaBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the estimated number of seconds remaining to complete the
     * transfer.</p>
     */
    inline long long GetEstimatedTimeToCompletionInSeconds() const { return m_estimatedTimeToCompletionInSeconds; }
    inline bool EstimatedTimeToCompletionInSecondsHasBeenSet() const { return m_estimatedTimeToCompletionInSecondsHasBeenSet; }
    inline void SetEstimatedTimeToCompletionInSeconds(long long value) { m_estimatedTimeToCompletionInSecondsHasBeenSet = true; m_estimatedTimeToCompletionInSeconds = value; }
    inline DataTransferProgress& WithEstimatedTimeToCompletionInSeconds(long long value) { SetEstimatedTimeToCompletionInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the number of seconds that have elapsed during the data
     * transfer.</p>
     */
    inline long long GetElapsedTimeInSeconds() const { return m_elapsedTimeInSeconds; }
    inline bool ElapsedTimeInSecondsHasBeenSet() const { return m_elapsedTimeInSecondsHasBeenSet; }
    inline void SetElapsedTimeInSeconds(long long value) { m_elapsedTimeInSecondsHasBeenSet = true; m_elapsedTimeInSeconds = value; }
    inline DataTransferProgress& WithElapsedTimeInSeconds(long long value) { SetElapsedTimeInSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    double m_currentRateInMegaBytesPerSecond{0.0};
    bool m_currentRateInMegaBytesPerSecondHasBeenSet = false;

    long long m_totalDataInMegaBytes{0};
    bool m_totalDataInMegaBytesHasBeenSet = false;

    long long m_dataTransferredInMegaBytes{0};
    bool m_dataTransferredInMegaBytesHasBeenSet = false;

    long long m_estimatedTimeToCompletionInSeconds{0};
    bool m_estimatedTimeToCompletionInSecondsHasBeenSet = false;

    long long m_elapsedTimeInSeconds{0};
    bool m_elapsedTimeInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
