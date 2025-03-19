/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/ObjectLambdaAccessPointAliasStatus.h>
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
   * <p>The alias of an Object Lambda Access Point. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/olap-use.html#ol-access-points-alias">How
   * to use a bucket-style alias for your S3 bucket Object Lambda Access
   * Point</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ObjectLambdaAccessPointAlias">AWS
   * API Reference</a></p>
   */
  class ObjectLambdaAccessPointAlias
  {
  public:
    AWS_S3CONTROL_API ObjectLambdaAccessPointAlias() = default;
    AWS_S3CONTROL_API ObjectLambdaAccessPointAlias(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ObjectLambdaAccessPointAlias& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The alias value of the Object Lambda Access Point.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ObjectLambdaAccessPointAlias& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Object Lambda Access Point alias. If the status is
     * <code>PROVISIONING</code>, the Object Lambda Access Point is provisioning the
     * alias and the alias is not ready for use yet. If the status is
     * <code>READY</code>, the Object Lambda Access Point alias is successfully
     * provisioned and ready for use.</p>
     */
    inline ObjectLambdaAccessPointAliasStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ObjectLambdaAccessPointAliasStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ObjectLambdaAccessPointAlias& WithStatus(ObjectLambdaAccessPointAliasStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    ObjectLambdaAccessPointAliasStatus m_status{ObjectLambdaAccessPointAliasStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
