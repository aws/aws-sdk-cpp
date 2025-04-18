﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3Retention.h>
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
   * <p>Contains the configuration parameters for the Object Lock retention action
   * for an S3 Batch Operations job. Batch Operations passes every object to the
   * underlying <code>PutObjectRetention</code> API operation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-retention-date.html">Using
   * S3 Object Lock retention with S3 Batch Operations</a> in the <i>Amazon S3 User
   * Guide</i>.</p>  <p>This functionality is not supported by directory
   * buckets.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3SetObjectRetentionOperation">AWS
   * API Reference</a></p>
   */
  class S3SetObjectRetentionOperation
  {
  public:
    AWS_S3CONTROL_API S3SetObjectRetentionOperation() = default;
    AWS_S3CONTROL_API S3SetObjectRetentionOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3SetObjectRetentionOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Indicates if the action should be applied to objects in the Batch Operations
     * job even if they have Object Lock <code> GOVERNANCE</code> type in place.</p>
     */
    inline bool GetBypassGovernanceRetention() const { return m_bypassGovernanceRetention; }
    inline bool BypassGovernanceRetentionHasBeenSet() const { return m_bypassGovernanceRetentionHasBeenSet; }
    inline void SetBypassGovernanceRetention(bool value) { m_bypassGovernanceRetentionHasBeenSet = true; m_bypassGovernanceRetention = value; }
    inline S3SetObjectRetentionOperation& WithBypassGovernanceRetention(bool value) { SetBypassGovernanceRetention(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the Object Lock retention mode to be applied to all objects in the
     * Batch Operations job. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-retention-date.html">Using
     * S3 Object Lock retention with S3 Batch Operations</a> in the <i>Amazon S3 User
     * Guide</i>.</p>
     */
    inline const S3Retention& GetRetention() const { return m_retention; }
    inline bool RetentionHasBeenSet() const { return m_retentionHasBeenSet; }
    template<typename RetentionT = S3Retention>
    void SetRetention(RetentionT&& value) { m_retentionHasBeenSet = true; m_retention = std::forward<RetentionT>(value); }
    template<typename RetentionT = S3Retention>
    S3SetObjectRetentionOperation& WithRetention(RetentionT&& value) { SetRetention(std::forward<RetentionT>(value)); return *this;}
    ///@}
  private:

    bool m_bypassGovernanceRetention{false};
    bool m_bypassGovernanceRetentionHasBeenSet = false;

    S3Retention m_retention;
    bool m_retentionHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
