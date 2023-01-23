/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/StatelessCustomPublishMetricActionDimension.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about metrics to publish to CloudWatch.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StatelessCustomPublishMetricAction">AWS
   * API Reference</a></p>
   */
  class StatelessCustomPublishMetricAction
  {
  public:
    AWS_SECURITYHUB_API StatelessCustomPublishMetricAction();
    AWS_SECURITYHUB_API StatelessCustomPublishMetricAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StatelessCustomPublishMetricAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines CloudWatch dimension values to publish.</p>
     */
    inline const Aws::Vector<StatelessCustomPublishMetricActionDimension>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>Defines CloudWatch dimension values to publish.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>Defines CloudWatch dimension values to publish.</p>
     */
    inline void SetDimensions(const Aws::Vector<StatelessCustomPublishMetricActionDimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>Defines CloudWatch dimension values to publish.</p>
     */
    inline void SetDimensions(Aws::Vector<StatelessCustomPublishMetricActionDimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>Defines CloudWatch dimension values to publish.</p>
     */
    inline StatelessCustomPublishMetricAction& WithDimensions(const Aws::Vector<StatelessCustomPublishMetricActionDimension>& value) { SetDimensions(value); return *this;}

    /**
     * <p>Defines CloudWatch dimension values to publish.</p>
     */
    inline StatelessCustomPublishMetricAction& WithDimensions(Aws::Vector<StatelessCustomPublishMetricActionDimension>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>Defines CloudWatch dimension values to publish.</p>
     */
    inline StatelessCustomPublishMetricAction& AddDimensions(const StatelessCustomPublishMetricActionDimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /**
     * <p>Defines CloudWatch dimension values to publish.</p>
     */
    inline StatelessCustomPublishMetricAction& AddDimensions(StatelessCustomPublishMetricActionDimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<StatelessCustomPublishMetricActionDimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
