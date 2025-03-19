/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/ObjectLambdaAccessPointAlias.h>
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
   * <p>An access point with an attached Lambda function used to access transformed
   * data from an Amazon S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ObjectLambdaAccessPoint">AWS
   * API Reference</a></p>
   */
  class ObjectLambdaAccessPoint
  {
  public:
    AWS_S3CONTROL_API ObjectLambdaAccessPoint() = default;
    AWS_S3CONTROL_API ObjectLambdaAccessPoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ObjectLambdaAccessPoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The name of the Object Lambda Access Point.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ObjectLambdaAccessPoint& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ARN for the Object Lambda Access Point.</p>
     */
    inline const Aws::String& GetObjectLambdaAccessPointArn() const { return m_objectLambdaAccessPointArn; }
    inline bool ObjectLambdaAccessPointArnHasBeenSet() const { return m_objectLambdaAccessPointArnHasBeenSet; }
    template<typename ObjectLambdaAccessPointArnT = Aws::String>
    void SetObjectLambdaAccessPointArn(ObjectLambdaAccessPointArnT&& value) { m_objectLambdaAccessPointArnHasBeenSet = true; m_objectLambdaAccessPointArn = std::forward<ObjectLambdaAccessPointArnT>(value); }
    template<typename ObjectLambdaAccessPointArnT = Aws::String>
    ObjectLambdaAccessPoint& WithObjectLambdaAccessPointArn(ObjectLambdaAccessPointArnT&& value) { SetObjectLambdaAccessPointArn(std::forward<ObjectLambdaAccessPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the Object Lambda Access Point.</p>
     */
    inline const ObjectLambdaAccessPointAlias& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = ObjectLambdaAccessPointAlias>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = ObjectLambdaAccessPointAlias>
    ObjectLambdaAccessPoint& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_objectLambdaAccessPointArn;
    bool m_objectLambdaAccessPointArnHasBeenSet = false;

    ObjectLambdaAccessPointAlias m_alias;
    bool m_aliasHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
