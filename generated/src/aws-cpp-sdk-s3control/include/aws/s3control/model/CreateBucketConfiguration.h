/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/BucketLocationConstraint.h>
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
   * <p>The container for the bucket configuration.</p>  <p>This is not
   * supported by Amazon S3 on Outposts buckets.</p> <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/CreateBucketConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateBucketConfiguration
  {
  public:
    AWS_S3CONTROL_API CreateBucketConfiguration() = default;
    AWS_S3CONTROL_API CreateBucketConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API CreateBucketConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies the Region where the bucket will be created. If you are creating a
     * bucket on the US East (N. Virginia) Region (us-east-1), you do not need to
     * specify the location. </p>  <p>This is not supported by Amazon S3 on
     * Outposts buckets.</p> 
     */
    inline BucketLocationConstraint GetLocationConstraint() const { return m_locationConstraint; }
    inline bool LocationConstraintHasBeenSet() const { return m_locationConstraintHasBeenSet; }
    inline void SetLocationConstraint(BucketLocationConstraint value) { m_locationConstraintHasBeenSet = true; m_locationConstraint = value; }
    inline CreateBucketConfiguration& WithLocationConstraint(BucketLocationConstraint value) { SetLocationConstraint(value); return *this;}
    ///@}
  private:

    BucketLocationConstraint m_locationConstraint{BucketLocationConstraint::NOT_SET};
    bool m_locationConstraintHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
