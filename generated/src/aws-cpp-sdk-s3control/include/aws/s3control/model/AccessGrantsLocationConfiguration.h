/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>The configuration options of the S3 Access Grants location. It contains the
   * <code>S3SubPrefix</code> field. The grant scope, the data to which you are
   * granting access, is the result of appending the <code>Subprefix</code> field to
   * the scope of the registered location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/AccessGrantsLocationConfiguration">AWS
   * API Reference</a></p>
   */
  class AccessGrantsLocationConfiguration
  {
  public:
    AWS_S3CONTROL_API AccessGrantsLocationConfiguration() = default;
    AWS_S3CONTROL_API AccessGrantsLocationConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API AccessGrantsLocationConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The <code>S3SubPrefix</code> is appended to the location scope creating the
     * grant scope. Use this field to narrow the scope of the grant to a subset of the
     * location scope. This field is required if the location scope is the default
     * location <code>s3://</code> because you cannot create a grant for all of your S3
     * data in the Region and must narrow the scope. For example, if the location scope
     * is the default location <code>s3://</code>, the <code>S3SubPrefx</code> can be a
     * &lt;bucket-name&gt;/ *, so the full grant scope path would be
     * <code>s3://&lt;bucket-name&gt;/ *</code>. Or the <code>S3SubPrefx</code> can be
     * <code>&lt;bucket-name&gt;/&lt;prefix-name&gt;*</code>, so the full grant scope
     * path would be or <code>s3://&lt;bucket-name&gt;/&lt;prefix-name&gt;*</code>.</p>
     * <p>If the <code>S3SubPrefix</code> includes a prefix, append the wildcard
     * character <code>*</code> after the prefix to indicate that you want to include
     * all object key names in the bucket that start with that prefix. </p>
     */
    inline const Aws::String& GetS3SubPrefix() const { return m_s3SubPrefix; }
    inline bool S3SubPrefixHasBeenSet() const { return m_s3SubPrefixHasBeenSet; }
    template<typename S3SubPrefixT = Aws::String>
    void SetS3SubPrefix(S3SubPrefixT&& value) { m_s3SubPrefixHasBeenSet = true; m_s3SubPrefix = std::forward<S3SubPrefixT>(value); }
    template<typename S3SubPrefixT = Aws::String>
    AccessGrantsLocationConfiguration& WithS3SubPrefix(S3SubPrefixT&& value) { SetS3SubPrefix(std::forward<S3SubPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3SubPrefix;
    bool m_s3SubPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
