/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Defines a CloudWatch dimension value to publish.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StatelessCustomPublishMetricActionDimension">AWS
   * API Reference</a></p>
   */
  class StatelessCustomPublishMetricActionDimension
  {
  public:
    AWS_SECURITYHUB_API StatelessCustomPublishMetricActionDimension();
    AWS_SECURITYHUB_API StatelessCustomPublishMetricActionDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StatelessCustomPublishMetricActionDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value to use for the custom metric dimension.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value to use for the custom metric dimension.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value to use for the custom metric dimension.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value to use for the custom metric dimension.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value to use for the custom metric dimension.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value to use for the custom metric dimension.</p>
     */
    inline StatelessCustomPublishMetricActionDimension& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value to use for the custom metric dimension.</p>
     */
    inline StatelessCustomPublishMetricActionDimension& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value to use for the custom metric dimension.</p>
     */
    inline StatelessCustomPublishMetricActionDimension& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
