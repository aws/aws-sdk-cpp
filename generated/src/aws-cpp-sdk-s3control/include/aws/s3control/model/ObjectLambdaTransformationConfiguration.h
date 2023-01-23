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
    AWS_S3CONTROL_API ObjectLambdaTransformationConfiguration();
    AWS_S3CONTROL_API ObjectLambdaTransformationConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API ObjectLambdaTransformationConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A container for the action of an Object Lambda Access Point configuration.
     * Valid inputs are <code>GetObject</code>, <code>ListObjects</code>,
     * <code>HeadObject</code>, and <code>ListObjectsV2</code>.</p>
     */
    inline const Aws::Vector<ObjectLambdaTransformationConfigurationAction>& GetActions() const{ return m_actions; }

    /**
     * <p>A container for the action of an Object Lambda Access Point configuration.
     * Valid inputs are <code>GetObject</code>, <code>ListObjects</code>,
     * <code>HeadObject</code>, and <code>ListObjectsV2</code>.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>A container for the action of an Object Lambda Access Point configuration.
     * Valid inputs are <code>GetObject</code>, <code>ListObjects</code>,
     * <code>HeadObject</code>, and <code>ListObjectsV2</code>.</p>
     */
    inline void SetActions(const Aws::Vector<ObjectLambdaTransformationConfigurationAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>A container for the action of an Object Lambda Access Point configuration.
     * Valid inputs are <code>GetObject</code>, <code>ListObjects</code>,
     * <code>HeadObject</code>, and <code>ListObjectsV2</code>.</p>
     */
    inline void SetActions(Aws::Vector<ObjectLambdaTransformationConfigurationAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>A container for the action of an Object Lambda Access Point configuration.
     * Valid inputs are <code>GetObject</code>, <code>ListObjects</code>,
     * <code>HeadObject</code>, and <code>ListObjectsV2</code>.</p>
     */
    inline ObjectLambdaTransformationConfiguration& WithActions(const Aws::Vector<ObjectLambdaTransformationConfigurationAction>& value) { SetActions(value); return *this;}

    /**
     * <p>A container for the action of an Object Lambda Access Point configuration.
     * Valid inputs are <code>GetObject</code>, <code>ListObjects</code>,
     * <code>HeadObject</code>, and <code>ListObjectsV2</code>.</p>
     */
    inline ObjectLambdaTransformationConfiguration& WithActions(Aws::Vector<ObjectLambdaTransformationConfigurationAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>A container for the action of an Object Lambda Access Point configuration.
     * Valid inputs are <code>GetObject</code>, <code>ListObjects</code>,
     * <code>HeadObject</code>, and <code>ListObjectsV2</code>.</p>
     */
    inline ObjectLambdaTransformationConfiguration& AddActions(const ObjectLambdaTransformationConfigurationAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>A container for the action of an Object Lambda Access Point configuration.
     * Valid inputs are <code>GetObject</code>, <code>ListObjects</code>,
     * <code>HeadObject</code>, and <code>ListObjectsV2</code>.</p>
     */
    inline ObjectLambdaTransformationConfiguration& AddActions(ObjectLambdaTransformationConfigurationAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>A container for the content transformation of an Object Lambda Access Point
     * configuration.</p>
     */
    inline const ObjectLambdaContentTransformation& GetContentTransformation() const{ return m_contentTransformation; }

    /**
     * <p>A container for the content transformation of an Object Lambda Access Point
     * configuration.</p>
     */
    inline bool ContentTransformationHasBeenSet() const { return m_contentTransformationHasBeenSet; }

    /**
     * <p>A container for the content transformation of an Object Lambda Access Point
     * configuration.</p>
     */
    inline void SetContentTransformation(const ObjectLambdaContentTransformation& value) { m_contentTransformationHasBeenSet = true; m_contentTransformation = value; }

    /**
     * <p>A container for the content transformation of an Object Lambda Access Point
     * configuration.</p>
     */
    inline void SetContentTransformation(ObjectLambdaContentTransformation&& value) { m_contentTransformationHasBeenSet = true; m_contentTransformation = std::move(value); }

    /**
     * <p>A container for the content transformation of an Object Lambda Access Point
     * configuration.</p>
     */
    inline ObjectLambdaTransformationConfiguration& WithContentTransformation(const ObjectLambdaContentTransformation& value) { SetContentTransformation(value); return *this;}

    /**
     * <p>A container for the content transformation of an Object Lambda Access Point
     * configuration.</p>
     */
    inline ObjectLambdaTransformationConfiguration& WithContentTransformation(ObjectLambdaContentTransformation&& value) { SetContentTransformation(std::move(value)); return *this;}

  private:

    Aws::Vector<ObjectLambdaTransformationConfigurationAction> m_actions;
    bool m_actionsHasBeenSet = false;

    ObjectLambdaContentTransformation m_contentTransformation;
    bool m_contentTransformationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
