/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/ObjectLambdaContentTransformation.h>
#include <aws/s3control/model/ObjectLambdaTransformationConfigurationAction.h>
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
   * <p>A configuration used when creating an Object Lambda Access Point
   * transformation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ObjectLambdaTransformationConfiguration">AWS
   * API Reference</a></p>
   */
  class ObjectLambdaTransformationConfiguration
  {
  public:
    AWS_S3CONTROL_API ObjectLambdaTransformationConfiguration() = default;
    AWS_S3CONTROL_API ObjectLambdaTransformationConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ObjectLambdaTransformationConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A container for the action of an Object Lambda Access Point configuration.
     * Valid inputs are <code>GetObject</code>, <code>ListObjects</code>,
     * <code>HeadObject</code>, and <code>ListObjectsV2</code>.</p>
     */
    inline const Aws::Vector<ObjectLambdaTransformationConfigurationAction>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<ObjectLambdaTransformationConfigurationAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<ObjectLambdaTransformationConfigurationAction>>
    ObjectLambdaTransformationConfiguration& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    inline ObjectLambdaTransformationConfiguration& AddActions(ObjectLambdaTransformationConfigurationAction value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A container for the content transformation of an Object Lambda Access Point
     * configuration.</p>
     */
    inline const ObjectLambdaContentTransformation& GetContentTransformation() const { return m_contentTransformation; }
    inline bool ContentTransformationHasBeenSet() const { return m_contentTransformationHasBeenSet; }
    template<typename ContentTransformationT = ObjectLambdaContentTransformation>
    void SetContentTransformation(ContentTransformationT&& value) { m_contentTransformationHasBeenSet = true; m_contentTransformation = std::forward<ContentTransformationT>(value); }
    template<typename ContentTransformationT = ObjectLambdaContentTransformation>
    ObjectLambdaTransformationConfiguration& WithContentTransformation(ContentTransformationT&& value) { SetContentTransformation(std::forward<ContentTransformationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ObjectLambdaTransformationConfigurationAction> m_actions;
    bool m_actionsHasBeenSet = false;

    ObjectLambdaContentTransformation m_contentTransformation;
    bool m_contentTransformationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
