/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>

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
   * <p>The container element for Amazon S3 Storage Lens advanced cost-optimization
   * metrics. Advanced cost-optimization metrics provide insights that you can use to
   * manage and optimize your storage costs, for example, lifecycle rule counts for
   * transitions, expirations, and incomplete multipart uploads.</p> <p>For more
   * information about S3 Storage Lens, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens.html">Assessing
   * your storage activity and usage with S3 Storage Lens</a> in the <i>Amazon S3
   * User Guide</i>. For a complete list of S3 Storage Lens metrics, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens_metrics_glossary.html">S3
   * Storage Lens metrics glossary</a> in the <i>Amazon S3 User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/AdvancedCostOptimizationMetrics">AWS
   * API Reference</a></p>
   */
  class AdvancedCostOptimizationMetrics
  {
  public:
    AWS_S3CONTROL_API AdvancedCostOptimizationMetrics();
    AWS_S3CONTROL_API AdvancedCostOptimizationMetrics(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API AdvancedCostOptimizationMetrics& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A container that indicates whether advanced cost-optimization metrics are
     * enabled.</p>
     */
    inline bool GetIsEnabled() const{ return m_isEnabled; }

    /**
     * <p>A container that indicates whether advanced cost-optimization metrics are
     * enabled.</p>
     */
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }

    /**
     * <p>A container that indicates whether advanced cost-optimization metrics are
     * enabled.</p>
     */
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }

    /**
     * <p>A container that indicates whether advanced cost-optimization metrics are
     * enabled.</p>
     */
    inline AdvancedCostOptimizationMetrics& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}

  private:

    bool m_isEnabled;
    bool m_isEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
