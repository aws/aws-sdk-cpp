/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/JobReportFormat.h>
#include <aws/s3control/model/JobReportScope.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>Contains the configuration parameters for a job-completion
   * report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobReport">AWS
   * API Reference</a></p>
   */
  class JobReport
  {
  public:
    AWS_S3CONTROL_API JobReport() = default;
    AWS_S3CONTROL_API JobReport(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API JobReport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the bucket where specified job-completion
     * report will be stored.</p>  <p> <b>Directory buckets</b> - Directory
     * buckets aren't supported as a location for Batch Operations to store job
     * completion reports.</p> 
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    JobReport& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the specified job-completion report.</p>
     */
    inline JobReportFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(JobReportFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline JobReport& WithFormat(JobReportFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the specified job will generate a job-completion
     * report.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline JobReport& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional prefix to describe where in the specified bucket the
     * job-completion report will be stored. Amazon S3 stores the job-completion report
     * at <code>&lt;prefix&gt;/job-&lt;job-id&gt;/report.json</code>.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    JobReport& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the job-completion report will include details of all tasks
     * or only failed tasks.</p>
     */
    inline JobReportScope GetReportScope() const { return m_reportScope; }
    inline bool ReportScopeHasBeenSet() const { return m_reportScopeHasBeenSet; }
    inline void SetReportScope(JobReportScope value) { m_reportScopeHasBeenSet = true; m_reportScope = value; }
    inline JobReport& WithReportScope(JobReportScope value) { SetReportScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the Amazon Web Services account ID that owns the target bucket, where
     * the completion report is received.</p>
     */
    inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
    inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
    template<typename ExpectedBucketOwnerT = Aws::String>
    void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value); }
    template<typename ExpectedBucketOwnerT = Aws::String>
    JobReport& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) { SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    JobReportFormat m_format{JobReportFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    JobReportScope m_reportScope{JobReportScope::NOT_SET};
    bool m_reportScopeHasBeenSet = false;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
