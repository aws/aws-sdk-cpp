﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TabularResolvedAttributes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The resolved attributes specific to the problem type of an AutoML job
   * V2.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLProblemTypeResolvedAttributes">AWS
   * API Reference</a></p>
   */
  class AutoMLProblemTypeResolvedAttributes
  {
  public:
    AWS_SAGEMAKER_API AutoMLProblemTypeResolvedAttributes();
    AWS_SAGEMAKER_API AutoMLProblemTypeResolvedAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLProblemTypeResolvedAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the resolved attributes for the <code>TABULAR</code> problem
     * type.</p>
     */
    inline const TabularResolvedAttributes& GetTabularResolvedAttributes() const{ return m_tabularResolvedAttributes; }

    /**
     * <p>Defines the resolved attributes for the <code>TABULAR</code> problem
     * type.</p>
     */
    inline bool TabularResolvedAttributesHasBeenSet() const { return m_tabularResolvedAttributesHasBeenSet; }

    /**
     * <p>Defines the resolved attributes for the <code>TABULAR</code> problem
     * type.</p>
     */
    inline void SetTabularResolvedAttributes(const TabularResolvedAttributes& value) { m_tabularResolvedAttributesHasBeenSet = true; m_tabularResolvedAttributes = value; }

    /**
     * <p>Defines the resolved attributes for the <code>TABULAR</code> problem
     * type.</p>
     */
    inline void SetTabularResolvedAttributes(TabularResolvedAttributes&& value) { m_tabularResolvedAttributesHasBeenSet = true; m_tabularResolvedAttributes = std::move(value); }

    /**
     * <p>Defines the resolved attributes for the <code>TABULAR</code> problem
     * type.</p>
     */
    inline AutoMLProblemTypeResolvedAttributes& WithTabularResolvedAttributes(const TabularResolvedAttributes& value) { SetTabularResolvedAttributes(value); return *this;}

    /**
     * <p>Defines the resolved attributes for the <code>TABULAR</code> problem
     * type.</p>
     */
    inline AutoMLProblemTypeResolvedAttributes& WithTabularResolvedAttributes(TabularResolvedAttributes&& value) { SetTabularResolvedAttributes(std::move(value)); return *this;}

  private:

    TabularResolvedAttributes m_tabularResolvedAttributes;
    bool m_tabularResolvedAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
